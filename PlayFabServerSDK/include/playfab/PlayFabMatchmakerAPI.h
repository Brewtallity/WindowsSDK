#ifndef PLAYFAB_MATCHMAKERAPI_H_
#define PLAYFAB_MATCHMAKERAPI_H_

#include "playfab/IHttpRequester.h"
#include "playfab/PlayFabError.h"
#include "playfab/PlayFabDataModels.h"
#include "playfab/PlayFabSettings.h"

#include <string>


namespace PlayFab
{
	typedef void(*AuthUserCallback)(AuthUserResponse& result, void* userData);
	typedef void(*PlayerJoinedCallback)(PlayerJoinedResponse& result, void* userData);
	typedef void(*PlayerLeftCallback)(PlayerLeftResponse& result, void* userData);
	typedef void(*StartGameCallback)(StartGameResponse& result, void* userData);
	typedef void(*UserInfoCallback)(UserInfoResponse& result, void* userData);
	
    
    class PlayFabMatchmakerAPI
    {
    public:
        PlayFabMatchmakerAPI();
        PlayFabMatchmakerAPI(IHttpRequester* requester, bool ownRequester);
        ~PlayFabMatchmakerAPI();

        IHttpRequester* GetRequester(bool relinquishOwnership = false);
        void Update();

        // ------------ Generated API calls
		
		void AuthUser(AuthUserRequest& request, AuthUserCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void PlayerJoined(PlayerJoinedRequest& request, PlayerJoinedCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void PlayerLeft(PlayerLeftRequest& request, PlayerLeftCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void StartGame(StartGameRequest& request, StartGameCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void UserInfo(UserInfoRequest& request, UserInfoCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
  

    private:

        // ------------ Generated result handlers
		
		static void OnAuthUserResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnPlayerJoinedResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnPlayerLeftResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnStartGameResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnUserInfoResult(int httpStatus, HttpRequest* request, void* userData);
		
 
        bool mOwnsRequester;
        IHttpRequester* mHttpRequester;
		
		
    };

};

#endif