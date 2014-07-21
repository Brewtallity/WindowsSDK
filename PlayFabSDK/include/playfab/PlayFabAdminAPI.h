#ifndef PLAYFAB_ADMINAPI_H_
#define PLAYFAB_ADMINAPI_H_

#include "playfab/IHttpRequester.h"
#include "playfab/PlayFabError.h"
#include "playfab/PlayFabDataModels.h"
#include "playfab/PlayFabSettings.h"

#include <string>


namespace PlayFab
{
	
    
    class PlayFabAdminAPI
    {
    public:
		
		typedef void(*GetUserAccountInfoCallback)(LookupUserAccountInfoResult& result, void* userData);
		typedef void(*SendAccountRecoveryEmailCallback)(SendAccountRecoveryEmailResult& result, void* userData);
		typedef void(*UpdateUserTitleDisplayNameCallback)(UpdateUserTitleDisplayNameResult& result, void* userData);
		typedef void(*GetCatalogItemsCallback)(GetCatalogItemsResult& result, void* userData);
		typedef void(*GetRandomResultTablesCallback)(GetRandomResultTablesResult& result, void* userData);
		typedef void(*GetTitleDataCallback)(GetTitleDataResult& result, void* userData);
		typedef void(*SetCatalogItemsCallback)(UpdateCatalogItemsResult& result, void* userData);
		typedef void(*SetTitleDataCallback)(SetTitleDataResult& result, void* userData);
		typedef void(*UpdateCatalogItemsCallback)(UpdateCatalogItemsResult& result, void* userData);
		typedef void(*UpdateRandomResultTablesCallback)(UpdateRandomResultTablesResult& result, void* userData);
		typedef void(*GetUserInventoryCallback)(GetUserInventoryResult& result, void* userData);
		typedef void(*RevokeInventoryItemCallback)(RevokeInventoryResult& result, void* userData);
		typedef void(*GetMatchmakerGameInfoCallback)(GetMatchmakerGameInfoResult& result, void* userData);
		typedef void(*GetMatchmakerGameModesCallback)(GetMatchmakerGameModesResult& result, void* userData);
		typedef void(*ModifyMatchmakerGameModesCallback)(ModifyMatchmakerGameModesResult& result, void* userData);
		typedef void(*AddServerBuildCallback)(AddServerBuildResult& result, void* userData);
		typedef void(*GetServerBuildInfoCallback)(GetServerBuildInfoResult& result, void* userData);
		typedef void(*ListServerBuildsCallback)(ListBuildsResult& result, void* userData);
		typedef void(*ModifyServerBuildCallback)(ModifyServerBuildResult& result, void* userData);
		typedef void(*RemoveServerBuildCallback)(RemoveServerBuildResult& result, void* userData);
		
	
        PlayFabAdminAPI();
        PlayFabAdminAPI(IHttpRequester* requester, bool ownRequester);
        ~PlayFabAdminAPI();

        IHttpRequester* GetRequester(bool relinquishOwnership = false);
        void Update();

        // ------------ Generated API calls
		
		void GetUserAccountInfo(LookupUserAccountInfoRequest& request, GetUserAccountInfoCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void SendAccountRecoveryEmail(SendAccountRecoveryEmailRequest& request, SendAccountRecoveryEmailCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void UpdateUserTitleDisplayName(UpdateUserTitleDisplayNameRequest& request, UpdateUserTitleDisplayNameCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetCatalogItems(GetCatalogItemsRequest& request, GetCatalogItemsCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetRandomResultTables(GetRandomResultTablesCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetTitleData(GetTitleDataRequest& request, GetTitleDataCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void SetCatalogItems(UpdateCatalogItemsRequest& request, SetCatalogItemsCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void SetTitleData(SetTitleDataRequest& request, SetTitleDataCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void UpdateCatalogItems(UpdateCatalogItemsRequest& request, UpdateCatalogItemsCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void UpdateRandomResultTables(UpdateRandomResultTablesRequest& request, UpdateRandomResultTablesCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetUserInventory(GetUserInventoryRequest& request, GetUserInventoryCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void RevokeInventoryItem(RevokeInventoryItemRequest& request, RevokeInventoryItemCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetMatchmakerGameInfo(GetMatchmakerGameInfoRequest& request, GetMatchmakerGameInfoCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetMatchmakerGameModes(GetMatchmakerGameModesRequest& request, GetMatchmakerGameModesCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void ModifyMatchmakerGameModes(ModifyMatchmakerGameModesRequest& request, ModifyMatchmakerGameModesCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void AddServerBuild(AddServerBuildRequest& request, AddServerBuildCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetServerBuildInfo(GetServerBuildInfoRequest& request, GetServerBuildInfoCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void ListServerBuilds(ListServerBuildsCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void ModifyServerBuild(ModifyServerBuildRequest& request, ModifyServerBuildCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void RemoveServerBuild(RemoveServerBuildRequest& request, RemoveServerBuildCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		

    private:

        // ------------ Generated result handlers
		
		static void OnGetUserAccountInfoResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnSendAccountRecoveryEmailResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnUpdateUserTitleDisplayNameResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetCatalogItemsResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetRandomResultTablesResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetTitleDataResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnSetCatalogItemsResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnSetTitleDataResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnUpdateCatalogItemsResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnUpdateRandomResultTablesResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetUserInventoryResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnRevokeInventoryItemResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetMatchmakerGameInfoResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetMatchmakerGameModesResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnModifyMatchmakerGameModesResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnAddServerBuildResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetServerBuildInfoResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnListServerBuildsResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnModifyServerBuildResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnRemoveServerBuildResult(int httpStatus, HttpRequest* request, void* userData);
		
 
        bool mOwnsRequester;
        IHttpRequester* mHttpRequester;
		
		
    };

};

#endif