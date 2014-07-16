#ifndef PLAYFAB_SERVERAPI_H_
#define PLAYFAB_SERVERAPI_H_

#include "playfab/IHttpRequester.h"
#include "playfab/PlayFabError.h"
#include "playfab/PlayFabDataModels.h"
#include "playfab/PlayFabSettings.h"

#include <string>


namespace PlayFab
{
	
    
    class PlayFabServerAPI
    {
    public:
		
		typedef void(*GetUserAccountInfoCallback)(GetUserAccountInfoResult& result, void* userData);
		typedef void(*GetUserDataCallback)(GetUserDataResult& result, void* userData);
		typedef void(*GetUserInternalDataCallback)(GetUserDataResult& result, void* userData);
		typedef void(*GetUserReadOnlyDataCallback)(GetUserDataResult& result, void* userData);
		typedef void(*UpdateUserDataCallback)(UpdateUserDataResult& result, void* userData);
		typedef void(*UpdateUserInternalDataCallback)(UpdateUserDataResult& result, void* userData);
		typedef void(*UpdateUserReadOnlyDataCallback)(UpdateUserDataResult& result, void* userData);
		typedef void(*GetCatalogItemsCallback)(GetCatalogItemsResult& result, void* userData);
		typedef void(*GetTitleDataCallback)(GetTitleDataResult& result, void* userData);
		typedef void(*SetTitleDataCallback)(SetTitleDataResult& result, void* userData);
		typedef void(*AddUserVirtualCurrencyCallback)(ModifyUserVirtualCurrencyResult& result, void* userData);
		typedef void(*GetUserInventoryCallback)(GetUserInventoryResult& result, void* userData);
		typedef void(*GrantItemsToUsersCallback)(GrantItemsToUsersResult& result, void* userData);
		typedef void(*SubtractUserVirtualCurrencyCallback)(ModifyUserVirtualCurrencyResult& result, void* userData);
		typedef void(*NotifyMatchmakerPlayerLeftCallback)(NotifyMatchmakerPlayerLeftResult& result, void* userData);
		typedef void(*RedeemMatchmakerTicketCallback)(RedeemMatchmakerTicketResult& result, void* userData);
		typedef void(*AwardSteamAchievementCallback)(AwardSteamAchievementResult& result, void* userData);
		
	
        PlayFabServerAPI();
        PlayFabServerAPI(IHttpRequester* requester, bool ownRequester);
        ~PlayFabServerAPI();

        IHttpRequester* GetRequester(bool relinquishOwnership = false);
        void Update();

        // ------------ Generated API calls
		
		void GetUserAccountInfo(GetUserAccountInfoRequest& request, GetUserAccountInfoCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetUserData(GetUserDataRequest& request, GetUserDataCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetUserInternalData(GetUserDataRequest& request, GetUserInternalDataCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetUserReadOnlyData(GetUserDataRequest& request, GetUserReadOnlyDataCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void UpdateUserData(UpdateUserDataRequest& request, UpdateUserDataCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void UpdateUserInternalData(UpdateUserDataRequest& request, UpdateUserInternalDataCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void UpdateUserReadOnlyData(UpdateUserDataRequest& request, UpdateUserReadOnlyDataCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetCatalogItems(GetCatalogItemsRequest& request, GetCatalogItemsCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetTitleData(GetTitleDataRequest& request, GetTitleDataCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void SetTitleData(SetTitleDataRequest& request, SetTitleDataCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void AddUserVirtualCurrency(AddUserVirtualCurrencyRequest& request, AddUserVirtualCurrencyCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetUserInventory(GetUserInventoryRequest& request, GetUserInventoryCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GrantItemsToUsers(GrantItemsToUsersRequest& request, GrantItemsToUsersCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void SubtractUserVirtualCurrency(SubtractUserVirtualCurrencyRequest& request, SubtractUserVirtualCurrencyCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void NotifyMatchmakerPlayerLeft(NotifyMatchmakerPlayerLeftRequest& request, NotifyMatchmakerPlayerLeftCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void RedeemMatchmakerTicket(RedeemMatchmakerTicketRequest& request, RedeemMatchmakerTicketCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void AwardSteamAchievement(AwardSteamAchievementRequest& request, AwardSteamAchievementCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		

    private:

        // ------------ Generated result handlers
		
		static void OnGetUserAccountInfoResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetUserDataResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetUserInternalDataResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetUserReadOnlyDataResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnUpdateUserDataResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnUpdateUserInternalDataResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnUpdateUserReadOnlyDataResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetCatalogItemsResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetTitleDataResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnSetTitleDataResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnAddUserVirtualCurrencyResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetUserInventoryResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGrantItemsToUsersResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnSubtractUserVirtualCurrencyResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnNotifyMatchmakerPlayerLeftResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnRedeemMatchmakerTicketResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnAwardSteamAchievementResult(int httpStatus, HttpRequest* request, void* userData);
		
 
        bool mOwnsRequester;
        IHttpRequester* mHttpRequester;
		
		
    };

};

#endif