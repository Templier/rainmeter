

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Dec 30 08:11:50 2014
 */
/* Compiler settings for Helium.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data
    VC __declspec() decoration level:
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __HeliumCOMInterface_h__
#define __HeliumCOMInterface_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */

#ifndef __IHeliumController_FWD_DEFINED__
#define __IHeliumController_FWD_DEFINED__
typedef interface IHeliumController IHeliumController;

#endif 	/* __IHeliumController_FWD_DEFINED__ */


#ifndef __IHMMPlayMusicHandler_FWD_DEFINED__
#define __IHMMPlayMusicHandler_FWD_DEFINED__
typedef interface IHMMPlayMusicHandler IHMMPlayMusicHandler;

#endif 	/* __IHMMPlayMusicHandler_FWD_DEFINED__ */


#ifndef __IHMMRipAudioCDHandler_FWD_DEFINED__
#define __IHMMRipAudioCDHandler_FWD_DEFINED__
typedef interface IHMMRipAudioCDHandler IHMMRipAudioCDHandler;

#endif 	/* __IHMMRipAudioCDHandler_FWD_DEFINED__ */


#ifndef __IHMMAddToDatabaseHandler_FWD_DEFINED__
#define __IHMMAddToDatabaseHandler_FWD_DEFINED__
typedef interface IHMMAddToDatabaseHandler IHMMAddToDatabaseHandler;

#endif 	/* __IHMMAddToDatabaseHandler_FWD_DEFINED__ */


#ifndef __IHMMMTPHandler_FWD_DEFINED__
#define __IHMMMTPHandler_FWD_DEFINED__
typedef interface IHMMMTPHandler IHMMMTPHandler;

#endif 	/* __IHMMMTPHandler_FWD_DEFINED__ */


#ifndef __ICurrentTrack_FWD_DEFINED__
#define __ICurrentTrack_FWD_DEFINED__
typedef interface ICurrentTrack ICurrentTrack;

#endif 	/* __ICurrentTrack_FWD_DEFINED__ */


#ifndef __IHMMActivePlaylistTrack_FWD_DEFINED__
#define __IHMMActivePlaylistTrack_FWD_DEFINED__
typedef interface IHMMActivePlaylistTrack IHMMActivePlaylistTrack;

#endif 	/* __IHMMActivePlaylistTrack_FWD_DEFINED__ */


#ifndef __IHMMPlayQueueCOM_FWD_DEFINED__
#define __IHMMPlayQueueCOM_FWD_DEFINED__
typedef interface IHMMPlayQueueCOM IHMMPlayQueueCOM;

#endif 	/* __IHMMPlayQueueCOM_FWD_DEFINED__ */


#ifndef __IHMMPlaylistsCOM_FWD_DEFINED__
#define __IHMMPlaylistsCOM_FWD_DEFINED__
typedef interface IHMMPlaylistsCOM IHMMPlaylistsCOM;

#endif 	/* __IHMMPlaylistsCOM_FWD_DEFINED__ */


#ifndef __IHMMPlaylistCOM_FWD_DEFINED__
#define __IHMMPlaylistCOM_FWD_DEFINED__
typedef interface IHMMPlaylistCOM IHMMPlaylistCOM;

#endif 	/* __IHMMPlaylistCOM_FWD_DEFINED__ */


#ifndef __HeliumController_FWD_DEFINED__
#define __HeliumController_FWD_DEFINED__

#ifdef __cplusplus
typedef class HeliumController HeliumController;
#else
typedef struct HeliumController HeliumController;
#endif /* __cplusplus */

#endif 	/* __HeliumController_FWD_DEFINED__ */


#ifndef __HMMPlayMusicHandler_FWD_DEFINED__
#define __HMMPlayMusicHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class HMMPlayMusicHandler HMMPlayMusicHandler;
#else
typedef struct HMMPlayMusicHandler HMMPlayMusicHandler;
#endif /* __cplusplus */

#endif 	/* __HMMPlayMusicHandler_FWD_DEFINED__ */


#ifndef __HMMRipAudioCDHandler_FWD_DEFINED__
#define __HMMRipAudioCDHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class HMMRipAudioCDHandler HMMRipAudioCDHandler;
#else
typedef struct HMMRipAudioCDHandler HMMRipAudioCDHandler;
#endif /* __cplusplus */

#endif 	/* __HMMRipAudioCDHandler_FWD_DEFINED__ */


#ifndef __HMMAddToDatabaseHandler_FWD_DEFINED__
#define __HMMAddToDatabaseHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class HMMAddToDatabaseHandler HMMAddToDatabaseHandler;
#else
typedef struct HMMAddToDatabaseHandler HMMAddToDatabaseHandler;
#endif /* __cplusplus */

#endif 	/* __HMMAddToDatabaseHandler_FWD_DEFINED__ */


#ifndef __HMMMTPHandler_FWD_DEFINED__
#define __HMMMTPHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class HMMMTPHandler HMMMTPHandler;
#else
typedef struct HMMMTPHandler HMMMTPHandler;
#endif /* __cplusplus */

#endif 	/* __HMMMTPHandler_FWD_DEFINED__ */


#ifndef __CurrentTrack_FWD_DEFINED__
#define __CurrentTrack_FWD_DEFINED__

#ifdef __cplusplus
typedef class CurrentTrack CurrentTrack;
#else
typedef struct CurrentTrack CurrentTrack;
#endif /* __cplusplus */

#endif 	/* __CurrentTrack_FWD_DEFINED__ */


#ifndef __HMMActivePlaylistTrack_FWD_DEFINED__
#define __HMMActivePlaylistTrack_FWD_DEFINED__

#ifdef __cplusplus
typedef class HMMActivePlaylistTrack HMMActivePlaylistTrack;
#else
typedef struct HMMActivePlaylistTrack HMMActivePlaylistTrack;
#endif /* __cplusplus */

#endif 	/* __HMMActivePlaylistTrack_FWD_DEFINED__ */


#ifndef __HMMPlayQueueCOM_FWD_DEFINED__
#define __HMMPlayQueueCOM_FWD_DEFINED__

#ifdef __cplusplus
typedef class HMMPlayQueueCOM HMMPlayQueueCOM;
#else
typedef struct HMMPlayQueueCOM HMMPlayQueueCOM;
#endif /* __cplusplus */

#endif 	/* __HMMPlayQueueCOM_FWD_DEFINED__ */


#ifndef __HMMPlaylistsCOM_FWD_DEFINED__
#define __HMMPlaylistsCOM_FWD_DEFINED__

#ifdef __cplusplus
typedef class HMMPlaylistsCOM HMMPlaylistsCOM;
#else
typedef struct HMMPlaylistsCOM HMMPlaylistsCOM;
#endif /* __cplusplus */

#endif 	/* __HMMPlaylistsCOM_FWD_DEFINED__ */


#ifndef __HMMPlaylistCOM_FWD_DEFINED__
#define __HMMPlaylistCOM_FWD_DEFINED__

#ifdef __cplusplus
typedef class HMMPlaylistCOM HMMPlaylistCOM;
#else
typedef struct HMMPlaylistCOM HMMPlaylistCOM;
#endif /* __cplusplus */

#endif 	/* __HMMPlaylistCOM_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif



#ifndef __Helium8_LIBRARY_DEFINED__
#define __Helium8_LIBRARY_DEFINED__

/* library Helium8 */
/* [helpstring][version][uuid] */












EXTERN_C const IID LIBID_Helium8;

#ifndef __IHeliumController_INTERFACE_DEFINED__
#define __IHeliumController_INTERFACE_DEFINED__

/* interface IHeliumController */
/* [object][oleautomation][dual][helpstring][version][uuid] */


EXTERN_C const IID IID_IHeliumController;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("944A1745-D462-4508-A0C2-CEA6A8904924")
    IHeliumController : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowAlbumLink(
            /* [in] */ BSTR AAlbumID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowArtist(
            /* [in] */ BSTR AArtist) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowGenre(
            /* [in] */ BSTR AGenre) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowYear(
            /* [in] */ BSTR AYear) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EditBiography(
            /* [in] */ BSTR AArtist) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EditDiscography(
            /* [in] */ BSTR AArtist) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowLabel(
            /* [in] */ BSTR ALabel) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EditLabelProfile(
            /* [in] */ BSTR ALabel) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EditGenreDefinition(
            /* [in] */ BSTR AGenre) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EditRelations(
            /* [in] */ BSTR AArtist) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowCountry(
            /* [in] */ BSTR ACountry) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Search(
            /* [in] */ BSTR ASearchString,
            /* [in] */ long ASearchType,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlayAlbum(
            /* [in] */ BSTR AAlbumID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlayItem(
            /* [in] */ BSTR ADetailID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlayFileFromOffset(
            /* [in] */ BSTR AFilename,
            /* [in] */ long AOffset) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddFilesWizard( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddCDWizard( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RestoreHelium( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE JumpToPath(
            /* [in] */ BSTR APath) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlaySubtrack(
            /* [in] */ long ASubTrack,
            /* [in] */ BSTR AFilename) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EditAlbumReview(
            /* [in] */ long AAlbumID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowGenreStyle(
            /* [in] */ BSTR AStyle) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EditGenreStyleDefinition(
            /* [in] */ BSTR AStyleID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowGenreCategory(
            /* [in] */ BSTR ACategoryID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EditGenreCategoryDefinition(
            /* [in] */ BSTR ACategoryID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowPicture(
            /* [in] */ BSTR AFilename) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlaySubtrackItem(
            /* [in] */ long ASubTrack,
            /* [in] */ BSTR ADetailID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowStatistics( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowGenreOverview( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowAllCountries( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowAllPublishers( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DownloadArtistInfo( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EditAlbumTagsTE(
            /* [in] */ long AAlbumID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnqueueAlbum(
            /* [in] */ BSTR AAlbumID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EditAlbumTagsTESM(
            /* [in] */ BSTR AAlbumID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnqueueFile(
            /* [in] */ BSTR AFilename) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlayFile(
            /* [in] */ BSTR AFilename) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ExploreSourcePath(
            /* [in] */ BSTR APath) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ExamineTags(
            /* [in] */ BSTR AFilename) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TEEditFile(
            /* [in] */ BSTR AFilename) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TESMEditFile(
            /* [in] */ BSTR AFilename) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AnalyzeFile(
            /* [in] */ BSTR AFilename) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ExploreAlbumFolder(
            /* [in] */ long AAlbumID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetCollapsedState(
            /* [in] */ BSTR AName,
            /* [in] */ long AState) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnqueueNext(
            /* [in] */ BSTR AFilename) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnqueueAlbumNext(
            /* [in] */ BSTR AAlbumID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EditArtistInfo(
            /* [in] */ long AArtistID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowTrack(
            /* [in] */ long ATrackID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GoHome( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIBXML_GetSearchResult(
            /* [in] */ BSTR ASearchString,
            /* [in] */ long ASearchType,
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIBXML_GetArtistDiscography(
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIBXML_GetArtistRelations(
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIBXML_GetArtistAppearances(
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIBXML_GetArtistRemixes(
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CurrentTrack(
            /* [retval][out] */ ICurrentTrack **AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlayNext( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlayPrevious( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlayPause( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CurrentPosition(
            /* [retval][out] */ long *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlayerState(
            /* [retval][out] */ long *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Pause( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE StartPlay( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsMuted(
            /* [retval][out] */ long *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Mute( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Unmute( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddUpdateAlbumPicture(
            /* [in] */ long AAlbumID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetActivePlaylistCount(
            /* [retval][out] */ long *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetActivePlaylistEntry(
            /* [in] */ long AIndex,
            /* [retval][out] */ IHMMActivePlaylistTrack **AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetActivePlaylistEntryAsXML(
            /* [in] */ long AIndex,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlayActivePlaylistItem(
            /* [in] */ long AIndex) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowLastPlayedTracks( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowTopArtistsThisWeek( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIBXML_GetRecentAlbums(
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowRecentAlbums( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowMostPlayedTracks( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIBXML_GetMostPlayed(
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowFavouriteArtists( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIBXML_GetFavouriteArtists(
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIBXML_GetLastPlayedTracks(
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowTopGenres( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowTopYears( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowTopArtists( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowTopPublishers( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowTopCountries( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIB_GetTopArtists(
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowFavouriteGenres( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIB_GetFavouriteGenres(
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowMostPlayedArtists( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIB_GetMostPlayedArtists(
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowPlayedTracksForPeriod(
            /* [in] */ long APeriodType) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIB_GetPlayedTracksForPeriod(
            /* [in] */ long ADateInterval,
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowArtistRoot( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIB_GetArtistList(
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [in] */ long AFilter,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowAlbumRoot( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIB_GetAlbumsList(
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [in] */ long ARelTypeFilter,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowPublisherRoot( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIB_GetPublisherList(
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [in] */ long ACountryID,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetArtistDownloadPageFile(
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetArtistImage(
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetAlbumImage(
            /* [in] */ long AAlbumID,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DownloadAlbumInfo( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RenameArtist(
            /* [in] */ BSTR AArtist) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MIBXML_GetVideos(
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE BurnAlbum(
            /* [in] */ long AAlbumID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LastFMLoveCurrentTrack( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LastFMAddCurrentToPlaylist( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LastFMTagItem( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendAlbumToPortableDevice(
            /* [in] */ long AAlbumID) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PlayerVolume(
            /* [retval][out] */ long *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PlayerVolume(
            /* [in] */ long Value) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetPosition(
            /* [in] */ long APosition) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetPosition(
            /* [retval][out] */ long *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlayerActiveFile(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetRatingForActiveFile(
            /* [retval][out] */ long *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnqueueAndPlayDBItem(
            /* [in] */ long ADBID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFullSizeNPAlbumImage(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendAlbumToHS(
            /* [in] */ long AAlbumID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendArtistToHS(
            /* [in] */ long AArtistID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowFavouritesRoot( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowFavouriteAlbums( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowFavouriteTracks( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowFavArtistsEx(
            /* [in] */ long APage) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowFavAlbumsEx(
            /* [in] */ long APage) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowFavTracksEx(
            /* [in] */ long APage) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowRecentAlbumsEx(
            /* [in] */ long APage) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowAlbumDetailsEx(
            /* [in] */ long APage,
            /* [in] */ long AReleaseTypeFilter) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowArtistDetailsEx(
            /* [in] */ long APage,
            /* [in] */ long AArtistFilter) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowPublisherDetailsEx(
            /* [in] */ long APage,
            /* [in] */ long APublisherFilter) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchArtistPager(
            /* [in] */ long APage,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchAlbumPager(
            /* [in] */ long APage,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchPublisherPager(
            /* [in] */ long APage,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchGenrePager(
            /* [in] */ long APage,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchTrackPager(
            /* [in] */ long APage,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ManageGenres( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowChart(
            /* [in] */ BSTR AChartType,
            /* [in] */ BSTR ADate) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowCharts( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ArtistList_SortByName(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ArtistList_SortByCountry(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ArtistList_SortByCount(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AlbumList_SortByName(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AlbumList_SortByArtist(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AlbumList_SortByCount(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AlbumList_SortByLength(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AlbumList_SortByYear(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AlbumList_SortByReleaseType(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AlbumList_SortByRating(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetArtistAsFavourite(
            /* [in] */ long AIsFav,
            /* [in] */ long AArtistID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetAlbumAsFavourite(
            /* [in] */ long AIsFav,
            /* [in] */ long AAlbumID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ArtistList_SortByFormed(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ArtistList_SortByDisbanded(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchArtistList_SortByName(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchArtistList_SortByCountry(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchArtistList_SortByCount(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchArtistList_SortByFormed(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchArtistList_SortByDisbanded(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchAlbumList_SortByName(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchAlbumList_SortByArtist(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchAlbumList_SortByCount(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchAlbumList_SortByLength(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchAlbumList_SortByYear(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchAlbumList_SortByReleaseType(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchAlbumList_SortByRating(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DiscoverArtist(
            /* [in] */ BSTR AArtist) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DiscoverArtist_Ajax(
            /* [in] */ BSTR AArtist,
            /* [in] */ BSTR AXML,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DiscoverArtistMain_Ajax(
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddToHistory(
            /* [in] */ long AType,
            /* [in] */ BSTR AParam1,
            /* [in] */ long AParam2) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetSimilarArtistCountForArtist(
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ long *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetDiscoverArtistTrackList(
            /* [in] */ BSTR AArtist,
            /* [in] */ BSTR AID,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddAlbumToPlaylist(
            /* [in] */ long AAlbumID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddArtistToPlaylist(
            /* [in] */ long AArtistID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetTrackAsFavourite(
            /* [in] */ long AIsFav,
            /* [in] */ long ADetailID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DiscoverSimilarTracks(
            /* [in] */ long ADetailID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DiscoverTrack_Ajax(
            /* [in] */ long ADetailID,
            /* [in] */ BSTR AXML,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DiscoverTrackMain_Ajax(
            /* [in] */ long ADetailID,
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnqueueLastByID(
            /* [in] */ BSTR AIDList) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnqueueNextByID(
            /* [in] */ BSTR AIDList) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnqueueAndPlay(
            /* [in] */ BSTR AIDList) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchTrackList_SortByTitle(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchTrackList_SortByArtist(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchTrackList_SortByAlbum(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchTrackList_SortByYear(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchTrackList_SortByLength(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchTrackList_SortByRating(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ViewOnlineAlbum(
            /* [in] */ BSTR AAlbumID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ViewOnlineArtist(
            /* [in] */ BSTR AArtistID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlayFileFromUrl(
            /* [in] */ BSTR AURL,
            /* [in] */ BSTR ATitle) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlayFilesFromList(
            /* [in] */ BSTR AIDList) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowFavouriteRoot( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowYearRoot( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddFileToPlaylist(
            /* [in] */ long ADetailID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DownloadAlbumPictureByID(
            /* [in] */ long AAlbumID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DownloadArtistInfoByID(
            /* [in] */ long AArtistID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DownloadArtistPictureByID(
            /* [in] */ long AID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetActiveTabIndex(
            /* [in] */ BSTR ATabIndex) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ArtistList_FilterByChar(
            /* [in] */ BSTR AChar) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AlbumList_FilterByChar(
            /* [in] */ BSTR AChar) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavAlbumList_FilterByChar(
            /* [in] */ BSTR AChar) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavArtistList_FilterByChar(
            /* [in] */ BSTR AChar) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavTrackList_FilterByChar(
            /* [in] */ BSTR AChar) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PublisherList_FilterByChar(
            /* [in] */ BSTR AChar) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PublisherList_SortByName(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PublisherList_SortByCount(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddUpdateArtistPicture(
            /* [in] */ long AArtistID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddUpdatePublisherPicture(
            /* [in] */ long APublisherId) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowAlbumArtistRoot( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowPlaylistRoot( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ExpandPlsFolder(
            /* [in] */ long AFolderId) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowPlaylist(
            /* [in] */ long APlaylistId) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlayPlaylist(
            /* [in] */ long APlaylistId) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnqueuePlaylistNext(
            /* [in] */ long APlaylistId) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnqueuePlaylistLast(
            /* [in] */ long APlaylistId) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ResetArtistFilter( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ResetAlbumFilter( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ResetPublisherFilter( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavArtList_SortByName(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavArtList_SortByCount(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavArtList_SortByFormed(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavArtList_SortByDisbanded(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavAlbList_SortByName(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavAlbList_SortByArtist(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavAlbList_SortByRelType(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavAlbList_SortByItems(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavAlbList_SortByRating(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavAlbList_SortByYear(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavTrkList_SortByArtist(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavTrkList_SortByTitle(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavTrkList_SortByYear(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavTrkList_SortByRating(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavTrkList_SortByPlayed(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavTrkList_SortByLength(
            /* [in] */ long Ascending) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PublisherList_SortByCountry(
            /* [in] */ long Ascending) = 0;

    };


#else 	/* C style interface */

    typedef struct IHeliumControllerVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IHeliumController * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */
            _COM_Outptr_  void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IHeliumController * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            IHeliumController * This);

        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IHeliumController * This,
            /* [out] */ UINT *pctinfo);

        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IHeliumController * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);

        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IHeliumController * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);

        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IHeliumController * This,
            /* [annotation][in] */
            _In_  DISPID dispIdMember,
            /* [annotation][in] */
            _In_  REFIID riid,
            /* [annotation][in] */
            _In_  LCID lcid,
            /* [annotation][in] */
            _In_  WORD wFlags,
            /* [annotation][out][in] */
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */
            _Out_opt_  UINT *puArgErr);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowAlbumLink )(
            IHeliumController * This,
            /* [in] */ BSTR AAlbumID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowArtist )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowGenre )(
            IHeliumController * This,
            /* [in] */ BSTR AGenre);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowYear )(
            IHeliumController * This,
            /* [in] */ BSTR AYear);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EditBiography )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EditDiscography )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowLabel )(
            IHeliumController * This,
            /* [in] */ BSTR ALabel);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EditLabelProfile )(
            IHeliumController * This,
            /* [in] */ BSTR ALabel);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EditGenreDefinition )(
            IHeliumController * This,
            /* [in] */ BSTR AGenre);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EditRelations )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowCountry )(
            IHeliumController * This,
            /* [in] */ BSTR ACountry);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Search )(
            IHeliumController * This,
            /* [in] */ BSTR ASearchString,
            /* [in] */ long ASearchType,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlayAlbum )(
            IHeliumController * This,
            /* [in] */ BSTR AAlbumID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlayItem )(
            IHeliumController * This,
            /* [in] */ BSTR ADetailID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlayFileFromOffset )(
            IHeliumController * This,
            /* [in] */ BSTR AFilename,
            /* [in] */ long AOffset);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddFilesWizard )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddCDWizard )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RestoreHelium )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *JumpToPath )(
            IHeliumController * This,
            /* [in] */ BSTR APath);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlaySubtrack )(
            IHeliumController * This,
            /* [in] */ long ASubTrack,
            /* [in] */ BSTR AFilename);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EditAlbumReview )(
            IHeliumController * This,
            /* [in] */ long AAlbumID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowGenreStyle )(
            IHeliumController * This,
            /* [in] */ BSTR AStyle);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EditGenreStyleDefinition )(
            IHeliumController * This,
            /* [in] */ BSTR AStyleID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowGenreCategory )(
            IHeliumController * This,
            /* [in] */ BSTR ACategoryID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EditGenreCategoryDefinition )(
            IHeliumController * This,
            /* [in] */ BSTR ACategoryID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowPicture )(
            IHeliumController * This,
            /* [in] */ BSTR AFilename);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlaySubtrackItem )(
            IHeliumController * This,
            /* [in] */ long ASubTrack,
            /* [in] */ BSTR ADetailID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowStatistics )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowGenreOverview )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowAllCountries )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowAllPublishers )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DownloadArtistInfo )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EditAlbumTagsTE )(
            IHeliumController * This,
            /* [in] */ long AAlbumID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnqueueAlbum )(
            IHeliumController * This,
            /* [in] */ BSTR AAlbumID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EditAlbumTagsTESM )(
            IHeliumController * This,
            /* [in] */ BSTR AAlbumID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnqueueFile )(
            IHeliumController * This,
            /* [in] */ BSTR AFilename);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlayFile )(
            IHeliumController * This,
            /* [in] */ BSTR AFilename);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ExploreSourcePath )(
            IHeliumController * This,
            /* [in] */ BSTR APath);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ExamineTags )(
            IHeliumController * This,
            /* [in] */ BSTR AFilename);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TEEditFile )(
            IHeliumController * This,
            /* [in] */ BSTR AFilename);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TESMEditFile )(
            IHeliumController * This,
            /* [in] */ BSTR AFilename);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AnalyzeFile )(
            IHeliumController * This,
            /* [in] */ BSTR AFilename);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ExploreAlbumFolder )(
            IHeliumController * This,
            /* [in] */ long AAlbumID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetCollapsedState )(
            IHeliumController * This,
            /* [in] */ BSTR AName,
            /* [in] */ long AState);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnqueueNext )(
            IHeliumController * This,
            /* [in] */ BSTR AFilename);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnqueueAlbumNext )(
            IHeliumController * This,
            /* [in] */ BSTR AAlbumID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EditArtistInfo )(
            IHeliumController * This,
            /* [in] */ long AArtistID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowTrack )(
            IHeliumController * This,
            /* [in] */ long ATrackID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GoHome )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIBXML_GetSearchResult )(
            IHeliumController * This,
            /* [in] */ BSTR ASearchString,
            /* [in] */ long ASearchType,
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIBXML_GetArtistDiscography )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIBXML_GetArtistRelations )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIBXML_GetArtistAppearances )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIBXML_GetArtistRemixes )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CurrentTrack )(
            IHeliumController * This,
            /* [retval][out] */ ICurrentTrack **AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlayNext )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlayPrevious )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlayPause )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CurrentPosition )(
            IHeliumController * This,
            /* [retval][out] */ long *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlayerState )(
            IHeliumController * This,
            /* [retval][out] */ long *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Stop )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Pause )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *StartPlay )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsMuted )(
            IHeliumController * This,
            /* [retval][out] */ long *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Mute )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Unmute )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddUpdateAlbumPicture )(
            IHeliumController * This,
            /* [in] */ long AAlbumID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetActivePlaylistCount )(
            IHeliumController * This,
            /* [retval][out] */ long *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetActivePlaylistEntry )(
            IHeliumController * This,
            /* [in] */ long AIndex,
            /* [retval][out] */ IHMMActivePlaylistTrack **AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetActivePlaylistEntryAsXML )(
            IHeliumController * This,
            /* [in] */ long AIndex,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlayActivePlaylistItem )(
            IHeliumController * This,
            /* [in] */ long AIndex);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowLastPlayedTracks )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowTopArtistsThisWeek )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIBXML_GetRecentAlbums )(
            IHeliumController * This,
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowRecentAlbums )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowMostPlayedTracks )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIBXML_GetMostPlayed )(
            IHeliumController * This,
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowFavouriteArtists )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIBXML_GetFavouriteArtists )(
            IHeliumController * This,
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIBXML_GetLastPlayedTracks )(
            IHeliumController * This,
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowTopGenres )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowTopYears )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowTopArtists )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowTopPublishers )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowTopCountries )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIB_GetTopArtists )(
            IHeliumController * This,
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowFavouriteGenres )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIB_GetFavouriteGenres )(
            IHeliumController * This,
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowMostPlayedArtists )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIB_GetMostPlayedArtists )(
            IHeliumController * This,
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowPlayedTracksForPeriod )(
            IHeliumController * This,
            /* [in] */ long APeriodType);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIB_GetPlayedTracksForPeriod )(
            IHeliumController * This,
            /* [in] */ long ADateInterval,
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowArtistRoot )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIB_GetArtistList )(
            IHeliumController * This,
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [in] */ long AFilter,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowAlbumRoot )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIB_GetAlbumsList )(
            IHeliumController * This,
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [in] */ long ARelTypeFilter,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowPublisherRoot )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIB_GetPublisherList )(
            IHeliumController * This,
            /* [in] */ long APageSize,
            /* [in] */ long APageId,
            /* [in] */ long ACountryID,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetArtistDownloadPageFile )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetArtistImage )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetAlbumImage )(
            IHeliumController * This,
            /* [in] */ long AAlbumID,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DownloadAlbumInfo )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RenameArtist )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MIBXML_GetVideos )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *BurnAlbum )(
            IHeliumController * This,
            /* [in] */ long AAlbumID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LastFMLoveCurrentTrack )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LastFMAddCurrentToPlaylist )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LastFMTagItem )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendAlbumToPortableDevice )(
            IHeliumController * This,
            /* [in] */ long AAlbumID);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PlayerVolume )(
            IHeliumController * This,
            /* [retval][out] */ long *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PlayerVolume )(
            IHeliumController * This,
            /* [in] */ long Value);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetPosition )(
            IHeliumController * This,
            /* [in] */ long APosition);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetPosition )(
            IHeliumController * This,
            /* [retval][out] */ long *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlayerActiveFile )(
            IHeliumController * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetRatingForActiveFile )(
            IHeliumController * This,
            /* [retval][out] */ long *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnqueueAndPlayDBItem )(
            IHeliumController * This,
            /* [in] */ long ADBID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFullSizeNPAlbumImage )(
            IHeliumController * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendAlbumToHS )(
            IHeliumController * This,
            /* [in] */ long AAlbumID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendArtistToHS )(
            IHeliumController * This,
            /* [in] */ long AArtistID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowFavouritesRoot )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowFavouriteAlbums )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowFavouriteTracks )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowFavArtistsEx )(
            IHeliumController * This,
            /* [in] */ long APage);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowFavAlbumsEx )(
            IHeliumController * This,
            /* [in] */ long APage);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowFavTracksEx )(
            IHeliumController * This,
            /* [in] */ long APage);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowRecentAlbumsEx )(
            IHeliumController * This,
            /* [in] */ long APage);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowAlbumDetailsEx )(
            IHeliumController * This,
            /* [in] */ long APage,
            /* [in] */ long AReleaseTypeFilter);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowArtistDetailsEx )(
            IHeliumController * This,
            /* [in] */ long APage,
            /* [in] */ long AArtistFilter);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowPublisherDetailsEx )(
            IHeliumController * This,
            /* [in] */ long APage,
            /* [in] */ long APublisherFilter);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchArtistPager )(
            IHeliumController * This,
            /* [in] */ long APage,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchAlbumPager )(
            IHeliumController * This,
            /* [in] */ long APage,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchPublisherPager )(
            IHeliumController * This,
            /* [in] */ long APage,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchGenrePager )(
            IHeliumController * This,
            /* [in] */ long APage,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchTrackPager )(
            IHeliumController * This,
            /* [in] */ long APage,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ManageGenres )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowChart )(
            IHeliumController * This,
            /* [in] */ BSTR AChartType,
            /* [in] */ BSTR ADate);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowCharts )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ArtistList_SortByName )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ArtistList_SortByCountry )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ArtistList_SortByCount )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AlbumList_SortByName )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AlbumList_SortByArtist )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AlbumList_SortByCount )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AlbumList_SortByLength )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AlbumList_SortByYear )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AlbumList_SortByReleaseType )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AlbumList_SortByRating )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetArtistAsFavourite )(
            IHeliumController * This,
            /* [in] */ long AIsFav,
            /* [in] */ long AArtistID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetAlbumAsFavourite )(
            IHeliumController * This,
            /* [in] */ long AIsFav,
            /* [in] */ long AAlbumID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ArtistList_SortByFormed )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ArtistList_SortByDisbanded )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchArtistList_SortByName )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchArtistList_SortByCountry )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchArtistList_SortByCount )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchArtistList_SortByFormed )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchArtistList_SortByDisbanded )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchAlbumList_SortByName )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchAlbumList_SortByArtist )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchAlbumList_SortByCount )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchAlbumList_SortByLength )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchAlbumList_SortByYear )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchAlbumList_SortByReleaseType )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchAlbumList_SortByRating )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DiscoverArtist )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DiscoverArtist_Ajax )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist,
            /* [in] */ BSTR AXML,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DiscoverArtistMain_Ajax )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddToHistory )(
            IHeliumController * This,
            /* [in] */ long AType,
            /* [in] */ BSTR AParam1,
            /* [in] */ long AParam2);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetSimilarArtistCountForArtist )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist,
            /* [retval][out] */ long *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDiscoverArtistTrackList )(
            IHeliumController * This,
            /* [in] */ BSTR AArtist,
            /* [in] */ BSTR AID,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddAlbumToPlaylist )(
            IHeliumController * This,
            /* [in] */ long AAlbumID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddArtistToPlaylist )(
            IHeliumController * This,
            /* [in] */ long AArtistID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetTrackAsFavourite )(
            IHeliumController * This,
            /* [in] */ long AIsFav,
            /* [in] */ long ADetailID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DiscoverSimilarTracks )(
            IHeliumController * This,
            /* [in] */ long ADetailID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DiscoverTrack_Ajax )(
            IHeliumController * This,
            /* [in] */ long ADetailID,
            /* [in] */ BSTR AXML,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DiscoverTrackMain_Ajax )(
            IHeliumController * This,
            /* [in] */ long ADetailID,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnqueueLastByID )(
            IHeliumController * This,
            /* [in] */ BSTR AIDList);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnqueueNextByID )(
            IHeliumController * This,
            /* [in] */ BSTR AIDList);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnqueueAndPlay )(
            IHeliumController * This,
            /* [in] */ BSTR AIDList);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchTrackList_SortByTitle )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchTrackList_SortByArtist )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchTrackList_SortByAlbum )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchTrackList_SortByYear )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchTrackList_SortByLength )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchTrackList_SortByRating )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ViewOnlineAlbum )(
            IHeliumController * This,
            /* [in] */ BSTR AAlbumID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ViewOnlineArtist )(
            IHeliumController * This,
            /* [in] */ BSTR AArtistID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlayFileFromUrl )(
            IHeliumController * This,
            /* [in] */ BSTR AURL,
            /* [in] */ BSTR ATitle);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlayFilesFromList )(
            IHeliumController * This,
            /* [in] */ BSTR AIDList);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowFavouriteRoot )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowYearRoot )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddFileToPlaylist )(
            IHeliumController * This,
            /* [in] */ long ADetailID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DownloadAlbumPictureByID )(
            IHeliumController * This,
            /* [in] */ long AAlbumID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DownloadArtistInfoByID )(
            IHeliumController * This,
            /* [in] */ long AArtistID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DownloadArtistPictureByID )(
            IHeliumController * This,
            /* [in] */ long AID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetActiveTabIndex )(
            IHeliumController * This,
            /* [in] */ BSTR ATabIndex);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ArtistList_FilterByChar )(
            IHeliumController * This,
            /* [in] */ BSTR AChar);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AlbumList_FilterByChar )(
            IHeliumController * This,
            /* [in] */ BSTR AChar);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavAlbumList_FilterByChar )(
            IHeliumController * This,
            /* [in] */ BSTR AChar);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavArtistList_FilterByChar )(
            IHeliumController * This,
            /* [in] */ BSTR AChar);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavTrackList_FilterByChar )(
            IHeliumController * This,
            /* [in] */ BSTR AChar);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PublisherList_FilterByChar )(
            IHeliumController * This,
            /* [in] */ BSTR AChar);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PublisherList_SortByName )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PublisherList_SortByCount )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddUpdateArtistPicture )(
            IHeliumController * This,
            /* [in] */ long AArtistID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddUpdatePublisherPicture )(
            IHeliumController * This,
            /* [in] */ long APublisherId);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowAlbumArtistRoot )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowPlaylistRoot )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ExpandPlsFolder )(
            IHeliumController * This,
            /* [in] */ long AFolderId);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowPlaylist )(
            IHeliumController * This,
            /* [in] */ long APlaylistId);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlayPlaylist )(
            IHeliumController * This,
            /* [in] */ long APlaylistId);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnqueuePlaylistNext )(
            IHeliumController * This,
            /* [in] */ long APlaylistId);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnqueuePlaylistLast )(
            IHeliumController * This,
            /* [in] */ long APlaylistId);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetArtistFilter )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetAlbumFilter )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetPublisherFilter )(
            IHeliumController * This);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavArtList_SortByName )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavArtList_SortByCount )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavArtList_SortByFormed )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavArtList_SortByDisbanded )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavAlbList_SortByName )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavAlbList_SortByArtist )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavAlbList_SortByRelType )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavAlbList_SortByItems )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavAlbList_SortByRating )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavAlbList_SortByYear )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavTrkList_SortByArtist )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavTrkList_SortByTitle )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavTrkList_SortByYear )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavTrkList_SortByRating )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavTrkList_SortByPlayed )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavTrkList_SortByLength )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PublisherList_SortByCountry )(
            IHeliumController * This,
            /* [in] */ long Ascending);

        END_INTERFACE
    } IHeliumControllerVtbl;

    interface IHeliumController
    {
        CONST_VTBL struct IHeliumControllerVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define IHeliumController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define IHeliumController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )

#define IHeliumController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )


#define IHeliumController_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )

#define IHeliumController_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )

#define IHeliumController_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )

#define IHeliumController_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )


#define IHeliumController_ShowAlbumLink(This,AAlbumID)	\
    ( (This)->lpVtbl -> ShowAlbumLink(This,AAlbumID) )

#define IHeliumController_ShowArtist(This,AArtist)	\
    ( (This)->lpVtbl -> ShowArtist(This,AArtist) )

#define IHeliumController_ShowGenre(This,AGenre)	\
    ( (This)->lpVtbl -> ShowGenre(This,AGenre) )

#define IHeliumController_ShowYear(This,AYear)	\
    ( (This)->lpVtbl -> ShowYear(This,AYear) )

#define IHeliumController_EditBiography(This,AArtist)	\
    ( (This)->lpVtbl -> EditBiography(This,AArtist) )

#define IHeliumController_EditDiscography(This,AArtist)	\
    ( (This)->lpVtbl -> EditDiscography(This,AArtist) )

#define IHeliumController_ShowLabel(This,ALabel)	\
    ( (This)->lpVtbl -> ShowLabel(This,ALabel) )

#define IHeliumController_EditLabelProfile(This,ALabel)	\
    ( (This)->lpVtbl -> EditLabelProfile(This,ALabel) )

#define IHeliumController_EditGenreDefinition(This,AGenre)	\
    ( (This)->lpVtbl -> EditGenreDefinition(This,AGenre) )

#define IHeliumController_EditRelations(This,AArtist)	\
    ( (This)->lpVtbl -> EditRelations(This,AArtist) )

#define IHeliumController_ShowCountry(This,ACountry)	\
    ( (This)->lpVtbl -> ShowCountry(This,ACountry) )

#define IHeliumController_Search(This,ASearchString,ASearchType,AResult)	\
    ( (This)->lpVtbl -> Search(This,ASearchString,ASearchType,AResult) )

#define IHeliumController_PlayAlbum(This,AAlbumID)	\
    ( (This)->lpVtbl -> PlayAlbum(This,AAlbumID) )

#define IHeliumController_PlayItem(This,ADetailID)	\
    ( (This)->lpVtbl -> PlayItem(This,ADetailID) )

#define IHeliumController_PlayFileFromOffset(This,AFilename,AOffset)	\
    ( (This)->lpVtbl -> PlayFileFromOffset(This,AFilename,AOffset) )

#define IHeliumController_AddFilesWizard(This)	\
    ( (This)->lpVtbl -> AddFilesWizard(This) )

#define IHeliumController_AddCDWizard(This)	\
    ( (This)->lpVtbl -> AddCDWizard(This) )

#define IHeliumController_RestoreHelium(This)	\
    ( (This)->lpVtbl -> RestoreHelium(This) )

#define IHeliumController_JumpToPath(This,APath)	\
    ( (This)->lpVtbl -> JumpToPath(This,APath) )

#define IHeliumController_PlaySubtrack(This,ASubTrack,AFilename)	\
    ( (This)->lpVtbl -> PlaySubtrack(This,ASubTrack,AFilename) )

#define IHeliumController_EditAlbumReview(This,AAlbumID)	\
    ( (This)->lpVtbl -> EditAlbumReview(This,AAlbumID) )

#define IHeliumController_ShowGenreStyle(This,AStyle)	\
    ( (This)->lpVtbl -> ShowGenreStyle(This,AStyle) )

#define IHeliumController_EditGenreStyleDefinition(This,AStyleID)	\
    ( (This)->lpVtbl -> EditGenreStyleDefinition(This,AStyleID) )

#define IHeliumController_ShowGenreCategory(This,ACategoryID)	\
    ( (This)->lpVtbl -> ShowGenreCategory(This,ACategoryID) )

#define IHeliumController_EditGenreCategoryDefinition(This,ACategoryID)	\
    ( (This)->lpVtbl -> EditGenreCategoryDefinition(This,ACategoryID) )

#define IHeliumController_ShowPicture(This,AFilename)	\
    ( (This)->lpVtbl -> ShowPicture(This,AFilename) )

#define IHeliumController_PlaySubtrackItem(This,ASubTrack,ADetailID)	\
    ( (This)->lpVtbl -> PlaySubtrackItem(This,ASubTrack,ADetailID) )

#define IHeliumController_ShowStatistics(This)	\
    ( (This)->lpVtbl -> ShowStatistics(This) )

#define IHeliumController_ShowGenreOverview(This)	\
    ( (This)->lpVtbl -> ShowGenreOverview(This) )

#define IHeliumController_ShowAllCountries(This)	\
    ( (This)->lpVtbl -> ShowAllCountries(This) )

#define IHeliumController_ShowAllPublishers(This)	\
    ( (This)->lpVtbl -> ShowAllPublishers(This) )

#define IHeliumController_DownloadArtistInfo(This)	\
    ( (This)->lpVtbl -> DownloadArtistInfo(This) )

#define IHeliumController_EditAlbumTagsTE(This,AAlbumID)	\
    ( (This)->lpVtbl -> EditAlbumTagsTE(This,AAlbumID) )

#define IHeliumController_EnqueueAlbum(This,AAlbumID)	\
    ( (This)->lpVtbl -> EnqueueAlbum(This,AAlbumID) )

#define IHeliumController_EditAlbumTagsTESM(This,AAlbumID)	\
    ( (This)->lpVtbl -> EditAlbumTagsTESM(This,AAlbumID) )

#define IHeliumController_EnqueueFile(This,AFilename)	\
    ( (This)->lpVtbl -> EnqueueFile(This,AFilename) )

#define IHeliumController_PlayFile(This,AFilename)	\
    ( (This)->lpVtbl -> PlayFile(This,AFilename) )

#define IHeliumController_ExploreSourcePath(This,APath)	\
    ( (This)->lpVtbl -> ExploreSourcePath(This,APath) )

#define IHeliumController_ExamineTags(This,AFilename)	\
    ( (This)->lpVtbl -> ExamineTags(This,AFilename) )

#define IHeliumController_TEEditFile(This,AFilename)	\
    ( (This)->lpVtbl -> TEEditFile(This,AFilename) )

#define IHeliumController_TESMEditFile(This,AFilename)	\
    ( (This)->lpVtbl -> TESMEditFile(This,AFilename) )

#define IHeliumController_AnalyzeFile(This,AFilename)	\
    ( (This)->lpVtbl -> AnalyzeFile(This,AFilename) )

#define IHeliumController_ExploreAlbumFolder(This,AAlbumID)	\
    ( (This)->lpVtbl -> ExploreAlbumFolder(This,AAlbumID) )

#define IHeliumController_SetCollapsedState(This,AName,AState)	\
    ( (This)->lpVtbl -> SetCollapsedState(This,AName,AState) )

#define IHeliumController_EnqueueNext(This,AFilename)	\
    ( (This)->lpVtbl -> EnqueueNext(This,AFilename) )

#define IHeliumController_EnqueueAlbumNext(This,AAlbumID)	\
    ( (This)->lpVtbl -> EnqueueAlbumNext(This,AAlbumID) )

#define IHeliumController_EditArtistInfo(This,AArtistID)	\
    ( (This)->lpVtbl -> EditArtistInfo(This,AArtistID) )

#define IHeliumController_ShowTrack(This,ATrackID)	\
    ( (This)->lpVtbl -> ShowTrack(This,ATrackID) )

#define IHeliumController_GoHome(This)	\
    ( (This)->lpVtbl -> GoHome(This) )

#define IHeliumController_MIBXML_GetSearchResult(This,ASearchString,ASearchType,APageSize,APageId,AResult)	\
    ( (This)->lpVtbl -> MIBXML_GetSearchResult(This,ASearchString,ASearchType,APageSize,APageId,AResult) )

#define IHeliumController_MIBXML_GetArtistDiscography(This,AArtist,AResult)	\
    ( (This)->lpVtbl -> MIBXML_GetArtistDiscography(This,AArtist,AResult) )

#define IHeliumController_MIBXML_GetArtistRelations(This,AArtist,AResult)	\
    ( (This)->lpVtbl -> MIBXML_GetArtistRelations(This,AArtist,AResult) )

#define IHeliumController_MIBXML_GetArtistAppearances(This,AArtist,AResult)	\
    ( (This)->lpVtbl -> MIBXML_GetArtistAppearances(This,AArtist,AResult) )

#define IHeliumController_MIBXML_GetArtistRemixes(This,AArtist,AResult)	\
    ( (This)->lpVtbl -> MIBXML_GetArtistRemixes(This,AArtist,AResult) )

#define IHeliumController_CurrentTrack(This,AResult)	\
    ( (This)->lpVtbl -> CurrentTrack(This,AResult) )

#define IHeliumController_PlayNext(This)	\
    ( (This)->lpVtbl -> PlayNext(This) )

#define IHeliumController_PlayPrevious(This)	\
    ( (This)->lpVtbl -> PlayPrevious(This) )

#define IHeliumController_PlayPause(This)	\
    ( (This)->lpVtbl -> PlayPause(This) )

#define IHeliumController_CurrentPosition(This,AResult)	\
    ( (This)->lpVtbl -> CurrentPosition(This,AResult) )

#define IHeliumController_PlayerState(This,AResult)	\
    ( (This)->lpVtbl -> PlayerState(This,AResult) )

#define IHeliumController_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) )

#define IHeliumController_Pause(This)	\
    ( (This)->lpVtbl -> Pause(This) )

#define IHeliumController_StartPlay(This)	\
    ( (This)->lpVtbl -> StartPlay(This) )

#define IHeliumController_IsMuted(This,AResult)	\
    ( (This)->lpVtbl -> IsMuted(This,AResult) )

#define IHeliumController_Mute(This)	\
    ( (This)->lpVtbl -> Mute(This) )

#define IHeliumController_Unmute(This)	\
    ( (This)->lpVtbl -> Unmute(This) )

#define IHeliumController_AddUpdateAlbumPicture(This,AAlbumID)	\
    ( (This)->lpVtbl -> AddUpdateAlbumPicture(This,AAlbumID) )

#define IHeliumController_GetActivePlaylistCount(This,AResult)	\
    ( (This)->lpVtbl -> GetActivePlaylistCount(This,AResult) )

#define IHeliumController_GetActivePlaylistEntry(This,AIndex,AResult)	\
    ( (This)->lpVtbl -> GetActivePlaylistEntry(This,AIndex,AResult) )

#define IHeliumController_GetActivePlaylistEntryAsXML(This,AIndex,AResult)	\
    ( (This)->lpVtbl -> GetActivePlaylistEntryAsXML(This,AIndex,AResult) )

#define IHeliumController_PlayActivePlaylistItem(This,AIndex)	\
    ( (This)->lpVtbl -> PlayActivePlaylistItem(This,AIndex) )

#define IHeliumController_ShowLastPlayedTracks(This)	\
    ( (This)->lpVtbl -> ShowLastPlayedTracks(This) )

#define IHeliumController_ShowTopArtistsThisWeek(This)	\
    ( (This)->lpVtbl -> ShowTopArtistsThisWeek(This) )

#define IHeliumController_MIBXML_GetRecentAlbums(This,APageSize,APageId,AResult)	\
    ( (This)->lpVtbl -> MIBXML_GetRecentAlbums(This,APageSize,APageId,AResult) )

#define IHeliumController_ShowRecentAlbums(This)	\
    ( (This)->lpVtbl -> ShowRecentAlbums(This) )

#define IHeliumController_ShowMostPlayedTracks(This)	\
    ( (This)->lpVtbl -> ShowMostPlayedTracks(This) )

#define IHeliumController_MIBXML_GetMostPlayed(This,APageSize,APageId,AResult)	\
    ( (This)->lpVtbl -> MIBXML_GetMostPlayed(This,APageSize,APageId,AResult) )

#define IHeliumController_ShowFavouriteArtists(This)	\
    ( (This)->lpVtbl -> ShowFavouriteArtists(This) )

#define IHeliumController_MIBXML_GetFavouriteArtists(This,APageSize,APageId,AResult)	\
    ( (This)->lpVtbl -> MIBXML_GetFavouriteArtists(This,APageSize,APageId,AResult) )

#define IHeliumController_MIBXML_GetLastPlayedTracks(This,APageSize,APageId,AResult)	\
    ( (This)->lpVtbl -> MIBXML_GetLastPlayedTracks(This,APageSize,APageId,AResult) )

#define IHeliumController_ShowTopGenres(This)	\
    ( (This)->lpVtbl -> ShowTopGenres(This) )

#define IHeliumController_ShowTopYears(This)	\
    ( (This)->lpVtbl -> ShowTopYears(This) )

#define IHeliumController_ShowTopArtists(This)	\
    ( (This)->lpVtbl -> ShowTopArtists(This) )

#define IHeliumController_ShowTopPublishers(This)	\
    ( (This)->lpVtbl -> ShowTopPublishers(This) )

#define IHeliumController_ShowTopCountries(This)	\
    ( (This)->lpVtbl -> ShowTopCountries(This) )

#define IHeliumController_MIB_GetTopArtists(This,APageSize,APageId,AResult)	\
    ( (This)->lpVtbl -> MIB_GetTopArtists(This,APageSize,APageId,AResult) )

#define IHeliumController_ShowFavouriteGenres(This)	\
    ( (This)->lpVtbl -> ShowFavouriteGenres(This) )

#define IHeliumController_MIB_GetFavouriteGenres(This,APageSize,APageId,AResult)	\
    ( (This)->lpVtbl -> MIB_GetFavouriteGenres(This,APageSize,APageId,AResult) )

#define IHeliumController_ShowMostPlayedArtists(This)	\
    ( (This)->lpVtbl -> ShowMostPlayedArtists(This) )

#define IHeliumController_MIB_GetMostPlayedArtists(This,APageSize,APageId,AResult)	\
    ( (This)->lpVtbl -> MIB_GetMostPlayedArtists(This,APageSize,APageId,AResult) )

#define IHeliumController_ShowPlayedTracksForPeriod(This,APeriodType)	\
    ( (This)->lpVtbl -> ShowPlayedTracksForPeriod(This,APeriodType) )

#define IHeliumController_MIB_GetPlayedTracksForPeriod(This,ADateInterval,APageSize,APageId,AResult)	\
    ( (This)->lpVtbl -> MIB_GetPlayedTracksForPeriod(This,ADateInterval,APageSize,APageId,AResult) )

#define IHeliumController_ShowArtistRoot(This)	\
    ( (This)->lpVtbl -> ShowArtistRoot(This) )

#define IHeliumController_MIB_GetArtistList(This,APageSize,APageId,AFilter,AResult)	\
    ( (This)->lpVtbl -> MIB_GetArtistList(This,APageSize,APageId,AFilter,AResult) )

#define IHeliumController_ShowAlbumRoot(This)	\
    ( (This)->lpVtbl -> ShowAlbumRoot(This) )

#define IHeliumController_MIB_GetAlbumsList(This,APageSize,APageId,ARelTypeFilter,AResult)	\
    ( (This)->lpVtbl -> MIB_GetAlbumsList(This,APageSize,APageId,ARelTypeFilter,AResult) )

#define IHeliumController_ShowPublisherRoot(This)	\
    ( (This)->lpVtbl -> ShowPublisherRoot(This) )

#define IHeliumController_MIB_GetPublisherList(This,APageSize,APageId,ACountryID,AResult)	\
    ( (This)->lpVtbl -> MIB_GetPublisherList(This,APageSize,APageId,ACountryID,AResult) )

#define IHeliumController_GetArtistDownloadPageFile(This,AArtist,AResult)	\
    ( (This)->lpVtbl -> GetArtistDownloadPageFile(This,AArtist,AResult) )

#define IHeliumController_GetArtistImage(This,AArtist,AResult)	\
    ( (This)->lpVtbl -> GetArtistImage(This,AArtist,AResult) )

#define IHeliumController_GetAlbumImage(This,AAlbumID,AResult)	\
    ( (This)->lpVtbl -> GetAlbumImage(This,AAlbumID,AResult) )

#define IHeliumController_DownloadAlbumInfo(This)	\
    ( (This)->lpVtbl -> DownloadAlbumInfo(This) )

#define IHeliumController_RenameArtist(This,AArtist)	\
    ( (This)->lpVtbl -> RenameArtist(This,AArtist) )

#define IHeliumController_MIBXML_GetVideos(This,AArtist,AResult)	\
    ( (This)->lpVtbl -> MIBXML_GetVideos(This,AArtist,AResult) )

#define IHeliumController_BurnAlbum(This,AAlbumID)	\
    ( (This)->lpVtbl -> BurnAlbum(This,AAlbumID) )

#define IHeliumController_LastFMLoveCurrentTrack(This)	\
    ( (This)->lpVtbl -> LastFMLoveCurrentTrack(This) )

#define IHeliumController_LastFMAddCurrentToPlaylist(This)	\
    ( (This)->lpVtbl -> LastFMAddCurrentToPlaylist(This) )

#define IHeliumController_LastFMTagItem(This)	\
    ( (This)->lpVtbl -> LastFMTagItem(This) )

#define IHeliumController_SendAlbumToPortableDevice(This,AAlbumID)	\
    ( (This)->lpVtbl -> SendAlbumToPortableDevice(This,AAlbumID) )

#define IHeliumController_get_PlayerVolume(This,Value)	\
    ( (This)->lpVtbl -> get_PlayerVolume(This,Value) )

#define IHeliumController_put_PlayerVolume(This,Value)	\
    ( (This)->lpVtbl -> put_PlayerVolume(This,Value) )

#define IHeliumController_SetPosition(This,APosition)	\
    ( (This)->lpVtbl -> SetPosition(This,APosition) )

#define IHeliumController_GetPosition(This,AResult)	\
    ( (This)->lpVtbl -> GetPosition(This,AResult) )

#define IHeliumController_PlayerActiveFile(This,AResult)	\
    ( (This)->lpVtbl -> PlayerActiveFile(This,AResult) )

#define IHeliumController_GetRatingForActiveFile(This,AResult)	\
    ( (This)->lpVtbl -> GetRatingForActiveFile(This,AResult) )

#define IHeliumController_EnqueueAndPlayDBItem(This,ADBID)	\
    ( (This)->lpVtbl -> EnqueueAndPlayDBItem(This,ADBID) )

#define IHeliumController_GetFullSizeNPAlbumImage(This,AResult)	\
    ( (This)->lpVtbl -> GetFullSizeNPAlbumImage(This,AResult) )

#define IHeliumController_SendAlbumToHS(This,AAlbumID)	\
    ( (This)->lpVtbl -> SendAlbumToHS(This,AAlbumID) )

#define IHeliumController_SendArtistToHS(This,AArtistID)	\
    ( (This)->lpVtbl -> SendArtistToHS(This,AArtistID) )

#define IHeliumController_ShowFavouritesRoot(This)	\
    ( (This)->lpVtbl -> ShowFavouritesRoot(This) )

#define IHeliumController_ShowFavouriteAlbums(This)	\
    ( (This)->lpVtbl -> ShowFavouriteAlbums(This) )

#define IHeliumController_ShowFavouriteTracks(This)	\
    ( (This)->lpVtbl -> ShowFavouriteTracks(This) )

#define IHeliumController_ShowFavArtistsEx(This,APage)	\
    ( (This)->lpVtbl -> ShowFavArtistsEx(This,APage) )

#define IHeliumController_ShowFavAlbumsEx(This,APage)	\
    ( (This)->lpVtbl -> ShowFavAlbumsEx(This,APage) )

#define IHeliumController_ShowFavTracksEx(This,APage)	\
    ( (This)->lpVtbl -> ShowFavTracksEx(This,APage) )

#define IHeliumController_ShowRecentAlbumsEx(This,APage)	\
    ( (This)->lpVtbl -> ShowRecentAlbumsEx(This,APage) )

#define IHeliumController_ShowAlbumDetailsEx(This,APage,AReleaseTypeFilter)	\
    ( (This)->lpVtbl -> ShowAlbumDetailsEx(This,APage,AReleaseTypeFilter) )

#define IHeliumController_ShowArtistDetailsEx(This,APage,AArtistFilter)	\
    ( (This)->lpVtbl -> ShowArtistDetailsEx(This,APage,AArtistFilter) )

#define IHeliumController_ShowPublisherDetailsEx(This,APage,APublisherFilter)	\
    ( (This)->lpVtbl -> ShowPublisherDetailsEx(This,APage,APublisherFilter) )

#define IHeliumController_SearchArtistPager(This,APage,AResult)	\
    ( (This)->lpVtbl -> SearchArtistPager(This,APage,AResult) )

#define IHeliumController_SearchAlbumPager(This,APage,AResult)	\
    ( (This)->lpVtbl -> SearchAlbumPager(This,APage,AResult) )

#define IHeliumController_SearchPublisherPager(This,APage,AResult)	\
    ( (This)->lpVtbl -> SearchPublisherPager(This,APage,AResult) )

#define IHeliumController_SearchGenrePager(This,APage,AResult)	\
    ( (This)->lpVtbl -> SearchGenrePager(This,APage,AResult) )

#define IHeliumController_SearchTrackPager(This,APage,AResult)	\
    ( (This)->lpVtbl -> SearchTrackPager(This,APage,AResult) )

#define IHeliumController_ManageGenres(This)	\
    ( (This)->lpVtbl -> ManageGenres(This) )

#define IHeliumController_ShowChart(This,AChartType,ADate)	\
    ( (This)->lpVtbl -> ShowChart(This,AChartType,ADate) )

#define IHeliumController_ShowCharts(This)	\
    ( (This)->lpVtbl -> ShowCharts(This) )

#define IHeliumController_ArtistList_SortByName(This,Ascending)	\
    ( (This)->lpVtbl -> ArtistList_SortByName(This,Ascending) )

#define IHeliumController_ArtistList_SortByCountry(This,Ascending)	\
    ( (This)->lpVtbl -> ArtistList_SortByCountry(This,Ascending) )

#define IHeliumController_ArtistList_SortByCount(This,Ascending)	\
    ( (This)->lpVtbl -> ArtistList_SortByCount(This,Ascending) )

#define IHeliumController_AlbumList_SortByName(This,Ascending)	\
    ( (This)->lpVtbl -> AlbumList_SortByName(This,Ascending) )

#define IHeliumController_AlbumList_SortByArtist(This,Ascending)	\
    ( (This)->lpVtbl -> AlbumList_SortByArtist(This,Ascending) )

#define IHeliumController_AlbumList_SortByCount(This,Ascending)	\
    ( (This)->lpVtbl -> AlbumList_SortByCount(This,Ascending) )

#define IHeliumController_AlbumList_SortByLength(This,Ascending)	\
    ( (This)->lpVtbl -> AlbumList_SortByLength(This,Ascending) )

#define IHeliumController_AlbumList_SortByYear(This,Ascending)	\
    ( (This)->lpVtbl -> AlbumList_SortByYear(This,Ascending) )

#define IHeliumController_AlbumList_SortByReleaseType(This,Ascending)	\
    ( (This)->lpVtbl -> AlbumList_SortByReleaseType(This,Ascending) )

#define IHeliumController_AlbumList_SortByRating(This,Ascending)	\
    ( (This)->lpVtbl -> AlbumList_SortByRating(This,Ascending) )

#define IHeliumController_SetArtistAsFavourite(This,AIsFav,AArtistID)	\
    ( (This)->lpVtbl -> SetArtistAsFavourite(This,AIsFav,AArtistID) )

#define IHeliumController_SetAlbumAsFavourite(This,AIsFav,AAlbumID)	\
    ( (This)->lpVtbl -> SetAlbumAsFavourite(This,AIsFav,AAlbumID) )

#define IHeliumController_ArtistList_SortByFormed(This,Ascending)	\
    ( (This)->lpVtbl -> ArtistList_SortByFormed(This,Ascending) )

#define IHeliumController_ArtistList_SortByDisbanded(This,Ascending)	\
    ( (This)->lpVtbl -> ArtistList_SortByDisbanded(This,Ascending) )

#define IHeliumController_SearchArtistList_SortByName(This,Ascending)	\
    ( (This)->lpVtbl -> SearchArtistList_SortByName(This,Ascending) )

#define IHeliumController_SearchArtistList_SortByCountry(This,Ascending)	\
    ( (This)->lpVtbl -> SearchArtistList_SortByCountry(This,Ascending) )

#define IHeliumController_SearchArtistList_SortByCount(This,Ascending)	\
    ( (This)->lpVtbl -> SearchArtistList_SortByCount(This,Ascending) )

#define IHeliumController_SearchArtistList_SortByFormed(This,Ascending)	\
    ( (This)->lpVtbl -> SearchArtistList_SortByFormed(This,Ascending) )

#define IHeliumController_SearchArtistList_SortByDisbanded(This,Ascending)	\
    ( (This)->lpVtbl -> SearchArtistList_SortByDisbanded(This,Ascending) )

#define IHeliumController_SearchAlbumList_SortByName(This,Ascending)	\
    ( (This)->lpVtbl -> SearchAlbumList_SortByName(This,Ascending) )

#define IHeliumController_SearchAlbumList_SortByArtist(This,Ascending)	\
    ( (This)->lpVtbl -> SearchAlbumList_SortByArtist(This,Ascending) )

#define IHeliumController_SearchAlbumList_SortByCount(This,Ascending)	\
    ( (This)->lpVtbl -> SearchAlbumList_SortByCount(This,Ascending) )

#define IHeliumController_SearchAlbumList_SortByLength(This,Ascending)	\
    ( (This)->lpVtbl -> SearchAlbumList_SortByLength(This,Ascending) )

#define IHeliumController_SearchAlbumList_SortByYear(This,Ascending)	\
    ( (This)->lpVtbl -> SearchAlbumList_SortByYear(This,Ascending) )

#define IHeliumController_SearchAlbumList_SortByReleaseType(This,Ascending)	\
    ( (This)->lpVtbl -> SearchAlbumList_SortByReleaseType(This,Ascending) )

#define IHeliumController_SearchAlbumList_SortByRating(This,Ascending)	\
    ( (This)->lpVtbl -> SearchAlbumList_SortByRating(This,Ascending) )

#define IHeliumController_DiscoverArtist(This,AArtist)	\
    ( (This)->lpVtbl -> DiscoverArtist(This,AArtist) )

#define IHeliumController_DiscoverArtist_Ajax(This,AArtist,AXML,AResult)	\
    ( (This)->lpVtbl -> DiscoverArtist_Ajax(This,AArtist,AXML,AResult) )

#define IHeliumController_DiscoverArtistMain_Ajax(This,AArtist,AResult)	\
    ( (This)->lpVtbl -> DiscoverArtistMain_Ajax(This,AArtist,AResult) )

#define IHeliumController_AddToHistory(This,AType,AParam1,AParam2)	\
    ( (This)->lpVtbl -> AddToHistory(This,AType,AParam1,AParam2) )

#define IHeliumController_GetSimilarArtistCountForArtist(This,AArtist,AResult)	\
    ( (This)->lpVtbl -> GetSimilarArtistCountForArtist(This,AArtist,AResult) )

#define IHeliumController_GetDiscoverArtistTrackList(This,AArtist,AID,AResult)	\
    ( (This)->lpVtbl -> GetDiscoverArtistTrackList(This,AArtist,AID,AResult) )

#define IHeliumController_AddAlbumToPlaylist(This,AAlbumID)	\
    ( (This)->lpVtbl -> AddAlbumToPlaylist(This,AAlbumID) )

#define IHeliumController_AddArtistToPlaylist(This,AArtistID)	\
    ( (This)->lpVtbl -> AddArtistToPlaylist(This,AArtistID) )

#define IHeliumController_SetTrackAsFavourite(This,AIsFav,ADetailID)	\
    ( (This)->lpVtbl -> SetTrackAsFavourite(This,AIsFav,ADetailID) )

#define IHeliumController_DiscoverSimilarTracks(This,ADetailID)	\
    ( (This)->lpVtbl -> DiscoverSimilarTracks(This,ADetailID) )

#define IHeliumController_DiscoverTrack_Ajax(This,ADetailID,AXML,AResult)	\
    ( (This)->lpVtbl -> DiscoverTrack_Ajax(This,ADetailID,AXML,AResult) )

#define IHeliumController_DiscoverTrackMain_Ajax(This,ADetailID,AResult)	\
    ( (This)->lpVtbl -> DiscoverTrackMain_Ajax(This,ADetailID,AResult) )

#define IHeliumController_EnqueueLastByID(This,AIDList)	\
    ( (This)->lpVtbl -> EnqueueLastByID(This,AIDList) )

#define IHeliumController_EnqueueNextByID(This,AIDList)	\
    ( (This)->lpVtbl -> EnqueueNextByID(This,AIDList) )

#define IHeliumController_EnqueueAndPlay(This,AIDList)	\
    ( (This)->lpVtbl -> EnqueueAndPlay(This,AIDList) )

#define IHeliumController_SearchTrackList_SortByTitle(This,Ascending)	\
    ( (This)->lpVtbl -> SearchTrackList_SortByTitle(This,Ascending) )

#define IHeliumController_SearchTrackList_SortByArtist(This,Ascending)	\
    ( (This)->lpVtbl -> SearchTrackList_SortByArtist(This,Ascending) )

#define IHeliumController_SearchTrackList_SortByAlbum(This,Ascending)	\
    ( (This)->lpVtbl -> SearchTrackList_SortByAlbum(This,Ascending) )

#define IHeliumController_SearchTrackList_SortByYear(This,Ascending)	\
    ( (This)->lpVtbl -> SearchTrackList_SortByYear(This,Ascending) )

#define IHeliumController_SearchTrackList_SortByLength(This,Ascending)	\
    ( (This)->lpVtbl -> SearchTrackList_SortByLength(This,Ascending) )

#define IHeliumController_SearchTrackList_SortByRating(This,Ascending)	\
    ( (This)->lpVtbl -> SearchTrackList_SortByRating(This,Ascending) )

#define IHeliumController_ViewOnlineAlbum(This,AAlbumID)	\
    ( (This)->lpVtbl -> ViewOnlineAlbum(This,AAlbumID) )

#define IHeliumController_ViewOnlineArtist(This,AArtistID)	\
    ( (This)->lpVtbl -> ViewOnlineArtist(This,AArtistID) )

#define IHeliumController_PlayFileFromUrl(This,AURL,ATitle)	\
    ( (This)->lpVtbl -> PlayFileFromUrl(This,AURL,ATitle) )

#define IHeliumController_PlayFilesFromList(This,AIDList)	\
    ( (This)->lpVtbl -> PlayFilesFromList(This,AIDList) )

#define IHeliumController_ShowFavouriteRoot(This)	\
    ( (This)->lpVtbl -> ShowFavouriteRoot(This) )

#define IHeliumController_ShowYearRoot(This)	\
    ( (This)->lpVtbl -> ShowYearRoot(This) )

#define IHeliumController_AddFileToPlaylist(This,ADetailID)	\
    ( (This)->lpVtbl -> AddFileToPlaylist(This,ADetailID) )

#define IHeliumController_DownloadAlbumPictureByID(This,AAlbumID)	\
    ( (This)->lpVtbl -> DownloadAlbumPictureByID(This,AAlbumID) )

#define IHeliumController_DownloadArtistInfoByID(This,AArtistID)	\
    ( (This)->lpVtbl -> DownloadArtistInfoByID(This,AArtistID) )

#define IHeliumController_DownloadArtistPictureByID(This,AID)	\
    ( (This)->lpVtbl -> DownloadArtistPictureByID(This,AID) )

#define IHeliumController_SetActiveTabIndex(This,ATabIndex)	\
    ( (This)->lpVtbl -> SetActiveTabIndex(This,ATabIndex) )

#define IHeliumController_ArtistList_FilterByChar(This,AChar)	\
    ( (This)->lpVtbl -> ArtistList_FilterByChar(This,AChar) )

#define IHeliumController_AlbumList_FilterByChar(This,AChar)	\
    ( (This)->lpVtbl -> AlbumList_FilterByChar(This,AChar) )

#define IHeliumController_FavAlbumList_FilterByChar(This,AChar)	\
    ( (This)->lpVtbl -> FavAlbumList_FilterByChar(This,AChar) )

#define IHeliumController_FavArtistList_FilterByChar(This,AChar)	\
    ( (This)->lpVtbl -> FavArtistList_FilterByChar(This,AChar) )

#define IHeliumController_FavTrackList_FilterByChar(This,AChar)	\
    ( (This)->lpVtbl -> FavTrackList_FilterByChar(This,AChar) )

#define IHeliumController_PublisherList_FilterByChar(This,AChar)	\
    ( (This)->lpVtbl -> PublisherList_FilterByChar(This,AChar) )

#define IHeliumController_PublisherList_SortByName(This,Ascending)	\
    ( (This)->lpVtbl -> PublisherList_SortByName(This,Ascending) )

#define IHeliumController_PublisherList_SortByCount(This,Ascending)	\
    ( (This)->lpVtbl -> PublisherList_SortByCount(This,Ascending) )

#define IHeliumController_AddUpdateArtistPicture(This,AArtistID)	\
    ( (This)->lpVtbl -> AddUpdateArtistPicture(This,AArtistID) )

#define IHeliumController_AddUpdatePublisherPicture(This,APublisherId)	\
    ( (This)->lpVtbl -> AddUpdatePublisherPicture(This,APublisherId) )

#define IHeliumController_ShowAlbumArtistRoot(This)	\
    ( (This)->lpVtbl -> ShowAlbumArtistRoot(This) )

#define IHeliumController_ShowPlaylistRoot(This)	\
    ( (This)->lpVtbl -> ShowPlaylistRoot(This) )

#define IHeliumController_ExpandPlsFolder(This,AFolderId)	\
    ( (This)->lpVtbl -> ExpandPlsFolder(This,AFolderId) )

#define IHeliumController_ShowPlaylist(This,APlaylistId)	\
    ( (This)->lpVtbl -> ShowPlaylist(This,APlaylistId) )

#define IHeliumController_PlayPlaylist(This,APlaylistId)	\
    ( (This)->lpVtbl -> PlayPlaylist(This,APlaylistId) )

#define IHeliumController_EnqueuePlaylistNext(This,APlaylistId)	\
    ( (This)->lpVtbl -> EnqueuePlaylistNext(This,APlaylistId) )

#define IHeliumController_EnqueuePlaylistLast(This,APlaylistId)	\
    ( (This)->lpVtbl -> EnqueuePlaylistLast(This,APlaylistId) )

#define IHeliumController_ResetArtistFilter(This)	\
    ( (This)->lpVtbl -> ResetArtistFilter(This) )

#define IHeliumController_ResetAlbumFilter(This)	\
    ( (This)->lpVtbl -> ResetAlbumFilter(This) )

#define IHeliumController_ResetPublisherFilter(This)	\
    ( (This)->lpVtbl -> ResetPublisherFilter(This) )

#define IHeliumController_FavArtList_SortByName(This,Ascending)	\
    ( (This)->lpVtbl -> FavArtList_SortByName(This,Ascending) )

#define IHeliumController_FavArtList_SortByCount(This,Ascending)	\
    ( (This)->lpVtbl -> FavArtList_SortByCount(This,Ascending) )

#define IHeliumController_FavArtList_SortByFormed(This,Ascending)	\
    ( (This)->lpVtbl -> FavArtList_SortByFormed(This,Ascending) )

#define IHeliumController_FavArtList_SortByDisbanded(This,Ascending)	\
    ( (This)->lpVtbl -> FavArtList_SortByDisbanded(This,Ascending) )

#define IHeliumController_FavAlbList_SortByName(This,Ascending)	\
    ( (This)->lpVtbl -> FavAlbList_SortByName(This,Ascending) )

#define IHeliumController_FavAlbList_SortByArtist(This,Ascending)	\
    ( (This)->lpVtbl -> FavAlbList_SortByArtist(This,Ascending) )

#define IHeliumController_FavAlbList_SortByRelType(This,Ascending)	\
    ( (This)->lpVtbl -> FavAlbList_SortByRelType(This,Ascending) )

#define IHeliumController_FavAlbList_SortByItems(This,Ascending)	\
    ( (This)->lpVtbl -> FavAlbList_SortByItems(This,Ascending) )

#define IHeliumController_FavAlbList_SortByRating(This,Ascending)	\
    ( (This)->lpVtbl -> FavAlbList_SortByRating(This,Ascending) )

#define IHeliumController_FavAlbList_SortByYear(This,Ascending)	\
    ( (This)->lpVtbl -> FavAlbList_SortByYear(This,Ascending) )

#define IHeliumController_FavTrkList_SortByArtist(This,Ascending)	\
    ( (This)->lpVtbl -> FavTrkList_SortByArtist(This,Ascending) )

#define IHeliumController_FavTrkList_SortByTitle(This,Ascending)	\
    ( (This)->lpVtbl -> FavTrkList_SortByTitle(This,Ascending) )

#define IHeliumController_FavTrkList_SortByYear(This,Ascending)	\
    ( (This)->lpVtbl -> FavTrkList_SortByYear(This,Ascending) )

#define IHeliumController_FavTrkList_SortByRating(This,Ascending)	\
    ( (This)->lpVtbl -> FavTrkList_SortByRating(This,Ascending) )

#define IHeliumController_FavTrkList_SortByPlayed(This,Ascending)	\
    ( (This)->lpVtbl -> FavTrkList_SortByPlayed(This,Ascending) )

#define IHeliumController_FavTrkList_SortByLength(This,Ascending)	\
    ( (This)->lpVtbl -> FavTrkList_SortByLength(This,Ascending) )

#define IHeliumController_PublisherList_SortByCountry(This,Ascending)	\
    ( (This)->lpVtbl -> PublisherList_SortByCountry(This,Ascending) )

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ShowFavouriteTracks_Proxy(
    IHeliumController * This);


void __RPC_STUB IHeliumController_ShowFavouriteTracks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ShowFavArtistsEx_Proxy(
    IHeliumController * This,
    /* [in] */ long APage);


void __RPC_STUB IHeliumController_ShowFavArtistsEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ShowFavAlbumsEx_Proxy(
    IHeliumController * This,
    /* [in] */ long APage);


void __RPC_STUB IHeliumController_ShowFavAlbumsEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ShowFavTracksEx_Proxy(
    IHeliumController * This,
    /* [in] */ long APage);


void __RPC_STUB IHeliumController_ShowFavTracksEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ShowRecentAlbumsEx_Proxy(
    IHeliumController * This,
    /* [in] */ long APage);


void __RPC_STUB IHeliumController_ShowRecentAlbumsEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ShowAlbumDetailsEx_Proxy(
    IHeliumController * This,
    /* [in] */ long APage,
    /* [in] */ long AReleaseTypeFilter);


void __RPC_STUB IHeliumController_ShowAlbumDetailsEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ShowArtistDetailsEx_Proxy(
    IHeliumController * This,
    /* [in] */ long APage,
    /* [in] */ long AArtistFilter);


void __RPC_STUB IHeliumController_ShowArtistDetailsEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ShowPublisherDetailsEx_Proxy(
    IHeliumController * This,
    /* [in] */ long APage,
    /* [in] */ long APublisherFilter);


void __RPC_STUB IHeliumController_ShowPublisherDetailsEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchArtistPager_Proxy(
    IHeliumController * This,
    /* [in] */ long APage,
    /* [retval][out] */ BSTR *AResult);


void __RPC_STUB IHeliumController_SearchArtistPager_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchAlbumPager_Proxy(
    IHeliumController * This,
    /* [in] */ long APage,
    /* [retval][out] */ BSTR *AResult);


void __RPC_STUB IHeliumController_SearchAlbumPager_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchPublisherPager_Proxy(
    IHeliumController * This,
    /* [in] */ long APage,
    /* [retval][out] */ BSTR *AResult);


void __RPC_STUB IHeliumController_SearchPublisherPager_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchGenrePager_Proxy(
    IHeliumController * This,
    /* [in] */ long APage,
    /* [retval][out] */ BSTR *AResult);


void __RPC_STUB IHeliumController_SearchGenrePager_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchTrackPager_Proxy(
    IHeliumController * This,
    /* [in] */ long APage,
    /* [retval][out] */ BSTR *AResult);


void __RPC_STUB IHeliumController_SearchTrackPager_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ManageGenres_Proxy(
    IHeliumController * This);


void __RPC_STUB IHeliumController_ManageGenres_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ShowChart_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AChartType,
    /* [in] */ BSTR ADate);


void __RPC_STUB IHeliumController_ShowChart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ShowCharts_Proxy(
    IHeliumController * This);


void __RPC_STUB IHeliumController_ShowCharts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ArtistList_SortByName_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_ArtistList_SortByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ArtistList_SortByCountry_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_ArtistList_SortByCountry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ArtistList_SortByCount_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_ArtistList_SortByCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_AlbumList_SortByName_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_AlbumList_SortByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_AlbumList_SortByArtist_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_AlbumList_SortByArtist_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_AlbumList_SortByCount_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_AlbumList_SortByCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_AlbumList_SortByLength_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_AlbumList_SortByLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_AlbumList_SortByYear_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_AlbumList_SortByYear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_AlbumList_SortByReleaseType_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_AlbumList_SortByReleaseType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_AlbumList_SortByRating_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_AlbumList_SortByRating_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SetArtistAsFavourite_Proxy(
    IHeliumController * This,
    /* [in] */ long AIsFav,
    /* [in] */ long AArtistID);


void __RPC_STUB IHeliumController_SetArtistAsFavourite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SetAlbumAsFavourite_Proxy(
    IHeliumController * This,
    /* [in] */ long AIsFav,
    /* [in] */ long AAlbumID);


void __RPC_STUB IHeliumController_SetAlbumAsFavourite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ArtistList_SortByFormed_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_ArtistList_SortByFormed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ArtistList_SortByDisbanded_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_ArtistList_SortByDisbanded_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchArtistList_SortByName_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchArtistList_SortByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchArtistList_SortByCountry_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchArtistList_SortByCountry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchArtistList_SortByCount_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchArtistList_SortByCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchArtistList_SortByFormed_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchArtistList_SortByFormed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchArtistList_SortByDisbanded_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchArtistList_SortByDisbanded_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchAlbumList_SortByName_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchAlbumList_SortByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchAlbumList_SortByArtist_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchAlbumList_SortByArtist_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchAlbumList_SortByCount_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchAlbumList_SortByCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchAlbumList_SortByLength_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchAlbumList_SortByLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchAlbumList_SortByYear_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchAlbumList_SortByYear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchAlbumList_SortByReleaseType_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchAlbumList_SortByReleaseType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchAlbumList_SortByRating_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchAlbumList_SortByRating_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_DiscoverArtist_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AArtist);


void __RPC_STUB IHeliumController_DiscoverArtist_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_DiscoverArtist_Ajax_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AArtist,
    /* [in] */ BSTR AXML,
    /* [retval][out] */ BSTR *AResult);


void __RPC_STUB IHeliumController_DiscoverArtist_Ajax_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_DiscoverArtistMain_Ajax_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AArtist,
    /* [retval][out] */ BSTR *AResult);


void __RPC_STUB IHeliumController_DiscoverArtistMain_Ajax_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_AddToHistory_Proxy(
    IHeliumController * This,
    /* [in] */ long AType,
    /* [in] */ BSTR AParam1,
    /* [in] */ long AParam2);


void __RPC_STUB IHeliumController_AddToHistory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_GetSimilarArtistCountForArtist_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AArtist,
    /* [retval][out] */ long *AResult);


void __RPC_STUB IHeliumController_GetSimilarArtistCountForArtist_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_GetDiscoverArtistTrackList_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AArtist,
    /* [in] */ BSTR AID,
    /* [retval][out] */ BSTR *AResult);


void __RPC_STUB IHeliumController_GetDiscoverArtistTrackList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_AddAlbumToPlaylist_Proxy(
    IHeliumController * This,
    /* [in] */ long AAlbumID);


void __RPC_STUB IHeliumController_AddAlbumToPlaylist_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_AddArtistToPlaylist_Proxy(
    IHeliumController * This,
    /* [in] */ long AArtistID);


void __RPC_STUB IHeliumController_AddArtistToPlaylist_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SetTrackAsFavourite_Proxy(
    IHeliumController * This,
    /* [in] */ long AIsFav,
    /* [in] */ long ADetailID);


void __RPC_STUB IHeliumController_SetTrackAsFavourite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_DiscoverSimilarTracks_Proxy(
    IHeliumController * This,
    /* [in] */ long ADetailID);


void __RPC_STUB IHeliumController_DiscoverSimilarTracks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_DiscoverTrack_Ajax_Proxy(
    IHeliumController * This,
    /* [in] */ long ADetailID,
    /* [in] */ BSTR AXML,
    /* [retval][out] */ BSTR *AResult);


void __RPC_STUB IHeliumController_DiscoverTrack_Ajax_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_DiscoverTrackMain_Ajax_Proxy(
    IHeliumController * This,
    /* [in] */ long ADetailID,
    /* [retval][out] */ BSTR *AResult);


void __RPC_STUB IHeliumController_DiscoverTrackMain_Ajax_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_EnqueueLastByID_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AIDList);


void __RPC_STUB IHeliumController_EnqueueLastByID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_EnqueueNextByID_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AIDList);


void __RPC_STUB IHeliumController_EnqueueNextByID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_EnqueueAndPlay_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AIDList);


void __RPC_STUB IHeliumController_EnqueueAndPlay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchTrackList_SortByTitle_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchTrackList_SortByTitle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchTrackList_SortByArtist_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchTrackList_SortByArtist_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchTrackList_SortByAlbum_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchTrackList_SortByAlbum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchTrackList_SortByYear_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchTrackList_SortByYear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchTrackList_SortByLength_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchTrackList_SortByLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SearchTrackList_SortByRating_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_SearchTrackList_SortByRating_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ViewOnlineAlbum_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AAlbumID);


void __RPC_STUB IHeliumController_ViewOnlineAlbum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ViewOnlineArtist_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AArtistID);


void __RPC_STUB IHeliumController_ViewOnlineArtist_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_PlayFileFromUrl_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AURL,
    /* [in] */ BSTR ATitle);


void __RPC_STUB IHeliumController_PlayFileFromUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_PlayFilesFromList_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AIDList);


void __RPC_STUB IHeliumController_PlayFilesFromList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ShowFavouriteRoot_Proxy(
    IHeliumController * This);


void __RPC_STUB IHeliumController_ShowFavouriteRoot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ShowYearRoot_Proxy(
    IHeliumController * This);


void __RPC_STUB IHeliumController_ShowYearRoot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_AddFileToPlaylist_Proxy(
    IHeliumController * This,
    /* [in] */ long ADetailID);


void __RPC_STUB IHeliumController_AddFileToPlaylist_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_DownloadAlbumPictureByID_Proxy(
    IHeliumController * This,
    /* [in] */ long AAlbumID);


void __RPC_STUB IHeliumController_DownloadAlbumPictureByID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_DownloadArtistInfoByID_Proxy(
    IHeliumController * This,
    /* [in] */ long AArtistID);


void __RPC_STUB IHeliumController_DownloadArtistInfoByID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_DownloadArtistPictureByID_Proxy(
    IHeliumController * This,
    /* [in] */ long AID);


void __RPC_STUB IHeliumController_DownloadArtistPictureByID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_SetActiveTabIndex_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR ATabIndex);


void __RPC_STUB IHeliumController_SetActiveTabIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ArtistList_FilterByChar_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AChar);


void __RPC_STUB IHeliumController_ArtistList_FilterByChar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_AlbumList_FilterByChar_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AChar);


void __RPC_STUB IHeliumController_AlbumList_FilterByChar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavAlbumList_FilterByChar_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AChar);


void __RPC_STUB IHeliumController_FavAlbumList_FilterByChar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavArtistList_FilterByChar_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AChar);


void __RPC_STUB IHeliumController_FavArtistList_FilterByChar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavTrackList_FilterByChar_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AChar);


void __RPC_STUB IHeliumController_FavTrackList_FilterByChar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_PublisherList_FilterByChar_Proxy(
    IHeliumController * This,
    /* [in] */ BSTR AChar);


void __RPC_STUB IHeliumController_PublisherList_FilterByChar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_PublisherList_SortByName_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_PublisherList_SortByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_PublisherList_SortByCount_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_PublisherList_SortByCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_AddUpdateArtistPicture_Proxy(
    IHeliumController * This,
    /* [in] */ long AArtistID);


void __RPC_STUB IHeliumController_AddUpdateArtistPicture_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_AddUpdatePublisherPicture_Proxy(
    IHeliumController * This,
    /* [in] */ long APublisherId);


void __RPC_STUB IHeliumController_AddUpdatePublisherPicture_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ShowAlbumArtistRoot_Proxy(
    IHeliumController * This);


void __RPC_STUB IHeliumController_ShowAlbumArtistRoot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ShowPlaylistRoot_Proxy(
    IHeliumController * This);


void __RPC_STUB IHeliumController_ShowPlaylistRoot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ExpandPlsFolder_Proxy(
    IHeliumController * This,
    /* [in] */ long AFolderId);


void __RPC_STUB IHeliumController_ExpandPlsFolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ShowPlaylist_Proxy(
    IHeliumController * This,
    /* [in] */ long APlaylistId);


void __RPC_STUB IHeliumController_ShowPlaylist_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_PlayPlaylist_Proxy(
    IHeliumController * This,
    /* [in] */ long APlaylistId);


void __RPC_STUB IHeliumController_PlayPlaylist_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_EnqueuePlaylistNext_Proxy(
    IHeliumController * This,
    /* [in] */ long APlaylistId);


void __RPC_STUB IHeliumController_EnqueuePlaylistNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_EnqueuePlaylistLast_Proxy(
    IHeliumController * This,
    /* [in] */ long APlaylistId);


void __RPC_STUB IHeliumController_EnqueuePlaylistLast_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ResetArtistFilter_Proxy(
    IHeliumController * This);


void __RPC_STUB IHeliumController_ResetArtistFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ResetAlbumFilter_Proxy(
    IHeliumController * This);


void __RPC_STUB IHeliumController_ResetAlbumFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_ResetPublisherFilter_Proxy(
    IHeliumController * This);


void __RPC_STUB IHeliumController_ResetPublisherFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavArtList_SortByName_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavArtList_SortByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavArtList_SortByCount_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavArtList_SortByCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavArtList_SortByFormed_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavArtList_SortByFormed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavArtList_SortByDisbanded_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavArtList_SortByDisbanded_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavAlbList_SortByName_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavAlbList_SortByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavAlbList_SortByArtist_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavAlbList_SortByArtist_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavAlbList_SortByRelType_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavAlbList_SortByRelType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavAlbList_SortByItems_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavAlbList_SortByItems_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavAlbList_SortByRating_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavAlbList_SortByRating_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavAlbList_SortByYear_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavAlbList_SortByYear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavTrkList_SortByArtist_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavTrkList_SortByArtist_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavTrkList_SortByTitle_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavTrkList_SortByTitle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavTrkList_SortByYear_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavTrkList_SortByYear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavTrkList_SortByRating_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavTrkList_SortByRating_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavTrkList_SortByPlayed_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavTrkList_SortByPlayed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_FavTrkList_SortByLength_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_FavTrkList_SortByLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHeliumController_PublisherList_SortByCountry_Proxy(
    IHeliumController * This,
    /* [in] */ long Ascending);


void __RPC_STUB IHeliumController_PublisherList_SortByCountry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHeliumController_INTERFACE_DEFINED__ */


#ifndef __IHMMPlayMusicHandler_INTERFACE_DEFINED__
#define __IHMMPlayMusicHandler_INTERFACE_DEFINED__

/* interface IHMMPlayMusicHandler */
/* [object][oleautomation][dual][version][uuid] */


EXTERN_C const IID IID_IHMMPlayMusicHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("42AB73DE-F00B-466B-95B1-F0ED8C555A15")
    IHMMPlayMusicHandler : public IUnknown
    {
    public:
    };


#else 	/* C style interface */

    typedef struct IHMMPlayMusicHandlerVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IHMMPlayMusicHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */
            _COM_Outptr_  void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IHMMPlayMusicHandler * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            IHMMPlayMusicHandler * This);

        END_INTERFACE
    } IHMMPlayMusicHandlerVtbl;

    interface IHMMPlayMusicHandler
    {
        CONST_VTBL struct IHMMPlayMusicHandlerVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define IHMMPlayMusicHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define IHMMPlayMusicHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )

#define IHMMPlayMusicHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHMMPlayMusicHandler_INTERFACE_DEFINED__ */


#ifndef __IHMMRipAudioCDHandler_INTERFACE_DEFINED__
#define __IHMMRipAudioCDHandler_INTERFACE_DEFINED__

/* interface IHMMRipAudioCDHandler */
/* [object][oleautomation][dual][version][uuid] */


EXTERN_C const IID IID_IHMMRipAudioCDHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0D25200D-EA7A-4888-89C8-604CA8B873FA")
    IHMMRipAudioCDHandler : public IUnknown
    {
    public:
    };


#else 	/* C style interface */

    typedef struct IHMMRipAudioCDHandlerVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IHMMRipAudioCDHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */
            _COM_Outptr_  void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IHMMRipAudioCDHandler * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            IHMMRipAudioCDHandler * This);

        END_INTERFACE
    } IHMMRipAudioCDHandlerVtbl;

    interface IHMMRipAudioCDHandler
    {
        CONST_VTBL struct IHMMRipAudioCDHandlerVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define IHMMRipAudioCDHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define IHMMRipAudioCDHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )

#define IHMMRipAudioCDHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHMMRipAudioCDHandler_INTERFACE_DEFINED__ */


#ifndef __IHMMAddToDatabaseHandler_INTERFACE_DEFINED__
#define __IHMMAddToDatabaseHandler_INTERFACE_DEFINED__

/* interface IHMMAddToDatabaseHandler */
/* [object][oleautomation][dual][version][uuid] */


EXTERN_C const IID IID_IHMMAddToDatabaseHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("9819E1E4-D6B4-4EEB-BC13-5A575620FAC6")
    IHMMAddToDatabaseHandler : public IUnknown
    {
    public:
    };


#else 	/* C style interface */

    typedef struct IHMMAddToDatabaseHandlerVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IHMMAddToDatabaseHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */
            _COM_Outptr_  void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IHMMAddToDatabaseHandler * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            IHMMAddToDatabaseHandler * This);

        END_INTERFACE
    } IHMMAddToDatabaseHandlerVtbl;

    interface IHMMAddToDatabaseHandler
    {
        CONST_VTBL struct IHMMAddToDatabaseHandlerVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define IHMMAddToDatabaseHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define IHMMAddToDatabaseHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )

#define IHMMAddToDatabaseHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHMMAddToDatabaseHandler_INTERFACE_DEFINED__ */


#ifndef __IHMMMTPHandler_INTERFACE_DEFINED__
#define __IHMMMTPHandler_INTERFACE_DEFINED__

/* interface IHMMMTPHandler */
/* [object][oleautomation][dual][version][uuid] */


EXTERN_C const IID IID_IHMMMTPHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("56AE5B8C-0D2E-491B-A5DC-7E6F7ED65177")
    IHMMMTPHandler : public IUnknown
    {
    public:
    };


#else 	/* C style interface */

    typedef struct IHMMMTPHandlerVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IHMMMTPHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */
            _COM_Outptr_  void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IHMMMTPHandler * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            IHMMMTPHandler * This);

        END_INTERFACE
    } IHMMMTPHandlerVtbl;

    interface IHMMMTPHandler
    {
        CONST_VTBL struct IHMMMTPHandlerVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define IHMMMTPHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define IHMMMTPHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )

#define IHMMMTPHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHMMMTPHandler_INTERFACE_DEFINED__ */


#ifndef __ICurrentTrack_INTERFACE_DEFINED__
#define __ICurrentTrack_INTERFACE_DEFINED__

/* interface ICurrentTrack */
/* [object][oleautomation][dual][version][uuid] */


EXTERN_C const IID IID_ICurrentTrack;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("BB595088-474F-43E6-9C21-F3A65B8B5298")
    ICurrentTrack : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Artist(
            /* [retval][out] */ BSTR *Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Title(
            /* [retval][out] */ BSTR *Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Duration(
            /* [retval][out] */ long *Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Image(
            /* [retval][out] */ BSTR *Value) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Populate( void) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Album(
            /* [retval][out] */ BSTR *Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Rating(
            /* [retval][out] */ long *Value) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XMLData(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavouriteXMLData(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ArtistXMLData(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AlbumXMLData(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LyricsXMLData(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FavouritePage(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LyricsPage(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SuggestedTracksPage(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AlbumPage(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ArtistPage(
            /* [retval][out] */ BSTR *AResult) = 0;

    };


#else 	/* C style interface */

    typedef struct ICurrentTrackVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICurrentTrack * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */
            _COM_Outptr_  void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICurrentTrack * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            ICurrentTrack * This);

        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ICurrentTrack * This,
            /* [out] */ UINT *pctinfo);

        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ICurrentTrack * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);

        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ICurrentTrack * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);

        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICurrentTrack * This,
            /* [annotation][in] */
            _In_  DISPID dispIdMember,
            /* [annotation][in] */
            _In_  REFIID riid,
            /* [annotation][in] */
            _In_  LCID lcid,
            /* [annotation][in] */
            _In_  WORD wFlags,
            /* [annotation][out][in] */
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */
            _Out_opt_  UINT *puArgErr);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Artist )(
            ICurrentTrack * This,
            /* [retval][out] */ BSTR *Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )(
            ICurrentTrack * This,
            /* [retval][out] */ BSTR *Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )(
            ICurrentTrack * This,
            /* [retval][out] */ long *Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Image )(
            ICurrentTrack * This,
            /* [retval][out] */ BSTR *Value);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Populate )(
            ICurrentTrack * This);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Album )(
            ICurrentTrack * This,
            /* [retval][out] */ BSTR *Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Rating )(
            ICurrentTrack * This,
            /* [retval][out] */ long *Value);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XMLData )(
            ICurrentTrack * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavouriteXMLData )(
            ICurrentTrack * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ArtistXMLData )(
            ICurrentTrack * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AlbumXMLData )(
            ICurrentTrack * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LyricsXMLData )(
            ICurrentTrack * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FavouritePage )(
            ICurrentTrack * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LyricsPage )(
            ICurrentTrack * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SuggestedTracksPage )(
            ICurrentTrack * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AlbumPage )(
            ICurrentTrack * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ArtistPage )(
            ICurrentTrack * This,
            /* [retval][out] */ BSTR *AResult);

        END_INTERFACE
    } ICurrentTrackVtbl;

    interface ICurrentTrack
    {
        CONST_VTBL struct ICurrentTrackVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define ICurrentTrack_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define ICurrentTrack_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )

#define ICurrentTrack_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )


#define ICurrentTrack_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )

#define ICurrentTrack_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )

#define ICurrentTrack_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )

#define ICurrentTrack_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )


#define ICurrentTrack_get_Artist(This,Value)	\
    ( (This)->lpVtbl -> get_Artist(This,Value) )

#define ICurrentTrack_get_Title(This,Value)	\
    ( (This)->lpVtbl -> get_Title(This,Value) )

#define ICurrentTrack_get_Duration(This,Value)	\
    ( (This)->lpVtbl -> get_Duration(This,Value) )

#define ICurrentTrack_get_Image(This,Value)	\
    ( (This)->lpVtbl -> get_Image(This,Value) )

#define ICurrentTrack_Populate(This)	\
    ( (This)->lpVtbl -> Populate(This) )

#define ICurrentTrack_get_Album(This,Value)	\
    ( (This)->lpVtbl -> get_Album(This,Value) )

#define ICurrentTrack_get_Rating(This,Value)	\
    ( (This)->lpVtbl -> get_Rating(This,Value) )

#define ICurrentTrack_XMLData(This,AResult)	\
    ( (This)->lpVtbl -> XMLData(This,AResult) )

#define ICurrentTrack_FavouriteXMLData(This,AResult)	\
    ( (This)->lpVtbl -> FavouriteXMLData(This,AResult) )

#define ICurrentTrack_ArtistXMLData(This,AResult)	\
    ( (This)->lpVtbl -> ArtistXMLData(This,AResult) )

#define ICurrentTrack_AlbumXMLData(This,AResult)	\
    ( (This)->lpVtbl -> AlbumXMLData(This,AResult) )

#define ICurrentTrack_LyricsXMLData(This,AResult)	\
    ( (This)->lpVtbl -> LyricsXMLData(This,AResult) )

#define ICurrentTrack_FavouritePage(This,AResult)	\
    ( (This)->lpVtbl -> FavouritePage(This,AResult) )

#define ICurrentTrack_LyricsPage(This,AResult)	\
    ( (This)->lpVtbl -> LyricsPage(This,AResult) )

#define ICurrentTrack_SuggestedTracksPage(This,AResult)	\
    ( (This)->lpVtbl -> SuggestedTracksPage(This,AResult) )

#define ICurrentTrack_AlbumPage(This,AResult)	\
    ( (This)->lpVtbl -> AlbumPage(This,AResult) )

#define ICurrentTrack_ArtistPage(This,AResult)	\
    ( (This)->lpVtbl -> ArtistPage(This,AResult) )

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICurrentTrack_INTERFACE_DEFINED__ */


#ifndef __IHMMActivePlaylistTrack_INTERFACE_DEFINED__
#define __IHMMActivePlaylistTrack_INTERFACE_DEFINED__

/* interface IHMMActivePlaylistTrack */
/* [object][oleautomation][dual][version][uuid] */


EXTERN_C const IID IID_IHMMActivePlaylistTrack;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("30E529D0-63F2-4104-A56C-9A40448014A8")
    IHMMActivePlaylistTrack : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Index(
            /* [retval][out] */ long *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Index(
            /* [in] */ long Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Artist(
            /* [retval][out] */ BSTR *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Artist(
            /* [in] */ BSTR Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Title(
            /* [retval][out] */ BSTR *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Title(
            /* [in] */ BSTR Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Length(
            /* [retval][out] */ long *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Length(
            /* [in] */ long Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DatabaseID(
            /* [retval][out] */ long *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DatabaseID(
            /* [in] */ long Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Filename(
            /* [retval][out] */ BSTR *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Filename(
            /* [in] */ BSTR Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Rating(
            /* [retval][out] */ long *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Rating(
            /* [in] */ long Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Exists(
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Exists(
            /* [in] */ VARIANT_BOOL Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BPM(
            /* [retval][out] */ long *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_BPM(
            /* [in] */ long Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Genre(
            /* [retval][out] */ BSTR *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Genre(
            /* [in] */ BSTR Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Album(
            /* [retval][out] */ BSTR *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Album(
            /* [in] */ BSTR Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RecordingYear(
            /* [retval][out] */ long *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RecordingYear(
            /* [in] */ long Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ReleaseYear(
            /* [retval][out] */ long *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ReleaseYear(
            /* [in] */ long Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Popularity(
            /* [retval][out] */ long *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Popularity(
            /* [in] */ long Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Situation(
            /* [retval][out] */ BSTR *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Situation(
            /* [in] */ BSTR Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Mood(
            /* [retval][out] */ BSTR *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Mood(
            /* [in] */ BSTR Value) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ToXML(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Publisher(
            /* [retval][out] */ BSTR *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Publisher(
            /* [in] */ BSTR Value) = 0;

        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FormatString(
            /* [retval][out] */ BSTR *Value) = 0;

        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_FormatString(
            /* [in] */ BSTR Value) = 0;

    };


#else 	/* C style interface */

    typedef struct IHMMActivePlaylistTrackVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */
            _COM_Outptr_  void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IHMMActivePlaylistTrack * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            IHMMActivePlaylistTrack * This);

        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IHMMActivePlaylistTrack * This,
            /* [out] */ UINT *pctinfo);

        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);

        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);

        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IHMMActivePlaylistTrack * This,
            /* [annotation][in] */
            _In_  DISPID dispIdMember,
            /* [annotation][in] */
            _In_  REFIID riid,
            /* [annotation][in] */
            _In_  LCID lcid,
            /* [annotation][in] */
            _In_  WORD wFlags,
            /* [annotation][out][in] */
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */
            _Out_opt_  UINT *puArgErr);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Index )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ long *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Index )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ long Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Artist )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ BSTR *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Artist )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ BSTR Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ BSTR *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Title )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ BSTR Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Length )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ long *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Length )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ long Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DatabaseID )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ long *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DatabaseID )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ long Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Filename )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ BSTR *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Filename )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ BSTR Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Rating )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ long *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Rating )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ long Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Exists )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ VARIANT_BOOL *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Exists )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ VARIANT_BOOL Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BPM )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ long *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BPM )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ long Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Genre )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ BSTR *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Genre )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ BSTR Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Album )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ BSTR *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Album )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ BSTR Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecordingYear )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ long *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RecordingYear )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ long Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReleaseYear )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ long *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ReleaseYear )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ long Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Popularity )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ long *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Popularity )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ long Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Situation )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ BSTR *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Situation )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ BSTR Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Mood )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ BSTR *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Mood )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ BSTR Value);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ToXML )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ BSTR *AResult);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Publisher )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ BSTR *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Publisher )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ BSTR Value);

        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FormatString )(
            IHMMActivePlaylistTrack * This,
            /* [retval][out] */ BSTR *Value);

        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FormatString )(
            IHMMActivePlaylistTrack * This,
            /* [in] */ BSTR Value);

        END_INTERFACE
    } IHMMActivePlaylistTrackVtbl;

    interface IHMMActivePlaylistTrack
    {
        CONST_VTBL struct IHMMActivePlaylistTrackVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define IHMMActivePlaylistTrack_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define IHMMActivePlaylistTrack_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )

#define IHMMActivePlaylistTrack_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )


#define IHMMActivePlaylistTrack_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )

#define IHMMActivePlaylistTrack_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )

#define IHMMActivePlaylistTrack_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )

#define IHMMActivePlaylistTrack_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )


#define IHMMActivePlaylistTrack_get_Index(This,Value)	\
    ( (This)->lpVtbl -> get_Index(This,Value) )

#define IHMMActivePlaylistTrack_put_Index(This,Value)	\
    ( (This)->lpVtbl -> put_Index(This,Value) )

#define IHMMActivePlaylistTrack_get_Artist(This,Value)	\
    ( (This)->lpVtbl -> get_Artist(This,Value) )

#define IHMMActivePlaylistTrack_put_Artist(This,Value)	\
    ( (This)->lpVtbl -> put_Artist(This,Value) )

#define IHMMActivePlaylistTrack_get_Title(This,Value)	\
    ( (This)->lpVtbl -> get_Title(This,Value) )

#define IHMMActivePlaylistTrack_put_Title(This,Value)	\
    ( (This)->lpVtbl -> put_Title(This,Value) )

#define IHMMActivePlaylistTrack_get_Length(This,Value)	\
    ( (This)->lpVtbl -> get_Length(This,Value) )

#define IHMMActivePlaylistTrack_put_Length(This,Value)	\
    ( (This)->lpVtbl -> put_Length(This,Value) )

#define IHMMActivePlaylistTrack_get_DatabaseID(This,Value)	\
    ( (This)->lpVtbl -> get_DatabaseID(This,Value) )

#define IHMMActivePlaylistTrack_put_DatabaseID(This,Value)	\
    ( (This)->lpVtbl -> put_DatabaseID(This,Value) )

#define IHMMActivePlaylistTrack_get_Filename(This,Value)	\
    ( (This)->lpVtbl -> get_Filename(This,Value) )

#define IHMMActivePlaylistTrack_put_Filename(This,Value)	\
    ( (This)->lpVtbl -> put_Filename(This,Value) )

#define IHMMActivePlaylistTrack_get_Rating(This,Value)	\
    ( (This)->lpVtbl -> get_Rating(This,Value) )

#define IHMMActivePlaylistTrack_put_Rating(This,Value)	\
    ( (This)->lpVtbl -> put_Rating(This,Value) )

#define IHMMActivePlaylistTrack_get_Exists(This,Value)	\
    ( (This)->lpVtbl -> get_Exists(This,Value) )

#define IHMMActivePlaylistTrack_put_Exists(This,Value)	\
    ( (This)->lpVtbl -> put_Exists(This,Value) )

#define IHMMActivePlaylistTrack_get_BPM(This,Value)	\
    ( (This)->lpVtbl -> get_BPM(This,Value) )

#define IHMMActivePlaylistTrack_put_BPM(This,Value)	\
    ( (This)->lpVtbl -> put_BPM(This,Value) )

#define IHMMActivePlaylistTrack_get_Genre(This,Value)	\
    ( (This)->lpVtbl -> get_Genre(This,Value) )

#define IHMMActivePlaylistTrack_put_Genre(This,Value)	\
    ( (This)->lpVtbl -> put_Genre(This,Value) )

#define IHMMActivePlaylistTrack_get_Album(This,Value)	\
    ( (This)->lpVtbl -> get_Album(This,Value) )

#define IHMMActivePlaylistTrack_put_Album(This,Value)	\
    ( (This)->lpVtbl -> put_Album(This,Value) )

#define IHMMActivePlaylistTrack_get_RecordingYear(This,Value)	\
    ( (This)->lpVtbl -> get_RecordingYear(This,Value) )

#define IHMMActivePlaylistTrack_put_RecordingYear(This,Value)	\
    ( (This)->lpVtbl -> put_RecordingYear(This,Value) )

#define IHMMActivePlaylistTrack_get_ReleaseYear(This,Value)	\
    ( (This)->lpVtbl -> get_ReleaseYear(This,Value) )

#define IHMMActivePlaylistTrack_put_ReleaseYear(This,Value)	\
    ( (This)->lpVtbl -> put_ReleaseYear(This,Value) )

#define IHMMActivePlaylistTrack_get_Popularity(This,Value)	\
    ( (This)->lpVtbl -> get_Popularity(This,Value) )

#define IHMMActivePlaylistTrack_put_Popularity(This,Value)	\
    ( (This)->lpVtbl -> put_Popularity(This,Value) )

#define IHMMActivePlaylistTrack_get_Situation(This,Value)	\
    ( (This)->lpVtbl -> get_Situation(This,Value) )

#define IHMMActivePlaylistTrack_put_Situation(This,Value)	\
    ( (This)->lpVtbl -> put_Situation(This,Value) )

#define IHMMActivePlaylistTrack_get_Mood(This,Value)	\
    ( (This)->lpVtbl -> get_Mood(This,Value) )

#define IHMMActivePlaylistTrack_put_Mood(This,Value)	\
    ( (This)->lpVtbl -> put_Mood(This,Value) )

#define IHMMActivePlaylistTrack_ToXML(This,AResult)	\
    ( (This)->lpVtbl -> ToXML(This,AResult) )

#define IHMMActivePlaylistTrack_get_Publisher(This,Value)	\
    ( (This)->lpVtbl -> get_Publisher(This,Value) )

#define IHMMActivePlaylistTrack_put_Publisher(This,Value)	\
    ( (This)->lpVtbl -> put_Publisher(This,Value) )

#define IHMMActivePlaylistTrack_get_FormatString(This,Value)	\
    ( (This)->lpVtbl -> get_FormatString(This,Value) )

#define IHMMActivePlaylistTrack_put_FormatString(This,Value)	\
    ( (This)->lpVtbl -> put_FormatString(This,Value) )

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHMMActivePlaylistTrack_INTERFACE_DEFINED__ */


#ifndef __IHMMPlayQueueCOM_INTERFACE_DEFINED__
#define __IHMMPlayQueueCOM_INTERFACE_DEFINED__

/* interface IHMMPlayQueueCOM */
/* [object][oleautomation][dual][helpstring][uuid] */


EXTERN_C const IID IID_IHMMPlayQueueCOM;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("AABF8D9A-CEEB-4397-8A1A-FD5629481206")
    IHMMPlayQueueCOM : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetCount(
            /* [retval][out] */ long *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetActiveIndex(
            /* [retval][out] */ long *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetTrack(
            /* [in] */ long AIndex,
            /* [retval][out] */ IHMMActivePlaylistTrack **AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNowPlayingPicture(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlayIndex(
            /* [in] */ long AIndex) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetArtistInfoForActiveFile(
            /* [out] */ BSTR *ACountry,
            /* [out] */ BSTR *ABornName,
            /* [out] */ BSTR *AWebPage,
            /* [out] */ BSTR *ABiography,
            /* [out] */ long *AIsArtist,
            /* [out] */ BSTR *AArtistName,
            /* [out] */ long *AFormed,
            /* [out] */ long *ADisbanded,
            /* [retval][out] */ long *AArtistID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetActiveArtistPicture(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetSuggestedTracks(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetActiveDatabaseID(
            /* [retval][out] */ long *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFavouriteTracksFromArtist(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetDBFavouriteTracks(
            /* [retval][out] */ BSTR *AResult) = 0;

    };


#else 	/* C style interface */

    typedef struct IHMMPlayQueueCOMVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IHMMPlayQueueCOM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */
            _COM_Outptr_  void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IHMMPlayQueueCOM * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            IHMMPlayQueueCOM * This);

        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IHMMPlayQueueCOM * This,
            /* [out] */ UINT *pctinfo);

        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IHMMPlayQueueCOM * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);

        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IHMMPlayQueueCOM * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);

        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IHMMPlayQueueCOM * This,
            /* [annotation][in] */
            _In_  DISPID dispIdMember,
            /* [annotation][in] */
            _In_  REFIID riid,
            /* [annotation][in] */
            _In_  LCID lcid,
            /* [annotation][in] */
            _In_  WORD wFlags,
            /* [annotation][out][in] */
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */
            _Out_opt_  UINT *puArgErr);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IHMMPlayQueueCOM * This,
            /* [retval][out] */ long *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetActiveIndex )(
            IHMMPlayQueueCOM * This,
            /* [retval][out] */ long *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetTrack )(
            IHMMPlayQueueCOM * This,
            /* [in] */ long AIndex,
            /* [retval][out] */ IHMMActivePlaylistTrack **AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNowPlayingPicture )(
            IHMMPlayQueueCOM * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlayIndex )(
            IHMMPlayQueueCOM * This,
            /* [in] */ long AIndex);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetArtistInfoForActiveFile )(
            IHMMPlayQueueCOM * This,
            /* [out] */ BSTR *ACountry,
            /* [out] */ BSTR *ABornName,
            /* [out] */ BSTR *AWebPage,
            /* [out] */ BSTR *ABiography,
            /* [out] */ long *AIsArtist,
            /* [out] */ BSTR *AArtistName,
            /* [out] */ long *AFormed,
            /* [out] */ long *ADisbanded,
            /* [retval][out] */ long *AArtistID);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetActiveArtistPicture )(
            IHMMPlayQueueCOM * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetSuggestedTracks )(
            IHMMPlayQueueCOM * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetActiveDatabaseID )(
            IHMMPlayQueueCOM * This,
            /* [retval][out] */ long *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFavouriteTracksFromArtist )(
            IHMMPlayQueueCOM * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDBFavouriteTracks )(
            IHMMPlayQueueCOM * This,
            /* [retval][out] */ BSTR *AResult);

        END_INTERFACE
    } IHMMPlayQueueCOMVtbl;

    interface IHMMPlayQueueCOM
    {
        CONST_VTBL struct IHMMPlayQueueCOMVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define IHMMPlayQueueCOM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define IHMMPlayQueueCOM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )

#define IHMMPlayQueueCOM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )


#define IHMMPlayQueueCOM_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )

#define IHMMPlayQueueCOM_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )

#define IHMMPlayQueueCOM_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )

#define IHMMPlayQueueCOM_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )


#define IHMMPlayQueueCOM_GetCount(This,AResult)	\
    ( (This)->lpVtbl -> GetCount(This,AResult) )

#define IHMMPlayQueueCOM_GetActiveIndex(This,AResult)	\
    ( (This)->lpVtbl -> GetActiveIndex(This,AResult) )

#define IHMMPlayQueueCOM_GetTrack(This,AIndex,AResult)	\
    ( (This)->lpVtbl -> GetTrack(This,AIndex,AResult) )

#define IHMMPlayQueueCOM_GetNowPlayingPicture(This,AResult)	\
    ( (This)->lpVtbl -> GetNowPlayingPicture(This,AResult) )

#define IHMMPlayQueueCOM_PlayIndex(This,AIndex)	\
    ( (This)->lpVtbl -> PlayIndex(This,AIndex) )

#define IHMMPlayQueueCOM_GetArtistInfoForActiveFile(This,ACountry,ABornName,AWebPage,ABiography,AIsArtist,AArtistName,AFormed,ADisbanded,AArtistID)	\
    ( (This)->lpVtbl -> GetArtistInfoForActiveFile(This,ACountry,ABornName,AWebPage,ABiography,AIsArtist,AArtistName,AFormed,ADisbanded,AArtistID) )

#define IHMMPlayQueueCOM_GetActiveArtistPicture(This,AResult)	\
    ( (This)->lpVtbl -> GetActiveArtistPicture(This,AResult) )

#define IHMMPlayQueueCOM_GetSuggestedTracks(This,AResult)	\
    ( (This)->lpVtbl -> GetSuggestedTracks(This,AResult) )

#define IHMMPlayQueueCOM_GetActiveDatabaseID(This,AResult)	\
    ( (This)->lpVtbl -> GetActiveDatabaseID(This,AResult) )

#define IHMMPlayQueueCOM_GetFavouriteTracksFromArtist(This,AResult)	\
    ( (This)->lpVtbl -> GetFavouriteTracksFromArtist(This,AResult) )

#define IHMMPlayQueueCOM_GetDBFavouriteTracks(This,AResult)	\
    ( (This)->lpVtbl -> GetDBFavouriteTracks(This,AResult) )

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHMMPlayQueueCOM_INTERFACE_DEFINED__ */


#ifndef __IHMMPlaylistsCOM_INTERFACE_DEFINED__
#define __IHMMPlaylistsCOM_INTERFACE_DEFINED__

/* interface IHMMPlaylistsCOM */
/* [object][oleautomation][dual][helpstring][uuid] */


EXTERN_C const IID IID_IHMMPlaylistsCOM;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("06180A30-EA01-4CFC-9AAE-7B0C9E4F2437")
    IHMMPlaylistsCOM : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetCount(
            /* [retval][out] */ long *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetPlaylist(
            /* [in] */ long AIndex,
            /* [retval][out] */ IHMMPlaylistCOM **AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PlayPlaylist(
            /* [in] */ long AID) = 0;

    };


#else 	/* C style interface */

    typedef struct IHMMPlaylistsCOMVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IHMMPlaylistsCOM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */
            _COM_Outptr_  void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IHMMPlaylistsCOM * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            IHMMPlaylistsCOM * This);

        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IHMMPlaylistsCOM * This,
            /* [out] */ UINT *pctinfo);

        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IHMMPlaylistsCOM * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);

        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IHMMPlaylistsCOM * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);

        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IHMMPlaylistsCOM * This,
            /* [annotation][in] */
            _In_  DISPID dispIdMember,
            /* [annotation][in] */
            _In_  REFIID riid,
            /* [annotation][in] */
            _In_  LCID lcid,
            /* [annotation][in] */
            _In_  WORD wFlags,
            /* [annotation][out][in] */
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */
            _Out_opt_  UINT *puArgErr);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IHMMPlaylistsCOM * This,
            /* [retval][out] */ long *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetPlaylist )(
            IHMMPlaylistsCOM * This,
            /* [in] */ long AIndex,
            /* [retval][out] */ IHMMPlaylistCOM **AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PlayPlaylist )(
            IHMMPlaylistsCOM * This,
            /* [in] */ long AID);

        END_INTERFACE
    } IHMMPlaylistsCOMVtbl;

    interface IHMMPlaylistsCOM
    {
        CONST_VTBL struct IHMMPlaylistsCOMVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define IHMMPlaylistsCOM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define IHMMPlaylistsCOM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )

#define IHMMPlaylistsCOM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )


#define IHMMPlaylistsCOM_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )

#define IHMMPlaylistsCOM_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )

#define IHMMPlaylistsCOM_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )

#define IHMMPlaylistsCOM_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )


#define IHMMPlaylistsCOM_GetCount(This,AResult)	\
    ( (This)->lpVtbl -> GetCount(This,AResult) )

#define IHMMPlaylistsCOM_GetPlaylist(This,AIndex,AResult)	\
    ( (This)->lpVtbl -> GetPlaylist(This,AIndex,AResult) )

#define IHMMPlaylistsCOM_PlayPlaylist(This,AID)	\
    ( (This)->lpVtbl -> PlayPlaylist(This,AID) )

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHMMPlaylistsCOM_INTERFACE_DEFINED__ */


#ifndef __IHMMPlaylistCOM_INTERFACE_DEFINED__
#define __IHMMPlaylistCOM_INTERFACE_DEFINED__

/* interface IHMMPlaylistCOM */
/* [object][oleautomation][dual][helpstring][uuid] */


EXTERN_C const IID IID_IHMMPlaylistCOM;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("DEA60CA3-1FBF-42D4-9428-2246FCA14D5D")
    IHMMPlaylistCOM : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetName(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetCount(
            /* [retval][out] */ long *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetID(
            /* [retval][out] */ long *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetComment(
            /* [retval][out] */ BSTR *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetRating(
            /* [retval][out] */ long *AResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetLength(
            /* [retval][out] */ BSTR *AResult) = 0;

    };


#else 	/* C style interface */

    typedef struct IHMMPlaylistCOMVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IHMMPlaylistCOM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */
            _COM_Outptr_  void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IHMMPlaylistCOM * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            IHMMPlaylistCOM * This);

        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IHMMPlaylistCOM * This,
            /* [out] */ UINT *pctinfo);

        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IHMMPlaylistCOM * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);

        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IHMMPlaylistCOM * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);

        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IHMMPlaylistCOM * This,
            /* [annotation][in] */
            _In_  DISPID dispIdMember,
            /* [annotation][in] */
            _In_  REFIID riid,
            /* [annotation][in] */
            _In_  LCID lcid,
            /* [annotation][in] */
            _In_  WORD wFlags,
            /* [annotation][out][in] */
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */
            _Out_opt_  UINT *puArgErr);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetName )(
            IHMMPlaylistCOM * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IHMMPlaylistCOM * This,
            /* [retval][out] */ long *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetID )(
            IHMMPlaylistCOM * This,
            /* [retval][out] */ long *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetComment )(
            IHMMPlaylistCOM * This,
            /* [retval][out] */ BSTR *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetRating )(
            IHMMPlaylistCOM * This,
            /* [retval][out] */ long *AResult);

        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IHMMPlaylistCOM * This,
            /* [retval][out] */ BSTR *AResult);

        END_INTERFACE
    } IHMMPlaylistCOMVtbl;

    interface IHMMPlaylistCOM
    {
        CONST_VTBL struct IHMMPlaylistCOMVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define IHMMPlaylistCOM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define IHMMPlaylistCOM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )

#define IHMMPlaylistCOM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )


#define IHMMPlaylistCOM_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )

#define IHMMPlaylistCOM_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )

#define IHMMPlaylistCOM_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )

#define IHMMPlaylistCOM_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )


#define IHMMPlaylistCOM_GetName(This,AResult)	\
    ( (This)->lpVtbl -> GetName(This,AResult) )

#define IHMMPlaylistCOM_GetCount(This,AResult)	\
    ( (This)->lpVtbl -> GetCount(This,AResult) )

#define IHMMPlaylistCOM_GetID(This,AResult)	\
    ( (This)->lpVtbl -> GetID(This,AResult) )

#define IHMMPlaylistCOM_GetComment(This,AResult)	\
    ( (This)->lpVtbl -> GetComment(This,AResult) )

#define IHMMPlaylistCOM_GetRating(This,AResult)	\
    ( (This)->lpVtbl -> GetRating(This,AResult) )

#define IHMMPlaylistCOM_GetLength(This,AResult)	\
    ( (This)->lpVtbl -> GetLength(This,AResult) )

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHMMPlaylistCOM_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HeliumController;

#ifdef __cplusplus

class DECLSPEC_UUID("501558A6-E76F-42B0-B9D5-67141F6BD24F")
HeliumController;
#endif

EXTERN_C const CLSID CLSID_HMMPlayMusicHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("B0AD4BDA-BAED-4B27-B99C-A62345B439FF")
HMMPlayMusicHandler;
#endif

EXTERN_C const CLSID CLSID_HMMRipAudioCDHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("D78D6E8B-8BC0-457F-80B6-D94287756F87")
HMMRipAudioCDHandler;
#endif

EXTERN_C const CLSID CLSID_HMMAddToDatabaseHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("A1E14418-8893-45FC-A04A-82464BB1567A")
HMMAddToDatabaseHandler;
#endif

EXTERN_C const CLSID CLSID_HMMMTPHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("82C3D74B-776F-436A-9EC3-88AC68843063")
HMMMTPHandler;
#endif

EXTERN_C const CLSID CLSID_CurrentTrack;

#ifdef __cplusplus

class DECLSPEC_UUID("3EC059DC-BC8A-48AB-94E0-98F506866FB5")
CurrentTrack;
#endif

EXTERN_C const CLSID CLSID_HMMActivePlaylistTrack;

#ifdef __cplusplus

class DECLSPEC_UUID("07DA55B4-02F7-406A-BF7F-B4410FF7AC8F")
HMMActivePlaylistTrack;
#endif

EXTERN_C const CLSID CLSID_HMMPlayQueueCOM;

#ifdef __cplusplus

class DECLSPEC_UUID("F32386EC-12D2-4F03-B1E3-81A58F7BEAFC")
HMMPlayQueueCOM;
#endif

EXTERN_C const CLSID CLSID_HMMPlaylistsCOM;

#ifdef __cplusplus

class DECLSPEC_UUID("D3B6D8A8-8B0C-4252-A57B-19A7C804D651")
HMMPlaylistsCOM;
#endif

EXTERN_C const CLSID CLSID_HMMPlaylistCOM;

#ifdef __cplusplus

class DECLSPEC_UUID("D583706D-35D6-44B2-A739-7B8AF6487152")
HMMPlaylistCOM;
#endif
#endif /* __Helium8_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
