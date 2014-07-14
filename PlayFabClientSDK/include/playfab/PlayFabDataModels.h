#ifndef PLAYFAB_DATA_MODELS_H_
#define PLAYFAB_DATA_MODELS_H_

#include "playfab/PlayFabBaseModel.h"

namespace PlayFab
{

	
	struct RemoveFriendRequest : public PlayFabBaseModel
    {
		
		std::string FriendPlayFabId;
	
        RemoveFriendRequest() {}

		RemoveFriendRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RemoveFriendRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RemoveFriendResult : public PlayFabBaseModel
    {
		
	
        RemoveFriendResult() {}

		RemoveFriendResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RemoveFriendResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SetFriendTagsRequest : public PlayFabBaseModel
    {
		
		std::string FriendPlayFabId;
		std::list<std::string> Tags;
	
        SetFriendTagsRequest() {}

		SetFriendTagsRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~SetFriendTagsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SetFriendTagsResult : public PlayFabBaseModel
    {
		
	
        SetFriendTagsResult() {}

		SetFriendTagsResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~SetFriendTagsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetFriendsListRequest : public PlayFabBaseModel
    {
		
		OptionalBool IncludeSteamFriends;
	
        GetFriendsListRequest() {}

		GetFriendsListRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetFriendsListRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UserFacebookInfo : public PlayFabBaseModel
    {
		
		std::string FacebookId;
		std::string FacebookUsername;
		std::string FacebookDisplayname;
	
        UserFacebookInfo() {}

		UserFacebookInfo(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UserFacebookInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum Currency
	{
		CurrencyUSD,
		CurrencyGBP,
		CurrencyEUR,
		CurrencyRUB,
		CurrencyBRL,
		CurrencyCIS,
		CurrencyCAD
	};
	
	void writeCurrencyEnumJSON(Currency enumVal, PFStringJsonWriter& writer);
	Currency readCurrencyFromValue(const rapidjson::Value& obj);
	
	
	enum TitleActivationStatus
	{
		TitleActivationStatusNone,
		TitleActivationStatusActivatedTitleKey,
		TitleActivationStatusPendingSteam,
		TitleActivationStatusActivatedSteam,
		TitleActivationStatusRevokedSteam
	};
	
	void writeTitleActivationStatusEnumJSON(TitleActivationStatus enumVal, PFStringJsonWriter& writer);
	TitleActivationStatus readTitleActivationStatusFromValue(const rapidjson::Value& obj);
	
	
	struct UserSteamInfo : public PlayFabBaseModel
    {
		
		std::string SteamId;
		std::string SteamCountry;
		Boxed<Currency> SteamCurrency;
		Boxed<TitleActivationStatus> SteamActivationStatus;
	
        UserSteamInfo() {}

		UserSteamInfo(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UserSteamInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UserGameCenterInfo : public PlayFabBaseModel
    {
		
		std::string GameCenterId;
	
        UserGameCenterInfo() {}

		UserGameCenterInfo(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UserGameCenterInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct FriendInfo : public PlayFabBaseModel
    {
		
		std::string FriendPlayFabId;
		std::string Username;
		std::string TitleDisplayName;
		std::list<std::string> Tags;
		std::string CurrentMatchmakerLobbyId;
		UserFacebookInfo* FacebookInfo;
		UserSteamInfo* SteamInfo;
		UserGameCenterInfo* GameCenterInfo;
	
        FriendInfo() {}

		FriendInfo(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~FriendInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetFriendsListResult : public PlayFabBaseModel
    {
		
		std::list<FriendInfo> Friends;
	
        GetFriendsListResult() {}

		GetFriendsListResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetFriendsListResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateEmailAddressRequest : public PlayFabBaseModel
    {
		
		std::string Email;
	
        UpdateEmailAddressRequest() {}

		UpdateEmailAddressRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UpdateEmailAddressRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateEmailAddressResult : public PlayFabBaseModel
    {
		
	
        UpdateEmailAddressResult() {}

		UpdateEmailAddressResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UpdateEmailAddressResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdatePasswordRequest : public PlayFabBaseModel
    {
		
		std::string Password;
	
        UpdatePasswordRequest() {}

		UpdatePasswordRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UpdatePasswordRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdatePasswordResult : public PlayFabBaseModel
    {
		
	
        UpdatePasswordResult() {}

		UpdatePasswordResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UpdatePasswordResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct Object : public PlayFabBaseModel
    {
		
	
        Object() {}

		Object(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~Object();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LogEventRequest : public PlayFabBaseModel
    {
		
		std::string eventName;
		std::map<std::string, Object> Body;
	
        LogEventRequest() {}

		LogEventRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~LogEventRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LogEventResult : public PlayFabBaseModel
    {
		
		std::list<std::string> errors;
	
        LogEventResult() {}

		LogEventResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~LogEventResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithPlayFabRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string Username;
		std::string Password;
	
        LoginWithPlayFabRequest() {}

		LoginWithPlayFabRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~LoginWithPlayFabRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginResult : public PlayFabBaseModel
    {
		
		std::string SessionTicket;
	
        LoginResult() {}

		LoginResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~LoginResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithFacebookRequest : public PlayFabBaseModel
    {
		
		std::string AccessToken;
		std::string TitleId;
		bool CreateAccount;
	
        LoginWithFacebookRequest() {}

		LoginWithFacebookRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~LoginWithFacebookRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithSteamRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string SteamTicket;
		bool CreateAccount;
	
        LoginWithSteamRequest() {}

		LoginWithSteamRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~LoginWithSteamRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithIOSDeviceIDRequest : public PlayFabBaseModel
    {
		
		std::string DeviceId;
		std::string TitleId;
		std::string OS;
		std::string DeviceModel;
		bool CreateAccount;
	
        LoginWithIOSDeviceIDRequest() {}

		LoginWithIOSDeviceIDRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~LoginWithIOSDeviceIDRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithAndroidDeviceIDRequest : public PlayFabBaseModel
    {
		
		std::string AndroidDeviceId;
		std::string TitleId;
		std::string OS;
		std::string AndroidDevice;
		bool CreateAccount;
	
        LoginWithAndroidDeviceIDRequest() {}

		LoginWithAndroidDeviceIDRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~LoginWithAndroidDeviceIDRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegisterPlayFabUserRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string Username;
		std::string Email;
		std::string Password;
		std::string Origination;
	
        RegisterPlayFabUserRequest() {}

		RegisterPlayFabUserRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RegisterPlayFabUserRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegisterPlayFabUserResult : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string SessionTicket;
		std::string Username;
		std::string DisplayName;
	
        RegisterPlayFabUserResult() {}

		RegisterPlayFabUserResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RegisterPlayFabUserResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkSteamAccountRequest : public PlayFabBaseModel
    {
		
		std::string SteamTicket;
	
        LinkSteamAccountRequest() {}

		LinkSteamAccountRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~LinkSteamAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkSteamAccountResult : public PlayFabBaseModel
    {
		
	
        LinkSteamAccountResult() {}

		LinkSteamAccountResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~LinkSteamAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkSteamAccountResult : public PlayFabBaseModel
    {
		
	
        UnlinkSteamAccountResult() {}

		UnlinkSteamAccountResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UnlinkSteamAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkFacebookAccountRequest : public PlayFabBaseModel
    {
		
		std::string AccessToken;
	
        LinkFacebookAccountRequest() {}

		LinkFacebookAccountRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~LinkFacebookAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkFacebookAccountResult : public PlayFabBaseModel
    {
		
	
        LinkFacebookAccountResult() {}

		LinkFacebookAccountResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~LinkFacebookAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkFacebookAccountRequest : public PlayFabBaseModel
    {
		
	
        UnlinkFacebookAccountRequest() {}

		UnlinkFacebookAccountRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UnlinkFacebookAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkFacebookAccountResult : public PlayFabBaseModel
    {
		
	
        UnlinkFacebookAccountResult() {}

		UnlinkFacebookAccountResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UnlinkFacebookAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkGameCenterAccountRequest : public PlayFabBaseModel
    {
		
		std::string GameCenterId;
	
        LinkGameCenterAccountRequest() {}

		LinkGameCenterAccountRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~LinkGameCenterAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkGameCenterAccountResult : public PlayFabBaseModel
    {
		
	
        LinkGameCenterAccountResult() {}

		LinkGameCenterAccountResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~LinkGameCenterAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkGameCenterAccountRequest : public PlayFabBaseModel
    {
		
	
        UnlinkGameCenterAccountRequest() {}

		UnlinkGameCenterAccountRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UnlinkGameCenterAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkGameCenterAccountResult : public PlayFabBaseModel
    {
		
	
        UnlinkGameCenterAccountResult() {}

		UnlinkGameCenterAccountResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UnlinkGameCenterAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetAccountInfoRequest : public PlayFabBaseModel
    {
		
	
        GetAccountInfoRequest() {}

		GetAccountInfoRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetAccountInfoRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum UserOrigination
	{
		UserOriginationOrganic,
		UserOriginationSteam,
		UserOriginationGoogle,
		UserOriginationAmazon,
		UserOriginationFacebook,
		UserOriginationKongregate,
		UserOriginationGamersFirst,
		UserOriginationUnknown,
		UserOriginationIOS,
		UserOriginationLoadTest,
		UserOriginationAndroid
	};
	
	void writeUserOriginationEnumJSON(UserOrigination enumVal, PFStringJsonWriter& writer);
	UserOrigination readUserOriginationFromValue(const rapidjson::Value& obj);
	
	
	struct UserTitleInfo : public PlayFabBaseModel
    {
		
		std::string DisplayName;
		Boxed<UserOrigination> Origination;
		OptionalTime Created;
		OptionalTime LastLogin;
		OptionalTime FirstLogin;
	
        UserTitleInfo() {}

		UserTitleInfo(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UserTitleInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UserPrivateAccountInfo : public PlayFabBaseModel
    {
		
		std::string Email;
	
        UserPrivateAccountInfo() {}

		UserPrivateAccountInfo(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UserPrivateAccountInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UserAccountInfo : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		OptionalTime Created;
		std::string Username;
		UserTitleInfo* TitleInfo;
		UserPrivateAccountInfo* PrivateInfo;
		UserFacebookInfo* FacebookInfo;
		UserSteamInfo* SteamInfo;
		UserGameCenterInfo* GameCenterInfo;
	
        UserAccountInfo() {}

		UserAccountInfo(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UserAccountInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetAccountInfoResult : public PlayFabBaseModel
    {
		
		UserAccountInfo* AccountInfo;
	
        GetAccountInfoResult() {}

		GetAccountInfoResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetAccountInfoResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserInventoryRequest : public PlayFabBaseModel
    {
		
	
        GetUserInventoryRequest() {}

		GetUserInventoryRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetUserInventoryRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ItemInstance : public PlayFabBaseModel
    {
		
		std::string ItemId;
		std::string ItemInstanceId;
		std::string ItemClass;
		std::string PurchaseDate;
		std::string Expiration;
		OptionalUint32 RemainingUses;
		std::string Annotation;
		std::string CatalogVersion;
		std::string BundleParent;
	
        ItemInstance() {}

		ItemInstance(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ItemInstance();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserInventoryResult : public PlayFabBaseModel
    {
		
		std::list<ItemInstance> Inventory;
		std::map<std::string, Int32> VirtualCurrency;
	
        GetUserInventoryResult() {}

		GetUserInventoryResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetUserInventoryResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetCatalogItemsRequest : public PlayFabBaseModel
    {
		
		std::string CatalogVersion;
	
        GetCatalogItemsRequest() {}

		GetCatalogItemsRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetCatalogItemsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CatalogItemConsumableInfo : public PlayFabBaseModel
    {
		
		Uint32 UsageCount;
		OptionalUint32 UsagePeriod;
		std::string UsagePeriodGroup;
	
        CatalogItemConsumableInfo() {}

		CatalogItemConsumableInfo(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~CatalogItemConsumableInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CatalogItemContainerInfo : public PlayFabBaseModel
    {
		
		std::string KeyItemId;
		std::list<std::string> ItemContents;
		std::list<std::string> ResultTableContents;
		std::map<std::string, Uint32> VirtualCurrencyContents;
	
        CatalogItemContainerInfo() {}

		CatalogItemContainerInfo(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~CatalogItemContainerInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CatalogItemBundleInfo : public PlayFabBaseModel
    {
		
		std::list<std::string> BundledItems;
		std::list<std::string> BundledResultTables;
		std::map<std::string, Uint32> BundledVirtualCurrencies;
	
        CatalogItemBundleInfo() {}

		CatalogItemBundleInfo(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~CatalogItemBundleInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CatalogItem : public PlayFabBaseModel
    {
		
		std::string ItemId;
		std::string ItemClass;
		std::string CatalogVersion;
		std::string DisplayName;
		std::string Description;
		std::map<std::string, Uint32> VirtualCurrencyPrices;
		std::map<std::string, Uint32> RealCurrencyPrices;
		OptionalTime ReleaseDate;
		OptionalTime ExpirationDate;
		OptionalBool IsFree;
		OptionalBool NotForSale;
		OptionalBool NotForTrade;
		std::list<std::string> Tags;
		std::string CustomData;
		std::list<std::string> GrantedIfPlayerHas;
		CatalogItemConsumableInfo* Consumable;
		CatalogItemContainerInfo* Container;
		CatalogItemBundleInfo* Bundle;
	
        CatalogItem() {}

		CatalogItem(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~CatalogItem();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetCatalogItemsResult : public PlayFabBaseModel
    {
		
		std::list<CatalogItem> Catalog;
	
        GetCatalogItemsResult() {}

		GetCatalogItemsResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetCatalogItemsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ItemPuchaseRequest : public PlayFabBaseModel
    {
		
		std::string ItemId;
		Uint32 Quantity;
		std::string Annotation;
		std::list<std::string> UpgradeFromItems;
	
        ItemPuchaseRequest() {}

		ItemPuchaseRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ItemPuchaseRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct StartPurchaseRequest : public PlayFabBaseModel
    {
		
		std::string CatalogVersion;
		std::list<ItemPuchaseRequest> Items;
	
        StartPurchaseRequest() {}

		StartPurchaseRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~StartPurchaseRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CartItem : public PlayFabBaseModel
    {
		
		std::string ItemId;
		std::string ItemClass;
		std::string ItemInstanceId;
		std::string DisplayName;
		std::string Description;
		std::map<std::string, Uint32> VirtualCurrencyPrices;
		std::map<std::string, Uint32> RealCurrencyPrices;
		std::map<std::string, Uint32> VCAmount;
	
        CartItem() {}

		CartItem(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~CartItem();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PaymentOption : public PlayFabBaseModel
    {
		
		std::string Currency;
		std::string ProviderName;
		Uint32 Price;
		Uint32 StoreCredit;
	
        PaymentOption() {}

		PaymentOption(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~PaymentOption();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct StartPurchaseResult : public PlayFabBaseModel
    {
		
		std::string OrderId;
		std::list<CartItem> Contents;
		std::list<PaymentOption> PaymentOptions;
		std::map<std::string, Int32> VirtualCurrencyBalances;
	
        StartPurchaseResult() {}

		StartPurchaseResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~StartPurchaseResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PayForPurchaseRequest : public PlayFabBaseModel
    {
		
		std::string OrderId;
		std::string ProviderName;
		std::string Currency;
	
        PayForPurchaseRequest() {}

		PayForPurchaseRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~PayForPurchaseRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum TransactionStatus
	{
		TransactionStatusCreateCart,
		TransactionStatusInit,
		TransactionStatusApproved,
		TransactionStatusSucceeded,
		TransactionStatusFailedByProvider,
		TransactionStatusRefundPending,
		TransactionStatusRefunded,
		TransactionStatusRefundFailed,
		TransactionStatusChargedBack,
		TransactionStatusFailedByUber,
		TransactionStatusRevoked,
		TransactionStatusTradePending,
		TransactionStatusUpgraded,
		TransactionStatusOther,
		TransactionStatusFailed
	};
	
	void writeTransactionStatusEnumJSON(TransactionStatus enumVal, PFStringJsonWriter& writer);
	TransactionStatus readTransactionStatusFromValue(const rapidjson::Value& obj);
	
	
	struct PurchaseData : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string OrderId;
		Boxed<TransactionStatus> Status;
		std::map<std::string, Int32> VCAmount;
		std::string PurchaseCurrency;
		Uint32 PurchasePrice;
		Uint32 CreditApplied;
		std::string ProviderData;
	
        PurchaseData() {}

		PurchaseData(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~PurchaseData();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PayForPurchaseResult : public PlayFabBaseModel
    {
		
		PurchaseData* Purchase;
		std::string PurchaseConfirmationPageURL;
		std::map<std::string, Int32> VirtualCurrency;
	
        PayForPurchaseResult() {}

		PayForPurchaseResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~PayForPurchaseResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ConfirmPurchaseRequest : public PlayFabBaseModel
    {
		
		std::string OrderId;
	
        ConfirmPurchaseRequest() {}

		ConfirmPurchaseRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ConfirmPurchaseRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PurchasedItem : public PlayFabBaseModel
    {
		
		std::string ItemInstanceId;
		std::string ItemId;
		std::string CatalogVersion;
		std::string DisplayName;
		std::string UnitCurrency;
		Uint32 UnitPrice;
		std::list<std::string> BundleContents;
	
        PurchasedItem() {}

		PurchasedItem(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~PurchasedItem();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ConfirmPurchaseResult : public PlayFabBaseModel
    {
		
		std::string OrderId;
		OptionalTime PurchaseDate;
		std::list<PurchasedItem> Items;
	
        ConfirmPurchaseResult() {}

		ConfirmPurchaseResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ConfirmPurchaseResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RedeemCouponRequest : public PlayFabBaseModel
    {
		
		std::string CouponCode;
		std::string CatalogVersion;
	
        RedeemCouponRequest() {}

		RedeemCouponRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RedeemCouponRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RedeemCouponResult : public PlayFabBaseModel
    {
		
		std::list<ItemInstance> GrantedItems;
	
        RedeemCouponResult() {}

		RedeemCouponResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RedeemCouponResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlockContainerItemRequest : public PlayFabBaseModel
    {
		
		std::string CrateItemId;
		std::string CatalogVersion;
	
        UnlockContainerItemRequest() {}

		UnlockContainerItemRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UnlockContainerItemRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlockContainerItemResult : public PlayFabBaseModel
    {
		
		std::string UnlockedItem;
		std::list<ItemInstance> GrantedItems;
	
        UnlockContainerItemResult() {}

		UnlockContainerItemResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UnlockContainerItemResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SendAccountRecoveryEmailRequest : public PlayFabBaseModel
    {
		
		std::string Email;
		std::string TitleId;
	
        SendAccountRecoveryEmailRequest() {}

		SendAccountRecoveryEmailRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~SendAccountRecoveryEmailRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SendAccountRecoveryEmailResult : public PlayFabBaseModel
    {
		
	
        SendAccountRecoveryEmailResult() {}

		SendAccountRecoveryEmailResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~SendAccountRecoveryEmailResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetTitleNewsRequest : public PlayFabBaseModel
    {
		
		OptionalUint32 Count;
	
        GetTitleNewsRequest() {}

		GetTitleNewsRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetTitleNewsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct TitleNewsItem : public PlayFabBaseModel
    {
		
		OptionalTime Timestamp;
		std::string Title;
		std::string Body;
	
        TitleNewsItem() {}

		TitleNewsItem(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~TitleNewsItem();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetTitleNewsResult : public PlayFabBaseModel
    {
		
		std::list<TitleNewsItem> News;
	
        GetTitleNewsResult() {}

		GetTitleNewsResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetTitleNewsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetTitleDataRequest : public PlayFabBaseModel
    {
		
		std::list<std::string> Keys;
	
        GetTitleDataRequest() {}

		GetTitleDataRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetTitleDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetTitleDataResult : public PlayFabBaseModel
    {
		
		std::map<std::string, std::string> Data;
	
        GetTitleDataResult() {}

		GetTitleDataResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetTitleDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserDataRequest : public PlayFabBaseModel
    {
		
		std::list<std::string> Keys;
	
        GetUserDataRequest() {}

		GetUserDataRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetUserDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserDataResult : public PlayFabBaseModel
    {
		
		std::map<std::string, std::string> Data;
	
        GetUserDataResult() {}

		GetUserDataResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetUserDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateUserDataRequest : public PlayFabBaseModel
    {
		
		std::map<std::string, std::string> Data;
	
        UpdateUserDataRequest() {}

		UpdateUserDataRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UpdateUserDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateUserDataResult : public PlayFabBaseModel
    {
		
	
        UpdateUserDataResult() {}

		UpdateUserDataResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UpdateUserDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateUserTitleDisplayNameRequest : public PlayFabBaseModel
    {
		
		std::string DisplayName;
	
        UpdateUserTitleDisplayNameRequest() {}

		UpdateUserTitleDisplayNameRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UpdateUserTitleDisplayNameRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateUserTitleDisplayNameResult : public PlayFabBaseModel
    {
		
		std::string DisplayName;
	
        UpdateUserTitleDisplayNameResult() {}

		UpdateUserTitleDisplayNameResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UpdateUserTitleDisplayNameResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegisterForIOSPushNotificationRequest : public PlayFabBaseModel
    {
		
		std::string DeviceToken;
	
        RegisterForIOSPushNotificationRequest() {}

		RegisterForIOSPushNotificationRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RegisterForIOSPushNotificationRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegisterForIOSPushNotificationResult : public PlayFabBaseModel
    {
		
	
        RegisterForIOSPushNotificationResult() {}

		RegisterForIOSPushNotificationResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RegisterForIOSPushNotificationResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AndroidDevicePushNotificationRegistrationRequest : public PlayFabBaseModel
    {
		
		std::string DeviceToken;
	
        AndroidDevicePushNotificationRegistrationRequest() {}

		AndroidDevicePushNotificationRegistrationRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~AndroidDevicePushNotificationRegistrationRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AndroidDevicePushNotificationRegistrationResult : public PlayFabBaseModel
    {
		
	
        AndroidDevicePushNotificationRegistrationResult() {}

		AndroidDevicePushNotificationRegistrationResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~AndroidDevicePushNotificationRegistrationResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ValidateIOSReceiptRequest : public PlayFabBaseModel
    {
		
		std::string ReceiptData;
		std::string CurrencyCode;
		std::string ObjectName;
		double PurchasePrice;
	
        ValidateIOSReceiptRequest() {}

		ValidateIOSReceiptRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ValidateIOSReceiptRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ValidateIOSReceiptResult : public PlayFabBaseModel
    {
		
	
        ValidateIOSReceiptResult() {}

		ValidateIOSReceiptResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ValidateIOSReceiptResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithGoogleAccountRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string AccessToken;
	
        LoginWithGoogleAccountRequest() {}

		LoginWithGoogleAccountRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~LoginWithGoogleAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ValidateGooglePlayPurchaseRequest : public PlayFabBaseModel
    {
		
		std::string packageName;
		std::string productId;
		std::string purchaseToken;
		std::string accessToken;
	
        ValidateGooglePlayPurchaseRequest() {}

		ValidateGooglePlayPurchaseRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ValidateGooglePlayPurchaseRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ValidateGooglePlayPurchaseResult : public PlayFabBaseModel
    {
		
		std::string kind;
		OptionalTime purchaseTime;
		Int32 puchaseState;
		Int32 consumptionState;
		std::string developerPayload;
	
        ValidateGooglePlayPurchaseResult() {}

		ValidateGooglePlayPurchaseResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ValidateGooglePlayPurchaseResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AddFriendRequest : public PlayFabBaseModel
    {
		
		std::string FriendPlayFabId;
		std::string FriendUsername;
		std::string FriendEmail;
		std::string FriendTitleDisplayName;
	
        AddFriendRequest() {}

		AddFriendRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~AddFriendRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AddFriendResult : public PlayFabBaseModel
    {
		
		bool Created;
	
        AddFriendResult() {}

		AddFriendResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~AddFriendResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum Region
	{
		RegionUSWest,
		RegionUSCentral,
		RegionUSEast,
		RegionEUWest,
		RegionAPSouthEast,
		RegionAPNorthEast,
		RegionSAEast,
		RegionAustralia,
		RegionChina,
		RegionUberLan
	};
	
	void writeRegionEnumJSON(Region enumVal, PFStringJsonWriter& writer);
	Region readRegionFromValue(const rapidjson::Value& obj);
	
	
	struct StartGameRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
		Region Region;
		std::string GameMode;
		bool PasswordRestricted;
		std::string ReplayLobbyId;
	
        StartGameRequest() {}

		StartGameRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~StartGameRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct StartGameResult : public PlayFabBaseModel
    {
		
		std::string LobbyID;
		std::string ServerHostname;
		OptionalUint32 ServerPort;
		std::string Ticket;
		std::string Expires;
		std::string Password;
	
        StartGameResult() {}

		StartGameResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~StartGameResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct MatchmakeRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
		Boxed<Region> Region;
		std::string GameMode;
		std::string LobbyId;
		OptionalBool EnableQueue;
	
        MatchmakeRequest() {}

		MatchmakeRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~MatchmakeRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum MatchmakeStatus
	{
		MatchmakeStatusComplete,
		MatchmakeStatusWaiting,
		MatchmakeStatusGameNotFound
	};
	
	void writeMatchmakeStatusEnumJSON(MatchmakeStatus enumVal, PFStringJsonWriter& writer);
	MatchmakeStatus readMatchmakeStatusFromValue(const rapidjson::Value& obj);
	
	
	struct MatchmakeResult : public PlayFabBaseModel
    {
		
		std::string LobbyID;
		std::string ServerHostname;
		OptionalUint32 ServerPort;
		OptionalUint32 WebSocketPort;
		std::string Ticket;
		std::string Expires;
		OptionalUint32 PollWaitTimeMS;
		Boxed<MatchmakeStatus> Status;
		std::list<std::string> Queue;
	
        MatchmakeResult() {}

		MatchmakeResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~MatchmakeResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CurrentGamesRequest : public PlayFabBaseModel
    {
		
		Boxed<Region> Region;
		std::string BuildVersion;
		std::string IncludeState;
	
        CurrentGamesRequest() {}

		CurrentGamesRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~CurrentGamesRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GameInfo : public PlayFabBaseModel
    {
		
		Boxed<Region> Region;
		std::string LobbyID;
		std::string BuildVersion;
		std::string GameMode;
		std::string Map;
		Int32 MaxPlayers;
		std::list<std::string> PlayerUsernames;
		Uint32 RunTime;
		std::string GameServerState;
		std::string TitleData;
	
        GameInfo() {}

		GameInfo(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GameInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CurrentGamesResult : public PlayFabBaseModel
    {
		
		std::list<GameInfo> Games;
		Int32 PlayerCount;
		Int32 GameCount;
		OptionalBool IncompleteResult;
	
        CurrentGamesResult() {}

		CurrentGamesResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~CurrentGamesResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GameServerRegionsRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
		std::string TitleId;
	
        GameServerRegionsRequest() {}

		GameServerRegionsRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GameServerRegionsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GameModeInfo : public PlayFabBaseModel
    {
		
		std::string GameMode;
		Uint32 GameCount;
		Uint32 GamePlayersCount;
	
        GameModeInfo() {}

		GameModeInfo(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GameModeInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegionInfo : public PlayFabBaseModel
    {
		
		Boxed<Region> Region;
		std::string Name;
		bool Available;
		std::string PingUrl;
		Uint32 GameCount;
		Uint32 GamePlayersCount;
		std::list<GameModeInfo> GameModes;
	
        RegionInfo() {}

		RegionInfo(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RegionInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GameServerRegionsResult : public PlayFabBaseModel
    {
		
		std::list<RegionInfo> Regions;
	
        GameServerRegionsResult() {}

		GameServerRegionsResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GameServerRegionsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegionPlaylistsRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
		Region Region;
		std::string TitleId;
	
        RegionPlaylistsRequest() {}

		RegionPlaylistsRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RegionPlaylistsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PlaylistInfo : public PlayFabBaseModel
    {
		
		std::string PlaylistId;
		Uint32 GameCount;
		Uint32 GamePlayersCount;
	
        PlaylistInfo() {}

		PlaylistInfo(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~PlaylistInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegionPlaylistsResult : public PlayFabBaseModel
    {
		
		std::list<PlaylistInfo> Playlists;
	
        RegionPlaylistsResult() {}

		RegionPlaylistsResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RegionPlaylistsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	
}

#endif