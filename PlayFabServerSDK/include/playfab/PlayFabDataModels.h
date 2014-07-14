#ifndef PLAYFAB_DATA_MODELS_H_
#define PLAYFAB_DATA_MODELS_H_

#include "playfab/PlayFabBaseModel.h"

namespace PlayFab
{

	
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
	
	struct UpdateCatalogItemsRequest : public PlayFabBaseModel
    {
		
		std::string CatalogVersion;
		std::list<CatalogItem> CatalogItems;
	
        UpdateCatalogItemsRequest() {}

		UpdateCatalogItemsRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UpdateCatalogItemsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateCatalogItemsResult : public PlayFabBaseModel
    {
		
	
        UpdateCatalogItemsResult() {}

		UpdateCatalogItemsResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UpdateCatalogItemsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SetTitleDataRequest : public PlayFabBaseModel
    {
		
		std::string Key;
		std::string Value;
	
        SetTitleDataRequest() {}

		SetTitleDataRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~SetTitleDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SetTitleDataResult : public PlayFabBaseModel
    {
		
		std::string Key;
		std::string Value;
	
        SetTitleDataResult() {}

		SetTitleDataResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~SetTitleDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetPublicTitleDataRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::list<std::string> Keys;
	
        GetPublicTitleDataRequest() {}

		GetPublicTitleDataRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetPublicTitleDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetPublicTitleDataResult : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::map<std::string, std::string> Data;
	
        GetPublicTitleDataResult() {}

		GetPublicTitleDataResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetPublicTitleDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AddServerBuildRequest : public PlayFabBaseModel
    {
		
		std::string BuildId;
		OptionalTime Timestamp;
		bool Active;
		bool DedicatedServerEligible;
		std::list<std::string> ActiveRegions;
		std::string Comment;
	
        AddServerBuildRequest() {}

		AddServerBuildRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~AddServerBuildRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AddServerBuildResult : public PlayFabBaseModel
    {
		
		std::string BuildId;
		bool Active;
		std::list<std::string> ActiveRegions;
		std::string Comment;
		OptionalTime Timestamp;
		std::string TitleId;
	
        AddServerBuildResult() {}

		AddServerBuildResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~AddServerBuildResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RemoveServerBuildRequest : public PlayFabBaseModel
    {
		
		std::string BuildId;
	
        RemoveServerBuildRequest() {}

		RemoveServerBuildRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RemoveServerBuildRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RemoveServerBuildResult : public PlayFabBaseModel
    {
		
		std::string BuildId;
	
        RemoveServerBuildResult() {}

		RemoveServerBuildResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RemoveServerBuildResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ListBuildsRequest : public PlayFabBaseModel
    {
		
	
        ListBuildsRequest() {}

		ListBuildsRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ListBuildsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetServerBuildInfoResult : public PlayFabBaseModel
    {
		
		std::string BuildId;
		bool Active;
		std::list<std::string> ActiveRegions;
		std::string Comment;
		OptionalTime Timestamp;
		std::string TitleId;
	
        GetServerBuildInfoResult() {}

		GetServerBuildInfoResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetServerBuildInfoResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ListBuildsResult : public PlayFabBaseModel
    {
		
		std::list<GetServerBuildInfoResult> Builds;
	
        ListBuildsResult() {}

		ListBuildsResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ListBuildsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetServerBuildInfoRequest : public PlayFabBaseModel
    {
		
		std::string BuildId;
	
        GetServerBuildInfoRequest() {}

		GetServerBuildInfoRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetServerBuildInfoRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ModifyServerBuildRequest : public PlayFabBaseModel
    {
		
		std::string BuildId;
		OptionalTime Timestamp;
		OptionalBool Active;
		std::list<std::string> ActiveRegions;
		std::string Comment;
	
        ModifyServerBuildRequest() {}

		ModifyServerBuildRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ModifyServerBuildRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ModifyServerBuildResult : public PlayFabBaseModel
    {
		
		std::string BuildId;
		bool Active;
		std::list<std::string> ActiveRegions;
		std::string Comment;
		OptionalTime Timestamp;
		std::string TitleId;
	
        ModifyServerBuildResult() {}

		ModifyServerBuildResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ModifyServerBuildResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetMatchmakerGameModesRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
	
        GetMatchmakerGameModesRequest() {}

		GetMatchmakerGameModesRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetMatchmakerGameModesRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GameModeInfo : public PlayFabBaseModel
    {
		
		std::string Gamemode;
		Uint32 MinPlayerCount;
		Uint32 MaxPlayerCount;
		float PerfCostPerGame;
	
        GameModeInfo() {}

		GameModeInfo(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GameModeInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetMatchmakerGameModesResult : public PlayFabBaseModel
    {
		
		std::list<GameModeInfo> GameModes;
	
        GetMatchmakerGameModesResult() {}

		GetMatchmakerGameModesResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetMatchmakerGameModesResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ModifyMatchmakerGameModesRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
		std::list<GameModeInfo> GameModes;
	
        ModifyMatchmakerGameModesRequest() {}

		ModifyMatchmakerGameModesRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ModifyMatchmakerGameModesRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ModifyMatchmakerGameModesResult : public PlayFabBaseModel
    {
		
	
        ModifyMatchmakerGameModesResult() {}

		ModifyMatchmakerGameModesResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ModifyMatchmakerGameModesResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum ResultTableNodeType
	{
		ResultTableNodeTypeItemId,
		ResultTableNodeTypeTableId
	};
	
	void writeResultTableNodeTypeEnumJSON(ResultTableNodeType enumVal, PFStringJsonWriter& writer);
	ResultTableNodeType readResultTableNodeTypeFromValue(const rapidjson::Value& obj);
	
	
	struct ResultTableNode : public PlayFabBaseModel
    {
		
		ResultTableNodeType ResultItemType;
		std::string ResultItem;
		Int32 Weight;
	
        ResultTableNode() {}

		ResultTableNode(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ResultTableNode();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RandomResultTable : public PlayFabBaseModel
    {
		
		std::string TableId;
		std::list<ResultTableNode> Nodes;
	
        RandomResultTable() {}

		RandomResultTable(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RandomResultTable();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateRandomResultTablesRequest : public PlayFabBaseModel
    {
		
		std::list<RandomResultTable> Tables;
		std::string TitleId;
	
        UpdateRandomResultTablesRequest() {}

		UpdateRandomResultTablesRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UpdateRandomResultTablesRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateRandomResultTablesResult : public PlayFabBaseModel
    {
		
	
        UpdateRandomResultTablesResult() {}

		UpdateRandomResultTablesResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UpdateRandomResultTablesResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetRandomResultTablesRequest : public PlayFabBaseModel
    {
		
	
        GetRandomResultTablesRequest() {}

		GetRandomResultTablesRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetRandomResultTablesRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetRandomResultTablesResult : public PlayFabBaseModel
    {
		
		std::map<std::string, RandomResultTable> Tables;
	
        GetRandomResultTablesResult() {}

		GetRandomResultTablesResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetRandomResultTablesResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserAccountInfoRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
	
        GetUserAccountInfoRequest() {}

		GetUserAccountInfoRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetUserAccountInfoRequest();
		
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
	
	struct GetUserAccountInfoResult : public PlayFabBaseModel
    {
		
		UserAccountInfo* UserInfo;
	
        GetUserAccountInfoResult() {}

		GetUserAccountInfoResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetUserAccountInfoResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserInventoryRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string CatalogVersion;
	
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
	
        GetUserInventoryResult() {}

		GetUserInventoryResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetUserInventoryResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateUserTitleDisplayNameRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
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
	
	struct GetMatchmakerGameInfoRequest : public PlayFabBaseModel
    {
		
		std::string LobbyId;
	
        GetMatchmakerGameInfoRequest() {}

		GetMatchmakerGameInfoRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetMatchmakerGameInfoRequest();
		
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
	
	
	struct GetMatchmakerGameInfoResult : public PlayFabBaseModel
    {
		
		std::string LobbyId;
		std::string TitleId;
		OptionalTime StartTime;
		OptionalTime EndTime;
		std::string Mode;
		std::string BuildVersion;
		Boxed<Region> Region;
		std::list<std::string> Players;
		std::string ServerAddress;
		Uint32 ServerPort;
		std::string StdOutLog;
		std::string StdErrLog;
	
        GetMatchmakerGameInfoResult() {}

		GetMatchmakerGameInfoResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GetMatchmakerGameInfoResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RevokeInventoryItemRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string ItemInstanceId;
	
        RevokeInventoryItemRequest() {}

		RevokeInventoryItemRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RevokeInventoryItemRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RevokeInventoryResult : public PlayFabBaseModel
    {
		
	
        RevokeInventoryResult() {}

		RevokeInventoryResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RevokeInventoryResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SendAccountRecoveryEmailRequest : public PlayFabBaseModel
    {
		
		std::string Email;
	
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
	
	struct AuthUserRequest : public PlayFabBaseModel
    {
		
		std::string AuthorizationTicket;
	
        AuthUserRequest() {}

		AuthUserRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~AuthUserRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AuthUserResponse : public PlayFabBaseModel
    {
		
		bool Authorized;
		std::string PlayFabId;
	
        AuthUserResponse() {}

		AuthUserResponse(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~AuthUserResponse();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UserInfoRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		Uint32 MinCatalogVersion;
	
        UserInfoRequest() {}

		UserInfoRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UserInfoRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UserInfoResponse : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string Username;
		std::string DisplayName;
		std::string TitleDisplayName;
		std::list<ItemInstance> Inventory;
		std::map<std::string, Int32> VirtualCurrency;
		bool IsDeveloper;
		std::string SteamId;
	
        UserInfoResponse() {}

		UserInfoResponse(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~UserInfoResponse();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct StartGameRequest : public PlayFabBaseModel
    {
		
		std::string Build;
		Region Region;
		Uint32 GameMode;
		std::string Subscriber;
	
        StartGameRequest() {}

		StartGameRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~StartGameRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct StartGameResponse : public PlayFabBaseModel
    {
		
		std::string LobbyID;
		Boxed<Region> Region;
		Uint32 GameMode;
		std::string Build;
		std::string Address;
		Uint32 Port;
	
        StartGameResponse() {}

		StartGameResponse(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~StartGameResponse();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PlayerJoinedRequest : public PlayFabBaseModel
    {
		
		std::string ServerId;
		std::string PlayFabId;
	
        PlayerJoinedRequest() {}

		PlayerJoinedRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~PlayerJoinedRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PlayerJoinedResponse : public PlayFabBaseModel
    {
		
	
        PlayerJoinedResponse() {}

		PlayerJoinedResponse(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~PlayerJoinedResponse();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PlayerLeftRequest : public PlayFabBaseModel
    {
		
		std::string ServerId;
		std::string PlayFabId;
	
        PlayerLeftRequest() {}

		PlayerLeftRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~PlayerLeftRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PlayerLeftResponse : public PlayFabBaseModel
    {
		
	
        PlayerLeftResponse() {}

		PlayerLeftResponse(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~PlayerLeftResponse();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RedeemMatchmakerTicketRequest : public PlayFabBaseModel
    {
		
		std::string Ticket;
		std::string IP;
		std::string ServerId;
	
        RedeemMatchmakerTicketRequest() {}

		RedeemMatchmakerTicketRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RedeemMatchmakerTicketRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RedeemMatchmakerTicketResult : public PlayFabBaseModel
    {
		
		bool TicketIsValid;
		std::string Error;
		UserAccountInfo* UserInfo;
	
        RedeemMatchmakerTicketResult() {}

		RedeemMatchmakerTicketResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~RedeemMatchmakerTicketResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct NotifyMatchmakerPlayerLeftRequest : public PlayFabBaseModel
    {
		
		std::string ServerId;
		std::string PlayFabId;
	
        NotifyMatchmakerPlayerLeftRequest() {}

		NotifyMatchmakerPlayerLeftRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~NotifyMatchmakerPlayerLeftRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum PlayerConnectionState
	{
		PlayerConnectionStateUnassigned,
		PlayerConnectionStateConnecting,
		PlayerConnectionStateParticipating,
		PlayerConnectionStateParticipated,
		PlayerConnectionStateReconnecting
	};
	
	void writePlayerConnectionStateEnumJSON(PlayerConnectionState enumVal, PFStringJsonWriter& writer);
	PlayerConnectionState readPlayerConnectionStateFromValue(const rapidjson::Value& obj);
	
	
	struct NotifyMatchmakerPlayerLeftResult : public PlayFabBaseModel
    {
		
		Boxed<PlayerConnectionState> PlayerState;
	
        NotifyMatchmakerPlayerLeftResult() {}

		NotifyMatchmakerPlayerLeftResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~NotifyMatchmakerPlayerLeftResult();
		
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
		
		std::string PlayFabId;
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
		
		std::string PlayFabId;
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
		
		std::string PlayFabId;
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
	
	struct ItemGrant : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string ItemId;
		std::string Annotation;
	
        ItemGrant() {}

		ItemGrant(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ItemGrant();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GrantItemsToUsersRequest : public PlayFabBaseModel
    {
		
		std::string CatalogVersion;
		std::list<ItemGrant> ItemGrants;
	
        GrantItemsToUsersRequest() {}

		GrantItemsToUsersRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GrantItemsToUsersRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ItemGrantResult : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string ItemId;
		std::string Annotation;
		bool Result;
	
        ItemGrantResult() {}

		ItemGrantResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ItemGrantResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GrantItemsToUsersResult : public PlayFabBaseModel
    {
		
		std::list<ItemGrantResult> ItemGrantResults;
	
        GrantItemsToUsersResult() {}

		GrantItemsToUsersResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~GrantItemsToUsersResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AddUserVirtualCurrencyRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string VirtualCurrency;
		Int32 Amount;
	
        AddUserVirtualCurrencyRequest() {}

		AddUserVirtualCurrencyRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~AddUserVirtualCurrencyRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ModifyUserVirtualCurrencyResult : public PlayFabBaseModel
    {
		
		std::string VirtualCurrency;
		Int32 Balance;
	
        ModifyUserVirtualCurrencyResult() {}

		ModifyUserVirtualCurrencyResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~ModifyUserVirtualCurrencyResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SubtractUserVirtualCurrencyRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string VirtualCurrency;
		Int32 Amount;
	
        SubtractUserVirtualCurrencyRequest() {}

		SubtractUserVirtualCurrencyRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~SubtractUserVirtualCurrencyRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AwardSteamAchievementItem : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string AchievementName;
		bool Result;
	
        AwardSteamAchievementItem() {}

		AwardSteamAchievementItem(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~AwardSteamAchievementItem();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AwardSteamAchievementRequest : public PlayFabBaseModel
    {
		
		std::list<AwardSteamAchievementItem> Achievements;
	
        AwardSteamAchievementRequest() {}

		AwardSteamAchievementRequest(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~AwardSteamAchievementRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AwardSteamAchievementResult : public PlayFabBaseModel
    {
		
		std::list<AwardSteamAchievementItem> AchievementResults;
	
        AwardSteamAchievementResult() {}

		AwardSteamAchievementResult(const rapidjson::Value& obj)
        {
            readFromValue(obj);
        }
		
		~AwardSteamAchievementResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	
}

#endif