/*
  Copyright (C) 2014-2015 Julien Templier

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#include "StdAfx.h"
#include "PlayerHelium.h"

#define HELIUM_MIN_SUPPORTED_VERSION 8
#define HELIUM_MAX_SUPPORTED_VERSION 11

Player* PlayerHelium::c_Player = nullptr;

/*
** Constructor.
**
*/
PlayerHelium::PlayerHelium() : Player(),
	m_LastCheckTime(0),
	m_HeliumActive(false),
	m_Helium()
{
}

/*
** Destructor.
**
*/
PlayerHelium::~PlayerHelium()
{
	c_Player = nullptr;

	Uninitialize();
}

/*
** Creates a shared class object.
**
*/
Player* PlayerHelium::Create()
{
	if (!c_Player)
	{
		c_Player = new PlayerHelium();
	}

	return c_Player;
}

/*
** Initialize Helium COM interface.
**
*/
void PlayerHelium::Initialize()
{
	while (true)
	{
		HRESULT hr = CoCreateInstance(CLSID_HeliumController, nullptr, CLSCTX_LOCAL_SERVER, IID_IHeliumController, (PVOID*)&m_Helium);
		if (hr != S_OK)
		{
			// Failed to get hold of Helium instance via COM
			m_Helium = nullptr;
		}
		break;
	}

	if (m_Helium)
	{
		m_Initialized = true;
		UpdateData();
	}
	else
	{
		m_Initialized = false;
	}
}

/*
** Close Helium COM interface.
**
*/
void PlayerHelium::Uninitialize()
{
	if (m_Initialized)
	{
		m_Initialized = false;
		ClearData();

		m_Helium->Release();
	}
}



/*
** Try to find Helium periodically.
**
*/
bool PlayerHelium::CheckRunning()
{
	DWORD time = GetTickCount();
	if (time - m_LastCheckTime > 5000)
	{
		m_LastCheckTime = time;

		if (IsRunning() && !m_HeliumActive)
		{
			m_HeliumActive = true;
			Initialize();
		}
	}

	return m_Initialized;
}

/*
** Check registry to see if Helium is running
**
*/
bool PlayerHelium::IsRunning() {
	for (int i = HELIUM_MIN_SUPPORTED_VERSION; i <= HELIUM_MAX_SUPPORTED_VERSION; i++)
	{
		if (CheckRegistryKey(i))
		{
			return true;
		}
	}

	return false;
}

/*
** Get a registry key handle for Helium  preferences
**
*/
bool PlayerHelium::CheckRegistryKey(int version) {
	HKEY hKey;
	wchar_t buffer[1024];

	swprintf_s(buffer, _countof(buffer), L"Software\\Intermedia Software\\Helium %d\\Preferences", version);

	if (RegOpenKeyEx(HKEY_CURRENT_USER,
					 buffer,
					 0,
					 KEY_READ,
					 &hKey) == ERROR_SUCCESS)
	{
		DWORD size = sizeof(DWORD);
		DWORD data = 0;
		DWORD type = 0;

		if (RegQueryValueEx(hKey,
							L"HMMRunning",
							nullptr,
							(LPDWORD)&type,
							(LPBYTE)&data,
							(LPDWORD)&size) == ERROR_SUCCESS)
		{
			if (type == REG_DWORD && data == 1)
			{
				return true;
			}
		}

		RegCloseKey(hKey);
	}

	return false;
}


bool CALLBACK PlayerHelium::EnumCallback(HWND hwnd, LPARAM lParam) {
	HWND* target = reinterpret_cast<HWND*>(lParam);

	wchar_t buffer[1024];
	if (!GetWindowText(hwnd, buffer, _countof(buffer)))
	{
		return true;
	}

	if (wcsncmp(buffer, L"Helium Music Manager", wcslen(L"Helium Music Manager")) != 0)
	{
		return true;
	}

	*target = hwnd;

	return false;
}

/*
** Get a window handle for Helium
**
*/
HWND PlayerHelium::GetHWND() {
	HWND hwnd = NULL;
	EnumWindows((WNDENUMPROC)this->EnumCallback, reinterpret_cast<LPARAM>(&hwnd));

	return hwnd;
}

/*
** Called during each update of the main measure.
**
*/
void PlayerHelium::UpdateData()
{
	if (m_Initialized || CheckRunning())
	{
		// Get player state
		long state = 0;
		m_Helium->PlayerState(&state);
		switch (state)
		{
			case PLAYING:
				m_State = STATE_PLAYING;
				break;

			case PAUSED:
				m_State = STATE_PAUSED;
				break;

			case STOPPED:
				m_State = STATE_STOPPED;
				break;
		}

		if (m_State == STATE_STOPPED)
		{
			ClearData();
			return;
		}

		// Get player status
		long position = 0;
		m_Helium->CurrentPosition(&position);
		m_Position = (UINT)position;

		long volume = 0;
		m_Helium->get_PlayerVolume(&volume);
		m_Volume = (UINT)(volume * 100L / 255L);

		ICurrentTrack *track;
		HRESULT hr = m_Helium->CurrentTrack(&track);
		if (SUCCEEDED(hr) && track)
		{
			BSTR tmpStr;
			long tmpVal;

			// Get track information
			track->get_Artist(&tmpStr);
			tmpStr ? (m_Artist = tmpStr) : m_Artist.clear();

			track->get_Title(&tmpStr);
			tmpStr ? (m_Title = tmpStr) : m_Title.clear();

			track->get_Album(&tmpStr);
			tmpStr ? (m_Album = tmpStr) : m_Album.clear();

			track->get_Duration(&tmpVal);
			m_Duration = (UINT)tmpVal;

			track->get_Rating(&tmpVal);
			tmpVal /= 2L;
			m_Rating = (UINT)tmpVal;

			track->get_Image(&tmpStr);
			tmpStr ? (m_CoverPath = tmpStr) : m_CoverPath.clear();

			track->Release();
		}
	}
}

/*
** Handles the Pause bang.
**
*/
void PlayerHelium::Pause()
{
	m_Helium->Pause();
}

/*
** Handles the Play bang.
**
*/
void PlayerHelium::Play()
{
	m_Helium->StartPlay();
}

/*
** Handles the Stop bang.
**
*/
void PlayerHelium::Stop()
{
	m_Helium->Stop();
}

/*
** Handles the Next bang.
**
*/
void PlayerHelium::Next()
{
	m_Helium->PlayNext();
}

/*
** Handles the Previous bang.
**
*/
void PlayerHelium::Previous()
{
	m_Helium->PlayPrevious();
}

/*
** Handles the SetPosition bang.
**
*/
void PlayerHelium::SetPosition(int position)
{
	m_Helium->SetPosition((long)position);
}

/*
** Handles the SetVolume bang.
**
*/
void PlayerHelium::SetVolume(int volume)
{
	m_Helium->put_PlayerVolume((long)volume * 255L / 100L);
}

/*
** Handles the ClosePlayer bang.
**
*/
void PlayerHelium::ClosePlayer()
{
	Uninitialize();

	HWND window = GetHWND();
	if (window)
	{
		SendMessage(window, WM_CLOSE, 0, NULL);
	}
}

/*
** Handles the OpenPlayer bang.
**
*/
void PlayerHelium::OpenPlayer(std::wstring& path)
{
	if (!IsRunning())
	{
		if (path.empty())
		{
			// Get the typelib path (this is identical for Helium 8-11)
			HKEY hKey;
			if (RegOpenKeyEx(HKEY_CLASSES_ROOT,
							 L"TypeLib\\{4B053004-3E5D-4169-BA84-79C152D2F92E}\\1.0\\0\\win32",
							 0,
							 KEY_QUERY_VALUE,
							 &hKey) == ERROR_SUCCESS)
			{
				DWORD size = MAX_PATH;
				WCHAR* data = new WCHAR[MAX_PATH];
				DWORD type = 0;

				if (RegQueryValueEx(hKey,
									nullptr,
									nullptr,
									(LPDWORD)&type,
									(LPBYTE)data,
									(LPDWORD)&size) == ERROR_SUCCESS)
				{
					if (type == REG_SZ)
					{
						path = data;
						ShellExecute(nullptr, L"open", path.c_str(), nullptr, nullptr, SW_SHOW);
					}
				}

				delete [] data;
				RegCloseKey(hKey);
			}
		}
		else
		{
			ShellExecute(nullptr, L"open", path.c_str(), nullptr, nullptr, SW_SHOW);
		}
	}
	else
	{
		// Already active, restore the window
		HWND window = GetHWND();
		if (window)
		{
			ShowWindow(window, SW_SHOWNORMAL);
			BringWindowToTop(window);
		}
	}
}
