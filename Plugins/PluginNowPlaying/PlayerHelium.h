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

#ifndef __PLAYERHELIUM_H__
#define __PLAYERHELIUM_H__

#include "Player.h"
#include "Helium/HeliumCOMInterface.h"


class PlayerHelium : public Player
{
public:
	virtual ~PlayerHelium();

	static Player* Create();

	virtual void UpdateData();

	virtual void Pause();
	virtual void Play();
	virtual void Stop();
	virtual void Next();
	virtual void Previous();
	virtual void SetPosition(int position);
	virtual void SetVolume(int volume);
	virtual void ClosePlayer();
	virtual void OpenPlayer(std::wstring& path);

protected:
	PlayerHelium();

private:
	enum PLAYERSTATE {
		PLAYING = 1,
		PAUSED = 2,
		STOPPED = 3
	};

	void Initialize();
	void Uninitialize();
	bool CheckRunning();
	bool IsRunning();
	HWND GetHWND();
	bool CheckRegistryKey(int version);
	static bool CALLBACK EnumCallback(HWND hwnd, LPARAM lParam);

	static Player* c_Player;

	DWORD m_LastCheckTime;
	bool m_HeliumActive;
	IHeliumController* m_Helium;
};

#endif
