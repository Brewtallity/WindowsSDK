#ifndef PLAYFAB_CLIENT_DATA_MODELS_H_
#define PLAYFAB_CLIENT_DATA_MODELS_H_

#include "playfab/PlayFabBaseModel.h"

namespace PlayFab
{
namespace ClientModels
{

	
	struct AddFriendRequest : public PlayFabBaseModel
    {
		
		std::string FriendPlayFabId;
		std::string FriendUsername;
		std::string FriendEmail;
		std::string FriendTitleDisplayName;
		std::string PublisherId;
	
        AddFriendRequest() :
			PlayFabBaseModel(),
			FriendPlayFabId(),
			FriendUsername(),
			FriendEmail(),
			FriendTitleDisplayName(),
			PublisherId()
			{}
		
		AddFriendRequest(const AddFriendRequest& src) :
			PlayFabBaseModel(),
			FriendPlayFabId(src.FriendPlayFabId),
			FriendUsername(src.FriendUsername),
			FriendEmail(src.FriendEmail),
			FriendTitleDisplayName(src.FriendTitleDisplayName),
			PublisherId(src.PublisherId)
			{}
			
		AddFriendRequest(const rapidjson::Value& obj) : AddFriendRequest()
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
	
        AddFriendResult() :
			PlayFabBaseModel(),
			Created(false)
			{}
		
		AddFriendResult(const AddFriendResult& src) :
			PlayFabBaseModel(),
			Created(src.Created)
			{}
			
		AddFriendResult(const rapidjson::Value& obj) : AddFriendResult()
        {
            readFromValue(obj);
        }
		
		~AddFriendResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AddSharedGroupMembersRequest : public PlayFabBaseModel
    {
		
		std::string SharedGroupId;
		std::list<std::string> PlayFabIds;
	
        AddSharedGroupMembersRequest() :
			PlayFabBaseModel(),
			SharedGroupId(),
			PlayFabIds()
			{}
		
		AddSharedGroupMembersRequest(const AddSharedGroupMembersRequest& src) :
			PlayFabBaseModel(),
			SharedGroupId(src.SharedGroupId),
			PlayFabIds(src.PlayFabIds)
			{}
			
		AddSharedGroupMembersRequest(const rapidjson::Value& obj) : AddSharedGroupMembersRequest()
        {
            readFromValue(obj);
        }
		
		~AddSharedGroupMembersRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AddSharedGroupMembersResult : public PlayFabBaseModel
    {
		
	
        AddSharedGroupMembersResult() :
			PlayFabBaseModel()
			{}
		
		AddSharedGroupMembersResult(const AddSharedGroupMembersResult& src) :
			PlayFabBaseModel()
			{}
			
		AddSharedGroupMembersResult(const rapidjson::Value& obj) : AddSharedGroupMembersResult()
        {
            readFromValue(obj);
        }
		
		~AddSharedGroupMembersResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AddUsernamePasswordRequest : public PlayFabBaseModel
    {
		
		std::string Username;
		std::string Email;
		std::string Password;
		std::string PublisherId;
	
        AddUsernamePasswordRequest() :
			PlayFabBaseModel(),
			Username(),
			Email(),
			Password(),
			PublisherId()
			{}
		
		AddUsernamePasswordRequest(const AddUsernamePasswordRequest& src) :
			PlayFabBaseModel(),
			Username(src.Username),
			Email(src.Email),
			Password(src.Password),
			PublisherId(src.PublisherId)
			{}
			
		AddUsernamePasswordRequest(const rapidjson::Value& obj) : AddUsernamePasswordRequest()
        {
            readFromValue(obj);
        }
		
		~AddUsernamePasswordRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AddUsernamePasswordResult : public PlayFabBaseModel
    {
		
		std::string Username;
	
        AddUsernamePasswordResult() :
			PlayFabBaseModel(),
			Username()
			{}
		
		AddUsernamePasswordResult(const AddUsernamePasswordResult& src) :
			PlayFabBaseModel(),
			Username(src.Username)
			{}
			
		AddUsernamePasswordResult(const rapidjson::Value& obj) : AddUsernamePasswordResult()
        {
            readFromValue(obj);
        }
		
		~AddUsernamePasswordResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AddUserVirtualCurrencyRequest : public PlayFabBaseModel
    {
		
		std::string VirtualCurrency;
		Int32 Amount;
	
        AddUserVirtualCurrencyRequest() :
			PlayFabBaseModel(),
			VirtualCurrency(),
			Amount(0)
			{}
		
		AddUserVirtualCurrencyRequest(const AddUserVirtualCurrencyRequest& src) :
			PlayFabBaseModel(),
			VirtualCurrency(src.VirtualCurrency),
			Amount(src.Amount)
			{}
			
		AddUserVirtualCurrencyRequest(const rapidjson::Value& obj) : AddUserVirtualCurrencyRequest()
        {
            readFromValue(obj);
        }
		
		~AddUserVirtualCurrencyRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AndroidDevicePushNotificationRegistrationRequest : public PlayFabBaseModel
    {
		
		std::string DeviceToken;
		OptionalBool SendPushNotificationConfirmation;
		std::string ConfirmationMessege;
	
        AndroidDevicePushNotificationRegistrationRequest() :
			PlayFabBaseModel(),
			DeviceToken(),
			SendPushNotificationConfirmation(),
			ConfirmationMessege()
			{}
		
		AndroidDevicePushNotificationRegistrationRequest(const AndroidDevicePushNotificationRegistrationRequest& src) :
			PlayFabBaseModel(),
			DeviceToken(src.DeviceToken),
			SendPushNotificationConfirmation(src.SendPushNotificationConfirmation),
			ConfirmationMessege(src.ConfirmationMessege)
			{}
			
		AndroidDevicePushNotificationRegistrationRequest(const rapidjson::Value& obj) : AndroidDevicePushNotificationRegistrationRequest()
        {
            readFromValue(obj);
        }
		
		~AndroidDevicePushNotificationRegistrationRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AndroidDevicePushNotificationRegistrationResult : public PlayFabBaseModel
    {
		
	
        AndroidDevicePushNotificationRegistrationResult() :
			PlayFabBaseModel()
			{}
		
		AndroidDevicePushNotificationRegistrationResult(const AndroidDevicePushNotificationRegistrationResult& src) :
			PlayFabBaseModel()
			{}
			
		AndroidDevicePushNotificationRegistrationResult(const rapidjson::Value& obj) : AndroidDevicePushNotificationRegistrationResult()
        {
            readFromValue(obj);
        }
		
		~AndroidDevicePushNotificationRegistrationResult();
		
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
	
        CartItem() :
			PlayFabBaseModel(),
			ItemId(),
			ItemClass(),
			ItemInstanceId(),
			DisplayName(),
			Description(),
			VirtualCurrencyPrices(),
			RealCurrencyPrices(),
			VCAmount()
			{}
		
		CartItem(const CartItem& src) :
			PlayFabBaseModel(),
			ItemId(src.ItemId),
			ItemClass(src.ItemClass),
			ItemInstanceId(src.ItemInstanceId),
			DisplayName(src.DisplayName),
			Description(src.Description),
			VirtualCurrencyPrices(src.VirtualCurrencyPrices),
			RealCurrencyPrices(src.RealCurrencyPrices),
			VCAmount(src.VCAmount)
			{}
			
		CartItem(const rapidjson::Value& obj) : CartItem()
        {
            readFromValue(obj);
        }
		
		~CartItem();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CatalogItemConsumableInfo : public PlayFabBaseModel
    {
		
		OptionalUint32 UsageCount;
		OptionalUint32 UsagePeriod;
		std::string UsagePeriodGroup;
	
        CatalogItemConsumableInfo() :
			PlayFabBaseModel(),
			UsageCount(),
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
	
	struct CharacterLeaderboardEntry : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string CharacterId;
		std::string CharacterName;
		std::string DisplayName;
		std::string CharacterType;
		Int32 StatValue;
		Int32 Position;
	
        CharacterLeaderboardEntry() :
			PlayFabBaseModel(),
			PlayFabId(),
			CharacterId(),
			CharacterName(),
			DisplayName(),
			CharacterType(),
			StatValue(0),
			Position(0)
			{}
		
		CharacterLeaderboardEntry(const CharacterLeaderboardEntry& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			CharacterId(src.CharacterId),
			CharacterName(src.CharacterName),
			DisplayName(src.DisplayName),
			CharacterType(src.CharacterType),
			StatValue(src.StatValue),
			Position(src.Position)
			{}
			
		CharacterLeaderboardEntry(const rapidjson::Value& obj) : CharacterLeaderboardEntry()
        {
            readFromValue(obj);
        }
		
		~CharacterLeaderboardEntry();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ConfirmPurchaseRequest : public PlayFabBaseModel
    {
		
		std::string OrderId;
	
        ConfirmPurchaseRequest() :
			PlayFabBaseModel(),
			OrderId()
			{}
		
		ConfirmPurchaseRequest(const ConfirmPurchaseRequest& src) :
			PlayFabBaseModel(),
			OrderId(src.OrderId)
			{}
			
		ConfirmPurchaseRequest(const rapidjson::Value& obj) : ConfirmPurchaseRequest()
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
	
        PurchasedItem() :
			PlayFabBaseModel(),
			ItemInstanceId(),
			ItemId(),
			CatalogVersion(),
			DisplayName(),
			UnitCurrency(),
			UnitPrice(0),
			BundleContents()
			{}
		
		PurchasedItem(const PurchasedItem& src) :
			PlayFabBaseModel(),
			ItemInstanceId(src.ItemInstanceId),
			ItemId(src.ItemId),
			CatalogVersion(src.CatalogVersion),
			DisplayName(src.DisplayName),
			UnitCurrency(src.UnitCurrency),
			UnitPrice(src.UnitPrice),
			BundleContents(src.BundleContents)
			{}
			
		PurchasedItem(const rapidjson::Value& obj) : PurchasedItem()
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
		time_t PurchaseDate;
		std::list<PurchasedItem> Items;
	
        ConfirmPurchaseResult() :
			PlayFabBaseModel(),
			OrderId(),
			PurchaseDate(0),
			Items()
			{}
		
		ConfirmPurchaseResult(const ConfirmPurchaseResult& src) :
			PlayFabBaseModel(),
			OrderId(src.OrderId),
			PurchaseDate(src.PurchaseDate),
			Items(src.Items)
			{}
			
		ConfirmPurchaseResult(const rapidjson::Value& obj) : ConfirmPurchaseResult()
        {
            readFromValue(obj);
        }
		
		~ConfirmPurchaseResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ConsumeItemRequest : public PlayFabBaseModel
    {
		
		std::string ItemInstanceId;
		Int32 ConsumeCount;
	
        ConsumeItemRequest() :
			PlayFabBaseModel(),
			ItemInstanceId(),
			ConsumeCount(0)
			{}
		
		ConsumeItemRequest(const ConsumeItemRequest& src) :
			PlayFabBaseModel(),
			ItemInstanceId(src.ItemInstanceId),
			ConsumeCount(src.ConsumeCount)
			{}
			
		ConsumeItemRequest(const rapidjson::Value& obj) : ConsumeItemRequest()
        {
            readFromValue(obj);
        }
		
		~ConsumeItemRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ConsumeItemResult : public PlayFabBaseModel
    {
		
		std::string ItemInstanceId;
		Int32 RemainingUses;
	
        ConsumeItemResult() :
			PlayFabBaseModel(),
			ItemInstanceId(),
			RemainingUses(0)
			{}
		
		ConsumeItemResult(const ConsumeItemResult& src) :
			PlayFabBaseModel(),
			ItemInstanceId(src.ItemInstanceId),
			RemainingUses(src.RemainingUses)
			{}
			
		ConsumeItemResult(const rapidjson::Value& obj) : ConsumeItemResult()
        {
            readFromValue(obj);
        }
		
		~ConsumeItemResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CreateSharedGroupRequest : public PlayFabBaseModel
    {
		
		std::string SharedGroupId;
	
        CreateSharedGroupRequest() :
			PlayFabBaseModel(),
			SharedGroupId()
			{}
		
		CreateSharedGroupRequest(const CreateSharedGroupRequest& src) :
			PlayFabBaseModel(),
			SharedGroupId(src.SharedGroupId)
			{}
			
		CreateSharedGroupRequest(const rapidjson::Value& obj) : CreateSharedGroupRequest()
        {
            readFromValue(obj);
        }
		
		~CreateSharedGroupRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CreateSharedGroupResult : public PlayFabBaseModel
    {
		
		std::string SharedGroupId;
	
        CreateSharedGroupResult() :
			PlayFabBaseModel(),
			SharedGroupId()
			{}
		
		CreateSharedGroupResult(const CreateSharedGroupResult& src) :
			PlayFabBaseModel(),
			SharedGroupId(src.SharedGroupId)
			{}
			
		CreateSharedGroupResult(const rapidjson::Value& obj) : CreateSharedGroupResult()
        {
            readFromValue(obj);
        }
		
		~CreateSharedGroupResult();
		
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
	
	
	enum Region
	{
		RegionUSCentral,
		RegionUSEast,
		RegionEUWest,
		RegionSingapore,
		RegionJapan,
		RegionBrazil,
		RegionAustralia
	};
	
	void writeRegionEnumJSON(Region enumVal, PFStringJsonWriter& writer);
	Region readRegionFromValue(const rapidjson::Value& obj);
	
	
	struct CurrentGamesRequest : public PlayFabBaseModel
    {
		
		Boxed<Region> Region;
		std::string BuildVersion;
	
        CurrentGamesRequest() :
			PlayFabBaseModel(),
			Region(),
			BuildVersion()
			{}
		
		CurrentGamesRequest(const CurrentGamesRequest& src) :
			PlayFabBaseModel(),
			Region(src.Region),
			BuildVersion(src.BuildVersion)
			{}
			
		CurrentGamesRequest(const rapidjson::Value& obj) : CurrentGamesRequest()
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
		OptionalInt32 MaxPlayers;
		std::list<std::string> PlayerUserIds;
		Uint32 RunTime;
		std::string GameServerState;
	
        GameInfo() :
			PlayFabBaseModel(),
			Region(),
			LobbyID(),
			BuildVersion(),
			GameMode(),
			MaxPlayers(),
			PlayerUserIds(),
			RunTime(0),
			GameServerState()
			{}
		
		GameInfo(const GameInfo& src) :
			PlayFabBaseModel(),
			Region(src.Region),
			LobbyID(src.LobbyID),
			BuildVersion(src.BuildVersion),
			GameMode(src.GameMode),
			MaxPlayers(src.MaxPlayers),
			PlayerUserIds(src.PlayerUserIds),
			RunTime(src.RunTime),
			GameServerState(src.GameServerState)
			{}
			
		GameInfo(const rapidjson::Value& obj) : GameInfo()
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
	
        CurrentGamesResult() :
			PlayFabBaseModel(),
			Games(),
			PlayerCount(0),
			GameCount(0)
			{}
		
		CurrentGamesResult(const CurrentGamesResult& src) :
			PlayFabBaseModel(),
			Games(src.Games),
			PlayerCount(src.PlayerCount),
			GameCount(src.GameCount)
			{}
			
		CurrentGamesResult(const rapidjson::Value& obj) : CurrentGamesResult()
        {
            readFromValue(obj);
        }
		
		~CurrentGamesResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct EmptyResult : public PlayFabBaseModel
    {
		
	
        EmptyResult() :
			PlayFabBaseModel()
			{}
		
		EmptyResult(const EmptyResult& src) :
			PlayFabBaseModel()
			{}
			
		EmptyResult(const rapidjson::Value& obj) : EmptyResult()
        {
            readFromValue(obj);
        }
		
		~EmptyResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct FacebookPlayFabIdPair : public PlayFabBaseModel
    {
		
		std::string FacebookId;
		std::string PlayFabId;
	
        FacebookPlayFabIdPair() :
			PlayFabBaseModel(),
			FacebookId(),
			PlayFabId()
			{}
		
		FacebookPlayFabIdPair(const FacebookPlayFabIdPair& src) :
			PlayFabBaseModel(),
			FacebookId(src.FacebookId),
			PlayFabId(src.PlayFabId)
			{}
			
		FacebookPlayFabIdPair(const rapidjson::Value& obj) : FacebookPlayFabIdPair()
        {
            readFromValue(obj);
        }
		
		~FacebookPlayFabIdPair();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UserFacebookInfo : public PlayFabBaseModel
    {
		
		std::string FacebookId;
	
        UserFacebookInfo() :
			PlayFabBaseModel(),
			FacebookId()
			{}
		
		UserFacebookInfo(const UserFacebookInfo& src) :
			PlayFabBaseModel(),
			FacebookId(src.FacebookId)
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
	
        FriendInfo() :
			PlayFabBaseModel(),
			FriendPlayFabId(),
			Username(),
			TitleDisplayName(),
			Tags(),
			CurrentMatchmakerLobbyId(),
			FacebookInfo(NULL),
			SteamInfo(NULL),
			GameCenterInfo(NULL)
			{}
		
		FriendInfo(const FriendInfo& src) :
			PlayFabBaseModel(),
			FriendPlayFabId(src.FriendPlayFabId),
			Username(src.Username),
			TitleDisplayName(src.TitleDisplayName),
			Tags(src.Tags),
			CurrentMatchmakerLobbyId(src.CurrentMatchmakerLobbyId),
			FacebookInfo(src.FacebookInfo ? new UserFacebookInfo(*src.FacebookInfo) : NULL),
			SteamInfo(src.SteamInfo ? new UserSteamInfo(*src.SteamInfo) : NULL),
			GameCenterInfo(src.GameCenterInfo ? new UserGameCenterInfo(*src.GameCenterInfo) : NULL)
			{}
			
		FriendInfo(const rapidjson::Value& obj) : FriendInfo()
        {
            readFromValue(obj);
        }
		
		~FriendInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GameServerRegionsRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
		std::string TitleId;
	
        GameServerRegionsRequest() :
			PlayFabBaseModel(),
			BuildVersion(),
			TitleId()
			{}
		
		GameServerRegionsRequest(const GameServerRegionsRequest& src) :
			PlayFabBaseModel(),
			BuildVersion(src.BuildVersion),
			TitleId(src.TitleId)
			{}
			
		GameServerRegionsRequest(const rapidjson::Value& obj) : GameServerRegionsRequest()
        {
            readFromValue(obj);
        }
		
		~GameServerRegionsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegionInfo : public PlayFabBaseModel
    {
		
		Boxed<Region> Region;
		std::string Name;
		bool Available;
		std::string PingUrl;
	
        RegionInfo() :
			PlayFabBaseModel(),
			Region(),
			Name(),
			Available(false),
			PingUrl()
			{}
		
		RegionInfo(const RegionInfo& src) :
			PlayFabBaseModel(),
			Region(src.Region),
			Name(src.Name),
			Available(src.Available),
			PingUrl(src.PingUrl)
			{}
			
		RegionInfo(const rapidjson::Value& obj) : RegionInfo()
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
	
        GameServerRegionsResult() :
			PlayFabBaseModel(),
			Regions()
			{}
		
		GameServerRegionsResult(const GameServerRegionsResult& src) :
			PlayFabBaseModel(),
			Regions(src.Regions)
			{}
			
		GameServerRegionsResult(const rapidjson::Value& obj) : GameServerRegionsResult()
        {
            readFromValue(obj);
        }
		
		~GameServerRegionsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetAccountInfoRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
	
        GetAccountInfoRequest() :
			PlayFabBaseModel(),
			PlayFabId()
			{}
		
		GetAccountInfoRequest(const GetAccountInfoRequest& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId)
			{}
			
		GetAccountInfoRequest(const rapidjson::Value& obj) : GetAccountInfoRequest()
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
		UserOriginationAndroid,
		UserOriginationPSN,
		UserOriginationGameCenter
	};
	
	void writeUserOriginationEnumJSON(UserOrigination enumVal, PFStringJsonWriter& writer);
	UserOrigination readUserOriginationFromValue(const rapidjson::Value& obj);
	
	
	struct UserTitleInfo : public PlayFabBaseModel
    {
		
		std::string DisplayName;
		Boxed<UserOrigination> Origination;
		time_t Created;
		OptionalTime LastLogin;
		OptionalTime FirstLogin;
		OptionalBool isBanned;
	
        UserTitleInfo() :
			PlayFabBaseModel(),
			DisplayName(),
			Origination(),
			Created(0),
			LastLogin(),
			FirstLogin(),
			isBanned()
			{}
		
		UserTitleInfo(const UserTitleInfo& src) :
			PlayFabBaseModel(),
			DisplayName(src.DisplayName),
			Origination(src.Origination),
			Created(src.Created),
			LastLogin(src.LastLogin),
			FirstLogin(src.FirstLogin),
			isBanned(src.isBanned)
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
	
	struct UserAccountInfo : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		time_t Created;
		std::string Username;
		UserTitleInfo* TitleInfo;
		UserPrivateAccountInfo* PrivateInfo;
		UserFacebookInfo* FacebookInfo;
		UserSteamInfo* SteamInfo;
		UserGameCenterInfo* GameCenterInfo;
	
        UserAccountInfo() :
			PlayFabBaseModel(),
			PlayFabId(),
			Created(0),
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
	
	struct GetAccountInfoResult : public PlayFabBaseModel
    {
		
		UserAccountInfo* AccountInfo;
	
        GetAccountInfoResult() :
			PlayFabBaseModel(),
			AccountInfo(NULL)
			{}
		
		GetAccountInfoResult(const GetAccountInfoResult& src) :
			PlayFabBaseModel(),
			AccountInfo(src.AccountInfo ? new UserAccountInfo(*src.AccountInfo) : NULL)
			{}
			
		GetAccountInfoResult(const rapidjson::Value& obj) : GetAccountInfoResult()
        {
            readFromValue(obj);
        }
		
		~GetAccountInfoResult();
		
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
	
	struct GetCharacterDataRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string CharacterId;
		std::list<std::string> Keys;
	
        GetCharacterDataRequest() :
			PlayFabBaseModel(),
			PlayFabId(),
			CharacterId(),
			Keys()
			{}
		
		GetCharacterDataRequest(const GetCharacterDataRequest& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			CharacterId(src.CharacterId),
			Keys(src.Keys)
			{}
			
		GetCharacterDataRequest(const rapidjson::Value& obj) : GetCharacterDataRequest()
        {
            readFromValue(obj);
        }
		
		~GetCharacterDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetCharacterDataResult : public PlayFabBaseModel
    {
		
		std::string CharacterId;
	
        GetCharacterDataResult() :
			PlayFabBaseModel(),
			CharacterId()
			{}
		
		GetCharacterDataResult(const GetCharacterDataResult& src) :
			PlayFabBaseModel(),
			CharacterId(src.CharacterId)
			{}
			
		GetCharacterDataResult(const rapidjson::Value& obj) : GetCharacterDataResult()
        {
            readFromValue(obj);
        }
		
		~GetCharacterDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetCharacterLeaderboardRequest : public PlayFabBaseModel
    {
		
		std::string CharacterId;
		std::string CharacterType;
		std::string StatisticName;
		Int32 StartPosition;
		Int32 MaxResultsCount;
	
        GetCharacterLeaderboardRequest() :
			PlayFabBaseModel(),
			CharacterId(),
			CharacterType(),
			StatisticName(),
			StartPosition(0),
			MaxResultsCount(0)
			{}
		
		GetCharacterLeaderboardRequest(const GetCharacterLeaderboardRequest& src) :
			PlayFabBaseModel(),
			CharacterId(src.CharacterId),
			CharacterType(src.CharacterType),
			StatisticName(src.StatisticName),
			StartPosition(src.StartPosition),
			MaxResultsCount(src.MaxResultsCount)
			{}
			
		GetCharacterLeaderboardRequest(const rapidjson::Value& obj) : GetCharacterLeaderboardRequest()
        {
            readFromValue(obj);
        }
		
		~GetCharacterLeaderboardRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetCharacterLeaderboardResult : public PlayFabBaseModel
    {
		
		std::list<CharacterLeaderboardEntry> Leaderboard;
	
        GetCharacterLeaderboardResult() :
			PlayFabBaseModel(),
			Leaderboard()
			{}
		
		GetCharacterLeaderboardResult(const GetCharacterLeaderboardResult& src) :
			PlayFabBaseModel(),
			Leaderboard(src.Leaderboard)
			{}
			
		GetCharacterLeaderboardResult(const rapidjson::Value& obj) : GetCharacterLeaderboardResult()
        {
            readFromValue(obj);
        }
		
		~GetCharacterLeaderboardResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetCloudScriptUrlRequest : public PlayFabBaseModel
    {
		
		OptionalInt32 Version;
		OptionalBool Testing;
	
        GetCloudScriptUrlRequest() :
			PlayFabBaseModel(),
			Version(),
			Testing()
			{}
		
		GetCloudScriptUrlRequest(const GetCloudScriptUrlRequest& src) :
			PlayFabBaseModel(),
			Version(src.Version),
			Testing(src.Testing)
			{}
			
		GetCloudScriptUrlRequest(const rapidjson::Value& obj) : GetCloudScriptUrlRequest()
        {
            readFromValue(obj);
        }
		
		~GetCloudScriptUrlRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetCloudScriptUrlResult : public PlayFabBaseModel
    {
		
		std::string Url;
	
        GetCloudScriptUrlResult() :
			PlayFabBaseModel(),
			Url()
			{}
		
		GetCloudScriptUrlResult(const GetCloudScriptUrlResult& src) :
			PlayFabBaseModel(),
			Url(src.Url)
			{}
			
		GetCloudScriptUrlResult(const rapidjson::Value& obj) : GetCloudScriptUrlResult()
        {
            readFromValue(obj);
        }
		
		~GetCloudScriptUrlResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetContentDownloadUrlRequest : public PlayFabBaseModel
    {
		
		std::string Key;
		std::string HttpMethod;
		OptionalBool ThruCDN;
	
        GetContentDownloadUrlRequest() :
			PlayFabBaseModel(),
			Key(),
			HttpMethod(),
			ThruCDN()
			{}
		
		GetContentDownloadUrlRequest(const GetContentDownloadUrlRequest& src) :
			PlayFabBaseModel(),
			Key(src.Key),
			HttpMethod(src.HttpMethod),
			ThruCDN(src.ThruCDN)
			{}
			
		GetContentDownloadUrlRequest(const rapidjson::Value& obj) : GetContentDownloadUrlRequest()
        {
            readFromValue(obj);
        }
		
		~GetContentDownloadUrlRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetContentDownloadUrlResult : public PlayFabBaseModel
    {
		
		std::string URL;
	
        GetContentDownloadUrlResult() :
			PlayFabBaseModel(),
			URL()
			{}
		
		GetContentDownloadUrlResult(const GetContentDownloadUrlResult& src) :
			PlayFabBaseModel(),
			URL(src.URL)
			{}
			
		GetContentDownloadUrlResult(const rapidjson::Value& obj) : GetContentDownloadUrlResult()
        {
            readFromValue(obj);
        }
		
		~GetContentDownloadUrlResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetFriendLeaderboardRequest : public PlayFabBaseModel
    {
		
		std::string StatisticName;
		Int32 StartPosition;
		Int32 MaxResultsCount;
	
        GetFriendLeaderboardRequest() :
			PlayFabBaseModel(),
			StatisticName(),
			StartPosition(0),
			MaxResultsCount(0)
			{}
		
		GetFriendLeaderboardRequest(const GetFriendLeaderboardRequest& src) :
			PlayFabBaseModel(),
			StatisticName(src.StatisticName),
			StartPosition(src.StartPosition),
			MaxResultsCount(src.MaxResultsCount)
			{}
			
		GetFriendLeaderboardRequest(const rapidjson::Value& obj) : GetFriendLeaderboardRequest()
        {
            readFromValue(obj);
        }
		
		~GetFriendLeaderboardRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetFriendsListRequest : public PlayFabBaseModel
    {
		
		OptionalBool IncludeSteamFriends;
	
        GetFriendsListRequest() :
			PlayFabBaseModel(),
			IncludeSteamFriends()
			{}
		
		GetFriendsListRequest(const GetFriendsListRequest& src) :
			PlayFabBaseModel(),
			IncludeSteamFriends(src.IncludeSteamFriends)
			{}
			
		GetFriendsListRequest(const rapidjson::Value& obj) : GetFriendsListRequest()
        {
            readFromValue(obj);
        }
		
		~GetFriendsListRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetFriendsListResult : public PlayFabBaseModel
    {
		
		std::list<FriendInfo> Friends;
	
        GetFriendsListResult() :
			PlayFabBaseModel(),
			Friends()
			{}
		
		GetFriendsListResult(const GetFriendsListResult& src) :
			PlayFabBaseModel(),
			Friends(src.Friends)
			{}
			
		GetFriendsListResult(const rapidjson::Value& obj) : GetFriendsListResult()
        {
            readFromValue(obj);
        }
		
		~GetFriendsListResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetLeaderboardAroundCharacterRequest : public PlayFabBaseModel
    {
		
		std::string StatisticName;
		std::string CharacterId;
		std::string CharacterType;
		Int32 MaxResultsCount;
	
        GetLeaderboardAroundCharacterRequest() :
			PlayFabBaseModel(),
			StatisticName(),
			CharacterId(),
			CharacterType(),
			MaxResultsCount(0)
			{}
		
		GetLeaderboardAroundCharacterRequest(const GetLeaderboardAroundCharacterRequest& src) :
			PlayFabBaseModel(),
			StatisticName(src.StatisticName),
			CharacterId(src.CharacterId),
			CharacterType(src.CharacterType),
			MaxResultsCount(src.MaxResultsCount)
			{}
			
		GetLeaderboardAroundCharacterRequest(const rapidjson::Value& obj) : GetLeaderboardAroundCharacterRequest()
        {
            readFromValue(obj);
        }
		
		~GetLeaderboardAroundCharacterRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetLeaderboardAroundCharacterResult : public PlayFabBaseModel
    {
		
		std::list<CharacterLeaderboardEntry> Leaderboard;
	
        GetLeaderboardAroundCharacterResult() :
			PlayFabBaseModel(),
			Leaderboard()
			{}
		
		GetLeaderboardAroundCharacterResult(const GetLeaderboardAroundCharacterResult& src) :
			PlayFabBaseModel(),
			Leaderboard(src.Leaderboard)
			{}
			
		GetLeaderboardAroundCharacterResult(const rapidjson::Value& obj) : GetLeaderboardAroundCharacterResult()
        {
            readFromValue(obj);
        }
		
		~GetLeaderboardAroundCharacterResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetLeaderboardAroundCurrentUserRequest : public PlayFabBaseModel
    {
		
		std::string StatisticName;
		Int32 MaxResultsCount;
	
        GetLeaderboardAroundCurrentUserRequest() :
			PlayFabBaseModel(),
			StatisticName(),
			MaxResultsCount(0)
			{}
		
		GetLeaderboardAroundCurrentUserRequest(const GetLeaderboardAroundCurrentUserRequest& src) :
			PlayFabBaseModel(),
			StatisticName(src.StatisticName),
			MaxResultsCount(src.MaxResultsCount)
			{}
			
		GetLeaderboardAroundCurrentUserRequest(const rapidjson::Value& obj) : GetLeaderboardAroundCurrentUserRequest()
        {
            readFromValue(obj);
        }
		
		~GetLeaderboardAroundCurrentUserRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PlayerLeaderboardEntry : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string DisplayName;
		Int32 StatValue;
		Int32 Position;
	
        PlayerLeaderboardEntry() :
			PlayFabBaseModel(),
			PlayFabId(),
			DisplayName(),
			StatValue(0),
			Position(0)
			{}
		
		PlayerLeaderboardEntry(const PlayerLeaderboardEntry& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			DisplayName(src.DisplayName),
			StatValue(src.StatValue),
			Position(src.Position)
			{}
			
		PlayerLeaderboardEntry(const rapidjson::Value& obj) : PlayerLeaderboardEntry()
        {
            readFromValue(obj);
        }
		
		~PlayerLeaderboardEntry();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetLeaderboardAroundCurrentUserResult : public PlayFabBaseModel
    {
		
		std::list<PlayerLeaderboardEntry> Leaderboard;
	
        GetLeaderboardAroundCurrentUserResult() :
			PlayFabBaseModel(),
			Leaderboard()
			{}
		
		GetLeaderboardAroundCurrentUserResult(const GetLeaderboardAroundCurrentUserResult& src) :
			PlayFabBaseModel(),
			Leaderboard(src.Leaderboard)
			{}
			
		GetLeaderboardAroundCurrentUserResult(const rapidjson::Value& obj) : GetLeaderboardAroundCurrentUserResult()
        {
            readFromValue(obj);
        }
		
		~GetLeaderboardAroundCurrentUserResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetLeaderboardForUsersCharactersRequest : public PlayFabBaseModel
    {
		
		std::string StatisticName;
		Int32 MaxResultsCount;
	
        GetLeaderboardForUsersCharactersRequest() :
			PlayFabBaseModel(),
			StatisticName(),
			MaxResultsCount(0)
			{}
		
		GetLeaderboardForUsersCharactersRequest(const GetLeaderboardForUsersCharactersRequest& src) :
			PlayFabBaseModel(),
			StatisticName(src.StatisticName),
			MaxResultsCount(src.MaxResultsCount)
			{}
			
		GetLeaderboardForUsersCharactersRequest(const rapidjson::Value& obj) : GetLeaderboardForUsersCharactersRequest()
        {
            readFromValue(obj);
        }
		
		~GetLeaderboardForUsersCharactersRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetLeaderboardForUsersCharactersResult : public PlayFabBaseModel
    {
		
		std::list<CharacterLeaderboardEntry> Leaderboard;
	
        GetLeaderboardForUsersCharactersResult() :
			PlayFabBaseModel(),
			Leaderboard()
			{}
		
		GetLeaderboardForUsersCharactersResult(const GetLeaderboardForUsersCharactersResult& src) :
			PlayFabBaseModel(),
			Leaderboard(src.Leaderboard)
			{}
			
		GetLeaderboardForUsersCharactersResult(const rapidjson::Value& obj) : GetLeaderboardForUsersCharactersResult()
        {
            readFromValue(obj);
        }
		
		~GetLeaderboardForUsersCharactersResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetLeaderboardRequest : public PlayFabBaseModel
    {
		
		std::string StatisticName;
		Int32 StartPosition;
		Int32 MaxResultsCount;
	
        GetLeaderboardRequest() :
			PlayFabBaseModel(),
			StatisticName(),
			StartPosition(0),
			MaxResultsCount(0)
			{}
		
		GetLeaderboardRequest(const GetLeaderboardRequest& src) :
			PlayFabBaseModel(),
			StatisticName(src.StatisticName),
			StartPosition(src.StartPosition),
			MaxResultsCount(src.MaxResultsCount)
			{}
			
		GetLeaderboardRequest(const rapidjson::Value& obj) : GetLeaderboardRequest()
        {
            readFromValue(obj);
        }
		
		~GetLeaderboardRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetLeaderboardResult : public PlayFabBaseModel
    {
		
		std::list<PlayerLeaderboardEntry> Leaderboard;
	
        GetLeaderboardResult() :
			PlayFabBaseModel(),
			Leaderboard()
			{}
		
		GetLeaderboardResult(const GetLeaderboardResult& src) :
			PlayFabBaseModel(),
			Leaderboard(src.Leaderboard)
			{}
			
		GetLeaderboardResult(const rapidjson::Value& obj) : GetLeaderboardResult()
        {
            readFromValue(obj);
        }
		
		~GetLeaderboardResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetPhotonAuthenticationTokenRequest : public PlayFabBaseModel
    {
		
		std::string PhotonApplicationId;
	
        GetPhotonAuthenticationTokenRequest() :
			PlayFabBaseModel(),
			PhotonApplicationId()
			{}
		
		GetPhotonAuthenticationTokenRequest(const GetPhotonAuthenticationTokenRequest& src) :
			PlayFabBaseModel(),
			PhotonApplicationId(src.PhotonApplicationId)
			{}
			
		GetPhotonAuthenticationTokenRequest(const rapidjson::Value& obj) : GetPhotonAuthenticationTokenRequest()
        {
            readFromValue(obj);
        }
		
		~GetPhotonAuthenticationTokenRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetPhotonAuthenticationTokenResult : public PlayFabBaseModel
    {
		
		std::string PhotonCustomAuthenticationToken;
	
        GetPhotonAuthenticationTokenResult() :
			PlayFabBaseModel(),
			PhotonCustomAuthenticationToken()
			{}
		
		GetPhotonAuthenticationTokenResult(const GetPhotonAuthenticationTokenResult& src) :
			PlayFabBaseModel(),
			PhotonCustomAuthenticationToken(src.PhotonCustomAuthenticationToken)
			{}
			
		GetPhotonAuthenticationTokenResult(const rapidjson::Value& obj) : GetPhotonAuthenticationTokenResult()
        {
            readFromValue(obj);
        }
		
		~GetPhotonAuthenticationTokenResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetPlayFabIDsFromFacebookIDsRequest : public PlayFabBaseModel
    {
		
		std::list<std::string> FacebookIDs;
		std::string PublisherId;
	
        GetPlayFabIDsFromFacebookIDsRequest() :
			PlayFabBaseModel(),
			FacebookIDs(),
			PublisherId()
			{}
		
		GetPlayFabIDsFromFacebookIDsRequest(const GetPlayFabIDsFromFacebookIDsRequest& src) :
			PlayFabBaseModel(),
			FacebookIDs(src.FacebookIDs),
			PublisherId(src.PublisherId)
			{}
			
		GetPlayFabIDsFromFacebookIDsRequest(const rapidjson::Value& obj) : GetPlayFabIDsFromFacebookIDsRequest()
        {
            readFromValue(obj);
        }
		
		~GetPlayFabIDsFromFacebookIDsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetPlayFabIDsFromFacebookIDsResult : public PlayFabBaseModel
    {
		
		std::list<FacebookPlayFabIdPair> Data;
	
        GetPlayFabIDsFromFacebookIDsResult() :
			PlayFabBaseModel(),
			Data()
			{}
		
		GetPlayFabIDsFromFacebookIDsResult(const GetPlayFabIDsFromFacebookIDsResult& src) :
			PlayFabBaseModel(),
			Data(src.Data)
			{}
			
		GetPlayFabIDsFromFacebookIDsResult(const rapidjson::Value& obj) : GetPlayFabIDsFromFacebookIDsResult()
        {
            readFromValue(obj);
        }
		
		~GetPlayFabIDsFromFacebookIDsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetPublisherDataRequest : public PlayFabBaseModel
    {
		
		std::list<std::string> Keys;
	
        GetPublisherDataRequest() :
			PlayFabBaseModel(),
			Keys()
			{}
		
		GetPublisherDataRequest(const GetPublisherDataRequest& src) :
			PlayFabBaseModel(),
			Keys(src.Keys)
			{}
			
		GetPublisherDataRequest(const rapidjson::Value& obj) : GetPublisherDataRequest()
        {
            readFromValue(obj);
        }
		
		~GetPublisherDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetPublisherDataResult : public PlayFabBaseModel
    {
		
		std::map<std::string, std::string> Data;
	
        GetPublisherDataResult() :
			PlayFabBaseModel(),
			Data()
			{}
		
		GetPublisherDataResult(const GetPublisherDataResult& src) :
			PlayFabBaseModel(),
			Data(src.Data)
			{}
			
		GetPublisherDataResult(const rapidjson::Value& obj) : GetPublisherDataResult()
        {
            readFromValue(obj);
        }
		
		~GetPublisherDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetSharedGroupDataRequest : public PlayFabBaseModel
    {
		
		std::string SharedGroupId;
		std::list<std::string> Keys;
		OptionalBool GetMembers;
	
        GetSharedGroupDataRequest() :
			PlayFabBaseModel(),
			SharedGroupId(),
			Keys(),
			GetMembers()
			{}
		
		GetSharedGroupDataRequest(const GetSharedGroupDataRequest& src) :
			PlayFabBaseModel(),
			SharedGroupId(src.SharedGroupId),
			Keys(src.Keys),
			GetMembers(src.GetMembers)
			{}
			
		GetSharedGroupDataRequest(const rapidjson::Value& obj) : GetSharedGroupDataRequest()
        {
            readFromValue(obj);
        }
		
		~GetSharedGroupDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum UserDataPermission
	{
		UserDataPermissionPrivate,
		UserDataPermissionPublic
	};
	
	void writeUserDataPermissionEnumJSON(UserDataPermission enumVal, PFStringJsonWriter& writer);
	UserDataPermission readUserDataPermissionFromValue(const rapidjson::Value& obj);
	
	
	struct SharedGroupDataRecord : public PlayFabBaseModel
    {
		
		std::string Value;
		std::string LastUpdatedBy;
		time_t LastUpdated;
		Boxed<UserDataPermission> Permission;
	
        SharedGroupDataRecord() :
			PlayFabBaseModel(),
			Value(),
			LastUpdatedBy(),
			LastUpdated(0),
			Permission()
			{}
		
		SharedGroupDataRecord(const SharedGroupDataRecord& src) :
			PlayFabBaseModel(),
			Value(src.Value),
			LastUpdatedBy(src.LastUpdatedBy),
			LastUpdated(src.LastUpdated),
			Permission(src.Permission)
			{}
			
		SharedGroupDataRecord(const rapidjson::Value& obj) : SharedGroupDataRecord()
        {
            readFromValue(obj);
        }
		
		~SharedGroupDataRecord();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetSharedGroupDataResult : public PlayFabBaseModel
    {
		
		std::map<std::string, SharedGroupDataRecord> Data;
		std::list<std::string> Members;
	
        GetSharedGroupDataResult() :
			PlayFabBaseModel(),
			Data(),
			Members()
			{}
		
		GetSharedGroupDataResult(const GetSharedGroupDataResult& src) :
			PlayFabBaseModel(),
			Data(src.Data),
			Members(src.Members)
			{}
			
		GetSharedGroupDataResult(const rapidjson::Value& obj) : GetSharedGroupDataResult()
        {
            readFromValue(obj);
        }
		
		~GetSharedGroupDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetStoreItemsRequest : public PlayFabBaseModel
    {
		
		std::string StoreId;
	
        GetStoreItemsRequest() :
			PlayFabBaseModel(),
			StoreId()
			{}
		
		GetStoreItemsRequest(const GetStoreItemsRequest& src) :
			PlayFabBaseModel(),
			StoreId(src.StoreId)
			{}
			
		GetStoreItemsRequest(const rapidjson::Value& obj) : GetStoreItemsRequest()
        {
            readFromValue(obj);
        }
		
		~GetStoreItemsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct StoreItem : public PlayFabBaseModel
    {
		
		std::string ItemId;
		std::map<std::string, Uint32> VirtualCurrencyPrices;
		std::map<std::string, Uint32> RealCurrencyPrices;
	
        StoreItem() :
			PlayFabBaseModel(),
			ItemId(),
			VirtualCurrencyPrices(),
			RealCurrencyPrices()
			{}
		
		StoreItem(const StoreItem& src) :
			PlayFabBaseModel(),
			ItemId(src.ItemId),
			VirtualCurrencyPrices(src.VirtualCurrencyPrices),
			RealCurrencyPrices(src.RealCurrencyPrices)
			{}
			
		StoreItem(const rapidjson::Value& obj) : StoreItem()
        {
            readFromValue(obj);
        }
		
		~StoreItem();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetStoreItemsResult : public PlayFabBaseModel
    {
		
		std::list<StoreItem> Store;
	
        GetStoreItemsResult() :
			PlayFabBaseModel(),
			Store()
			{}
		
		GetStoreItemsResult(const GetStoreItemsResult& src) :
			PlayFabBaseModel(),
			Store(src.Store)
			{}
			
		GetStoreItemsResult(const rapidjson::Value& obj) : GetStoreItemsResult()
        {
            readFromValue(obj);
        }
		
		~GetStoreItemsResult();
		
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
	
	struct GetTitleNewsRequest : public PlayFabBaseModel
    {
		
		OptionalInt32 Count;
	
        GetTitleNewsRequest() :
			PlayFabBaseModel(),
			Count()
			{}
		
		GetTitleNewsRequest(const GetTitleNewsRequest& src) :
			PlayFabBaseModel(),
			Count(src.Count)
			{}
			
		GetTitleNewsRequest(const rapidjson::Value& obj) : GetTitleNewsRequest()
        {
            readFromValue(obj);
        }
		
		~GetTitleNewsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct TitleNewsItem : public PlayFabBaseModel
    {
		
		time_t Timestamp;
		std::string NewsId;
		std::string Title;
		std::string Body;
	
        TitleNewsItem() :
			PlayFabBaseModel(),
			Timestamp(0),
			NewsId(),
			Title(),
			Body()
			{}
		
		TitleNewsItem(const TitleNewsItem& src) :
			PlayFabBaseModel(),
			Timestamp(src.Timestamp),
			NewsId(src.NewsId),
			Title(src.Title),
			Body(src.Body)
			{}
			
		TitleNewsItem(const rapidjson::Value& obj) : TitleNewsItem()
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
	
        GetTitleNewsResult() :
			PlayFabBaseModel(),
			News()
			{}
		
		GetTitleNewsResult(const GetTitleNewsResult& src) :
			PlayFabBaseModel(),
			News(src.News)
			{}
			
		GetTitleNewsResult(const rapidjson::Value& obj) : GetTitleNewsResult()
        {
            readFromValue(obj);
        }
		
		~GetTitleNewsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserCombinedInfoRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		OptionalBool GetAccountInfo;
		OptionalBool GetInventory;
		OptionalBool GetVirtualCurrency;
		OptionalBool GetUserData;
		std::list<std::string> UserDataKeys;
		OptionalBool GetReadOnlyData;
		std::list<std::string> ReadOnlyDataKeys;
	
        GetUserCombinedInfoRequest() :
			PlayFabBaseModel(),
			PlayFabId(),
			GetAccountInfo(),
			GetInventory(),
			GetVirtualCurrency(),
			GetUserData(),
			UserDataKeys(),
			GetReadOnlyData(),
			ReadOnlyDataKeys()
			{}
		
		GetUserCombinedInfoRequest(const GetUserCombinedInfoRequest& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			GetAccountInfo(src.GetAccountInfo),
			GetInventory(src.GetInventory),
			GetVirtualCurrency(src.GetVirtualCurrency),
			GetUserData(src.GetUserData),
			UserDataKeys(src.UserDataKeys),
			GetReadOnlyData(src.GetReadOnlyData),
			ReadOnlyDataKeys(src.ReadOnlyDataKeys)
			{}
			
		GetUserCombinedInfoRequest(const rapidjson::Value& obj) : GetUserCombinedInfoRequest()
        {
            readFromValue(obj);
        }
		
		~GetUserCombinedInfoRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ItemInstance : public PlayFabBaseModel
    {
		
		std::string ItemId;
		std::string ItemInstanceId;
		std::string ItemClass;
		OptionalTime PurchaseDate;
		OptionalTime Expiration;
		OptionalInt32 RemainingUses;
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
	
	struct UserDataRecord : public PlayFabBaseModel
    {
		
		std::string Value;
		time_t LastUpdated;
		Boxed<UserDataPermission> Permission;
	
        UserDataRecord() :
			PlayFabBaseModel(),
			Value(),
			LastUpdated(0),
			Permission()
			{}
		
		UserDataRecord(const UserDataRecord& src) :
			PlayFabBaseModel(),
			Value(src.Value),
			LastUpdated(src.LastUpdated),
			Permission(src.Permission)
			{}
			
		UserDataRecord(const rapidjson::Value& obj) : UserDataRecord()
        {
            readFromValue(obj);
        }
		
		~UserDataRecord();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserCombinedInfoResult : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		UserAccountInfo* AccountInfo;
		std::list<ItemInstance> Inventory;
		std::map<std::string, Int32> VirtualCurrency;
		std::map<std::string, UserDataRecord> Data;
		std::map<std::string, UserDataRecord> ReadOnlyData;
	
        GetUserCombinedInfoResult() :
			PlayFabBaseModel(),
			PlayFabId(),
			AccountInfo(NULL),
			Inventory(),
			VirtualCurrency(),
			Data(),
			ReadOnlyData()
			{}
		
		GetUserCombinedInfoResult(const GetUserCombinedInfoResult& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			AccountInfo(src.AccountInfo ? new UserAccountInfo(*src.AccountInfo) : NULL),
			Inventory(src.Inventory),
			VirtualCurrency(src.VirtualCurrency),
			Data(src.Data),
			ReadOnlyData(src.ReadOnlyData)
			{}
			
		GetUserCombinedInfoResult(const rapidjson::Value& obj) : GetUserCombinedInfoResult()
        {
            readFromValue(obj);
        }
		
		~GetUserCombinedInfoResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserDataRequest : public PlayFabBaseModel
    {
		
		std::list<std::string> Keys;
		std::string PlayFabId;
	
        GetUserDataRequest() :
			PlayFabBaseModel(),
			Keys(),
			PlayFabId()
			{}
		
		GetUserDataRequest(const GetUserDataRequest& src) :
			PlayFabBaseModel(),
			Keys(src.Keys),
			PlayFabId(src.PlayFabId)
			{}
			
		GetUserDataRequest(const rapidjson::Value& obj) : GetUserDataRequest()
        {
            readFromValue(obj);
        }
		
		~GetUserDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserDataResult : public PlayFabBaseModel
    {
		
		std::map<std::string, UserDataRecord> Data;
	
        GetUserDataResult() :
			PlayFabBaseModel(),
			Data()
			{}
		
		GetUserDataResult(const GetUserDataResult& src) :
			PlayFabBaseModel(),
			Data(src.Data)
			{}
			
		GetUserDataResult(const rapidjson::Value& obj) : GetUserDataResult()
        {
            readFromValue(obj);
        }
		
		~GetUserDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserInventoryRequest : public PlayFabBaseModel
    {
		
	
        GetUserInventoryRequest() :
			PlayFabBaseModel()
			{}
		
		GetUserInventoryRequest(const GetUserInventoryRequest& src) :
			PlayFabBaseModel()
			{}
			
		GetUserInventoryRequest(const rapidjson::Value& obj) : GetUserInventoryRequest()
        {
            readFromValue(obj);
        }
		
		~GetUserInventoryRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserInventoryResult : public PlayFabBaseModel
    {
		
		std::list<ItemInstance> Inventory;
		std::map<std::string, Int32> VirtualCurrency;
	
        GetUserInventoryResult() :
			PlayFabBaseModel(),
			Inventory(),
			VirtualCurrency()
			{}
		
		GetUserInventoryResult(const GetUserInventoryResult& src) :
			PlayFabBaseModel(),
			Inventory(src.Inventory),
			VirtualCurrency(src.VirtualCurrency)
			{}
			
		GetUserInventoryResult(const rapidjson::Value& obj) : GetUserInventoryResult()
        {
            readFromValue(obj);
        }
		
		~GetUserInventoryResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserStatisticsRequest : public PlayFabBaseModel
    {
		
	
        GetUserStatisticsRequest() :
			PlayFabBaseModel()
			{}
		
		GetUserStatisticsRequest(const GetUserStatisticsRequest& src) :
			PlayFabBaseModel()
			{}
			
		GetUserStatisticsRequest(const rapidjson::Value& obj) : GetUserStatisticsRequest()
        {
            readFromValue(obj);
        }
		
		~GetUserStatisticsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserStatisticsResult : public PlayFabBaseModel
    {
		
		std::map<std::string, Int32> UserStatistics;
	
        GetUserStatisticsResult() :
			PlayFabBaseModel(),
			UserStatistics()
			{}
		
		GetUserStatisticsResult(const GetUserStatisticsResult& src) :
			PlayFabBaseModel(),
			UserStatistics(src.UserStatistics)
			{}
			
		GetUserStatisticsResult(const rapidjson::Value& obj) : GetUserStatisticsResult()
        {
            readFromValue(obj);
        }
		
		~GetUserStatisticsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GrantCharacterToUserRequest : public PlayFabBaseModel
    {
		
		std::string CatalogVersion;
		std::string PlayFabId;
		std::string ItemId;
		std::string CharacterName;
	
        GrantCharacterToUserRequest() :
			PlayFabBaseModel(),
			CatalogVersion(),
			PlayFabId(),
			ItemId(),
			CharacterName()
			{}
		
		GrantCharacterToUserRequest(const GrantCharacterToUserRequest& src) :
			PlayFabBaseModel(),
			CatalogVersion(src.CatalogVersion),
			PlayFabId(src.PlayFabId),
			ItemId(src.ItemId),
			CharacterName(src.CharacterName)
			{}
			
		GrantCharacterToUserRequest(const rapidjson::Value& obj) : GrantCharacterToUserRequest()
        {
            readFromValue(obj);
        }
		
		~GrantCharacterToUserRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GrantCharacterToUserResult : public PlayFabBaseModel
    {
		
		std::string CharacterId;
		std::string CharacterType;
		bool Result;
	
        GrantCharacterToUserResult() :
			PlayFabBaseModel(),
			CharacterId(),
			CharacterType(),
			Result(false)
			{}
		
		GrantCharacterToUserResult(const GrantCharacterToUserResult& src) :
			PlayFabBaseModel(),
			CharacterId(src.CharacterId),
			CharacterType(src.CharacterType),
			Result(src.Result)
			{}
			
		GrantCharacterToUserResult(const rapidjson::Value& obj) : GrantCharacterToUserResult()
        {
            readFromValue(obj);
        }
		
		~GrantCharacterToUserResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ItemPuchaseRequest : public PlayFabBaseModel
    {
		
		std::string ItemId;
		Uint32 Quantity;
		std::string Annotation;
		std::list<std::string> UpgradeFromItems;
	
        ItemPuchaseRequest() :
			PlayFabBaseModel(),
			ItemId(),
			Quantity(0),
			Annotation(),
			UpgradeFromItems()
			{}
		
		ItemPuchaseRequest(const ItemPuchaseRequest& src) :
			PlayFabBaseModel(),
			ItemId(src.ItemId),
			Quantity(src.Quantity),
			Annotation(src.Annotation),
			UpgradeFromItems(src.UpgradeFromItems)
			{}
			
		ItemPuchaseRequest(const rapidjson::Value& obj) : ItemPuchaseRequest()
        {
            readFromValue(obj);
        }
		
		~ItemPuchaseRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkAndroidDeviceIDRequest : public PlayFabBaseModel
    {
		
		std::string AndroidDeviceId;
		std::string PublisherId;
		std::string OS;
		std::string AndroidDevice;
	
        LinkAndroidDeviceIDRequest() :
			PlayFabBaseModel(),
			AndroidDeviceId(),
			PublisherId(),
			OS(),
			AndroidDevice()
			{}
		
		LinkAndroidDeviceIDRequest(const LinkAndroidDeviceIDRequest& src) :
			PlayFabBaseModel(),
			AndroidDeviceId(src.AndroidDeviceId),
			PublisherId(src.PublisherId),
			OS(src.OS),
			AndroidDevice(src.AndroidDevice)
			{}
			
		LinkAndroidDeviceIDRequest(const rapidjson::Value& obj) : LinkAndroidDeviceIDRequest()
        {
            readFromValue(obj);
        }
		
		~LinkAndroidDeviceIDRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkAndroidDeviceIDResult : public PlayFabBaseModel
    {
		
	
        LinkAndroidDeviceIDResult() :
			PlayFabBaseModel()
			{}
		
		LinkAndroidDeviceIDResult(const LinkAndroidDeviceIDResult& src) :
			PlayFabBaseModel()
			{}
			
		LinkAndroidDeviceIDResult(const rapidjson::Value& obj) : LinkAndroidDeviceIDResult()
        {
            readFromValue(obj);
        }
		
		~LinkAndroidDeviceIDResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkFacebookAccountRequest : public PlayFabBaseModel
    {
		
		std::string AccessToken;
		std::string PublisherId;
	
        LinkFacebookAccountRequest() :
			PlayFabBaseModel(),
			AccessToken(),
			PublisherId()
			{}
		
		LinkFacebookAccountRequest(const LinkFacebookAccountRequest& src) :
			PlayFabBaseModel(),
			AccessToken(src.AccessToken),
			PublisherId(src.PublisherId)
			{}
			
		LinkFacebookAccountRequest(const rapidjson::Value& obj) : LinkFacebookAccountRequest()
        {
            readFromValue(obj);
        }
		
		~LinkFacebookAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkFacebookAccountResult : public PlayFabBaseModel
    {
		
	
        LinkFacebookAccountResult() :
			PlayFabBaseModel()
			{}
		
		LinkFacebookAccountResult(const LinkFacebookAccountResult& src) :
			PlayFabBaseModel()
			{}
			
		LinkFacebookAccountResult(const rapidjson::Value& obj) : LinkFacebookAccountResult()
        {
            readFromValue(obj);
        }
		
		~LinkFacebookAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkGameCenterAccountRequest : public PlayFabBaseModel
    {
		
		std::string GameCenterId;
		std::string PublisherId;
	
        LinkGameCenterAccountRequest() :
			PlayFabBaseModel(),
			GameCenterId(),
			PublisherId()
			{}
		
		LinkGameCenterAccountRequest(const LinkGameCenterAccountRequest& src) :
			PlayFabBaseModel(),
			GameCenterId(src.GameCenterId),
			PublisherId(src.PublisherId)
			{}
			
		LinkGameCenterAccountRequest(const rapidjson::Value& obj) : LinkGameCenterAccountRequest()
        {
            readFromValue(obj);
        }
		
		~LinkGameCenterAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkGameCenterAccountResult : public PlayFabBaseModel
    {
		
	
        LinkGameCenterAccountResult() :
			PlayFabBaseModel()
			{}
		
		LinkGameCenterAccountResult(const LinkGameCenterAccountResult& src) :
			PlayFabBaseModel()
			{}
			
		LinkGameCenterAccountResult(const rapidjson::Value& obj) : LinkGameCenterAccountResult()
        {
            readFromValue(obj);
        }
		
		~LinkGameCenterAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkIOSDeviceIDRequest : public PlayFabBaseModel
    {
		
		std::string DeviceId;
		std::string OS;
		std::string DeviceModel;
		std::string PublisherId;
	
        LinkIOSDeviceIDRequest() :
			PlayFabBaseModel(),
			DeviceId(),
			OS(),
			DeviceModel(),
			PublisherId()
			{}
		
		LinkIOSDeviceIDRequest(const LinkIOSDeviceIDRequest& src) :
			PlayFabBaseModel(),
			DeviceId(src.DeviceId),
			OS(src.OS),
			DeviceModel(src.DeviceModel),
			PublisherId(src.PublisherId)
			{}
			
		LinkIOSDeviceIDRequest(const rapidjson::Value& obj) : LinkIOSDeviceIDRequest()
        {
            readFromValue(obj);
        }
		
		~LinkIOSDeviceIDRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkIOSDeviceIDResult : public PlayFabBaseModel
    {
		
	
        LinkIOSDeviceIDResult() :
			PlayFabBaseModel()
			{}
		
		LinkIOSDeviceIDResult(const LinkIOSDeviceIDResult& src) :
			PlayFabBaseModel()
			{}
			
		LinkIOSDeviceIDResult(const rapidjson::Value& obj) : LinkIOSDeviceIDResult()
        {
            readFromValue(obj);
        }
		
		~LinkIOSDeviceIDResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkSteamAccountRequest : public PlayFabBaseModel
    {
		
		std::string SteamTicket;
		std::string PublisherId;
	
        LinkSteamAccountRequest() :
			PlayFabBaseModel(),
			SteamTicket(),
			PublisherId()
			{}
		
		LinkSteamAccountRequest(const LinkSteamAccountRequest& src) :
			PlayFabBaseModel(),
			SteamTicket(src.SteamTicket),
			PublisherId(src.PublisherId)
			{}
			
		LinkSteamAccountRequest(const rapidjson::Value& obj) : LinkSteamAccountRequest()
        {
            readFromValue(obj);
        }
		
		~LinkSteamAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkSteamAccountResult : public PlayFabBaseModel
    {
		
	
        LinkSteamAccountResult() :
			PlayFabBaseModel()
			{}
		
		LinkSteamAccountResult(const LinkSteamAccountResult& src) :
			PlayFabBaseModel()
			{}
			
		LinkSteamAccountResult(const rapidjson::Value& obj) : LinkSteamAccountResult()
        {
            readFromValue(obj);
        }
		
		~LinkSteamAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LogEventRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string EntityId;
		std::string EntityType;
		OptionalTime Timestamp;
		std::string EventName;
		std::map<std::string, MultitypeVar> Body;
		bool ProfileSetEvent;
	
        LogEventRequest() :
			PlayFabBaseModel(),
			PlayFabId(),
			EntityId(),
			EntityType(),
			Timestamp(),
			EventName(),
			Body(),
			ProfileSetEvent(false)
			{}
		
		LogEventRequest(const LogEventRequest& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			EntityId(src.EntityId),
			EntityType(src.EntityType),
			Timestamp(src.Timestamp),
			EventName(src.EventName),
			Body(src.Body),
			ProfileSetEvent(src.ProfileSetEvent)
			{}
			
		LogEventRequest(const rapidjson::Value& obj) : LogEventRequest()
        {
            readFromValue(obj);
        }
		
		~LogEventRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LogEventResult : public PlayFabBaseModel
    {
		
	
        LogEventResult() :
			PlayFabBaseModel()
			{}
		
		LogEventResult(const LogEventResult& src) :
			PlayFabBaseModel()
			{}
			
		LogEventResult(const rapidjson::Value& obj) : LogEventResult()
        {
            readFromValue(obj);
        }
		
		~LogEventResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginResult : public PlayFabBaseModel
    {
		
		std::string SessionTicket;
		std::string PlayFabId;
		bool NewlyCreated;
	
        LoginResult() :
			PlayFabBaseModel(),
			SessionTicket(),
			PlayFabId(),
			NewlyCreated(false)
			{}
		
		LoginResult(const LoginResult& src) :
			PlayFabBaseModel(),
			SessionTicket(src.SessionTicket),
			PlayFabId(src.PlayFabId),
			NewlyCreated(src.NewlyCreated)
			{}
			
		LoginResult(const rapidjson::Value& obj) : LoginResult()
        {
            readFromValue(obj);
        }
		
		~LoginResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithAndroidDeviceIDRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string PublisherId;
		std::string AndroidDeviceId;
		std::string OS;
		std::string AndroidDevice;
		OptionalBool CreateAccount;
	
        LoginWithAndroidDeviceIDRequest() :
			PlayFabBaseModel(),
			TitleId(),
			PublisherId(),
			AndroidDeviceId(),
			OS(),
			AndroidDevice(),
			CreateAccount()
			{}
		
		LoginWithAndroidDeviceIDRequest(const LoginWithAndroidDeviceIDRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			PublisherId(src.PublisherId),
			AndroidDeviceId(src.AndroidDeviceId),
			OS(src.OS),
			AndroidDevice(src.AndroidDevice),
			CreateAccount(src.CreateAccount)
			{}
			
		LoginWithAndroidDeviceIDRequest(const rapidjson::Value& obj) : LoginWithAndroidDeviceIDRequest()
        {
            readFromValue(obj);
        }
		
		~LoginWithAndroidDeviceIDRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithEmailAddressRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string Email;
		std::string Password;
		std::string PublisherId;
	
        LoginWithEmailAddressRequest() :
			PlayFabBaseModel(),
			TitleId(),
			Email(),
			Password(),
			PublisherId()
			{}
		
		LoginWithEmailAddressRequest(const LoginWithEmailAddressRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			Email(src.Email),
			Password(src.Password),
			PublisherId(src.PublisherId)
			{}
			
		LoginWithEmailAddressRequest(const rapidjson::Value& obj) : LoginWithEmailAddressRequest()
        {
            readFromValue(obj);
        }
		
		~LoginWithEmailAddressRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithFacebookRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string AccessToken;
		OptionalBool CreateAccount;
		std::string PublisherId;
	
        LoginWithFacebookRequest() :
			PlayFabBaseModel(),
			TitleId(),
			AccessToken(),
			CreateAccount(),
			PublisherId()
			{}
		
		LoginWithFacebookRequest(const LoginWithFacebookRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			AccessToken(src.AccessToken),
			CreateAccount(src.CreateAccount),
			PublisherId(src.PublisherId)
			{}
			
		LoginWithFacebookRequest(const rapidjson::Value& obj) : LoginWithFacebookRequest()
        {
            readFromValue(obj);
        }
		
		~LoginWithFacebookRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithGoogleAccountRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string AccessToken;
		OptionalBool CreateAccount;
		std::string PublisherId;
	
        LoginWithGoogleAccountRequest() :
			PlayFabBaseModel(),
			TitleId(),
			AccessToken(),
			CreateAccount(),
			PublisherId()
			{}
		
		LoginWithGoogleAccountRequest(const LoginWithGoogleAccountRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			AccessToken(src.AccessToken),
			CreateAccount(src.CreateAccount),
			PublisherId(src.PublisherId)
			{}
			
		LoginWithGoogleAccountRequest(const rapidjson::Value& obj) : LoginWithGoogleAccountRequest()
        {
            readFromValue(obj);
        }
		
		~LoginWithGoogleAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithIOSDeviceIDRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string DeviceId;
		std::string OS;
		std::string DeviceModel;
		OptionalBool CreateAccount;
		std::string PublisherId;
	
        LoginWithIOSDeviceIDRequest() :
			PlayFabBaseModel(),
			TitleId(),
			DeviceId(),
			OS(),
			DeviceModel(),
			CreateAccount(),
			PublisherId()
			{}
		
		LoginWithIOSDeviceIDRequest(const LoginWithIOSDeviceIDRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			DeviceId(src.DeviceId),
			OS(src.OS),
			DeviceModel(src.DeviceModel),
			CreateAccount(src.CreateAccount),
			PublisherId(src.PublisherId)
			{}
			
		LoginWithIOSDeviceIDRequest(const rapidjson::Value& obj) : LoginWithIOSDeviceIDRequest()
        {
            readFromValue(obj);
        }
		
		~LoginWithIOSDeviceIDRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithPlayFabRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string Username;
		std::string Password;
		std::string PublisherId;
	
        LoginWithPlayFabRequest() :
			PlayFabBaseModel(),
			TitleId(),
			Username(),
			Password(),
			PublisherId()
			{}
		
		LoginWithPlayFabRequest(const LoginWithPlayFabRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			Username(src.Username),
			Password(src.Password),
			PublisherId(src.PublisherId)
			{}
			
		LoginWithPlayFabRequest(const rapidjson::Value& obj) : LoginWithPlayFabRequest()
        {
            readFromValue(obj);
        }
		
		~LoginWithPlayFabRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithSteamRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string SteamTicket;
		OptionalBool CreateAccount;
		std::string PublisherId;
	
        LoginWithSteamRequest() :
			PlayFabBaseModel(),
			TitleId(),
			SteamTicket(),
			CreateAccount(),
			PublisherId()
			{}
		
		LoginWithSteamRequest(const LoginWithSteamRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			SteamTicket(src.SteamTicket),
			CreateAccount(src.CreateAccount),
			PublisherId(src.PublisherId)
			{}
			
		LoginWithSteamRequest(const rapidjson::Value& obj) : LoginWithSteamRequest()
        {
            readFromValue(obj);
        }
		
		~LoginWithSteamRequest();
		
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
	
        MatchmakeRequest() :
			PlayFabBaseModel(),
			BuildVersion(),
			Region(),
			GameMode(),
			LobbyId(),
			EnableQueue()
			{}
		
		MatchmakeRequest(const MatchmakeRequest& src) :
			PlayFabBaseModel(),
			BuildVersion(src.BuildVersion),
			Region(src.Region),
			GameMode(src.GameMode),
			LobbyId(src.LobbyId),
			EnableQueue(src.EnableQueue)
			{}
			
		MatchmakeRequest(const rapidjson::Value& obj) : MatchmakeRequest()
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
		OptionalInt32 ServerPort;
		std::string Ticket;
		std::string Expires;
		OptionalInt32 PollWaitTimeMS;
		Boxed<MatchmakeStatus> Status;
	
        MatchmakeResult() :
			PlayFabBaseModel(),
			LobbyID(),
			ServerHostname(),
			ServerPort(),
			Ticket(),
			Expires(),
			PollWaitTimeMS(),
			Status()
			{}
		
		MatchmakeResult(const MatchmakeResult& src) :
			PlayFabBaseModel(),
			LobbyID(src.LobbyID),
			ServerHostname(src.ServerHostname),
			ServerPort(src.ServerPort),
			Ticket(src.Ticket),
			Expires(src.Expires),
			PollWaitTimeMS(src.PollWaitTimeMS),
			Status(src.Status)
			{}
			
		MatchmakeResult(const rapidjson::Value& obj) : MatchmakeResult()
        {
            readFromValue(obj);
        }
		
		~MatchmakeResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ModifyUserVirtualCurrencyResult : public PlayFabBaseModel
    {
		
		std::string VirtualCurrency;
		Int32 Balance;
	
        ModifyUserVirtualCurrencyResult() :
			PlayFabBaseModel(),
			VirtualCurrency(),
			Balance(0)
			{}
		
		ModifyUserVirtualCurrencyResult(const ModifyUserVirtualCurrencyResult& src) :
			PlayFabBaseModel(),
			VirtualCurrency(src.VirtualCurrency),
			Balance(src.Balance)
			{}
			
		ModifyUserVirtualCurrencyResult(const rapidjson::Value& obj) : ModifyUserVirtualCurrencyResult()
        {
            readFromValue(obj);
        }
		
		~ModifyUserVirtualCurrencyResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PayForPurchaseRequest : public PlayFabBaseModel
    {
		
		std::string OrderId;
		std::string ProviderName;
		std::string Currency;
	
        PayForPurchaseRequest() :
			PlayFabBaseModel(),
			OrderId(),
			ProviderName(),
			Currency()
			{}
		
		PayForPurchaseRequest(const PayForPurchaseRequest& src) :
			PlayFabBaseModel(),
			OrderId(src.OrderId),
			ProviderName(src.ProviderName),
			Currency(src.Currency)
			{}
			
		PayForPurchaseRequest(const rapidjson::Value& obj) : PayForPurchaseRequest()
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
	
	
	struct PayForPurchaseResult : public PlayFabBaseModel
    {
		
		std::string OrderId;
		Boxed<TransactionStatus> Status;
		std::map<std::string, Int32> VCAmount;
		std::string PurchaseCurrency;
		Uint32 PurchasePrice;
		Uint32 CreditApplied;
		std::string ProviderData;
		std::string PurchaseConfirmationPageURL;
		std::map<std::string, Int32> VirtualCurrency;
	
        PayForPurchaseResult() :
			PlayFabBaseModel(),
			OrderId(),
			Status(),
			VCAmount(),
			PurchaseCurrency(),
			PurchasePrice(0),
			CreditApplied(0),
			ProviderData(),
			PurchaseConfirmationPageURL(),
			VirtualCurrency()
			{}
		
		PayForPurchaseResult(const PayForPurchaseResult& src) :
			PlayFabBaseModel(),
			OrderId(src.OrderId),
			Status(src.Status),
			VCAmount(src.VCAmount),
			PurchaseCurrency(src.PurchaseCurrency),
			PurchasePrice(src.PurchasePrice),
			CreditApplied(src.CreditApplied),
			ProviderData(src.ProviderData),
			PurchaseConfirmationPageURL(src.PurchaseConfirmationPageURL),
			VirtualCurrency(src.VirtualCurrency)
			{}
			
		PayForPurchaseResult(const rapidjson::Value& obj) : PayForPurchaseResult()
        {
            readFromValue(obj);
        }
		
		~PayForPurchaseResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PaymentOption : public PlayFabBaseModel
    {
		
		std::string Currency;
		std::string ProviderName;
		Uint32 Price;
		Uint32 StoreCredit;
	
        PaymentOption() :
			PlayFabBaseModel(),
			Currency(),
			ProviderName(),
			Price(0),
			StoreCredit(0)
			{}
		
		PaymentOption(const PaymentOption& src) :
			PlayFabBaseModel(),
			Currency(src.Currency),
			ProviderName(src.ProviderName),
			Price(src.Price),
			StoreCredit(src.StoreCredit)
			{}
			
		PaymentOption(const rapidjson::Value& obj) : PaymentOption()
        {
            readFromValue(obj);
        }
		
		~PaymentOption();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PurchaseItemRequest : public PlayFabBaseModel
    {
		
		std::string ItemId;
		std::string VirtualCurrency;
		Int32 Price;
		std::string CatalogVersion;
		std::string StoreId;
	
        PurchaseItemRequest() :
			PlayFabBaseModel(),
			ItemId(),
			VirtualCurrency(),
			Price(0),
			CatalogVersion(),
			StoreId()
			{}
		
		PurchaseItemRequest(const PurchaseItemRequest& src) :
			PlayFabBaseModel(),
			ItemId(src.ItemId),
			VirtualCurrency(src.VirtualCurrency),
			Price(src.Price),
			CatalogVersion(src.CatalogVersion),
			StoreId(src.StoreId)
			{}
			
		PurchaseItemRequest(const rapidjson::Value& obj) : PurchaseItemRequest()
        {
            readFromValue(obj);
        }
		
		~PurchaseItemRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PurchaseItemResult : public PlayFabBaseModel
    {
		
		std::list<PurchasedItem> Items;
	
        PurchaseItemResult() :
			PlayFabBaseModel(),
			Items()
			{}
		
		PurchaseItemResult(const PurchaseItemResult& src) :
			PlayFabBaseModel(),
			Items(src.Items)
			{}
			
		PurchaseItemResult(const rapidjson::Value& obj) : PurchaseItemResult()
        {
            readFromValue(obj);
        }
		
		~PurchaseItemResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RedeemCouponRequest : public PlayFabBaseModel
    {
		
		std::string CouponCode;
		std::string CatalogVersion;
	
        RedeemCouponRequest() :
			PlayFabBaseModel(),
			CouponCode(),
			CatalogVersion()
			{}
		
		RedeemCouponRequest(const RedeemCouponRequest& src) :
			PlayFabBaseModel(),
			CouponCode(src.CouponCode),
			CatalogVersion(src.CatalogVersion)
			{}
			
		RedeemCouponRequest(const rapidjson::Value& obj) : RedeemCouponRequest()
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
	
        RedeemCouponResult() :
			PlayFabBaseModel(),
			GrantedItems()
			{}
		
		RedeemCouponResult(const RedeemCouponResult& src) :
			PlayFabBaseModel(),
			GrantedItems(src.GrantedItems)
			{}
			
		RedeemCouponResult(const rapidjson::Value& obj) : RedeemCouponResult()
        {
            readFromValue(obj);
        }
		
		~RedeemCouponResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RefreshPSNAuthTokenRequest : public PlayFabBaseModel
    {
		
		std::string AuthCode;
	
        RefreshPSNAuthTokenRequest() :
			PlayFabBaseModel(),
			AuthCode()
			{}
		
		RefreshPSNAuthTokenRequest(const RefreshPSNAuthTokenRequest& src) :
			PlayFabBaseModel(),
			AuthCode(src.AuthCode)
			{}
			
		RefreshPSNAuthTokenRequest(const rapidjson::Value& obj) : RefreshPSNAuthTokenRequest()
        {
            readFromValue(obj);
        }
		
		~RefreshPSNAuthTokenRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegisterForIOSPushNotificationRequest : public PlayFabBaseModel
    {
		
		std::string DeviceToken;
		OptionalBool SendPushNotificationConfirmation;
		std::string ConfirmationMessage;
	
        RegisterForIOSPushNotificationRequest() :
			PlayFabBaseModel(),
			DeviceToken(),
			SendPushNotificationConfirmation(),
			ConfirmationMessage()
			{}
		
		RegisterForIOSPushNotificationRequest(const RegisterForIOSPushNotificationRequest& src) :
			PlayFabBaseModel(),
			DeviceToken(src.DeviceToken),
			SendPushNotificationConfirmation(src.SendPushNotificationConfirmation),
			ConfirmationMessage(src.ConfirmationMessage)
			{}
			
		RegisterForIOSPushNotificationRequest(const rapidjson::Value& obj) : RegisterForIOSPushNotificationRequest()
        {
            readFromValue(obj);
        }
		
		~RegisterForIOSPushNotificationRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegisterForIOSPushNotificationResult : public PlayFabBaseModel
    {
		
	
        RegisterForIOSPushNotificationResult() :
			PlayFabBaseModel()
			{}
		
		RegisterForIOSPushNotificationResult(const RegisterForIOSPushNotificationResult& src) :
			PlayFabBaseModel()
			{}
			
		RegisterForIOSPushNotificationResult(const rapidjson::Value& obj) : RegisterForIOSPushNotificationResult()
        {
            readFromValue(obj);
        }
		
		~RegisterForIOSPushNotificationResult();
		
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
		std::string PublisherId;
	
        RegisterPlayFabUserRequest() :
			PlayFabBaseModel(),
			TitleId(),
			Username(),
			Email(),
			Password(),
			Origination(),
			PublisherId()
			{}
		
		RegisterPlayFabUserRequest(const RegisterPlayFabUserRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			Username(src.Username),
			Email(src.Email),
			Password(src.Password),
			Origination(src.Origination),
			PublisherId(src.PublisherId)
			{}
			
		RegisterPlayFabUserRequest(const rapidjson::Value& obj) : RegisterPlayFabUserRequest()
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
	
        RegisterPlayFabUserResult() :
			PlayFabBaseModel(),
			PlayFabId(),
			SessionTicket(),
			Username()
			{}
		
		RegisterPlayFabUserResult(const RegisterPlayFabUserResult& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			SessionTicket(src.SessionTicket),
			Username(src.Username)
			{}
			
		RegisterPlayFabUserResult(const rapidjson::Value& obj) : RegisterPlayFabUserResult()
        {
            readFromValue(obj);
        }
		
		~RegisterPlayFabUserResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RemoveFriendRequest : public PlayFabBaseModel
    {
		
		std::string FriendPlayFabId;
	
        RemoveFriendRequest() :
			PlayFabBaseModel(),
			FriendPlayFabId()
			{}
		
		RemoveFriendRequest(const RemoveFriendRequest& src) :
			PlayFabBaseModel(),
			FriendPlayFabId(src.FriendPlayFabId)
			{}
			
		RemoveFriendRequest(const rapidjson::Value& obj) : RemoveFriendRequest()
        {
            readFromValue(obj);
        }
		
		~RemoveFriendRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RemoveFriendResult : public PlayFabBaseModel
    {
		
	
        RemoveFriendResult() :
			PlayFabBaseModel()
			{}
		
		RemoveFriendResult(const RemoveFriendResult& src) :
			PlayFabBaseModel()
			{}
			
		RemoveFriendResult(const rapidjson::Value& obj) : RemoveFriendResult()
        {
            readFromValue(obj);
        }
		
		~RemoveFriendResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RemoveSharedGroupMembersRequest : public PlayFabBaseModel
    {
		
		std::string SharedGroupId;
		std::list<std::string> PlayFabIds;
	
        RemoveSharedGroupMembersRequest() :
			PlayFabBaseModel(),
			SharedGroupId(),
			PlayFabIds()
			{}
		
		RemoveSharedGroupMembersRequest(const RemoveSharedGroupMembersRequest& src) :
			PlayFabBaseModel(),
			SharedGroupId(src.SharedGroupId),
			PlayFabIds(src.PlayFabIds)
			{}
			
		RemoveSharedGroupMembersRequest(const rapidjson::Value& obj) : RemoveSharedGroupMembersRequest()
        {
            readFromValue(obj);
        }
		
		~RemoveSharedGroupMembersRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RemoveSharedGroupMembersResult : public PlayFabBaseModel
    {
		
	
        RemoveSharedGroupMembersResult() :
			PlayFabBaseModel()
			{}
		
		RemoveSharedGroupMembersResult(const RemoveSharedGroupMembersResult& src) :
			PlayFabBaseModel()
			{}
			
		RemoveSharedGroupMembersResult(const rapidjson::Value& obj) : RemoveSharedGroupMembersResult()
        {
            readFromValue(obj);
        }
		
		~RemoveSharedGroupMembersResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ReportPlayerClientRequest : public PlayFabBaseModel
    {
		
		std::string ReporteeId;
		std::string Comment;
	
        ReportPlayerClientRequest() :
			PlayFabBaseModel(),
			ReporteeId(),
			Comment()
			{}
		
		ReportPlayerClientRequest(const ReportPlayerClientRequest& src) :
			PlayFabBaseModel(),
			ReporteeId(src.ReporteeId),
			Comment(src.Comment)
			{}
			
		ReportPlayerClientRequest(const rapidjson::Value& obj) : ReportPlayerClientRequest()
        {
            readFromValue(obj);
        }
		
		~ReportPlayerClientRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ReportPlayerClientResult : public PlayFabBaseModel
    {
		
		bool Updated;
		Int32 SubmissionsRemaining;
	
        ReportPlayerClientResult() :
			PlayFabBaseModel(),
			Updated(false),
			SubmissionsRemaining(0)
			{}
		
		ReportPlayerClientResult(const ReportPlayerClientResult& src) :
			PlayFabBaseModel(),
			Updated(src.Updated),
			SubmissionsRemaining(src.SubmissionsRemaining)
			{}
			
		ReportPlayerClientResult(const rapidjson::Value& obj) : ReportPlayerClientResult()
        {
            readFromValue(obj);
        }
		
		~ReportPlayerClientResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RestoreIOSPurchasesRequest : public PlayFabBaseModel
    {
		
		std::string ReceiptData;
	
        RestoreIOSPurchasesRequest() :
			PlayFabBaseModel(),
			ReceiptData()
			{}
		
		RestoreIOSPurchasesRequest(const RestoreIOSPurchasesRequest& src) :
			PlayFabBaseModel(),
			ReceiptData(src.ReceiptData)
			{}
			
		RestoreIOSPurchasesRequest(const rapidjson::Value& obj) : RestoreIOSPurchasesRequest()
        {
            readFromValue(obj);
        }
		
		~RestoreIOSPurchasesRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RestoreIOSPurchasesResult : public PlayFabBaseModel
    {
		
	
        RestoreIOSPurchasesResult() :
			PlayFabBaseModel()
			{}
		
		RestoreIOSPurchasesResult(const RestoreIOSPurchasesResult& src) :
			PlayFabBaseModel()
			{}
			
		RestoreIOSPurchasesResult(const rapidjson::Value& obj) : RestoreIOSPurchasesResult()
        {
            readFromValue(obj);
        }
		
		~RestoreIOSPurchasesResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RunCloudScriptRequest : public PlayFabBaseModel
    {
		
		std::string ActionId;
		MultitypeVar Params;
		std::string ParamsEncoded;
	
        RunCloudScriptRequest() :
			PlayFabBaseModel(),
			ActionId(),
			Params(),
			ParamsEncoded()
			{}
		
		RunCloudScriptRequest(const RunCloudScriptRequest& src) :
			PlayFabBaseModel(),
			ActionId(src.ActionId),
			Params(src.Params),
			ParamsEncoded(src.ParamsEncoded)
			{}
			
		RunCloudScriptRequest(const rapidjson::Value& obj) : RunCloudScriptRequest()
        {
            readFromValue(obj);
        }
		
		~RunCloudScriptRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RunCloudScriptResult : public PlayFabBaseModel
    {
		
		std::string ActionId;
		Int32 Version;
		Int32 Revision;
		MultitypeVar Results;
		std::string ResultsEncoded;
		std::string ActionLog;
		double ExecutionTime;
	
        RunCloudScriptResult() :
			PlayFabBaseModel(),
			ActionId(),
			Version(0),
			Revision(0),
			Results(),
			ResultsEncoded(),
			ActionLog(),
			ExecutionTime(0)
			{}
		
		RunCloudScriptResult(const RunCloudScriptResult& src) :
			PlayFabBaseModel(),
			ActionId(src.ActionId),
			Version(src.Version),
			Revision(src.Revision),
			Results(src.Results),
			ResultsEncoded(src.ResultsEncoded),
			ActionLog(src.ActionLog),
			ExecutionTime(src.ExecutionTime)
			{}
			
		RunCloudScriptResult(const rapidjson::Value& obj) : RunCloudScriptResult()
        {
            readFromValue(obj);
        }
		
		~RunCloudScriptResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SendAccountRecoveryEmailRequest : public PlayFabBaseModel
    {
		
		std::string Email;
		std::string TitleId;
		std::string PublisherId;
	
        SendAccountRecoveryEmailRequest() :
			PlayFabBaseModel(),
			Email(),
			TitleId(),
			PublisherId()
			{}
		
		SendAccountRecoveryEmailRequest(const SendAccountRecoveryEmailRequest& src) :
			PlayFabBaseModel(),
			Email(src.Email),
			TitleId(src.TitleId),
			PublisherId(src.PublisherId)
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
	
	struct SetFriendTagsRequest : public PlayFabBaseModel
    {
		
		std::string FriendPlayFabId;
		std::list<std::string> Tags;
	
        SetFriendTagsRequest() :
			PlayFabBaseModel(),
			FriendPlayFabId(),
			Tags()
			{}
		
		SetFriendTagsRequest(const SetFriendTagsRequest& src) :
			PlayFabBaseModel(),
			FriendPlayFabId(src.FriendPlayFabId),
			Tags(src.Tags)
			{}
			
		SetFriendTagsRequest(const rapidjson::Value& obj) : SetFriendTagsRequest()
        {
            readFromValue(obj);
        }
		
		~SetFriendTagsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SetFriendTagsResult : public PlayFabBaseModel
    {
		
	
        SetFriendTagsResult() :
			PlayFabBaseModel()
			{}
		
		SetFriendTagsResult(const SetFriendTagsResult& src) :
			PlayFabBaseModel()
			{}
			
		SetFriendTagsResult(const rapidjson::Value& obj) : SetFriendTagsResult()
        {
            readFromValue(obj);
        }
		
		~SetFriendTagsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct StartGameRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
		Region Region;
		std::string GameMode;
		std::string CustomCommandLineData;
	
        StartGameRequest() :
			PlayFabBaseModel(),
			BuildVersion(),
			Region(),
			GameMode(),
			CustomCommandLineData()
			{}
		
		StartGameRequest(const StartGameRequest& src) :
			PlayFabBaseModel(),
			BuildVersion(src.BuildVersion),
			Region(src.Region),
			GameMode(src.GameMode),
			CustomCommandLineData(src.CustomCommandLineData)
			{}
			
		StartGameRequest(const rapidjson::Value& obj) : StartGameRequest()
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
		OptionalInt32 ServerPort;
		std::string Ticket;
		std::string Expires;
		std::string Password;
	
        StartGameResult() :
			PlayFabBaseModel(),
			LobbyID(),
			ServerHostname(),
			ServerPort(),
			Ticket(),
			Expires(),
			Password()
			{}
		
		StartGameResult(const StartGameResult& src) :
			PlayFabBaseModel(),
			LobbyID(src.LobbyID),
			ServerHostname(src.ServerHostname),
			ServerPort(src.ServerPort),
			Ticket(src.Ticket),
			Expires(src.Expires),
			Password(src.Password)
			{}
			
		StartGameResult(const rapidjson::Value& obj) : StartGameResult()
        {
            readFromValue(obj);
        }
		
		~StartGameResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct StartPurchaseRequest : public PlayFabBaseModel
    {
		
		std::string CatalogVersion;
		std::string StoreId;
		std::list<ItemPuchaseRequest> Items;
	
        StartPurchaseRequest() :
			PlayFabBaseModel(),
			CatalogVersion(),
			StoreId(),
			Items()
			{}
		
		StartPurchaseRequest(const StartPurchaseRequest& src) :
			PlayFabBaseModel(),
			CatalogVersion(src.CatalogVersion),
			StoreId(src.StoreId),
			Items(src.Items)
			{}
			
		StartPurchaseRequest(const rapidjson::Value& obj) : StartPurchaseRequest()
        {
            readFromValue(obj);
        }
		
		~StartPurchaseRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct StartPurchaseResult : public PlayFabBaseModel
    {
		
		std::string OrderId;
		std::list<CartItem> Contents;
		std::list<PaymentOption> PaymentOptions;
		std::map<std::string, Int32> VirtualCurrencyBalances;
	
        StartPurchaseResult() :
			PlayFabBaseModel(),
			OrderId(),
			Contents(),
			PaymentOptions(),
			VirtualCurrencyBalances()
			{}
		
		StartPurchaseResult(const StartPurchaseResult& src) :
			PlayFabBaseModel(),
			OrderId(src.OrderId),
			Contents(src.Contents),
			PaymentOptions(src.PaymentOptions),
			VirtualCurrencyBalances(src.VirtualCurrencyBalances)
			{}
			
		StartPurchaseResult(const rapidjson::Value& obj) : StartPurchaseResult()
        {
            readFromValue(obj);
        }
		
		~StartPurchaseResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SubtractUserVirtualCurrencyRequest : public PlayFabBaseModel
    {
		
		std::string VirtualCurrency;
		Int32 Amount;
	
        SubtractUserVirtualCurrencyRequest() :
			PlayFabBaseModel(),
			VirtualCurrency(),
			Amount(0)
			{}
		
		SubtractUserVirtualCurrencyRequest(const SubtractUserVirtualCurrencyRequest& src) :
			PlayFabBaseModel(),
			VirtualCurrency(src.VirtualCurrency),
			Amount(src.Amount)
			{}
			
		SubtractUserVirtualCurrencyRequest(const rapidjson::Value& obj) : SubtractUserVirtualCurrencyRequest()
        {
            readFromValue(obj);
        }
		
		~SubtractUserVirtualCurrencyRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkAndroidDeviceIDRequest : public PlayFabBaseModel
    {
		
	
        UnlinkAndroidDeviceIDRequest() :
			PlayFabBaseModel()
			{}
		
		UnlinkAndroidDeviceIDRequest(const UnlinkAndroidDeviceIDRequest& src) :
			PlayFabBaseModel()
			{}
			
		UnlinkAndroidDeviceIDRequest(const rapidjson::Value& obj) : UnlinkAndroidDeviceIDRequest()
        {
            readFromValue(obj);
        }
		
		~UnlinkAndroidDeviceIDRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkAndroidDeviceIDResult : public PlayFabBaseModel
    {
		
	
        UnlinkAndroidDeviceIDResult() :
			PlayFabBaseModel()
			{}
		
		UnlinkAndroidDeviceIDResult(const UnlinkAndroidDeviceIDResult& src) :
			PlayFabBaseModel()
			{}
			
		UnlinkAndroidDeviceIDResult(const rapidjson::Value& obj) : UnlinkAndroidDeviceIDResult()
        {
            readFromValue(obj);
        }
		
		~UnlinkAndroidDeviceIDResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkFacebookAccountRequest : public PlayFabBaseModel
    {
		
	
        UnlinkFacebookAccountRequest() :
			PlayFabBaseModel()
			{}
		
		UnlinkFacebookAccountRequest(const UnlinkFacebookAccountRequest& src) :
			PlayFabBaseModel()
			{}
			
		UnlinkFacebookAccountRequest(const rapidjson::Value& obj) : UnlinkFacebookAccountRequest()
        {
            readFromValue(obj);
        }
		
		~UnlinkFacebookAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkFacebookAccountResult : public PlayFabBaseModel
    {
		
	
        UnlinkFacebookAccountResult() :
			PlayFabBaseModel()
			{}
		
		UnlinkFacebookAccountResult(const UnlinkFacebookAccountResult& src) :
			PlayFabBaseModel()
			{}
			
		UnlinkFacebookAccountResult(const rapidjson::Value& obj) : UnlinkFacebookAccountResult()
        {
            readFromValue(obj);
        }
		
		~UnlinkFacebookAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkGameCenterAccountRequest : public PlayFabBaseModel
    {
		
	
        UnlinkGameCenterAccountRequest() :
			PlayFabBaseModel()
			{}
		
		UnlinkGameCenterAccountRequest(const UnlinkGameCenterAccountRequest& src) :
			PlayFabBaseModel()
			{}
			
		UnlinkGameCenterAccountRequest(const rapidjson::Value& obj) : UnlinkGameCenterAccountRequest()
        {
            readFromValue(obj);
        }
		
		~UnlinkGameCenterAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkGameCenterAccountResult : public PlayFabBaseModel
    {
		
	
        UnlinkGameCenterAccountResult() :
			PlayFabBaseModel()
			{}
		
		UnlinkGameCenterAccountResult(const UnlinkGameCenterAccountResult& src) :
			PlayFabBaseModel()
			{}
			
		UnlinkGameCenterAccountResult(const rapidjson::Value& obj) : UnlinkGameCenterAccountResult()
        {
            readFromValue(obj);
        }
		
		~UnlinkGameCenterAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkIOSDeviceIDRequest : public PlayFabBaseModel
    {
		
	
        UnlinkIOSDeviceIDRequest() :
			PlayFabBaseModel()
			{}
		
		UnlinkIOSDeviceIDRequest(const UnlinkIOSDeviceIDRequest& src) :
			PlayFabBaseModel()
			{}
			
		UnlinkIOSDeviceIDRequest(const rapidjson::Value& obj) : UnlinkIOSDeviceIDRequest()
        {
            readFromValue(obj);
        }
		
		~UnlinkIOSDeviceIDRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkIOSDeviceIDResult : public PlayFabBaseModel
    {
		
	
        UnlinkIOSDeviceIDResult() :
			PlayFabBaseModel()
			{}
		
		UnlinkIOSDeviceIDResult(const UnlinkIOSDeviceIDResult& src) :
			PlayFabBaseModel()
			{}
			
		UnlinkIOSDeviceIDResult(const rapidjson::Value& obj) : UnlinkIOSDeviceIDResult()
        {
            readFromValue(obj);
        }
		
		~UnlinkIOSDeviceIDResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkSteamAccountRequest : public PlayFabBaseModel
    {
		
	
        UnlinkSteamAccountRequest() :
			PlayFabBaseModel()
			{}
		
		UnlinkSteamAccountRequest(const UnlinkSteamAccountRequest& src) :
			PlayFabBaseModel()
			{}
			
		UnlinkSteamAccountRequest(const rapidjson::Value& obj) : UnlinkSteamAccountRequest()
        {
            readFromValue(obj);
        }
		
		~UnlinkSteamAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkSteamAccountResult : public PlayFabBaseModel
    {
		
	
        UnlinkSteamAccountResult() :
			PlayFabBaseModel()
			{}
		
		UnlinkSteamAccountResult(const UnlinkSteamAccountResult& src) :
			PlayFabBaseModel()
			{}
			
		UnlinkSteamAccountResult(const rapidjson::Value& obj) : UnlinkSteamAccountResult()
        {
            readFromValue(obj);
        }
		
		~UnlinkSteamAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlockContainerItemRequest : public PlayFabBaseModel
    {
		
		std::string ContainerItemId;
		std::string CatalogVersion;
	
        UnlockContainerItemRequest() :
			PlayFabBaseModel(),
			ContainerItemId(),
			CatalogVersion()
			{}
		
		UnlockContainerItemRequest(const UnlockContainerItemRequest& src) :
			PlayFabBaseModel(),
			ContainerItemId(src.ContainerItemId),
			CatalogVersion(src.CatalogVersion)
			{}
			
		UnlockContainerItemRequest(const rapidjson::Value& obj) : UnlockContainerItemRequest()
        {
            readFromValue(obj);
        }
		
		~UnlockContainerItemRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlockContainerItemResult : public PlayFabBaseModel
    {
		
		std::string UnlockedItemInstanceId;
		std::string UnlockedWithItemInstanceId;
		std::list<ItemInstance> GrantedItems;
		std::map<std::string, Uint32> VirtualCurrency;
	
        UnlockContainerItemResult() :
			PlayFabBaseModel(),
			UnlockedItemInstanceId(),
			UnlockedWithItemInstanceId(),
			GrantedItems(),
			VirtualCurrency()
			{}
		
		UnlockContainerItemResult(const UnlockContainerItemResult& src) :
			PlayFabBaseModel(),
			UnlockedItemInstanceId(src.UnlockedItemInstanceId),
			UnlockedWithItemInstanceId(src.UnlockedWithItemInstanceId),
			GrantedItems(src.GrantedItems),
			VirtualCurrency(src.VirtualCurrency)
			{}
			
		UnlockContainerItemResult(const rapidjson::Value& obj) : UnlockContainerItemResult()
        {
            readFromValue(obj);
        }
		
		~UnlockContainerItemResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateCharacterDataRequest : public PlayFabBaseModel
    {
		
		std::string CharacterId;
		std::map<std::string, std::string> Data;
		Boxed<UserDataPermission> Permission;
	
        UpdateCharacterDataRequest() :
			PlayFabBaseModel(),
			CharacterId(),
			Data(),
			Permission()
			{}
		
		UpdateCharacterDataRequest(const UpdateCharacterDataRequest& src) :
			PlayFabBaseModel(),
			CharacterId(src.CharacterId),
			Data(src.Data),
			Permission(src.Permission)
			{}
			
		UpdateCharacterDataRequest(const rapidjson::Value& obj) : UpdateCharacterDataRequest()
        {
            readFromValue(obj);
        }
		
		~UpdateCharacterDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateCharacterDataResult : public PlayFabBaseModel
    {
		
	
        UpdateCharacterDataResult() :
			PlayFabBaseModel()
			{}
		
		UpdateCharacterDataResult(const UpdateCharacterDataResult& src) :
			PlayFabBaseModel()
			{}
			
		UpdateCharacterDataResult(const rapidjson::Value& obj) : UpdateCharacterDataResult()
        {
            readFromValue(obj);
        }
		
		~UpdateCharacterDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateSharedGroupDataRequest : public PlayFabBaseModel
    {
		
		std::string SharedGroupId;
		std::map<std::string, std::string> Data;
		Boxed<UserDataPermission> Permission;
	
        UpdateSharedGroupDataRequest() :
			PlayFabBaseModel(),
			SharedGroupId(),
			Data(),
			Permission()
			{}
		
		UpdateSharedGroupDataRequest(const UpdateSharedGroupDataRequest& src) :
			PlayFabBaseModel(),
			SharedGroupId(src.SharedGroupId),
			Data(src.Data),
			Permission(src.Permission)
			{}
			
		UpdateSharedGroupDataRequest(const rapidjson::Value& obj) : UpdateSharedGroupDataRequest()
        {
            readFromValue(obj);
        }
		
		~UpdateSharedGroupDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateSharedGroupDataResult : public PlayFabBaseModel
    {
		
	
        UpdateSharedGroupDataResult() :
			PlayFabBaseModel()
			{}
		
		UpdateSharedGroupDataResult(const UpdateSharedGroupDataResult& src) :
			PlayFabBaseModel()
			{}
			
		UpdateSharedGroupDataResult(const rapidjson::Value& obj) : UpdateSharedGroupDataResult()
        {
            readFromValue(obj);
        }
		
		~UpdateSharedGroupDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateUserDataRequest : public PlayFabBaseModel
    {
		
		std::map<std::string, std::string> Data;
		Boxed<UserDataPermission> Permission;
	
        UpdateUserDataRequest() :
			PlayFabBaseModel(),
			Data(),
			Permission()
			{}
		
		UpdateUserDataRequest(const UpdateUserDataRequest& src) :
			PlayFabBaseModel(),
			Data(src.Data),
			Permission(src.Permission)
			{}
			
		UpdateUserDataRequest(const rapidjson::Value& obj) : UpdateUserDataRequest()
        {
            readFromValue(obj);
        }
		
		~UpdateUserDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateUserDataResult : public PlayFabBaseModel
    {
		
	
        UpdateUserDataResult() :
			PlayFabBaseModel()
			{}
		
		UpdateUserDataResult(const UpdateUserDataResult& src) :
			PlayFabBaseModel()
			{}
			
		UpdateUserDataResult(const rapidjson::Value& obj) : UpdateUserDataResult()
        {
            readFromValue(obj);
        }
		
		~UpdateUserDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateUserStatisticsRequest : public PlayFabBaseModel
    {
		
		std::map<std::string, Int32> UserStatistics;
	
        UpdateUserStatisticsRequest() :
			PlayFabBaseModel(),
			UserStatistics()
			{}
		
		UpdateUserStatisticsRequest(const UpdateUserStatisticsRequest& src) :
			PlayFabBaseModel(),
			UserStatistics(src.UserStatistics)
			{}
			
		UpdateUserStatisticsRequest(const rapidjson::Value& obj) : UpdateUserStatisticsRequest()
        {
            readFromValue(obj);
        }
		
		~UpdateUserStatisticsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateUserStatisticsResult : public PlayFabBaseModel
    {
		
	
        UpdateUserStatisticsResult() :
			PlayFabBaseModel()
			{}
		
		UpdateUserStatisticsResult(const UpdateUserStatisticsResult& src) :
			PlayFabBaseModel()
			{}
			
		UpdateUserStatisticsResult(const rapidjson::Value& obj) : UpdateUserStatisticsResult()
        {
            readFromValue(obj);
        }
		
		~UpdateUserStatisticsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateUserTitleDisplayNameRequest : public PlayFabBaseModel
    {
		
		std::string DisplayName;
	
        UpdateUserTitleDisplayNameRequest() :
			PlayFabBaseModel(),
			DisplayName()
			{}
		
		UpdateUserTitleDisplayNameRequest(const UpdateUserTitleDisplayNameRequest& src) :
			PlayFabBaseModel(),
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
	
	struct ValidateGooglePlayPurchaseRequest : public PlayFabBaseModel
    {
		
		std::string ReceiptJson;
		std::string Signature;
	
        ValidateGooglePlayPurchaseRequest() :
			PlayFabBaseModel(),
			ReceiptJson(),
			Signature()
			{}
		
		ValidateGooglePlayPurchaseRequest(const ValidateGooglePlayPurchaseRequest& src) :
			PlayFabBaseModel(),
			ReceiptJson(src.ReceiptJson),
			Signature(src.Signature)
			{}
			
		ValidateGooglePlayPurchaseRequest(const rapidjson::Value& obj) : ValidateGooglePlayPurchaseRequest()
        {
            readFromValue(obj);
        }
		
		~ValidateGooglePlayPurchaseRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ValidateGooglePlayPurchaseResult : public PlayFabBaseModel
    {
		
	
        ValidateGooglePlayPurchaseResult() :
			PlayFabBaseModel()
			{}
		
		ValidateGooglePlayPurchaseResult(const ValidateGooglePlayPurchaseResult& src) :
			PlayFabBaseModel()
			{}
			
		ValidateGooglePlayPurchaseResult(const rapidjson::Value& obj) : ValidateGooglePlayPurchaseResult()
        {
            readFromValue(obj);
        }
		
		~ValidateGooglePlayPurchaseResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ValidateIOSReceiptRequest : public PlayFabBaseModel
    {
		
		std::string ReceiptData;
		std::string CurrencyCode;
		Int32 PurchasePrice;
	
        ValidateIOSReceiptRequest() :
			PlayFabBaseModel(),
			ReceiptData(),
			CurrencyCode(),
			PurchasePrice(0)
			{}
		
		ValidateIOSReceiptRequest(const ValidateIOSReceiptRequest& src) :
			PlayFabBaseModel(),
			ReceiptData(src.ReceiptData),
			CurrencyCode(src.CurrencyCode),
			PurchasePrice(src.PurchasePrice)
			{}
			
		ValidateIOSReceiptRequest(const rapidjson::Value& obj) : ValidateIOSReceiptRequest()
        {
            readFromValue(obj);
        }
		
		~ValidateIOSReceiptRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ValidateIOSReceiptResult : public PlayFabBaseModel
    {
		
	
        ValidateIOSReceiptResult() :
			PlayFabBaseModel()
			{}
		
		ValidateIOSReceiptResult(const ValidateIOSReceiptResult& src) :
			PlayFabBaseModel()
			{}
			
		ValidateIOSReceiptResult(const rapidjson::Value& obj) : ValidateIOSReceiptResult()
        {
            readFromValue(obj);
        }
		
		~ValidateIOSReceiptResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	

}
}

#endif