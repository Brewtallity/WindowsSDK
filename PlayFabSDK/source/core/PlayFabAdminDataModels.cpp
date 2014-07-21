
#include "playfab/PlayFabAdminDataModels.h"

using namespace PlayFab;
using namespace PlayFab::AdminModels;
using namespace rapidjson;



AddServerBuildRequest::~AddServerBuildRequest()
{
	
}

void AddServerBuildRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("BuildId"); writer.String(BuildId.c_str());
	
	if(Timestamp.notNull()) { writer.String("Timestamp"); writeDatetime(Timestamp, writer); }
	
	writer.String("Active"); writer.Bool(Active);
	
	writer.String("DedicatedServerEligible"); writer.Bool(DedicatedServerEligible);
	
	if(!ActiveRegions.empty()) {
	writer.String("ActiveRegions");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = ActiveRegions.begin(); iter != ActiveRegions.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	if(Comment.length() > 0) { writer.String("Comment"); writer.String(Comment.c_str()); }
	
	
	writer.EndObject();
}

bool AddServerBuildRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* BuildId_member = obj.FindMember("BuildId");
	if (BuildId_member != NULL) BuildId = BuildId_member->value.GetString();
	
	const Value::Member* Timestamp_member = obj.FindMember("Timestamp");
	if (Timestamp_member != NULL) Timestamp = readDatetime(Timestamp_member->value);
	
	const Value::Member* Active_member = obj.FindMember("Active");
	if (Active_member != NULL) Active = Active_member->value.GetBool();
	
	const Value::Member* DedicatedServerEligible_member = obj.FindMember("DedicatedServerEligible");
	if (DedicatedServerEligible_member != NULL) DedicatedServerEligible = DedicatedServerEligible_member->value.GetBool();
	
	const Value::Member* ActiveRegions_member = obj.FindMember("ActiveRegions");
	if (ActiveRegions_member != NULL) {
		const rapidjson::Value& memberList = ActiveRegions_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			ActiveRegions.push_back(memberList[i].GetString());
		}
	}
	
	const Value::Member* Comment_member = obj.FindMember("Comment");
	if (Comment_member != NULL) Comment = Comment_member->value.GetString();
	
	
	return true;
}


AddServerBuildResult::~AddServerBuildResult()
{
	
}

void AddServerBuildResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(BuildId.length() > 0) { writer.String("BuildId"); writer.String(BuildId.c_str()); }
	
	writer.String("Active"); writer.Bool(Active);
	
	if(!ActiveRegions.empty()) {
	writer.String("ActiveRegions");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = ActiveRegions.begin(); iter != ActiveRegions.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	if(Comment.length() > 0) { writer.String("Comment"); writer.String(Comment.c_str()); }
	
	if(Timestamp.notNull()) { writer.String("Timestamp"); writeDatetime(Timestamp, writer); }
	
	if(TitleId.length() > 0) { writer.String("TitleId"); writer.String(TitleId.c_str()); }
	
	
	writer.EndObject();
}

bool AddServerBuildResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* BuildId_member = obj.FindMember("BuildId");
	if (BuildId_member != NULL) BuildId = BuildId_member->value.GetString();
	
	const Value::Member* Active_member = obj.FindMember("Active");
	if (Active_member != NULL) Active = Active_member->value.GetBool();
	
	const Value::Member* ActiveRegions_member = obj.FindMember("ActiveRegions");
	if (ActiveRegions_member != NULL) {
		const rapidjson::Value& memberList = ActiveRegions_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			ActiveRegions.push_back(memberList[i].GetString());
		}
	}
	
	const Value::Member* Comment_member = obj.FindMember("Comment");
	if (Comment_member != NULL) Comment = Comment_member->value.GetString();
	
	const Value::Member* Timestamp_member = obj.FindMember("Timestamp");
	if (Timestamp_member != NULL) Timestamp = readDatetime(Timestamp_member->value);
	
	const Value::Member* TitleId_member = obj.FindMember("TitleId");
	if (TitleId_member != NULL) TitleId = TitleId_member->value.GetString();
	
	
	return true;
}


CatalogItemConsumableInfo::~CatalogItemConsumableInfo()
{
	
}

void CatalogItemConsumableInfo::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("UsageCount"); writer.Uint(UsageCount);
	
	if(UsagePeriod.notNull()) { writer.String("UsagePeriod"); writer.Uint(UsagePeriod); }
	
	if(UsagePeriodGroup.length() > 0) { writer.String("UsagePeriodGroup"); writer.String(UsagePeriodGroup.c_str()); }
	
	
	writer.EndObject();
}

bool CatalogItemConsumableInfo::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* UsageCount_member = obj.FindMember("UsageCount");
	if (UsageCount_member != NULL) UsageCount = UsageCount_member->value.GetUint();
	
	const Value::Member* UsagePeriod_member = obj.FindMember("UsagePeriod");
	if (UsagePeriod_member != NULL) UsagePeriod = UsagePeriod_member->value.GetUint();
	
	const Value::Member* UsagePeriodGroup_member = obj.FindMember("UsagePeriodGroup");
	if (UsagePeriodGroup_member != NULL) UsagePeriodGroup = UsagePeriodGroup_member->value.GetString();
	
	
	return true;
}


CatalogItemContainerInfo::~CatalogItemContainerInfo()
{
	
}

void CatalogItemContainerInfo::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(KeyItemId.length() > 0) { writer.String("KeyItemId"); writer.String(KeyItemId.c_str()); }
	
	if(!ItemContents.empty()) {
	writer.String("ItemContents");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = ItemContents.begin(); iter != ItemContents.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	if(!ResultTableContents.empty()) {
	writer.String("ResultTableContents");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = ResultTableContents.begin(); iter != ResultTableContents.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	if(!VirtualCurrencyContents.empty()) {
	writer.String("VirtualCurrencyContents");
	writer.StartObject();
	for (std::map<std::string, Uint32>::iterator iter = VirtualCurrencyContents.begin(); iter != VirtualCurrencyContents.end(); ++iter) {
		writer.String(iter->first.c_str()); writer.Uint(iter->second);
	}
	writer.EndObject();
	}
	
	
	writer.EndObject();
}

bool CatalogItemContainerInfo::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* KeyItemId_member = obj.FindMember("KeyItemId");
	if (KeyItemId_member != NULL) KeyItemId = KeyItemId_member->value.GetString();
	
	const Value::Member* ItemContents_member = obj.FindMember("ItemContents");
	if (ItemContents_member != NULL) {
		const rapidjson::Value& memberList = ItemContents_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			ItemContents.push_back(memberList[i].GetString());
		}
	}
	
	const Value::Member* ResultTableContents_member = obj.FindMember("ResultTableContents");
	if (ResultTableContents_member != NULL) {
		const rapidjson::Value& memberList = ResultTableContents_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			ResultTableContents.push_back(memberList[i].GetString());
		}
	}
	
	const Value::Member* VirtualCurrencyContents_member = obj.FindMember("VirtualCurrencyContents");
	if (VirtualCurrencyContents_member != NULL) {
		for (Value::ConstMemberIterator iter = VirtualCurrencyContents_member->value.MemberBegin(); iter != VirtualCurrencyContents_member->value.MemberEnd(); ++iter) {
			VirtualCurrencyContents[iter->name.GetString()] = iter->value.GetUint();
		}
	}
	
	
	return true;
}


CatalogItemBundleInfo::~CatalogItemBundleInfo()
{
	
}

void CatalogItemBundleInfo::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!BundledItems.empty()) {
	writer.String("BundledItems");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = BundledItems.begin(); iter != BundledItems.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	if(!BundledResultTables.empty()) {
	writer.String("BundledResultTables");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = BundledResultTables.begin(); iter != BundledResultTables.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	if(!BundledVirtualCurrencies.empty()) {
	writer.String("BundledVirtualCurrencies");
	writer.StartObject();
	for (std::map<std::string, Uint32>::iterator iter = BundledVirtualCurrencies.begin(); iter != BundledVirtualCurrencies.end(); ++iter) {
		writer.String(iter->first.c_str()); writer.Uint(iter->second);
	}
	writer.EndObject();
	}
	
	
	writer.EndObject();
}

bool CatalogItemBundleInfo::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* BundledItems_member = obj.FindMember("BundledItems");
	if (BundledItems_member != NULL) {
		const rapidjson::Value& memberList = BundledItems_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			BundledItems.push_back(memberList[i].GetString());
		}
	}
	
	const Value::Member* BundledResultTables_member = obj.FindMember("BundledResultTables");
	if (BundledResultTables_member != NULL) {
		const rapidjson::Value& memberList = BundledResultTables_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			BundledResultTables.push_back(memberList[i].GetString());
		}
	}
	
	const Value::Member* BundledVirtualCurrencies_member = obj.FindMember("BundledVirtualCurrencies");
	if (BundledVirtualCurrencies_member != NULL) {
		for (Value::ConstMemberIterator iter = BundledVirtualCurrencies_member->value.MemberBegin(); iter != BundledVirtualCurrencies_member->value.MemberEnd(); ++iter) {
			BundledVirtualCurrencies[iter->name.GetString()] = iter->value.GetUint();
		}
	}
	
	
	return true;
}


CatalogItem::~CatalogItem()
{
	if(Consumable != NULL) delete Consumable;
	if(Container != NULL) delete Container;
	if(Bundle != NULL) delete Bundle;
	
}

void CatalogItem::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("ItemId"); writer.String(ItemId.c_str());
	
	if(ItemClass.length() > 0) { writer.String("ItemClass"); writer.String(ItemClass.c_str()); }
	
	if(CatalogVersion.length() > 0) { writer.String("CatalogVersion"); writer.String(CatalogVersion.c_str()); }
	
	if(DisplayName.length() > 0) { writer.String("DisplayName"); writer.String(DisplayName.c_str()); }
	
	if(Description.length() > 0) { writer.String("Description"); writer.String(Description.c_str()); }
	
	if(!VirtualCurrencyPrices.empty()) {
	writer.String("VirtualCurrencyPrices");
	writer.StartObject();
	for (std::map<std::string, Uint32>::iterator iter = VirtualCurrencyPrices.begin(); iter != VirtualCurrencyPrices.end(); ++iter) {
		writer.String(iter->first.c_str()); writer.Uint(iter->second);
	}
	writer.EndObject();
	}
	
	if(!RealCurrencyPrices.empty()) {
	writer.String("RealCurrencyPrices");
	writer.StartObject();
	for (std::map<std::string, Uint32>::iterator iter = RealCurrencyPrices.begin(); iter != RealCurrencyPrices.end(); ++iter) {
		writer.String(iter->first.c_str()); writer.Uint(iter->second);
	}
	writer.EndObject();
	}
	
	if(ReleaseDate.notNull()) { writer.String("ReleaseDate"); writeDatetime(ReleaseDate, writer); }
	
	if(ExpirationDate.notNull()) { writer.String("ExpirationDate"); writeDatetime(ExpirationDate, writer); }
	
	if(IsFree.notNull()) { writer.String("IsFree"); writer.Bool(IsFree); }
	
	if(NotForSale.notNull()) { writer.String("NotForSale"); writer.Bool(NotForSale); }
	
	if(NotForTrade.notNull()) { writer.String("NotForTrade"); writer.Bool(NotForTrade); }
	
	if(!Tags.empty()) {
	writer.String("Tags");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = Tags.begin(); iter != Tags.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	if(CustomData.length() > 0) { writer.String("CustomData"); writer.String(CustomData.c_str()); }
	
	if(!GrantedIfPlayerHas.empty()) {
	writer.String("GrantedIfPlayerHas");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = GrantedIfPlayerHas.begin(); iter != GrantedIfPlayerHas.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	if(Consumable != NULL) { writer.String("Consumable"); Consumable->writeJSON(writer); }
	
	if(Container != NULL) { writer.String("Container"); Container->writeJSON(writer); }
	
	if(Bundle != NULL) { writer.String("Bundle"); Bundle->writeJSON(writer); }
	
	
	writer.EndObject();
}

bool CatalogItem::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* ItemId_member = obj.FindMember("ItemId");
	if (ItemId_member != NULL) ItemId = ItemId_member->value.GetString();
	
	const Value::Member* ItemClass_member = obj.FindMember("ItemClass");
	if (ItemClass_member != NULL) ItemClass = ItemClass_member->value.GetString();
	
	const Value::Member* CatalogVersion_member = obj.FindMember("CatalogVersion");
	if (CatalogVersion_member != NULL) CatalogVersion = CatalogVersion_member->value.GetString();
	
	const Value::Member* DisplayName_member = obj.FindMember("DisplayName");
	if (DisplayName_member != NULL) DisplayName = DisplayName_member->value.GetString();
	
	const Value::Member* Description_member = obj.FindMember("Description");
	if (Description_member != NULL) Description = Description_member->value.GetString();
	
	const Value::Member* VirtualCurrencyPrices_member = obj.FindMember("VirtualCurrencyPrices");
	if (VirtualCurrencyPrices_member != NULL) {
		for (Value::ConstMemberIterator iter = VirtualCurrencyPrices_member->value.MemberBegin(); iter != VirtualCurrencyPrices_member->value.MemberEnd(); ++iter) {
			VirtualCurrencyPrices[iter->name.GetString()] = iter->value.GetUint();
		}
	}
	
	const Value::Member* RealCurrencyPrices_member = obj.FindMember("RealCurrencyPrices");
	if (RealCurrencyPrices_member != NULL) {
		for (Value::ConstMemberIterator iter = RealCurrencyPrices_member->value.MemberBegin(); iter != RealCurrencyPrices_member->value.MemberEnd(); ++iter) {
			RealCurrencyPrices[iter->name.GetString()] = iter->value.GetUint();
		}
	}
	
	const Value::Member* ReleaseDate_member = obj.FindMember("ReleaseDate");
	if (ReleaseDate_member != NULL) ReleaseDate = readDatetime(ReleaseDate_member->value);
	
	const Value::Member* ExpirationDate_member = obj.FindMember("ExpirationDate");
	if (ExpirationDate_member != NULL) ExpirationDate = readDatetime(ExpirationDate_member->value);
	
	const Value::Member* IsFree_member = obj.FindMember("IsFree");
	if (IsFree_member != NULL) IsFree = IsFree_member->value.GetBool();
	
	const Value::Member* NotForSale_member = obj.FindMember("NotForSale");
	if (NotForSale_member != NULL) NotForSale = NotForSale_member->value.GetBool();
	
	const Value::Member* NotForTrade_member = obj.FindMember("NotForTrade");
	if (NotForTrade_member != NULL) NotForTrade = NotForTrade_member->value.GetBool();
	
	const Value::Member* Tags_member = obj.FindMember("Tags");
	if (Tags_member != NULL) {
		const rapidjson::Value& memberList = Tags_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Tags.push_back(memberList[i].GetString());
		}
	}
	
	const Value::Member* CustomData_member = obj.FindMember("CustomData");
	if (CustomData_member != NULL) CustomData = CustomData_member->value.GetString();
	
	const Value::Member* GrantedIfPlayerHas_member = obj.FindMember("GrantedIfPlayerHas");
	if (GrantedIfPlayerHas_member != NULL) {
		const rapidjson::Value& memberList = GrantedIfPlayerHas_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			GrantedIfPlayerHas.push_back(memberList[i].GetString());
		}
	}
	
	const Value::Member* Consumable_member = obj.FindMember("Consumable");
	if (Consumable_member != NULL) Consumable = new CatalogItemConsumableInfo(Consumable_member->value);
	
	const Value::Member* Container_member = obj.FindMember("Container");
	if (Container_member != NULL) Container = new CatalogItemContainerInfo(Container_member->value);
	
	const Value::Member* Bundle_member = obj.FindMember("Bundle");
	if (Bundle_member != NULL) Bundle = new CatalogItemBundleInfo(Bundle_member->value);
	
	
	return true;
}


void PlayFab::AdminModels::writeCurrencyEnumJSON(Currency enumVal, PFStringJsonWriter& writer)
{
	switch(enumVal)
	{
		
		case CurrencyUSD: writer.String("USD"); break;
		case CurrencyGBP: writer.String("GBP"); break;
		case CurrencyEUR: writer.String("EUR"); break;
		case CurrencyRUB: writer.String("RUB"); break;
		case CurrencyBRL: writer.String("BRL"); break;
		case CurrencyCIS: writer.String("CIS"); break;
	}
}

Currency PlayFab::AdminModels::readCurrencyFromValue(const rapidjson::Value& obj)
{
	std::string enumStr = obj.GetString();
	if(enumStr == "USD")
		return CurrencyUSD;
	else if(enumStr == "GBP")
		return CurrencyGBP;
	else if(enumStr == "EUR")
		return CurrencyEUR;
	else if(enumStr == "RUB")
		return CurrencyRUB;
	else if(enumStr == "BRL")
		return CurrencyBRL;
	else if(enumStr == "CIS")
		return CurrencyCIS;
	
	return CurrencyUSD;
}


GameModeInfo::~GameModeInfo()
{
	
}

void GameModeInfo::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("Gamemode"); writer.String(Gamemode.c_str());
	
	writer.String("MinPlayerCount"); writer.Uint(MinPlayerCount);
	
	writer.String("MaxPlayerCount"); writer.Uint(MaxPlayerCount);
	
	writer.String("PerfCostPerGame"); writer.Double(PerfCostPerGame);
	
	
	writer.EndObject();
}

bool GameModeInfo::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Gamemode_member = obj.FindMember("Gamemode");
	if (Gamemode_member != NULL) Gamemode = Gamemode_member->value.GetString();
	
	const Value::Member* MinPlayerCount_member = obj.FindMember("MinPlayerCount");
	if (MinPlayerCount_member != NULL) MinPlayerCount = MinPlayerCount_member->value.GetUint();
	
	const Value::Member* MaxPlayerCount_member = obj.FindMember("MaxPlayerCount");
	if (MaxPlayerCount_member != NULL) MaxPlayerCount = MaxPlayerCount_member->value.GetUint();
	
	const Value::Member* PerfCostPerGame_member = obj.FindMember("PerfCostPerGame");
	if (PerfCostPerGame_member != NULL) PerfCostPerGame = (float)PerfCostPerGame_member->value.GetDouble();
	
	
	return true;
}


GetCatalogItemsRequest::~GetCatalogItemsRequest()
{
	
}

void GetCatalogItemsRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(CatalogVersion.length() > 0) { writer.String("CatalogVersion"); writer.String(CatalogVersion.c_str()); }
	
	
	writer.EndObject();
}

bool GetCatalogItemsRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* CatalogVersion_member = obj.FindMember("CatalogVersion");
	if (CatalogVersion_member != NULL) CatalogVersion = CatalogVersion_member->value.GetString();
	
	
	return true;
}


GetCatalogItemsResult::~GetCatalogItemsResult()
{
	
}

void GetCatalogItemsResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!Catalog.empty()) {
	writer.String("Catalog");
	writer.StartArray();
	for (std::list<CatalogItem>::iterator iter = Catalog.begin(); iter != Catalog.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool GetCatalogItemsResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Catalog_member = obj.FindMember("Catalog");
	if (Catalog_member != NULL) {
		const rapidjson::Value& memberList = Catalog_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Catalog.push_back(CatalogItem(memberList[i]));
		}
	}
	
	
	return true;
}


GetMatchmakerGameInfoRequest::~GetMatchmakerGameInfoRequest()
{
	
}

void GetMatchmakerGameInfoRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("LobbyId"); writer.String(LobbyId.c_str());
	
	
	writer.EndObject();
}

bool GetMatchmakerGameInfoRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* LobbyId_member = obj.FindMember("LobbyId");
	if (LobbyId_member != NULL) LobbyId = LobbyId_member->value.GetString();
	
	
	return true;
}


void PlayFab::AdminModels::writeRegionEnumJSON(Region enumVal, PFStringJsonWriter& writer)
{
	switch(enumVal)
	{
		
		case RegionUSWest: writer.String("USWest"); break;
		case RegionUSCentral: writer.String("USCentral"); break;
		case RegionUSEast: writer.String("USEast"); break;
		case RegionEUWest: writer.String("EUWest"); break;
		case RegionAPSouthEast: writer.String("APSouthEast"); break;
		case RegionAPNorthEast: writer.String("APNorthEast"); break;
		case RegionSAEast: writer.String("SAEast"); break;
		case RegionAustralia: writer.String("Australia"); break;
		case RegionChina: writer.String("China"); break;
	}
}

Region PlayFab::AdminModels::readRegionFromValue(const rapidjson::Value& obj)
{
	std::string enumStr = obj.GetString();
	if(enumStr == "USWest")
		return RegionUSWest;
	else if(enumStr == "USCentral")
		return RegionUSCentral;
	else if(enumStr == "USEast")
		return RegionUSEast;
	else if(enumStr == "EUWest")
		return RegionEUWest;
	else if(enumStr == "APSouthEast")
		return RegionAPSouthEast;
	else if(enumStr == "APNorthEast")
		return RegionAPNorthEast;
	else if(enumStr == "SAEast")
		return RegionSAEast;
	else if(enumStr == "Australia")
		return RegionAustralia;
	else if(enumStr == "China")
		return RegionChina;
	
	return RegionUSWest;
}


GetMatchmakerGameInfoResult::~GetMatchmakerGameInfoResult()
{
	
}

void GetMatchmakerGameInfoResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(LobbyId.length() > 0) { writer.String("LobbyId"); writer.String(LobbyId.c_str()); }
	
	if(TitleId.length() > 0) { writer.String("TitleId"); writer.String(TitleId.c_str()); }
	
	if(StartTime.notNull()) { writer.String("StartTime"); writeDatetime(StartTime, writer); }
	
	if(EndTime.notNull()) { writer.String("EndTime"); writeDatetime(EndTime, writer); }
	
	if(Mode.length() > 0) { writer.String("Mode"); writer.String(Mode.c_str()); }
	
	if(BuildVersion.length() > 0) { writer.String("BuildVersion"); writer.String(BuildVersion.c_str()); }
	
	if(Region.notNull()) { writer.String("Region"); writeRegionEnumJSON(Region, writer); }
	
	if(!Players.empty()) {
	writer.String("Players");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = Players.begin(); iter != Players.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	if(ServerAddress.length() > 0) { writer.String("ServerAddress"); writer.String(ServerAddress.c_str()); }
	
	writer.String("ServerPort"); writer.Uint(ServerPort);
	
	if(StdOutLog.length() > 0) { writer.String("StdOutLog"); writer.String(StdOutLog.c_str()); }
	
	if(StdErrLog.length() > 0) { writer.String("StdErrLog"); writer.String(StdErrLog.c_str()); }
	
	
	writer.EndObject();
}

bool GetMatchmakerGameInfoResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* LobbyId_member = obj.FindMember("LobbyId");
	if (LobbyId_member != NULL) LobbyId = LobbyId_member->value.GetString();
	
	const Value::Member* TitleId_member = obj.FindMember("TitleId");
	if (TitleId_member != NULL) TitleId = TitleId_member->value.GetString();
	
	const Value::Member* StartTime_member = obj.FindMember("StartTime");
	if (StartTime_member != NULL) StartTime = readDatetime(StartTime_member->value);
	
	const Value::Member* EndTime_member = obj.FindMember("EndTime");
	if (EndTime_member != NULL) EndTime = readDatetime(EndTime_member->value);
	
	const Value::Member* Mode_member = obj.FindMember("Mode");
	if (Mode_member != NULL) Mode = Mode_member->value.GetString();
	
	const Value::Member* BuildVersion_member = obj.FindMember("BuildVersion");
	if (BuildVersion_member != NULL) BuildVersion = BuildVersion_member->value.GetString();
	
	const Value::Member* Region_member = obj.FindMember("Region");
	if (Region_member != NULL) Region = readRegionFromValue(Region_member->value);
	
	const Value::Member* Players_member = obj.FindMember("Players");
	if (Players_member != NULL) {
		const rapidjson::Value& memberList = Players_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Players.push_back(memberList[i].GetString());
		}
	}
	
	const Value::Member* ServerAddress_member = obj.FindMember("ServerAddress");
	if (ServerAddress_member != NULL) ServerAddress = ServerAddress_member->value.GetString();
	
	const Value::Member* ServerPort_member = obj.FindMember("ServerPort");
	if (ServerPort_member != NULL) ServerPort = ServerPort_member->value.GetUint();
	
	const Value::Member* StdOutLog_member = obj.FindMember("StdOutLog");
	if (StdOutLog_member != NULL) StdOutLog = StdOutLog_member->value.GetString();
	
	const Value::Member* StdErrLog_member = obj.FindMember("StdErrLog");
	if (StdErrLog_member != NULL) StdErrLog = StdErrLog_member->value.GetString();
	
	
	return true;
}


GetMatchmakerGameModesRequest::~GetMatchmakerGameModesRequest()
{
	
}

void GetMatchmakerGameModesRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("BuildVersion"); writer.String(BuildVersion.c_str());
	
	
	writer.EndObject();
}

bool GetMatchmakerGameModesRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* BuildVersion_member = obj.FindMember("BuildVersion");
	if (BuildVersion_member != NULL) BuildVersion = BuildVersion_member->value.GetString();
	
	
	return true;
}


GetMatchmakerGameModesResult::~GetMatchmakerGameModesResult()
{
	
}

void GetMatchmakerGameModesResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!GameModes.empty()) {
	writer.String("GameModes");
	writer.StartArray();
	for (std::list<GameModeInfo>::iterator iter = GameModes.begin(); iter != GameModes.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool GetMatchmakerGameModesResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* GameModes_member = obj.FindMember("GameModes");
	if (GameModes_member != NULL) {
		const rapidjson::Value& memberList = GameModes_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			GameModes.push_back(GameModeInfo(memberList[i]));
		}
	}
	
	
	return true;
}


GetRandomResultTablesRequest::~GetRandomResultTablesRequest()
{
	
}

void GetRandomResultTablesRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool GetRandomResultTablesRequest::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


void PlayFab::AdminModels::writeResultTableNodeTypeEnumJSON(ResultTableNodeType enumVal, PFStringJsonWriter& writer)
{
	switch(enumVal)
	{
		
		case ResultTableNodeTypeItemId: writer.String("ItemId"); break;
	}
}

ResultTableNodeType PlayFab::AdminModels::readResultTableNodeTypeFromValue(const rapidjson::Value& obj)
{
	std::string enumStr = obj.GetString();
	if(enumStr == "ItemId")
		return ResultTableNodeTypeItemId;
	
	return ResultTableNodeTypeItemId;
}


ResultTableNode::~ResultTableNode()
{
	
}

void ResultTableNode::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("ResultItemType"); writeResultTableNodeTypeEnumJSON(ResultItemType, writer);
	
	writer.String("ResultItem"); writer.String(ResultItem.c_str());
	
	writer.String("Weight"); writer.Int(Weight);
	
	
	writer.EndObject();
}

bool ResultTableNode::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* ResultItemType_member = obj.FindMember("ResultItemType");
	if (ResultItemType_member != NULL) ResultItemType = readResultTableNodeTypeFromValue(ResultItemType_member->value);
	
	const Value::Member* ResultItem_member = obj.FindMember("ResultItem");
	if (ResultItem_member != NULL) ResultItem = ResultItem_member->value.GetString();
	
	const Value::Member* Weight_member = obj.FindMember("Weight");
	if (Weight_member != NULL) Weight = Weight_member->value.GetInt();
	
	
	return true;
}


RandomResultTable::~RandomResultTable()
{
	
}

void RandomResultTable::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("TableId"); writer.String(TableId.c_str());
	
	writer.String("Nodes");
	writer.StartArray();
	for (std::list<ResultTableNode>::iterator iter = Nodes.begin(); iter != Nodes.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	
	
	
	writer.EndObject();
}

bool RandomResultTable::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* TableId_member = obj.FindMember("TableId");
	if (TableId_member != NULL) TableId = TableId_member->value.GetString();
	
	const Value::Member* Nodes_member = obj.FindMember("Nodes");
	if (Nodes_member != NULL) {
		const rapidjson::Value& memberList = Nodes_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Nodes.push_back(ResultTableNode(memberList[i]));
		}
	}
	
	
	return true;
}


GetRandomResultTablesResult::~GetRandomResultTablesResult()
{
	
}

void GetRandomResultTablesResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!Tables.empty()) {
	writer.String("Tables");
	writer.StartObject();
	for (std::map<std::string, RandomResultTable>::iterator iter = Tables.begin(); iter != Tables.end(); ++iter) {
		writer.String(iter->first.c_str()); iter->second.writeJSON(writer);
	}
	writer.EndObject();
	}
	
	
	writer.EndObject();
}

bool GetRandomResultTablesResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Tables_member = obj.FindMember("Tables");
	if (Tables_member != NULL) {
		for (Value::ConstMemberIterator iter = Tables_member->value.MemberBegin(); iter != Tables_member->value.MemberEnd(); ++iter) {
			Tables[iter->name.GetString()] = RandomResultTable(iter->value);
		}
	}
	
	
	return true;
}


GetServerBuildInfoRequest::~GetServerBuildInfoRequest()
{
	
}

void GetServerBuildInfoRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("BuildId"); writer.String(BuildId.c_str());
	
	
	writer.EndObject();
}

bool GetServerBuildInfoRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* BuildId_member = obj.FindMember("BuildId");
	if (BuildId_member != NULL) BuildId = BuildId_member->value.GetString();
	
	
	return true;
}


GetServerBuildInfoResult::~GetServerBuildInfoResult()
{
	
}

void GetServerBuildInfoResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(BuildId.length() > 0) { writer.String("BuildId"); writer.String(BuildId.c_str()); }
	
	writer.String("Active"); writer.Bool(Active);
	
	if(!ActiveRegions.empty()) {
	writer.String("ActiveRegions");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = ActiveRegions.begin(); iter != ActiveRegions.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	if(Comment.length() > 0) { writer.String("Comment"); writer.String(Comment.c_str()); }
	
	if(Timestamp.notNull()) { writer.String("Timestamp"); writeDatetime(Timestamp, writer); }
	
	if(TitleId.length() > 0) { writer.String("TitleId"); writer.String(TitleId.c_str()); }
	
	
	writer.EndObject();
}

bool GetServerBuildInfoResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* BuildId_member = obj.FindMember("BuildId");
	if (BuildId_member != NULL) BuildId = BuildId_member->value.GetString();
	
	const Value::Member* Active_member = obj.FindMember("Active");
	if (Active_member != NULL) Active = Active_member->value.GetBool();
	
	const Value::Member* ActiveRegions_member = obj.FindMember("ActiveRegions");
	if (ActiveRegions_member != NULL) {
		const rapidjson::Value& memberList = ActiveRegions_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			ActiveRegions.push_back(memberList[i].GetString());
		}
	}
	
	const Value::Member* Comment_member = obj.FindMember("Comment");
	if (Comment_member != NULL) Comment = Comment_member->value.GetString();
	
	const Value::Member* Timestamp_member = obj.FindMember("Timestamp");
	if (Timestamp_member != NULL) Timestamp = readDatetime(Timestamp_member->value);
	
	const Value::Member* TitleId_member = obj.FindMember("TitleId");
	if (TitleId_member != NULL) TitleId = TitleId_member->value.GetString();
	
	
	return true;
}


GetTitleDataRequest::~GetTitleDataRequest()
{
	
}

void GetTitleDataRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("Keys");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = Keys.begin(); iter != Keys.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	
	
	
	writer.EndObject();
}

bool GetTitleDataRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Keys_member = obj.FindMember("Keys");
	if (Keys_member != NULL) {
		const rapidjson::Value& memberList = Keys_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Keys.push_back(memberList[i].GetString());
		}
	}
	
	
	return true;
}


GetTitleDataResult::~GetTitleDataResult()
{
	
}

void GetTitleDataResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!Data.empty()) {
	writer.String("Data");
	writer.StartObject();
	for (std::map<std::string, std::string>::iterator iter = Data.begin(); iter != Data.end(); ++iter) {
		writer.String(iter->first.c_str()); writer.String(iter->second.c_str());
	}
	writer.EndObject();
	}
	
	
	writer.EndObject();
}

bool GetTitleDataResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Data_member = obj.FindMember("Data");
	if (Data_member != NULL) {
		for (Value::ConstMemberIterator iter = Data_member->value.MemberBegin(); iter != Data_member->value.MemberEnd(); ++iter) {
			Data[iter->name.GetString()] = iter->value.GetString();
		}
	}
	
	
	return true;
}


GetUserInventoryRequest::~GetUserInventoryRequest()
{
	
}

void GetUserInventoryRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("PlayFabId"); writer.String(PlayFabId.c_str());
	
	if(CatalogVersion.length() > 0) { writer.String("CatalogVersion"); writer.String(CatalogVersion.c_str()); }
	
	
	writer.EndObject();
}

bool GetUserInventoryRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* PlayFabId_member = obj.FindMember("PlayFabId");
	if (PlayFabId_member != NULL) PlayFabId = PlayFabId_member->value.GetString();
	
	const Value::Member* CatalogVersion_member = obj.FindMember("CatalogVersion");
	if (CatalogVersion_member != NULL) CatalogVersion = CatalogVersion_member->value.GetString();
	
	
	return true;
}


ItemInstance::~ItemInstance()
{
	
}

void ItemInstance::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(ItemId.length() > 0) { writer.String("ItemId"); writer.String(ItemId.c_str()); }
	
	if(ItemInstanceId.length() > 0) { writer.String("ItemInstanceId"); writer.String(ItemInstanceId.c_str()); }
	
	if(ItemClass.length() > 0) { writer.String("ItemClass"); writer.String(ItemClass.c_str()); }
	
	if(PurchaseDate.length() > 0) { writer.String("PurchaseDate"); writer.String(PurchaseDate.c_str()); }
	
	if(Expiration.length() > 0) { writer.String("Expiration"); writer.String(Expiration.c_str()); }
	
	if(RemainingUses.notNull()) { writer.String("RemainingUses"); writer.Uint(RemainingUses); }
	
	if(Annotation.length() > 0) { writer.String("Annotation"); writer.String(Annotation.c_str()); }
	
	if(CatalogVersion.length() > 0) { writer.String("CatalogVersion"); writer.String(CatalogVersion.c_str()); }
	
	if(BundleParent.length() > 0) { writer.String("BundleParent"); writer.String(BundleParent.c_str()); }
	
	
	writer.EndObject();
}

bool ItemInstance::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* ItemId_member = obj.FindMember("ItemId");
	if (ItemId_member != NULL) ItemId = ItemId_member->value.GetString();
	
	const Value::Member* ItemInstanceId_member = obj.FindMember("ItemInstanceId");
	if (ItemInstanceId_member != NULL) ItemInstanceId = ItemInstanceId_member->value.GetString();
	
	const Value::Member* ItemClass_member = obj.FindMember("ItemClass");
	if (ItemClass_member != NULL) ItemClass = ItemClass_member->value.GetString();
	
	const Value::Member* PurchaseDate_member = obj.FindMember("PurchaseDate");
	if (PurchaseDate_member != NULL) PurchaseDate = PurchaseDate_member->value.GetString();
	
	const Value::Member* Expiration_member = obj.FindMember("Expiration");
	if (Expiration_member != NULL) Expiration = Expiration_member->value.GetString();
	
	const Value::Member* RemainingUses_member = obj.FindMember("RemainingUses");
	if (RemainingUses_member != NULL) RemainingUses = RemainingUses_member->value.GetUint();
	
	const Value::Member* Annotation_member = obj.FindMember("Annotation");
	if (Annotation_member != NULL) Annotation = Annotation_member->value.GetString();
	
	const Value::Member* CatalogVersion_member = obj.FindMember("CatalogVersion");
	if (CatalogVersion_member != NULL) CatalogVersion = CatalogVersion_member->value.GetString();
	
	const Value::Member* BundleParent_member = obj.FindMember("BundleParent");
	if (BundleParent_member != NULL) BundleParent = BundleParent_member->value.GetString();
	
	
	return true;
}


GetUserInventoryResult::~GetUserInventoryResult()
{
	
}

void GetUserInventoryResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!Inventory.empty()) {
	writer.String("Inventory");
	writer.StartArray();
	for (std::list<ItemInstance>::iterator iter = Inventory.begin(); iter != Inventory.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool GetUserInventoryResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Inventory_member = obj.FindMember("Inventory");
	if (Inventory_member != NULL) {
		const rapidjson::Value& memberList = Inventory_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Inventory.push_back(ItemInstance(memberList[i]));
		}
	}
	
	
	return true;
}


ListBuildsRequest::~ListBuildsRequest()
{
	
}

void ListBuildsRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool ListBuildsRequest::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


ListBuildsResult::~ListBuildsResult()
{
	
}

void ListBuildsResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!Builds.empty()) {
	writer.String("Builds");
	writer.StartArray();
	for (std::list<GetServerBuildInfoResult>::iterator iter = Builds.begin(); iter != Builds.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool ListBuildsResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Builds_member = obj.FindMember("Builds");
	if (Builds_member != NULL) {
		const rapidjson::Value& memberList = Builds_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Builds.push_back(GetServerBuildInfoResult(memberList[i]));
		}
	}
	
	
	return true;
}


LookupUserAccountInfoRequest::~LookupUserAccountInfoRequest()
{
	
}

void LookupUserAccountInfoRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(PlayFabId.length() > 0) { writer.String("PlayFabId"); writer.String(PlayFabId.c_str()); }
	
	if(Email.length() > 0) { writer.String("Email"); writer.String(Email.c_str()); }
	
	if(Username.length() > 0) { writer.String("Username"); writer.String(Username.c_str()); }
	
	if(TitleDisplayName.length() > 0) { writer.String("TitleDisplayName"); writer.String(TitleDisplayName.c_str()); }
	
	
	writer.EndObject();
}

bool LookupUserAccountInfoRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* PlayFabId_member = obj.FindMember("PlayFabId");
	if (PlayFabId_member != NULL) PlayFabId = PlayFabId_member->value.GetString();
	
	const Value::Member* Email_member = obj.FindMember("Email");
	if (Email_member != NULL) Email = Email_member->value.GetString();
	
	const Value::Member* Username_member = obj.FindMember("Username");
	if (Username_member != NULL) Username = Username_member->value.GetString();
	
	const Value::Member* TitleDisplayName_member = obj.FindMember("TitleDisplayName");
	if (TitleDisplayName_member != NULL) TitleDisplayName = TitleDisplayName_member->value.GetString();
	
	
	return true;
}


void PlayFab::AdminModels::writeUserOriginationEnumJSON(UserOrigination enumVal, PFStringJsonWriter& writer)
{
	switch(enumVal)
	{
		
		case UserOriginationOrganic: writer.String("Organic"); break;
		case UserOriginationSteam: writer.String("Steam"); break;
		case UserOriginationGoogle: writer.String("Google"); break;
		case UserOriginationAmazon: writer.String("Amazon"); break;
		case UserOriginationFacebook: writer.String("Facebook"); break;
		case UserOriginationKongregate: writer.String("Kongregate"); break;
		case UserOriginationGamersFirst: writer.String("GamersFirst"); break;
		case UserOriginationUnknown: writer.String("Unknown"); break;
		case UserOriginationIOS: writer.String("IOS"); break;
		case UserOriginationLoadTest: writer.String("LoadTest"); break;
	}
}

UserOrigination PlayFab::AdminModels::readUserOriginationFromValue(const rapidjson::Value& obj)
{
	std::string enumStr = obj.GetString();
	if(enumStr == "Organic")
		return UserOriginationOrganic;
	else if(enumStr == "Steam")
		return UserOriginationSteam;
	else if(enumStr == "Google")
		return UserOriginationGoogle;
	else if(enumStr == "Amazon")
		return UserOriginationAmazon;
	else if(enumStr == "Facebook")
		return UserOriginationFacebook;
	else if(enumStr == "Kongregate")
		return UserOriginationKongregate;
	else if(enumStr == "GamersFirst")
		return UserOriginationGamersFirst;
	else if(enumStr == "Unknown")
		return UserOriginationUnknown;
	else if(enumStr == "IOS")
		return UserOriginationIOS;
	else if(enumStr == "LoadTest")
		return UserOriginationLoadTest;
	
	return UserOriginationOrganic;
}


UserTitleInfo::~UserTitleInfo()
{
	
}

void UserTitleInfo::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(DisplayName.length() > 0) { writer.String("DisplayName"); writer.String(DisplayName.c_str()); }
	
	if(Origination.notNull()) { writer.String("Origination"); writeUserOriginationEnumJSON(Origination, writer); }
	
	if(Created.notNull()) { writer.String("Created"); writeDatetime(Created, writer); }
	
	if(LastLogin.notNull()) { writer.String("LastLogin"); writeDatetime(LastLogin, writer); }
	
	if(FirstLogin.notNull()) { writer.String("FirstLogin"); writeDatetime(FirstLogin, writer); }
	
	
	writer.EndObject();
}

bool UserTitleInfo::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* DisplayName_member = obj.FindMember("DisplayName");
	if (DisplayName_member != NULL) DisplayName = DisplayName_member->value.GetString();
	
	const Value::Member* Origination_member = obj.FindMember("Origination");
	if (Origination_member != NULL) Origination = readUserOriginationFromValue(Origination_member->value);
	
	const Value::Member* Created_member = obj.FindMember("Created");
	if (Created_member != NULL) Created = readDatetime(Created_member->value);
	
	const Value::Member* LastLogin_member = obj.FindMember("LastLogin");
	if (LastLogin_member != NULL) LastLogin = readDatetime(LastLogin_member->value);
	
	const Value::Member* FirstLogin_member = obj.FindMember("FirstLogin");
	if (FirstLogin_member != NULL) FirstLogin = readDatetime(FirstLogin_member->value);
	
	
	return true;
}


UserPrivateAccountInfo::~UserPrivateAccountInfo()
{
	
}

void UserPrivateAccountInfo::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(Email.length() > 0) { writer.String("Email"); writer.String(Email.c_str()); }
	
	
	writer.EndObject();
}

bool UserPrivateAccountInfo::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Email_member = obj.FindMember("Email");
	if (Email_member != NULL) Email = Email_member->value.GetString();
	
	
	return true;
}


UserFacebookInfo::~UserFacebookInfo()
{
	
}

void UserFacebookInfo::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(FacebookId.length() > 0) { writer.String("FacebookId"); writer.String(FacebookId.c_str()); }
	
	if(FacebookUsername.length() > 0) { writer.String("FacebookUsername"); writer.String(FacebookUsername.c_str()); }
	
	if(FacebookDisplayname.length() > 0) { writer.String("FacebookDisplayname"); writer.String(FacebookDisplayname.c_str()); }
	
	
	writer.EndObject();
}

bool UserFacebookInfo::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* FacebookId_member = obj.FindMember("FacebookId");
	if (FacebookId_member != NULL) FacebookId = FacebookId_member->value.GetString();
	
	const Value::Member* FacebookUsername_member = obj.FindMember("FacebookUsername");
	if (FacebookUsername_member != NULL) FacebookUsername = FacebookUsername_member->value.GetString();
	
	const Value::Member* FacebookDisplayname_member = obj.FindMember("FacebookDisplayname");
	if (FacebookDisplayname_member != NULL) FacebookDisplayname = FacebookDisplayname_member->value.GetString();
	
	
	return true;
}


void PlayFab::AdminModels::writeTitleActivationStatusEnumJSON(TitleActivationStatus enumVal, PFStringJsonWriter& writer)
{
	switch(enumVal)
	{
		
		case TitleActivationStatusNone: writer.String("None"); break;
		case TitleActivationStatusActivatedTitleKey: writer.String("ActivatedTitleKey"); break;
		case TitleActivationStatusPendingSteam: writer.String("PendingSteam"); break;
		case TitleActivationStatusActivatedSteam: writer.String("ActivatedSteam"); break;
	}
}

TitleActivationStatus PlayFab::AdminModels::readTitleActivationStatusFromValue(const rapidjson::Value& obj)
{
	std::string enumStr = obj.GetString();
	if(enumStr == "None")
		return TitleActivationStatusNone;
	else if(enumStr == "ActivatedTitleKey")
		return TitleActivationStatusActivatedTitleKey;
	else if(enumStr == "PendingSteam")
		return TitleActivationStatusPendingSteam;
	else if(enumStr == "ActivatedSteam")
		return TitleActivationStatusActivatedSteam;
	
	return TitleActivationStatusNone;
}


UserSteamInfo::~UserSteamInfo()
{
	
}

void UserSteamInfo::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(SteamId.length() > 0) { writer.String("SteamId"); writer.String(SteamId.c_str()); }
	
	if(SteamCountry.length() > 0) { writer.String("SteamCountry"); writer.String(SteamCountry.c_str()); }
	
	if(SteamCurrency.notNull()) { writer.String("SteamCurrency"); writeCurrencyEnumJSON(SteamCurrency, writer); }
	
	if(SteamActivationStatus.notNull()) { writer.String("SteamActivationStatus"); writeTitleActivationStatusEnumJSON(SteamActivationStatus, writer); }
	
	
	writer.EndObject();
}

bool UserSteamInfo::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* SteamId_member = obj.FindMember("SteamId");
	if (SteamId_member != NULL) SteamId = SteamId_member->value.GetString();
	
	const Value::Member* SteamCountry_member = obj.FindMember("SteamCountry");
	if (SteamCountry_member != NULL) SteamCountry = SteamCountry_member->value.GetString();
	
	const Value::Member* SteamCurrency_member = obj.FindMember("SteamCurrency");
	if (SteamCurrency_member != NULL) SteamCurrency = readCurrencyFromValue(SteamCurrency_member->value);
	
	const Value::Member* SteamActivationStatus_member = obj.FindMember("SteamActivationStatus");
	if (SteamActivationStatus_member != NULL) SteamActivationStatus = readTitleActivationStatusFromValue(SteamActivationStatus_member->value);
	
	
	return true;
}


UserGameCenterInfo::~UserGameCenterInfo()
{
	
}

void UserGameCenterInfo::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(GameCenterId.length() > 0) { writer.String("GameCenterId"); writer.String(GameCenterId.c_str()); }
	
	
	writer.EndObject();
}

bool UserGameCenterInfo::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* GameCenterId_member = obj.FindMember("GameCenterId");
	if (GameCenterId_member != NULL) GameCenterId = GameCenterId_member->value.GetString();
	
	
	return true;
}


UserAccountInfo::~UserAccountInfo()
{
	if(TitleInfo != NULL) delete TitleInfo;
	if(PrivateInfo != NULL) delete PrivateInfo;
	if(FacebookInfo != NULL) delete FacebookInfo;
	if(SteamInfo != NULL) delete SteamInfo;
	if(GameCenterInfo != NULL) delete GameCenterInfo;
	
}

void UserAccountInfo::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(PlayFabId.length() > 0) { writer.String("PlayFabId"); writer.String(PlayFabId.c_str()); }
	
	if(Created.notNull()) { writer.String("Created"); writeDatetime(Created, writer); }
	
	if(Username.length() > 0) { writer.String("Username"); writer.String(Username.c_str()); }
	
	if(TitleInfo != NULL) { writer.String("TitleInfo"); TitleInfo->writeJSON(writer); }
	
	if(PrivateInfo != NULL) { writer.String("PrivateInfo"); PrivateInfo->writeJSON(writer); }
	
	if(FacebookInfo != NULL) { writer.String("FacebookInfo"); FacebookInfo->writeJSON(writer); }
	
	if(SteamInfo != NULL) { writer.String("SteamInfo"); SteamInfo->writeJSON(writer); }
	
	if(GameCenterInfo != NULL) { writer.String("GameCenterInfo"); GameCenterInfo->writeJSON(writer); }
	
	
	writer.EndObject();
}

bool UserAccountInfo::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* PlayFabId_member = obj.FindMember("PlayFabId");
	if (PlayFabId_member != NULL) PlayFabId = PlayFabId_member->value.GetString();
	
	const Value::Member* Created_member = obj.FindMember("Created");
	if (Created_member != NULL) Created = readDatetime(Created_member->value);
	
	const Value::Member* Username_member = obj.FindMember("Username");
	if (Username_member != NULL) Username = Username_member->value.GetString();
	
	const Value::Member* TitleInfo_member = obj.FindMember("TitleInfo");
	if (TitleInfo_member != NULL) TitleInfo = new UserTitleInfo(TitleInfo_member->value);
	
	const Value::Member* PrivateInfo_member = obj.FindMember("PrivateInfo");
	if (PrivateInfo_member != NULL) PrivateInfo = new UserPrivateAccountInfo(PrivateInfo_member->value);
	
	const Value::Member* FacebookInfo_member = obj.FindMember("FacebookInfo");
	if (FacebookInfo_member != NULL) FacebookInfo = new UserFacebookInfo(FacebookInfo_member->value);
	
	const Value::Member* SteamInfo_member = obj.FindMember("SteamInfo");
	if (SteamInfo_member != NULL) SteamInfo = new UserSteamInfo(SteamInfo_member->value);
	
	const Value::Member* GameCenterInfo_member = obj.FindMember("GameCenterInfo");
	if (GameCenterInfo_member != NULL) GameCenterInfo = new UserGameCenterInfo(GameCenterInfo_member->value);
	
	
	return true;
}


LookupUserAccountInfoResult::~LookupUserAccountInfoResult()
{
	if(UserInfo != NULL) delete UserInfo;
	
}

void LookupUserAccountInfoResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(UserInfo != NULL) { writer.String("UserInfo"); UserInfo->writeJSON(writer); }
	
	
	writer.EndObject();
}

bool LookupUserAccountInfoResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* UserInfo_member = obj.FindMember("UserInfo");
	if (UserInfo_member != NULL) UserInfo = new UserAccountInfo(UserInfo_member->value);
	
	
	return true;
}


ModifyMatchmakerGameModesRequest::~ModifyMatchmakerGameModesRequest()
{
	
}

void ModifyMatchmakerGameModesRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("BuildVersion"); writer.String(BuildVersion.c_str());
	
	writer.String("GameModes");
	writer.StartArray();
	for (std::list<GameModeInfo>::iterator iter = GameModes.begin(); iter != GameModes.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	
	
	
	writer.EndObject();
}

bool ModifyMatchmakerGameModesRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* BuildVersion_member = obj.FindMember("BuildVersion");
	if (BuildVersion_member != NULL) BuildVersion = BuildVersion_member->value.GetString();
	
	const Value::Member* GameModes_member = obj.FindMember("GameModes");
	if (GameModes_member != NULL) {
		const rapidjson::Value& memberList = GameModes_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			GameModes.push_back(GameModeInfo(memberList[i]));
		}
	}
	
	
	return true;
}


ModifyMatchmakerGameModesResult::~ModifyMatchmakerGameModesResult()
{
	
}

void ModifyMatchmakerGameModesResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool ModifyMatchmakerGameModesResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


ModifyServerBuildRequest::~ModifyServerBuildRequest()
{
	
}

void ModifyServerBuildRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("BuildId"); writer.String(BuildId.c_str());
	
	if(Timestamp.notNull()) { writer.String("Timestamp"); writeDatetime(Timestamp, writer); }
	
	if(Active.notNull()) { writer.String("Active"); writer.Bool(Active); }
	
	if(!ActiveRegions.empty()) {
	writer.String("ActiveRegions");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = ActiveRegions.begin(); iter != ActiveRegions.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	if(Comment.length() > 0) { writer.String("Comment"); writer.String(Comment.c_str()); }
	
	
	writer.EndObject();
}

bool ModifyServerBuildRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* BuildId_member = obj.FindMember("BuildId");
	if (BuildId_member != NULL) BuildId = BuildId_member->value.GetString();
	
	const Value::Member* Timestamp_member = obj.FindMember("Timestamp");
	if (Timestamp_member != NULL) Timestamp = readDatetime(Timestamp_member->value);
	
	const Value::Member* Active_member = obj.FindMember("Active");
	if (Active_member != NULL) Active = Active_member->value.GetBool();
	
	const Value::Member* ActiveRegions_member = obj.FindMember("ActiveRegions");
	if (ActiveRegions_member != NULL) {
		const rapidjson::Value& memberList = ActiveRegions_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			ActiveRegions.push_back(memberList[i].GetString());
		}
	}
	
	const Value::Member* Comment_member = obj.FindMember("Comment");
	if (Comment_member != NULL) Comment = Comment_member->value.GetString();
	
	
	return true;
}


ModifyServerBuildResult::~ModifyServerBuildResult()
{
	
}

void ModifyServerBuildResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(BuildId.length() > 0) { writer.String("BuildId"); writer.String(BuildId.c_str()); }
	
	writer.String("Active"); writer.Bool(Active);
	
	if(!ActiveRegions.empty()) {
	writer.String("ActiveRegions");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = ActiveRegions.begin(); iter != ActiveRegions.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	if(Comment.length() > 0) { writer.String("Comment"); writer.String(Comment.c_str()); }
	
	if(Timestamp.notNull()) { writer.String("Timestamp"); writeDatetime(Timestamp, writer); }
	
	if(TitleId.length() > 0) { writer.String("TitleId"); writer.String(TitleId.c_str()); }
	
	
	writer.EndObject();
}

bool ModifyServerBuildResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* BuildId_member = obj.FindMember("BuildId");
	if (BuildId_member != NULL) BuildId = BuildId_member->value.GetString();
	
	const Value::Member* Active_member = obj.FindMember("Active");
	if (Active_member != NULL) Active = Active_member->value.GetBool();
	
	const Value::Member* ActiveRegions_member = obj.FindMember("ActiveRegions");
	if (ActiveRegions_member != NULL) {
		const rapidjson::Value& memberList = ActiveRegions_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			ActiveRegions.push_back(memberList[i].GetString());
		}
	}
	
	const Value::Member* Comment_member = obj.FindMember("Comment");
	if (Comment_member != NULL) Comment = Comment_member->value.GetString();
	
	const Value::Member* Timestamp_member = obj.FindMember("Timestamp");
	if (Timestamp_member != NULL) Timestamp = readDatetime(Timestamp_member->value);
	
	const Value::Member* TitleId_member = obj.FindMember("TitleId");
	if (TitleId_member != NULL) TitleId = TitleId_member->value.GetString();
	
	
	return true;
}


RemoveServerBuildRequest::~RemoveServerBuildRequest()
{
	
}

void RemoveServerBuildRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("BuildId"); writer.String(BuildId.c_str());
	
	
	writer.EndObject();
}

bool RemoveServerBuildRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* BuildId_member = obj.FindMember("BuildId");
	if (BuildId_member != NULL) BuildId = BuildId_member->value.GetString();
	
	
	return true;
}


RemoveServerBuildResult::~RemoveServerBuildResult()
{
	
}

void RemoveServerBuildResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(BuildId.length() > 0) { writer.String("BuildId"); writer.String(BuildId.c_str()); }
	
	
	writer.EndObject();
}

bool RemoveServerBuildResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* BuildId_member = obj.FindMember("BuildId");
	if (BuildId_member != NULL) BuildId = BuildId_member->value.GetString();
	
	
	return true;
}


RevokeInventoryItemRequest::~RevokeInventoryItemRequest()
{
	
}

void RevokeInventoryItemRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("PlayFabId"); writer.String(PlayFabId.c_str());
	
	writer.String("ItemInstanceId"); writer.String(ItemInstanceId.c_str());
	
	
	writer.EndObject();
}

bool RevokeInventoryItemRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* PlayFabId_member = obj.FindMember("PlayFabId");
	if (PlayFabId_member != NULL) PlayFabId = PlayFabId_member->value.GetString();
	
	const Value::Member* ItemInstanceId_member = obj.FindMember("ItemInstanceId");
	if (ItemInstanceId_member != NULL) ItemInstanceId = ItemInstanceId_member->value.GetString();
	
	
	return true;
}


RevokeInventoryResult::~RevokeInventoryResult()
{
	
}

void RevokeInventoryResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool RevokeInventoryResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


SendAccountRecoveryEmailRequest::~SendAccountRecoveryEmailRequest()
{
	
}

void SendAccountRecoveryEmailRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("Email"); writer.String(Email.c_str());
	
	
	writer.EndObject();
}

bool SendAccountRecoveryEmailRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Email_member = obj.FindMember("Email");
	if (Email_member != NULL) Email = Email_member->value.GetString();
	
	
	return true;
}


SendAccountRecoveryEmailResult::~SendAccountRecoveryEmailResult()
{
	
}

void SendAccountRecoveryEmailResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool SendAccountRecoveryEmailResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


SetTitleDataRequest::~SetTitleDataRequest()
{
	
}

void SetTitleDataRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("Key"); writer.String(Key.c_str());
	
	writer.String("Value"); writer.String(Value.c_str());
	
	
	writer.EndObject();
}

bool SetTitleDataRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Key_member = obj.FindMember("Key");
	if (Key_member != NULL) Key = Key_member->value.GetString();
	
	const Value::Member* Value_member = obj.FindMember("Value");
	if (Value_member != NULL) Value = Value_member->value.GetString();
	
	
	return true;
}


SetTitleDataResult::~SetTitleDataResult()
{
	
}

void SetTitleDataResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(Key.length() > 0) { writer.String("Key"); writer.String(Key.c_str()); }
	
	if(Value.length() > 0) { writer.String("Value"); writer.String(Value.c_str()); }
	
	
	writer.EndObject();
}

bool SetTitleDataResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Key_member = obj.FindMember("Key");
	if (Key_member != NULL) Key = Key_member->value.GetString();
	
	const Value::Member* Value_member = obj.FindMember("Value");
	if (Value_member != NULL) Value = Value_member->value.GetString();
	
	
	return true;
}


UpdateCatalogItemsRequest::~UpdateCatalogItemsRequest()
{
	
}

void UpdateCatalogItemsRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(CatalogVersion.length() > 0) { writer.String("CatalogVersion"); writer.String(CatalogVersion.c_str()); }
	
	writer.String("CatalogItems");
	writer.StartArray();
	for (std::list<CatalogItem>::iterator iter = CatalogItems.begin(); iter != CatalogItems.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	
	
	
	writer.EndObject();
}

bool UpdateCatalogItemsRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* CatalogVersion_member = obj.FindMember("CatalogVersion");
	if (CatalogVersion_member != NULL) CatalogVersion = CatalogVersion_member->value.GetString();
	
	const Value::Member* CatalogItems_member = obj.FindMember("CatalogItems");
	if (CatalogItems_member != NULL) {
		const rapidjson::Value& memberList = CatalogItems_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			CatalogItems.push_back(CatalogItem(memberList[i]));
		}
	}
	
	
	return true;
}


UpdateCatalogItemsResult::~UpdateCatalogItemsResult()
{
	
}

void UpdateCatalogItemsResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool UpdateCatalogItemsResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


UpdateRandomResultTablesRequest::~UpdateRandomResultTablesRequest()
{
	
}

void UpdateRandomResultTablesRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!Tables.empty()) {
	writer.String("Tables");
	writer.StartArray();
	for (std::list<RandomResultTable>::iterator iter = Tables.begin(); iter != Tables.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	 }
	
	writer.String("TitleId"); writer.String(TitleId.c_str());
	
	
	writer.EndObject();
}

bool UpdateRandomResultTablesRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Tables_member = obj.FindMember("Tables");
	if (Tables_member != NULL) {
		const rapidjson::Value& memberList = Tables_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Tables.push_back(RandomResultTable(memberList[i]));
		}
	}
	
	const Value::Member* TitleId_member = obj.FindMember("TitleId");
	if (TitleId_member != NULL) TitleId = TitleId_member->value.GetString();
	
	
	return true;
}


UpdateRandomResultTablesResult::~UpdateRandomResultTablesResult()
{
	
}

void UpdateRandomResultTablesResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool UpdateRandomResultTablesResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


UpdateUserTitleDisplayNameRequest::~UpdateUserTitleDisplayNameRequest()
{
	
}

void UpdateUserTitleDisplayNameRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("PlayFabId"); writer.String(PlayFabId.c_str());
	
	writer.String("DisplayName"); writer.String(DisplayName.c_str());
	
	
	writer.EndObject();
}

bool UpdateUserTitleDisplayNameRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* PlayFabId_member = obj.FindMember("PlayFabId");
	if (PlayFabId_member != NULL) PlayFabId = PlayFabId_member->value.GetString();
	
	const Value::Member* DisplayName_member = obj.FindMember("DisplayName");
	if (DisplayName_member != NULL) DisplayName = DisplayName_member->value.GetString();
	
	
	return true;
}


UpdateUserTitleDisplayNameResult::~UpdateUserTitleDisplayNameResult()
{
	
}

void UpdateUserTitleDisplayNameResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(DisplayName.length() > 0) { writer.String("DisplayName"); writer.String(DisplayName.c_str()); }
	
	
	writer.EndObject();
}

bool UpdateUserTitleDisplayNameResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* DisplayName_member = obj.FindMember("DisplayName");
	if (DisplayName_member != NULL) DisplayName = DisplayName_member->value.GetString();
	
	
	return true;
}



