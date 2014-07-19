#ifndef PLAYFAB_CLIENTAPI_H_
#define PLAYFAB_CLIENTAPI_H_

#include "playfab/IHttpRequester.h"
#include "playfab/PlayFabError.h"
#include "playfab/PlayFabDataModels.h"
#include "playfab/PlayFabSettings.h"

#include <string>


namespace PlayFab
{
	
    
    class PlayFabClientAPI
    {
    public:
		
		typedef void(*LoginWithAndroidDeviceIDCallback)(LoginResult& result, void* userData);
		typedef void(*LoginWithFacebookCallback)(LoginResult& result, void* userData);
		typedef void(*LoginWithGoogleAccountCallback)(LoginResult& result, void* userData);
		typedef void(*LoginWithIOSDeviceIDCallback)(LoginResult& result, void* userData);
		typedef void(*LoginWithPlayFabCallback)(LoginResult& result, void* userData);
		typedef void(*LoginWithSteamCallback)(LoginResult& result, void* userData);
		typedef void(*RegisterPlayFabUserCallback)(RegisterPlayFabUserResult& result, void* userData);
		typedef void(*SendAccountRecoveryEmailCallback)(SendAccountRecoveryEmailResult& result, void* userData);
		typedef void(*GetAccountInfoCallback)(GetAccountInfoResult& result, void* userData);
		typedef void(*LinkFacebookAccountCallback)(LinkFacebookAccountResult& result, void* userData);
		typedef void(*LinkGameCenterAccountCallback)(LinkGameCenterAccountResult& result, void* userData);
		typedef void(*LinkSteamAccountCallback)(LinkSteamAccountResult& result, void* userData);
		typedef void(*UnlinkFacebookAccountCallback)(UnlinkFacebookAccountResult& result, void* userData);
		typedef void(*UnlinkGameCenterAccountCallback)(UnlinkGameCenterAccountResult& result, void* userData);
		typedef void(*UnlinkSteamAccountCallback)(UnlinkSteamAccountResult& result, void* userData);
		typedef void(*UpdateEmailAddressCallback)(UpdateEmailAddressResult& result, void* userData);
		typedef void(*UpdatePasswordCallback)(UpdatePasswordResult& result, void* userData);
		typedef void(*UpdateUserTitleDisplayNameCallback)(UpdateUserTitleDisplayNameResult& result, void* userData);
		typedef void(*GetUserDataCallback)(GetUserDataResult& result, void* userData);
		typedef void(*GetUserReadOnlyDataCallback)(GetUserDataResult& result, void* userData);
		typedef void(*UpdateUserDataCallback)(UpdateUserDataResult& result, void* userData);
		typedef void(*GetCatalogItemsCallback)(GetCatalogItemsResult& result, void* userData);
		typedef void(*GetTitleDataCallback)(GetTitleDataResult& result, void* userData);
		typedef void(*GetTitleNewsCallback)(GetTitleNewsResult& result, void* userData);
		typedef void(*ConfirmPurchaseCallback)(ConfirmPurchaseResult& result, void* userData);
		typedef void(*GetUserInventoryCallback)(GetUserInventoryResult& result, void* userData);
		typedef void(*PayForPurchaseCallback)(PayForPurchaseResult& result, void* userData);
		typedef void(*PurchaseItemCallback)(PurchaseItemResult& result, void* userData);
		typedef void(*RedeemCouponCallback)(RedeemCouponResult& result, void* userData);
		typedef void(*StartPurchaseCallback)(StartPurchaseResult& result, void* userData);
		typedef void(*UnlockContainerItemCallback)(UnlockContainerItemResult& result, void* userData);
		typedef void(*AddFriendCallback)(AddFriendResult& result, void* userData);
		typedef void(*GetFriendsListCallback)(GetFriendsListResult& result, void* userData);
		typedef void(*RemoveFriendCallback)(RemoveFriendResult& result, void* userData);
		typedef void(*SetFriendTagsCallback)(SetFriendTagsResult& result, void* userData);
		typedef void(*RegisterForIOSPushNotificationCallback)(RegisterForIOSPushNotificationResult& result, void* userData);
		typedef void(*ValidateIOSReceiptCallback)(ValidateIOSReceiptResult& result, void* userData);
		typedef void(*GetCurrentGamesCallback)(CurrentGamesResult& result, void* userData);
		typedef void(*GetGameServerRegionsCallback)(GameServerRegionsResult& result, void* userData);
		typedef void(*GetRegionPlaylistsCallback)(RegionPlaylistsResult& result, void* userData);
		typedef void(*MatchmakeCallback)(MatchmakeResult& result, void* userData);
		typedef void(*StartGameCallback)(StartGameResult& result, void* userData);
		typedef void(*AndroidDevicePushNotificationRegistrationCallback)(AndroidDevicePushNotificationRegistrationResult& result, void* userData);
		typedef void(*ValidateGooglePlayPurchaseCallback)(ValidateGooglePlayPurchaseResult& result, void* userData);
		
	
        PlayFabClientAPI();
        PlayFabClientAPI(IHttpRequester* requester, bool ownRequester);
        ~PlayFabClientAPI();

        IHttpRequester* GetRequester(bool relinquishOwnership = false);
        void Update();

        // ------------ Generated API calls
		
		void LoginWithAndroidDeviceID(LoginWithAndroidDeviceIDRequest& request, LoginWithAndroidDeviceIDCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void LoginWithFacebook(LoginWithFacebookRequest& request, LoginWithFacebookCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void LoginWithGoogleAccount(LoginWithGoogleAccountRequest& request, LoginWithGoogleAccountCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void LoginWithIOSDeviceID(LoginWithIOSDeviceIDRequest& request, LoginWithIOSDeviceIDCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void LoginWithPlayFab(LoginWithPlayFabRequest& request, LoginWithPlayFabCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void LoginWithSteam(LoginWithSteamRequest& request, LoginWithSteamCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void RegisterPlayFabUser(RegisterPlayFabUserRequest& request, RegisterPlayFabUserCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void SendAccountRecoveryEmail(SendAccountRecoveryEmailRequest& request, SendAccountRecoveryEmailCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetAccountInfo(GetAccountInfoCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void LinkFacebookAccount(LinkFacebookAccountRequest& request, LinkFacebookAccountCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void LinkGameCenterAccount(LinkGameCenterAccountRequest& request, LinkGameCenterAccountCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void LinkSteamAccount(LinkSteamAccountRequest& request, LinkSteamAccountCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void UnlinkFacebookAccount(UnlinkFacebookAccountCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void UnlinkGameCenterAccount(UnlinkGameCenterAccountCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void UnlinkSteamAccount(LinkSteamAccountRequest& request, UnlinkSteamAccountCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void UpdateEmailAddress(UpdateEmailAddressRequest& request, UpdateEmailAddressCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void UpdatePassword(UpdatePasswordRequest& request, UpdatePasswordCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void UpdateUserTitleDisplayName(UpdateUserTitleDisplayNameRequest& request, UpdateUserTitleDisplayNameCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetUserData(GetUserDataRequest& request, GetUserDataCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetUserReadOnlyData(GetUserDataRequest& request, GetUserReadOnlyDataCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void UpdateUserData(UpdateUserDataRequest& request, UpdateUserDataCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetCatalogItems(GetCatalogItemsRequest& request, GetCatalogItemsCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetTitleData(GetTitleDataRequest& request, GetTitleDataCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetTitleNews(GetTitleNewsRequest& request, GetTitleNewsCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void ConfirmPurchase(ConfirmPurchaseRequest& request, ConfirmPurchaseCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetUserInventory(GetUserInventoryCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void PayForPurchase(PayForPurchaseRequest& request, PayForPurchaseCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void PurchaseItem(PurchaseItemRequest& request, PurchaseItemCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void RedeemCoupon(RedeemCouponRequest& request, RedeemCouponCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void StartPurchase(StartPurchaseRequest& request, StartPurchaseCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void UnlockContainerItem(UnlockContainerItemRequest& request, UnlockContainerItemCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void AddFriend(AddFriendRequest& request, AddFriendCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetFriendsList(GetFriendsListRequest& request, GetFriendsListCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void RemoveFriend(RemoveFriendRequest& request, RemoveFriendCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void SetFriendTags(SetFriendTagsRequest& request, SetFriendTagsCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void RegisterForIOSPushNotification(RegisterForIOSPushNotificationRequest& request, RegisterForIOSPushNotificationCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void ValidateIOSReceipt(ValidateIOSReceiptRequest& request, ValidateIOSReceiptCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetCurrentGames(CurrentGamesRequest& request, GetCurrentGamesCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetGameServerRegions(GameServerRegionsRequest& request, GetGameServerRegionsCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void GetRegionPlaylists(RegionPlaylistsRequest& request, GetRegionPlaylistsCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void Matchmake(MatchmakeRequest& request, MatchmakeCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void StartGame(StartGameRequest& request, StartGameCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void AndroidDevicePushNotificationRegistration(AndroidDevicePushNotificationRegistrationRequest& request, AndroidDevicePushNotificationRegistrationCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		
		void ValidateGooglePlayPurchase(ValidateGooglePlayPurchaseRequest& request, ValidateGooglePlayPurchaseCallback callback, ErrorCallback errorCallback = NULL, void* userData = NULL);
		

    private:

        // ------------ Generated result handlers
		
		static void OnLoginWithAndroidDeviceIDResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnLoginWithFacebookResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnLoginWithGoogleAccountResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnLoginWithIOSDeviceIDResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnLoginWithPlayFabResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnLoginWithSteamResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnRegisterPlayFabUserResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnSendAccountRecoveryEmailResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetAccountInfoResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnLinkFacebookAccountResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnLinkGameCenterAccountResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnLinkSteamAccountResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnUnlinkFacebookAccountResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnUnlinkGameCenterAccountResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnUnlinkSteamAccountResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnUpdateEmailAddressResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnUpdatePasswordResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnUpdateUserTitleDisplayNameResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetUserDataResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetUserReadOnlyDataResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnUpdateUserDataResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetCatalogItemsResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetTitleDataResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetTitleNewsResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnConfirmPurchaseResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetUserInventoryResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnPayForPurchaseResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnPurchaseItemResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnRedeemCouponResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnStartPurchaseResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnUnlockContainerItemResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnAddFriendResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetFriendsListResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnRemoveFriendResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnSetFriendTagsResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnRegisterForIOSPushNotificationResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnValidateIOSReceiptResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetCurrentGamesResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetGameServerRegionsResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnGetRegionPlaylistsResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnMatchmakeResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnStartGameResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnAndroidDevicePushNotificationRegistrationResult(int httpStatus, HttpRequest* request, void* userData);
		
		static void OnValidateGooglePlayPurchaseResult(int httpStatus, HttpRequest* request, void* userData);
		
 
        bool mOwnsRequester;
        IHttpRequester* mHttpRequester;
		
		
        std::string mUserSessionTicket;
		
    };

};

#endif