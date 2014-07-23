#ifndef PLAYFAB_ADMIN_DATA_MODELS_H_
#define PLAYFAB_ADMIN_DATA_MODELS_H_

#include "playfab/PlayFabBaseModel.h"

namespace PlayFab
{
namespace AdminModels
{

	
	struct AddServerBuildRequest : public PlayFabBaseModel
    {
		
		std::string BuildId;
		OptionalTime Timestamp;
		bool Active;
		bool DedicatedServerEligible;
		std::list<std::string> ActiveRegions;
		std::string Comment;
	
        AddServerBuildRequest() :
			PlayFabBaseModel(),
			BuildId(),
			Timestamp(),
			Active(false),
			DedicatedServerEligible(false),
			ActiveRegions(),
			Comment()
			{}
		
		AddServerBuildRequest(const AddServerBuildRequest& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId),
			Timestamp(src.Timestamp),
			Active(src.Active),
			DedicatedServerEligible(src.DedicatedServerEligible),
			ActiveRegions(src.ActiveRegions),
			Comment(src.Comment)
			{}
			
		AddServerBuildRequest(const rapidjson::Value& obj) : AddServerBuildRequest()
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
	
        AddServerBuildResult() :
			PlayFabBaseModel(),
			BuildId(),
			Active(false),
			ActiveRegions(),
			Comment(),
			Timestamp(),
			TitleId()
			{}
		
		AddServerBuildResult(const AddServerBuildResult& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId),
			Active(src.Active),
			ActiveRegions(src.ActiveRegions),
			Comment(src.Comment),
			Timestamp(src.Timestamp),
			TitleId(src.TitleId)
			{}
			
		AddServerBuildResult(const rapidjson::Value& obj) : AddServerBuildResult()
        {
            readFromValue(obj);
        }
		
		~AddServerBuildResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct BanAccountRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string PlayFabId;
		std::string BannedByPlayFabId;
		std::string Reason;
		std::string IPAddress;
		std::string MACAddress;
		OptionalUint32 DurationInHours;
		std::string Notes;
		std::string UniqueBanId;
	
        BanAccountRequest() :
			PlayFabBaseModel(),
			TitleId(),
			PlayFabId(),
			BannedByPlayFabId(),
			Reason(),
			IPAddress(),
			MACAddress(),
			DurationInHours(),
			Notes(),
			UniqueBanId()
			{}
		
		BanAccountRequest(const BanAccountRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			PlayFabId(src.PlayFabId),
			BannedByPlayFabId(src.BannedByPlayFabId),
			Reason(src.Reason),
			IPAddress(src.IPAddress),
			MACAddress(src.MACAddress),
			DurationInHours(src.DurationInHours),
			Notes(src.Notes),
			UniqueBanId(src.UniqueBanId)
			{}
			
		BanAccountRequest(const rapidjson::Value& obj) : BanAccountRequest()
        {
            readFromValue(obj);
        }
		
		~BanAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct BanMultipleAccountsRequest : public PlayFabBaseModel
    {
		
		std::list<BanAccountRequest> accounts;
	
        BanMultipleAccountsRequest() :
			PlayFabBaseModel(),
			accounts()
			{}
		
		BanMultipleAccountsRequest(const BanMultipleAccountsRequest& src) :
			PlayFabBaseModel(),
			accounts(src.accounts)
			{}
			
		BanMultipleAccountsRequest(const rapidjson::Value& obj) : BanMultipleAccountsRequest()
        {
            readFromValue(obj);
        }
		
		~BanMultipleAccountsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct BanMultipleAccountsResult : public PlayFabBaseModel
    {
		
	
        BanMultipleAccountsResult() :
			PlayFabBaseModel()
			{}
		
		BanMultipleAccountsResult(const BanMultipleAccountsResult& src) :
			PlayFabBaseModel()
			{}
			
		BanMultipleAccountsResult(const rapidjson::Value& obj) : BanMultipleAccountsResult()
        {
            readFromValue(obj);
        }
		
		~BanMultipleAccountsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CatalogItemConsumableInfo : public PlayFabBaseModel
    {
		
		Uint32 UsageCount;
		OptionalUint32 UsagePeriod;
		std::string UsagePeriodGroup;
	
        CatalogItemConsumableInfo() :
			PlayFabBaseModel(),
			UsageCount(0),
			UsagePeriod(),
			UsagePeriodGroup()
			{}
		
		CatalogItemConsumableInfo(const CatalogItemConsumableInfo& src) :
			PlayFabBaseModel(),
			UsageCount(src.UsageCount),
			UsagePeriod(src.UsagePeriod),
			UsagePeriodGroup(src.UsagePeriodGroup)
			{}
			
		CatalogItemConsumableInfo(const rapidjson::Value& obj) : CatalogItemConsumableInfo()
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
	
        CatalogItemContainerInfo() :
			PlayFabBaseModel(),
			KeyItemId(),
			ItemContents(),
			ResultTableContents(),
			VirtualCurrencyContents()
			{}
		
		CatalogItemContainerInfo(const CatalogItemContainerInfo& src) :
			PlayFabBaseModel(),
			KeyItemId(src.KeyItemId),
			ItemContents(src.ItemContents),
			ResultTableContents(src.ResultTableContents),
			VirtualCurrencyContents(src.VirtualCurrencyContents)
			{}
			
		CatalogItemContainerInfo(const rapidjson::Value& obj) : CatalogItemContainerInfo()
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
	
        CatalogItemBundleInfo() :
			PlayFabBaseModel(),
			BundledItems(),
			BundledResultTables(),
			BundledVirtualCurrencies()
			{}
		
		CatalogItemBundleInfo(const CatalogItemBundleInfo& src) :
			PlayFabBaseModel(),
			BundledItems(src.BundledItems),
			BundledResultTables(src.BundledResultTables),
			BundledVirtualCurrencies(src.BundledVirtualCurrencies)
			{}
			
		CatalogItemBundleInfo(const rapidjson::Value& obj) : CatalogItemBundleInfo()
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
	
        CatalogItem() :
			PlayFabBaseModel(),
			ItemId(),
			ItemClass(),
			CatalogVersion(),
			DisplayName(),
			Description(),
			VirtualCurrencyPrices(),
			RealCurrencyPrices(),
			ReleaseDate(),
			ExpirationDate(),
			IsFree(),
			NotForSale(),
			NotForTrade(),
			Tags(),
			CustomData(),
			GrantedIfPlayerHas(),
			Consumable(NULL),
			Container(NULL),
			Bundle(NULL)
			{}
		
		CatalogItem(const CatalogItem& src) :
			PlayFabBaseModel(),
			ItemId(src.ItemId),
			ItemClass(src.ItemClass),
			CatalogVersion(src.CatalogVersion),
			DisplayName(src.DisplayName),
			Description(src.Description),
			VirtualCurrencyPrices(src.VirtualCurrencyPrices),
			RealCurrencyPrices(src.RealCurrencyPrices),
			ReleaseDate(src.ReleaseDate),
			ExpirationDate(src.ExpirationDate),
			IsFree(src.IsFree),
			NotForSale(src.NotForSale),
			NotForTrade(src.NotForTrade),
			Tags(src.Tags),
			CustomData(src.CustomData),
			GrantedIfPlayerHas(src.GrantedIfPlayerHas),
			Consumable(src.Consumable ? new CatalogItemConsumableInfo(*src.Consumable) : NULL),
			Container(src.Container ? new CatalogItemContainerInfo(*src.Container) : NULL),
			Bundle(src.Bundle ? new CatalogItemBundleInfo(*src.Bundle) : NULL)
			{}
			
		CatalogItem(const rapidjson::Value& obj) : CatalogItem()
        {
            readFromValue(obj);
        }
		
		~CatalogItem();
		
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
	
	
	struct GameModeInfo : public PlayFabBaseModel
    {
		
		std::string Gamemode;
		Uint32 MinPlayerCount;
		Uint32 MaxPlayerCount;
		float PerfCostPerGame;
	
        GameModeInfo() :
			PlayFabBaseModel(),
			Gamemode(),
			MinPlayerCount(0),
			MaxPlayerCount(0),
			PerfCostPerGame(0)
			{}
		
		GameModeInfo(const GameModeInfo& src) :
			PlayFabBaseModel(),
			Gamemode(src.Gamemode),
			MinPlayerCount(src.MinPlayerCount),
			MaxPlayerCount(src.MaxPlayerCount),
			PerfCostPerGame(src.PerfCostPerGame)
			{}
			
		GameModeInfo(const rapidjson::Value& obj) : GameModeInfo()
        {
            readFromValue(obj);
        }
		
		~GameModeInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetCatalogItemsRequest : public PlayFabBaseModel
    {
		
		std::string CatalogVersion;
	
        GetCatalogItemsRequest() :
			PlayFabBaseModel(),
			CatalogVersion()
			{}
		
		GetCatalogItemsRequest(const GetCatalogItemsRequest& src) :
			PlayFabBaseModel(),
			CatalogVersion(src.CatalogVersion)
			{}
			
		GetCatalogItemsRequest(const rapidjson::Value& obj) : GetCatalogItemsRequest()
        {
            readFromValue(obj);
        }
		
		~GetCatalogItemsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetCatalogItemsResult : public PlayFabBaseModel
    {
		
		std::list<CatalogItem> Catalog;
	
        GetCatalogItemsResult() :
			PlayFabBaseModel(),
			Catalog()
			{}
		
		GetCatalogItemsResult(const GetCatalogItemsResult& src) :
			PlayFabBaseModel(),
			Catalog(src.Catalog)
			{}
			
		GetCatalogItemsResult(const rapidjson::Value& obj) : GetCatalogItemsResult()
        {
            readFromValue(obj);
        }
		
		~GetCatalogItemsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetMatchmakerGameInfoRequest : public PlayFabBaseModel
    {
		
		std::string LobbyId;
	
        GetMatchmakerGameInfoRequest() :
			PlayFabBaseModel(),
			LobbyId()
			{}
		
		GetMatchmakerGameInfoRequest(const GetMatchmakerGameInfoRequest& src) :
			PlayFabBaseModel(),
			LobbyId(src.LobbyId)
			{}
			
		GetMatchmakerGameInfoRequest(const rapidjson::Value& obj) : GetMatchmakerGameInfoRequest()
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
	
        GetMatchmakerGameInfoResult() :
			PlayFabBaseModel(),
			LobbyId(),
			TitleId(),
			StartTime(),
			EndTime(),
			Mode(),
			BuildVersion(),
			Region(),
			Players(),
			ServerAddress(),
			ServerPort(0),
			StdOutLog(),
			StdErrLog()
			{}
		
		GetMatchmakerGameInfoResult(const GetMatchmakerGameInfoResult& src) :
			PlayFabBaseModel(),
			LobbyId(src.LobbyId),
			TitleId(src.TitleId),
			StartTime(src.StartTime),
			EndTime(src.EndTime),
			Mode(src.Mode),
			BuildVersion(src.BuildVersion),
			Region(src.Region),
			Players(src.Players),
			ServerAddress(src.ServerAddress),
			ServerPort(src.ServerPort),
			StdOutLog(src.StdOutLog),
			StdErrLog(src.StdErrLog)
			{}
			
		GetMatchmakerGameInfoResult(const rapidjson::Value& obj) : GetMatchmakerGameInfoResult()
        {
            readFromValue(obj);
        }
		
		~GetMatchmakerGameInfoResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetMatchmakerGameModesRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
	
        GetMatchmakerGameModesRequest() :
			PlayFabBaseModel(),
			BuildVersion()
			{}
		
		GetMatchmakerGameModesRequest(const GetMatchmakerGameModesRequest& src) :
			PlayFabBaseModel(),
			BuildVersion(src.BuildVersion)
			{}
			
		GetMatchmakerGameModesRequest(const rapidjson::Value& obj) : GetMatchmakerGameModesRequest()
        {
            readFromValue(obj);
        }
		
		~GetMatchmakerGameModesRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetMatchmakerGameModesResult : public PlayFabBaseModel
    {
		
		std::list<GameModeInfo> GameModes;
	
        GetMatchmakerGameModesResult() :
			PlayFabBaseModel(),
			GameModes()
			{}
		
		GetMatchmakerGameModesResult(const GetMatchmakerGameModesResult& src) :
			PlayFabBaseModel(),
			GameModes(src.GameModes)
			{}
			
		GetMatchmakerGameModesResult(const rapidjson::Value& obj) : GetMatchmakerGameModesResult()
        {
            readFromValue(obj);
        }
		
		~GetMatchmakerGameModesResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetRandomResultTablesRequest : public PlayFabBaseModel
    {
		
	
        GetRandomResultTablesRequest() :
			PlayFabBaseModel()
			{}
		
		GetRandomResultTablesRequest(const GetRandomResultTablesRequest& src) :
			PlayFabBaseModel()
			{}
			
		GetRandomResultTablesRequest(const rapidjson::Value& obj) : GetRandomResultTablesRequest()
        {
            readFromValue(obj);
        }
		
		~GetRandomResultTablesRequest();
		
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
	
        ResultTableNode() :
			PlayFabBaseModel(),
			ResultItemType(),
			ResultItem(),
			Weight(0)
			{}
		
		ResultTableNode(const ResultTableNode& src) :
			PlayFabBaseModel(),
			ResultItemType(src.ResultItemType),
			ResultItem(src.ResultItem),
			Weight(src.Weight)
			{}
			
		ResultTableNode(const rapidjson::Value& obj) : ResultTableNode()
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
	
        RandomResultTable() :
			PlayFabBaseModel(),
			TableId(),
			Nodes()
			{}
		
		RandomResultTable(const RandomResultTable& src) :
			PlayFabBaseModel(),
			TableId(src.TableId),
			Nodes(src.Nodes)
			{}
			
		RandomResultTable(const rapidjson::Value& obj) : RandomResultTable()
        {
            readFromValue(obj);
        }
		
		~RandomResultTable();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetRandomResultTablesResult : public PlayFabBaseModel
    {
		
		std::map<std::string, RandomResultTable> Tables;
	
        GetRandomResultTablesResult() :
			PlayFabBaseModel(),
			Tables()
			{}
		
		GetRandomResultTablesResult(const GetRandomResultTablesResult& src) :
			PlayFabBaseModel(),
			Tables(src.Tables)
			{}
			
		GetRandomResultTablesResult(const rapidjson::Value& obj) : GetRandomResultTablesResult()
        {
            readFromValue(obj);
        }
		
		~GetRandomResultTablesResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetServerBuildInfoRequest : public PlayFabBaseModel
    {
		
		std::string BuildId;
	
        GetServerBuildInfoRequest() :
			PlayFabBaseModel(),
			BuildId()
			{}
		
		GetServerBuildInfoRequest(const GetServerBuildInfoRequest& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId)
			{}
			
		GetServerBuildInfoRequest(const rapidjson::Value& obj) : GetServerBuildInfoRequest()
        {
            readFromValue(obj);
        }
		
		~GetServerBuildInfoRequest();
		
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
	
        GetServerBuildInfoResult() :
			PlayFabBaseModel(),
			BuildId(),
			Active(false),
			ActiveRegions(),
			Comment(),
			Timestamp(),
			TitleId()
			{}
		
		GetServerBuildInfoResult(const GetServerBuildInfoResult& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId),
			Active(src.Active),
			ActiveRegions(src.ActiveRegions),
			Comment(src.Comment),
			Timestamp(src.Timestamp),
			TitleId(src.TitleId)
			{}
			
		GetServerBuildInfoResult(const rapidjson::Value& obj) : GetServerBuildInfoResult()
        {
            readFromValue(obj);
        }
		
		~GetServerBuildInfoResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetTitleDataRequest : public PlayFabBaseModel
    {
		
		std::list<std::string> Keys;
	
        GetTitleDataRequest() :
			PlayFabBaseModel(),
			Keys()
			{}
		
		GetTitleDataRequest(const GetTitleDataRequest& src) :
			PlayFabBaseModel(),
			Keys(src.Keys)
			{}
			
		GetTitleDataRequest(const rapidjson::Value& obj) : GetTitleDataRequest()
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
	
        GetTitleDataResult() :
			PlayFabBaseModel(),
			Data()
			{}
		
		GetTitleDataResult(const GetTitleDataResult& src) :
			PlayFabBaseModel(),
			Data(src.Data)
			{}
			
		GetTitleDataResult(const rapidjson::Value& obj) : GetTitleDataResult()
        {
            readFromValue(obj);
        }
		
		~GetTitleDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserInventoryRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string CatalogVersion;
	
        GetUserInventoryRequest() :
			PlayFabBaseModel(),
			PlayFabId(),
			CatalogVersion()
			{}
		
		GetUserInventoryRequest(const GetUserInventoryRequest& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			CatalogVersion(src.CatalogVersion)
			{}
			
		GetUserInventoryRequest(const rapidjson::Value& obj) : GetUserInventoryRequest()
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
	
        ItemInstance() :
			PlayFabBaseModel(),
			ItemId(),
			ItemInstanceId(),
			ItemClass(),
			PurchaseDate(),
			Expiration(),
			RemainingUses(),
			Annotation(),
			CatalogVersion(),
			BundleParent()
			{}
		
		ItemInstance(const ItemInstance& src) :
			PlayFabBaseModel(),
			ItemId(src.ItemId),
			ItemInstanceId(src.ItemInstanceId),
			ItemClass(src.ItemClass),
			PurchaseDate(src.PurchaseDate),
			Expiration(src.Expiration),
			RemainingUses(src.RemainingUses),
			Annotation(src.Annotation),
			CatalogVersion(src.CatalogVersion),
			BundleParent(src.BundleParent)
			{}
			
		ItemInstance(const rapidjson::Value& obj) : ItemInstance()
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
	
        GetUserInventoryResult() :
			PlayFabBaseModel(),
			Inventory()
			{}
		
		GetUserInventoryResult(const GetUserInventoryResult& src) :
			PlayFabBaseModel(),
			Inventory(src.Inventory)
			{}
			
		GetUserInventoryResult(const rapidjson::Value& obj) : GetUserInventoryResult()
        {
            readFromValue(obj);
        }
		
		~GetUserInventoryResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ListBuildsRequest : public PlayFabBaseModel
    {
		
	
        ListBuildsRequest() :
			PlayFabBaseModel()
			{}
		
		ListBuildsRequest(const ListBuildsRequest& src) :
			PlayFabBaseModel()
			{}
			
		ListBuildsRequest(const rapidjson::Value& obj) : ListBuildsRequest()
        {
            readFromValue(obj);
        }
		
		~ListBuildsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ListBuildsResult : public PlayFabBaseModel
    {
		
		std::list<GetServerBuildInfoResult> Builds;
	
        ListBuildsResult() :
			PlayFabBaseModel(),
			Builds()
			{}
		
		ListBuildsResult(const ListBuildsResult& src) :
			PlayFabBaseModel(),
			Builds(src.Builds)
			{}
			
		ListBuildsResult(const rapidjson::Value& obj) : ListBuildsResult()
        {
            readFromValue(obj);
        }
		
		~ListBuildsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LookupUserAccountInfoRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string Email;
		std::string Username;
		std::string TitleDisplayName;
	
        LookupUserAccountInfoRequest() :
			PlayFabBaseModel(),
			PlayFabId(),
			Email(),
			Username(),
			TitleDisplayName()
			{}
		
		LookupUserAccountInfoRequest(const LookupUserAccountInfoRequest& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			Email(src.Email),
			Username(src.Username),
			TitleDisplayName(src.TitleDisplayName)
			{}
			
		LookupUserAccountInfoRequest(const rapidjson::Value& obj) : LookupUserAccountInfoRequest()
        {
            readFromValue(obj);
        }
		
		~LookupUserAccountInfoRequest();
		
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
	
        UserTitleInfo() :
			PlayFabBaseModel(),
			DisplayName(),
			Origination(),
			Created(),
			LastLogin(),
			FirstLogin()
			{}
		
		UserTitleInfo(const UserTitleInfo& src) :
			PlayFabBaseModel(),
			DisplayName(src.DisplayName),
			Origination(src.Origination),
			Created(src.Created),
			LastLogin(src.LastLogin),
			FirstLogin(src.FirstLogin)
			{}
			
		UserTitleInfo(const rapidjson::Value& obj) : UserTitleInfo()
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
	
        UserPrivateAccountInfo() :
			PlayFabBaseModel(),
			Email()
			{}
		
		UserPrivateAccountInfo(const UserPrivateAccountInfo& src) :
			PlayFabBaseModel(),
			Email(src.Email)
			{}
			
		UserPrivateAccountInfo(const rapidjson::Value& obj) : UserPrivateAccountInfo()
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
	
        UserFacebookInfo() :
			PlayFabBaseModel(),
			FacebookId(),
			FacebookUsername(),
			FacebookDisplayname()
			{}
		
		UserFacebookInfo(const UserFacebookInfo& src) :
			PlayFabBaseModel(),
			FacebookId(src.FacebookId),
			FacebookUsername(src.FacebookUsername),
			FacebookDisplayname(src.FacebookDisplayname)
			{}
			
		UserFacebookInfo(const rapidjson::Value& obj) : UserFacebookInfo()
        {
            readFromValue(obj);
        }
		
		~UserFacebookInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
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
	
        UserSteamInfo() :
			PlayFabBaseModel(),
			SteamId(),
			SteamCountry(),
			SteamCurrency(),
			SteamActivationStatus()
			{}
		
		UserSteamInfo(const UserSteamInfo& src) :
			PlayFabBaseModel(),
			SteamId(src.SteamId),
			SteamCountry(src.SteamCountry),
			SteamCurrency(src.SteamCurrency),
			SteamActivationStatus(src.SteamActivationStatus)
			{}
			
		UserSteamInfo(const rapidjson::Value& obj) : UserSteamInfo()
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
	
        UserGameCenterInfo() :
			PlayFabBaseModel(),
			GameCenterId()
			{}
		
		UserGameCenterInfo(const UserGameCenterInfo& src) :
			PlayFabBaseModel(),
			GameCenterId(src.GameCenterId)
			{}
			
		UserGameCenterInfo(const rapidjson::Value& obj) : UserGameCenterInfo()
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
	
        UserAccountInfo() :
			PlayFabBaseModel(),
			PlayFabId(),
			Created(),
			Username(),
			TitleInfo(NULL),
			PrivateInfo(NULL),
			FacebookInfo(NULL),
			SteamInfo(NULL),
			GameCenterInfo(NULL)
			{}
		
		UserAccountInfo(const UserAccountInfo& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			Created(src.Created),
			Username(src.Username),
			TitleInfo(src.TitleInfo ? new UserTitleInfo(*src.TitleInfo) : NULL),
			PrivateInfo(src.PrivateInfo ? new UserPrivateAccountInfo(*src.PrivateInfo) : NULL),
			FacebookInfo(src.FacebookInfo ? new UserFacebookInfo(*src.FacebookInfo) : NULL),
			SteamInfo(src.SteamInfo ? new UserSteamInfo(*src.SteamInfo) : NULL),
			GameCenterInfo(src.GameCenterInfo ? new UserGameCenterInfo(*src.GameCenterInfo) : NULL)
			{}
			
		UserAccountInfo(const rapidjson::Value& obj) : UserAccountInfo()
        {
            readFromValue(obj);
        }
		
		~UserAccountInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LookupUserAccountInfoResult : public PlayFabBaseModel
    {
		
		UserAccountInfo* UserInfo;
	
        LookupUserAccountInfoResult() :
			PlayFabBaseModel(),
			UserInfo(NULL)
			{}
		
		LookupUserAccountInfoResult(const LookupUserAccountInfoResult& src) :
			PlayFabBaseModel(),
			UserInfo(src.UserInfo ? new UserAccountInfo(*src.UserInfo) : NULL)
			{}
			
		LookupUserAccountInfoResult(const rapidjson::Value& obj) : LookupUserAccountInfoResult()
        {
            readFromValue(obj);
        }
		
		~LookupUserAccountInfoResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ModifyMatchmakerGameModesRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
		std::list<GameModeInfo> GameModes;
	
        ModifyMatchmakerGameModesRequest() :
			PlayFabBaseModel(),
			BuildVersion(),
			GameModes()
			{}
		
		ModifyMatchmakerGameModesRequest(const ModifyMatchmakerGameModesRequest& src) :
			PlayFabBaseModel(),
			BuildVersion(src.BuildVersion),
			GameModes(src.GameModes)
			{}
			
		ModifyMatchmakerGameModesRequest(const rapidjson::Value& obj) : ModifyMatchmakerGameModesRequest()
        {
            readFromValue(obj);
        }
		
		~ModifyMatchmakerGameModesRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ModifyMatchmakerGameModesResult : public PlayFabBaseModel
    {
		
	
        ModifyMatchmakerGameModesResult() :
			PlayFabBaseModel()
			{}
		
		ModifyMatchmakerGameModesResult(const ModifyMatchmakerGameModesResult& src) :
			PlayFabBaseModel()
			{}
			
		ModifyMatchmakerGameModesResult(const rapidjson::Value& obj) : ModifyMatchmakerGameModesResult()
        {
            readFromValue(obj);
        }
		
		~ModifyMatchmakerGameModesResult();
		
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
	
        ModifyServerBuildRequest() :
			PlayFabBaseModel(),
			BuildId(),
			Timestamp(),
			Active(),
			ActiveRegions(),
			Comment()
			{}
		
		ModifyServerBuildRequest(const ModifyServerBuildRequest& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId),
			Timestamp(src.Timestamp),
			Active(src.Active),
			ActiveRegions(src.ActiveRegions),
			Comment(src.Comment)
			{}
			
		ModifyServerBuildRequest(const rapidjson::Value& obj) : ModifyServerBuildRequest()
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
	
        ModifyServerBuildResult() :
			PlayFabBaseModel(),
			BuildId(),
			Active(false),
			ActiveRegions(),
			Comment(),
			Timestamp(),
			TitleId()
			{}
		
		ModifyServerBuildResult(const ModifyServerBuildResult& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId),
			Active(src.Active),
			ActiveRegions(src.ActiveRegions),
			Comment(src.Comment),
			Timestamp(src.Timestamp),
			TitleId(src.TitleId)
			{}
			
		ModifyServerBuildResult(const rapidjson::Value& obj) : ModifyServerBuildResult()
        {
            readFromValue(obj);
        }
		
		~ModifyServerBuildResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RemoveServerBuildRequest : public PlayFabBaseModel
    {
		
		std::string BuildId;
	
        RemoveServerBuildRequest() :
			PlayFabBaseModel(),
			BuildId()
			{}
		
		RemoveServerBuildRequest(const RemoveServerBuildRequest& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId)
			{}
			
		RemoveServerBuildRequest(const rapidjson::Value& obj) : RemoveServerBuildRequest()
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
	
        RemoveServerBuildResult() :
			PlayFabBaseModel(),
			BuildId()
			{}
		
		RemoveServerBuildResult(const RemoveServerBuildResult& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId)
			{}
			
		RemoveServerBuildResult(const rapidjson::Value& obj) : RemoveServerBuildResult()
        {
            readFromValue(obj);
        }
		
		~RemoveServerBuildResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RevokeInventoryItemRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string ItemInstanceId;
	
        RevokeInventoryItemRequest() :
			PlayFabBaseModel(),
			PlayFabId(),
			ItemInstanceId()
			{}
		
		RevokeInventoryItemRequest(const RevokeInventoryItemRequest& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			ItemInstanceId(src.ItemInstanceId)
			{}
			
		RevokeInventoryItemRequest(const rapidjson::Value& obj) : RevokeInventoryItemRequest()
        {
            readFromValue(obj);
        }
		
		~RevokeInventoryItemRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RevokeInventoryResult : public PlayFabBaseModel
    {
		
	
        RevokeInventoryResult() :
			PlayFabBaseModel()
			{}
		
		RevokeInventoryResult(const RevokeInventoryResult& src) :
			PlayFabBaseModel()
			{}
			
		RevokeInventoryResult(const rapidjson::Value& obj) : RevokeInventoryResult()
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
	
        SendAccountRecoveryEmailRequest() :
			PlayFabBaseModel(),
			Email()
			{}
		
		SendAccountRecoveryEmailRequest(const SendAccountRecoveryEmailRequest& src) :
			PlayFabBaseModel(),
			Email(src.Email)
			{}
			
		SendAccountRecoveryEmailRequest(const rapidjson::Value& obj) : SendAccountRecoveryEmailRequest()
        {
            readFromValue(obj);
        }
		
		~SendAccountRecoveryEmailRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SendAccountRecoveryEmailResult : public PlayFabBaseModel
    {
		
	
        SendAccountRecoveryEmailResult() :
			PlayFabBaseModel()
			{}
		
		SendAccountRecoveryEmailResult(const SendAccountRecoveryEmailResult& src) :
			PlayFabBaseModel()
			{}
			
		SendAccountRecoveryEmailResult(const rapidjson::Value& obj) : SendAccountRecoveryEmailResult()
        {
            readFromValue(obj);
        }
		
		~SendAccountRecoveryEmailResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SetTitleDataRequest : public PlayFabBaseModel
    {
		
		std::string Key;
		std::string Value;
	
        SetTitleDataRequest() :
			PlayFabBaseModel(),
			Key(),
			Value()
			{}
		
		SetTitleDataRequest(const SetTitleDataRequest& src) :
			PlayFabBaseModel(),
			Key(src.Key),
			Value(src.Value)
			{}
			
		SetTitleDataRequest(const rapidjson::Value& obj) : SetTitleDataRequest()
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
	
        SetTitleDataResult() :
			PlayFabBaseModel(),
			Key(),
			Value()
			{}
		
		SetTitleDataResult(const SetTitleDataResult& src) :
			PlayFabBaseModel(),
			Key(src.Key),
			Value(src.Value)
			{}
			
		SetTitleDataResult(const rapidjson::Value& obj) : SetTitleDataResult()
        {
            readFromValue(obj);
        }
		
		~SetTitleDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateCatalogItemsRequest : public PlayFabBaseModel
    {
		
		std::string CatalogVersion;
		std::list<CatalogItem> CatalogItems;
	
        UpdateCatalogItemsRequest() :
			PlayFabBaseModel(),
			CatalogVersion(),
			CatalogItems()
			{}
		
		UpdateCatalogItemsRequest(const UpdateCatalogItemsRequest& src) :
			PlayFabBaseModel(),
			CatalogVersion(src.CatalogVersion),
			CatalogItems(src.CatalogItems)
			{}
			
		UpdateCatalogItemsRequest(const rapidjson::Value& obj) : UpdateCatalogItemsRequest()
        {
            readFromValue(obj);
        }
		
		~UpdateCatalogItemsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateCatalogItemsResult : public PlayFabBaseModel
    {
		
	
        UpdateCatalogItemsResult() :
			PlayFabBaseModel()
			{}
		
		UpdateCatalogItemsResult(const UpdateCatalogItemsResult& src) :
			PlayFabBaseModel()
			{}
			
		UpdateCatalogItemsResult(const rapidjson::Value& obj) : UpdateCatalogItemsResult()
        {
            readFromValue(obj);
        }
		
		~UpdateCatalogItemsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateRandomResultTablesRequest : public PlayFabBaseModel
    {
		
		std::list<RandomResultTable> Tables;
		std::string TitleId;
	
        UpdateRandomResultTablesRequest() :
			PlayFabBaseModel(),
			Tables(),
			TitleId()
			{}
		
		UpdateRandomResultTablesRequest(const UpdateRandomResultTablesRequest& src) :
			PlayFabBaseModel(),
			Tables(src.Tables),
			TitleId(src.TitleId)
			{}
			
		UpdateRandomResultTablesRequest(const rapidjson::Value& obj) : UpdateRandomResultTablesRequest()
        {
            readFromValue(obj);
        }
		
		~UpdateRandomResultTablesRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateRandomResultTablesResult : public PlayFabBaseModel
    {
		
	
        UpdateRandomResultTablesResult() :
			PlayFabBaseModel()
			{}
		
		UpdateRandomResultTablesResult(const UpdateRandomResultTablesResult& src) :
			PlayFabBaseModel()
			{}
			
		UpdateRandomResultTablesResult(const rapidjson::Value& obj) : UpdateRandomResultTablesResult()
        {
            readFromValue(obj);
        }
		
		~UpdateRandomResultTablesResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateUserTitleDisplayNameRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string DisplayName;
	
        UpdateUserTitleDisplayNameRequest() :
			PlayFabBaseModel(),
			PlayFabId(),
			DisplayName()
			{}
		
		UpdateUserTitleDisplayNameRequest(const UpdateUserTitleDisplayNameRequest& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			DisplayName(src.DisplayName)
			{}
			
		UpdateUserTitleDisplayNameRequest(const rapidjson::Value& obj) : UpdateUserTitleDisplayNameRequest()
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
	
        UpdateUserTitleDisplayNameResult() :
			PlayFabBaseModel(),
			DisplayName()
			{}
		
		UpdateUserTitleDisplayNameResult(const UpdateUserTitleDisplayNameResult& src) :
			PlayFabBaseModel(),
			DisplayName(src.DisplayName)
			{}
			
		UpdateUserTitleDisplayNameResult(const rapidjson::Value& obj) : UpdateUserTitleDisplayNameResult()
        {
            readFromValue(obj);
        }
		
		~UpdateUserTitleDisplayNameResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	

}
}

#endif