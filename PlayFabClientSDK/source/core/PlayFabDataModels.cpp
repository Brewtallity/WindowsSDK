
#include "playfab/PlayFabDataModels.h"

using namespace PlayFab;
using namespace rapidjson;



RemoveFriendRequest::~RemoveFriendRequest()
{
	
}

void RemoveFriendRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("FriendPlayFabId"); writer.String(FriendPlayFabId.c_str());
	
	
	writer.EndObject();
}

bool RemoveFriendRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* FriendPlayFabId_member = obj.FindMember("FriendPlayFabId");
	if (FriendPlayFabId_member != NULL) FriendPlayFabId = FriendPlayFabId_member->value.GetString();
	
	
	return true;
}


RemoveFriendResult::~RemoveFriendResult()
{
	
}

void RemoveFriendResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool RemoveFriendResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


SetFriendTagsRequest::~SetFriendTagsRequest()
{
	
}

void SetFriendTagsRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("FriendPlayFabId"); writer.String(FriendPlayFabId.c_str());
	
	writer.String("Tags");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = Tags.begin(); iter != Tags.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	
	
	
	writer.EndObject();
}

bool SetFriendTagsRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* FriendPlayFabId_member = obj.FindMember("FriendPlayFabId");
	if (FriendPlayFabId_member != NULL) FriendPlayFabId = FriendPlayFabId_member->value.GetString();
	
	const Value::Member* Tags_member = obj.FindMember("Tags");
	if (Tags_member != NULL) {
		const rapidjson::Value& memberList = Tags_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Tags.push_back(memberList[i].GetString());
		}
	}
	
	
	return true;
}


SetFriendTagsResult::~SetFriendTagsResult()
{
	
}

void SetFriendTagsResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool SetFriendTagsResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


GetFriendsListRequest::~GetFriendsListRequest()
{
	
}

void GetFriendsListRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(IncludeSteamFriends.notNull()) { writer.String("IncludeSteamFriends"); writer.Bool(IncludeSteamFriends); }
	
	
	writer.EndObject();
}

bool GetFriendsListRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* IncludeSteamFriends_member = obj.FindMember("IncludeSteamFriends");
	if (IncludeSteamFriends_member != NULL) IncludeSteamFriends = IncludeSteamFriends_member->value.GetBool();
	
	
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


void PlayFab::writeCurrencyEnumJSON(Currency enumVal, PFStringJsonWriter& writer)
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

Currency PlayFab::readCurrencyFromValue(const rapidjson::Value& obj)
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


void PlayFab::writeTitleActivationStatusEnumJSON(TitleActivationStatus enumVal, PFStringJsonWriter& writer)
{
	switch(enumVal)
	{
		
		case TitleActivationStatusNone: writer.String("None"); break;
		case TitleActivationStatusActivatedTitleKey: writer.String("ActivatedTitleKey"); break;
		case TitleActivationStatusPendingSteam: writer.String("PendingSteam"); break;
		case TitleActivationStatusActivatedSteam: writer.String("ActivatedSteam"); break;
	}
}

TitleActivationStatus PlayFab::readTitleActivationStatusFromValue(const rapidjson::Value& obj)
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


FriendInfo::~FriendInfo()
{
	if(FacebookInfo != NULL) delete FacebookInfo;
	if(SteamInfo != NULL) delete SteamInfo;
	if(GameCenterInfo != NULL) delete GameCenterInfo;
	
}

void FriendInfo::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(FriendPlayFabId.length() > 0) { writer.String("FriendPlayFabId"); writer.String(FriendPlayFabId.c_str()); }
	
	if(Username.length() > 0) { writer.String("Username"); writer.String(Username.c_str()); }
	
	if(TitleDisplayName.length() > 0) { writer.String("TitleDisplayName"); writer.String(TitleDisplayName.c_str()); }
	
	if(!Tags.empty()) {
	writer.String("Tags");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = Tags.begin(); iter != Tags.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	if(CurrentMatchmakerLobbyId.length() > 0) { writer.String("CurrentMatchmakerLobbyId"); writer.String(CurrentMatchmakerLobbyId.c_str()); }
	
	if(FacebookInfo != NULL) { writer.String("FacebookInfo"); FacebookInfo->writeJSON(writer); }
	
	if(SteamInfo != NULL) { writer.String("SteamInfo"); SteamInfo->writeJSON(writer); }
	
	if(GameCenterInfo != NULL) { writer.String("GameCenterInfo"); GameCenterInfo->writeJSON(writer); }
	
	
	writer.EndObject();
}

bool FriendInfo::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* FriendPlayFabId_member = obj.FindMember("FriendPlayFabId");
	if (FriendPlayFabId_member != NULL) FriendPlayFabId = FriendPlayFabId_member->value.GetString();
	
	const Value::Member* Username_member = obj.FindMember("Username");
	if (Username_member != NULL) Username = Username_member->value.GetString();
	
	const Value::Member* TitleDisplayName_member = obj.FindMember("TitleDisplayName");
	if (TitleDisplayName_member != NULL) TitleDisplayName = TitleDisplayName_member->value.GetString();
	
	const Value::Member* Tags_member = obj.FindMember("Tags");
	if (Tags_member != NULL) {
		const rapidjson::Value& memberList = Tags_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Tags.push_back(memberList[i].GetString());
		}
	}
	
	const Value::Member* CurrentMatchmakerLobbyId_member = obj.FindMember("CurrentMatchmakerLobbyId");
	if (CurrentMatchmakerLobbyId_member != NULL) CurrentMatchmakerLobbyId = CurrentMatchmakerLobbyId_member->value.GetString();
	
	const Value::Member* FacebookInfo_member = obj.FindMember("FacebookInfo");
	if (FacebookInfo_member != NULL) FacebookInfo = new UserFacebookInfo(FacebookInfo_member->value);
	
	const Value::Member* SteamInfo_member = obj.FindMember("SteamInfo");
	if (SteamInfo_member != NULL) SteamInfo = new UserSteamInfo(SteamInfo_member->value);
	
	const Value::Member* GameCenterInfo_member = obj.FindMember("GameCenterInfo");
	if (GameCenterInfo_member != NULL) GameCenterInfo = new UserGameCenterInfo(GameCenterInfo_member->value);
	
	
	return true;
}


GetFriendsListResult::~GetFriendsListResult()
{
	
}

void GetFriendsListResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!Friends.empty()) {
	writer.String("Friends");
	writer.StartArray();
	for (std::list<FriendInfo>::iterator iter = Friends.begin(); iter != Friends.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool GetFriendsListResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Friends_member = obj.FindMember("Friends");
	if (Friends_member != NULL) {
		const rapidjson::Value& memberList = Friends_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Friends.push_back(FriendInfo(memberList[i]));
		}
	}
	
	
	return true;
}


UpdateEmailAddressRequest::~UpdateEmailAddressRequest()
{
	
}

void UpdateEmailAddressRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("Email"); writer.String(Email.c_str());
	
	
	writer.EndObject();
}

bool UpdateEmailAddressRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Email_member = obj.FindMember("Email");
	if (Email_member != NULL) Email = Email_member->value.GetString();
	
	
	return true;
}


UpdateEmailAddressResult::~UpdateEmailAddressResult()
{
	
}

void UpdateEmailAddressResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool UpdateEmailAddressResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


UpdatePasswordRequest::~UpdatePasswordRequest()
{
	
}

void UpdatePasswordRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("Password"); writer.String(Password.c_str());
	
	
	writer.EndObject();
}

bool UpdatePasswordRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Password_member = obj.FindMember("Password");
	if (Password_member != NULL) Password = Password_member->value.GetString();
	
	
	return true;
}


UpdatePasswordResult::~UpdatePasswordResult()
{
	
}

void UpdatePasswordResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool UpdatePasswordResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


Object::~Object()
{
	
}

void Object::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool Object::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


LogEventRequest::~LogEventRequest()
{
	
}

void LogEventRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("eventName"); writer.String(eventName.c_str());
	
	if(!Body.empty()) {
	writer.String("Body");
	writer.StartObject();
	for (std::map<std::string, Object>::iterator iter = Body.begin(); iter != Body.end(); ++iter) {
		writer.String(iter->first.c_str()); iter->second.writeJSON(writer);
	}
	writer.EndObject();
	}
	
	
	writer.EndObject();
}

bool LogEventRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* eventName_member = obj.FindMember("eventName");
	if (eventName_member != NULL) eventName = eventName_member->value.GetString();
	
	const Value::Member* Body_member = obj.FindMember("Body");
	if (Body_member != NULL) {
		for (Value::ConstMemberIterator iter = Body_member->value.MemberBegin(); iter != Body_member->value.MemberEnd(); ++iter) {
			Body[iter->name.GetString()] = Object(iter->value);
		}
	}
	
	
	return true;
}


LogEventResult::~LogEventResult()
{
	
}

void LogEventResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!errors.empty()) {
	writer.String("errors");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = errors.begin(); iter != errors.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool LogEventResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* errors_member = obj.FindMember("errors");
	if (errors_member != NULL) {
		const rapidjson::Value& memberList = errors_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			errors.push_back(memberList[i].GetString());
		}
	}
	
	
	return true;
}


LoginWithPlayFabRequest::~LoginWithPlayFabRequest()
{
	
}

void LoginWithPlayFabRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("TitleId"); writer.String(TitleId.c_str());
	
	writer.String("Username"); writer.String(Username.c_str());
	
	writer.String("Password"); writer.String(Password.c_str());
	
	
	writer.EndObject();
}

bool LoginWithPlayFabRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* TitleId_member = obj.FindMember("TitleId");
	if (TitleId_member != NULL) TitleId = TitleId_member->value.GetString();
	
	const Value::Member* Username_member = obj.FindMember("Username");
	if (Username_member != NULL) Username = Username_member->value.GetString();
	
	const Value::Member* Password_member = obj.FindMember("Password");
	if (Password_member != NULL) Password = Password_member->value.GetString();
	
	
	return true;
}


LoginResult::~LoginResult()
{
	
}

void LoginResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(SessionTicket.length() > 0) { writer.String("SessionTicket"); writer.String(SessionTicket.c_str()); }
	
	
	writer.EndObject();
}

bool LoginResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* SessionTicket_member = obj.FindMember("SessionTicket");
	if (SessionTicket_member != NULL) SessionTicket = SessionTicket_member->value.GetString();
	
	
	return true;
}


LoginWithFacebookRequest::~LoginWithFacebookRequest()
{
	
}

void LoginWithFacebookRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("AccessToken"); writer.String(AccessToken.c_str());
	
	writer.String("TitleId"); writer.String(TitleId.c_str());
	
	writer.String("CreateAccount"); writer.Bool(CreateAccount);
	
	
	writer.EndObject();
}

bool LoginWithFacebookRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* AccessToken_member = obj.FindMember("AccessToken");
	if (AccessToken_member != NULL) AccessToken = AccessToken_member->value.GetString();
	
	const Value::Member* TitleId_member = obj.FindMember("TitleId");
	if (TitleId_member != NULL) TitleId = TitleId_member->value.GetString();
	
	const Value::Member* CreateAccount_member = obj.FindMember("CreateAccount");
	if (CreateAccount_member != NULL) CreateAccount = CreateAccount_member->value.GetBool();
	
	
	return true;
}


LoginWithSteamRequest::~LoginWithSteamRequest()
{
	
}

void LoginWithSteamRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("TitleId"); writer.String(TitleId.c_str());
	
	writer.String("SteamTicket"); writer.String(SteamTicket.c_str());
	
	writer.String("CreateAccount"); writer.Bool(CreateAccount);
	
	
	writer.EndObject();
}

bool LoginWithSteamRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* TitleId_member = obj.FindMember("TitleId");
	if (TitleId_member != NULL) TitleId = TitleId_member->value.GetString();
	
	const Value::Member* SteamTicket_member = obj.FindMember("SteamTicket");
	if (SteamTicket_member != NULL) SteamTicket = SteamTicket_member->value.GetString();
	
	const Value::Member* CreateAccount_member = obj.FindMember("CreateAccount");
	if (CreateAccount_member != NULL) CreateAccount = CreateAccount_member->value.GetBool();
	
	
	return true;
}


LoginWithIOSDeviceIDRequest::~LoginWithIOSDeviceIDRequest()
{
	
}

void LoginWithIOSDeviceIDRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("DeviceId"); writer.String(DeviceId.c_str());
	
	writer.String("TitleId"); writer.String(TitleId.c_str());
	
	if(OS.length() > 0) { writer.String("OS"); writer.String(OS.c_str()); }
	
	if(DeviceModel.length() > 0) { writer.String("DeviceModel"); writer.String(DeviceModel.c_str()); }
	
	writer.String("CreateAccount"); writer.Bool(CreateAccount);
	
	
	writer.EndObject();
}

bool LoginWithIOSDeviceIDRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* DeviceId_member = obj.FindMember("DeviceId");
	if (DeviceId_member != NULL) DeviceId = DeviceId_member->value.GetString();
	
	const Value::Member* TitleId_member = obj.FindMember("TitleId");
	if (TitleId_member != NULL) TitleId = TitleId_member->value.GetString();
	
	const Value::Member* OS_member = obj.FindMember("OS");
	if (OS_member != NULL) OS = OS_member->value.GetString();
	
	const Value::Member* DeviceModel_member = obj.FindMember("DeviceModel");
	if (DeviceModel_member != NULL) DeviceModel = DeviceModel_member->value.GetString();
	
	const Value::Member* CreateAccount_member = obj.FindMember("CreateAccount");
	if (CreateAccount_member != NULL) CreateAccount = CreateAccount_member->value.GetBool();
	
	
	return true;
}


LoginWithAndroidDeviceIDRequest::~LoginWithAndroidDeviceIDRequest()
{
	
}

void LoginWithAndroidDeviceIDRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("AndroidDeviceId"); writer.String(AndroidDeviceId.c_str());
	
	writer.String("TitleId"); writer.String(TitleId.c_str());
	
	if(OS.length() > 0) { writer.String("OS"); writer.String(OS.c_str()); }
	
	if(AndroidDevice.length() > 0) { writer.String("AndroidDevice"); writer.String(AndroidDevice.c_str()); }
	
	writer.String("CreateAccount"); writer.Bool(CreateAccount);
	
	
	writer.EndObject();
}

bool LoginWithAndroidDeviceIDRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* AndroidDeviceId_member = obj.FindMember("AndroidDeviceId");
	if (AndroidDeviceId_member != NULL) AndroidDeviceId = AndroidDeviceId_member->value.GetString();
	
	const Value::Member* TitleId_member = obj.FindMember("TitleId");
	if (TitleId_member != NULL) TitleId = TitleId_member->value.GetString();
	
	const Value::Member* OS_member = obj.FindMember("OS");
	if (OS_member != NULL) OS = OS_member->value.GetString();
	
	const Value::Member* AndroidDevice_member = obj.FindMember("AndroidDevice");
	if (AndroidDevice_member != NULL) AndroidDevice = AndroidDevice_member->value.GetString();
	
	const Value::Member* CreateAccount_member = obj.FindMember("CreateAccount");
	if (CreateAccount_member != NULL) CreateAccount = CreateAccount_member->value.GetBool();
	
	
	return true;
}


RegisterPlayFabUserRequest::~RegisterPlayFabUserRequest()
{
	
}

void RegisterPlayFabUserRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("TitleId"); writer.String(TitleId.c_str());
	
	writer.String("Username"); writer.String(Username.c_str());
	
	writer.String("Email"); writer.String(Email.c_str());
	
	writer.String("Password"); writer.String(Password.c_str());
	
	if(Origination.length() > 0) { writer.String("Origination"); writer.String(Origination.c_str()); }
	
	
	writer.EndObject();
}

bool RegisterPlayFabUserRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* TitleId_member = obj.FindMember("TitleId");
	if (TitleId_member != NULL) TitleId = TitleId_member->value.GetString();
	
	const Value::Member* Username_member = obj.FindMember("Username");
	if (Username_member != NULL) Username = Username_member->value.GetString();
	
	const Value::Member* Email_member = obj.FindMember("Email");
	if (Email_member != NULL) Email = Email_member->value.GetString();
	
	const Value::Member* Password_member = obj.FindMember("Password");
	if (Password_member != NULL) Password = Password_member->value.GetString();
	
	const Value::Member* Origination_member = obj.FindMember("Origination");
	if (Origination_member != NULL) Origination = Origination_member->value.GetString();
	
	
	return true;
}


RegisterPlayFabUserResult::~RegisterPlayFabUserResult()
{
	
}

void RegisterPlayFabUserResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(PlayFabId.length() > 0) { writer.String("PlayFabId"); writer.String(PlayFabId.c_str()); }
	
	if(SessionTicket.length() > 0) { writer.String("SessionTicket"); writer.String(SessionTicket.c_str()); }
	
	if(Username.length() > 0) { writer.String("Username"); writer.String(Username.c_str()); }
	
	if(DisplayName.length() > 0) { writer.String("DisplayName"); writer.String(DisplayName.c_str()); }
	
	
	writer.EndObject();
}

bool RegisterPlayFabUserResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* PlayFabId_member = obj.FindMember("PlayFabId");
	if (PlayFabId_member != NULL) PlayFabId = PlayFabId_member->value.GetString();
	
	const Value::Member* SessionTicket_member = obj.FindMember("SessionTicket");
	if (SessionTicket_member != NULL) SessionTicket = SessionTicket_member->value.GetString();
	
	const Value::Member* Username_member = obj.FindMember("Username");
	if (Username_member != NULL) Username = Username_member->value.GetString();
	
	const Value::Member* DisplayName_member = obj.FindMember("DisplayName");
	if (DisplayName_member != NULL) DisplayName = DisplayName_member->value.GetString();
	
	
	return true;
}


LinkSteamAccountRequest::~LinkSteamAccountRequest()
{
	
}

void LinkSteamAccountRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("SteamTicket"); writer.String(SteamTicket.c_str());
	
	
	writer.EndObject();
}

bool LinkSteamAccountRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* SteamTicket_member = obj.FindMember("SteamTicket");
	if (SteamTicket_member != NULL) SteamTicket = SteamTicket_member->value.GetString();
	
	
	return true;
}


LinkSteamAccountResult::~LinkSteamAccountResult()
{
	
}

void LinkSteamAccountResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool LinkSteamAccountResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


UnlinkSteamAccountResult::~UnlinkSteamAccountResult()
{
	
}

void UnlinkSteamAccountResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool UnlinkSteamAccountResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


LinkFacebookAccountRequest::~LinkFacebookAccountRequest()
{
	
}

void LinkFacebookAccountRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("AccessToken"); writer.String(AccessToken.c_str());
	
	
	writer.EndObject();
}

bool LinkFacebookAccountRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* AccessToken_member = obj.FindMember("AccessToken");
	if (AccessToken_member != NULL) AccessToken = AccessToken_member->value.GetString();
	
	
	return true;
}


LinkFacebookAccountResult::~LinkFacebookAccountResult()
{
	
}

void LinkFacebookAccountResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool LinkFacebookAccountResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


UnlinkFacebookAccountRequest::~UnlinkFacebookAccountRequest()
{
	
}

void UnlinkFacebookAccountRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool UnlinkFacebookAccountRequest::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


UnlinkFacebookAccountResult::~UnlinkFacebookAccountResult()
{
	
}

void UnlinkFacebookAccountResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool UnlinkFacebookAccountResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


LinkGameCenterAccountRequest::~LinkGameCenterAccountRequest()
{
	
}

void LinkGameCenterAccountRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("GameCenterId"); writer.String(GameCenterId.c_str());
	
	
	writer.EndObject();
}

bool LinkGameCenterAccountRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* GameCenterId_member = obj.FindMember("GameCenterId");
	if (GameCenterId_member != NULL) GameCenterId = GameCenterId_member->value.GetString();
	
	
	return true;
}


LinkGameCenterAccountResult::~LinkGameCenterAccountResult()
{
	
}

void LinkGameCenterAccountResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool LinkGameCenterAccountResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


UnlinkGameCenterAccountRequest::~UnlinkGameCenterAccountRequest()
{
	
}

void UnlinkGameCenterAccountRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool UnlinkGameCenterAccountRequest::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


UnlinkGameCenterAccountResult::~UnlinkGameCenterAccountResult()
{
	
}

void UnlinkGameCenterAccountResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool UnlinkGameCenterAccountResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


GetAccountInfoRequest::~GetAccountInfoRequest()
{
	
}

void GetAccountInfoRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool GetAccountInfoRequest::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


void PlayFab::writeUserOriginationEnumJSON(UserOrigination enumVal, PFStringJsonWriter& writer)
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

UserOrigination PlayFab::readUserOriginationFromValue(const rapidjson::Value& obj)
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


GetAccountInfoResult::~GetAccountInfoResult()
{
	if(AccountInfo != NULL) delete AccountInfo;
	
}

void GetAccountInfoResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(AccountInfo != NULL) { writer.String("AccountInfo"); AccountInfo->writeJSON(writer); }
	
	
	writer.EndObject();
}

bool GetAccountInfoResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* AccountInfo_member = obj.FindMember("AccountInfo");
	if (AccountInfo_member != NULL) AccountInfo = new UserAccountInfo(AccountInfo_member->value);
	
	
	return true;
}


GetUserInventoryRequest::~GetUserInventoryRequest()
{
	
}

void GetUserInventoryRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool GetUserInventoryRequest::readFromValue(const rapidjson::Value& obj)
{
	
	
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
	
	if(!VirtualCurrency.empty()) {
	writer.String("VirtualCurrency");
	writer.StartObject();
	for (std::map<std::string, Int32>::iterator iter = VirtualCurrency.begin(); iter != VirtualCurrency.end(); ++iter) {
		writer.String(iter->first.c_str()); writer.Int(iter->second);
	}
	writer.EndObject();
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
	
	const Value::Member* VirtualCurrency_member = obj.FindMember("VirtualCurrency");
	if (VirtualCurrency_member != NULL) {
		for (Value::ConstMemberIterator iter = VirtualCurrency_member->value.MemberBegin(); iter != VirtualCurrency_member->value.MemberEnd(); ++iter) {
			VirtualCurrency[iter->name.GetString()] = iter->value.GetInt();
		}
	}
	
	
	return true;
}


GetCatalogItemsRequest::~GetCatalogItemsRequest()
{
	
}

void GetCatalogItemsRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("CatalogVersion"); writer.String(CatalogVersion.c_str());
	
	
	writer.EndObject();
}

bool GetCatalogItemsRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* CatalogVersion_member = obj.FindMember("CatalogVersion");
	if (CatalogVersion_member != NULL) CatalogVersion = CatalogVersion_member->value.GetString();
	
	
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


ItemPuchaseRequest::~ItemPuchaseRequest()
{
	
}

void ItemPuchaseRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("ItemId"); writer.String(ItemId.c_str());
	
	writer.String("Quantity"); writer.Uint(Quantity);
	
	if(Annotation.length() > 0) { writer.String("Annotation"); writer.String(Annotation.c_str()); }
	
	if(!UpgradeFromItems.empty()) {
	writer.String("UpgradeFromItems");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = UpgradeFromItems.begin(); iter != UpgradeFromItems.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool ItemPuchaseRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* ItemId_member = obj.FindMember("ItemId");
	if (ItemId_member != NULL) ItemId = ItemId_member->value.GetString();
	
	const Value::Member* Quantity_member = obj.FindMember("Quantity");
	if (Quantity_member != NULL) Quantity = Quantity_member->value.GetUint();
	
	const Value::Member* Annotation_member = obj.FindMember("Annotation");
	if (Annotation_member != NULL) Annotation = Annotation_member->value.GetString();
	
	const Value::Member* UpgradeFromItems_member = obj.FindMember("UpgradeFromItems");
	if (UpgradeFromItems_member != NULL) {
		const rapidjson::Value& memberList = UpgradeFromItems_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			UpgradeFromItems.push_back(memberList[i].GetString());
		}
	}
	
	
	return true;
}


StartPurchaseRequest::~StartPurchaseRequest()
{
	
}

void StartPurchaseRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(CatalogVersion.length() > 0) { writer.String("CatalogVersion"); writer.String(CatalogVersion.c_str()); }
	
	writer.String("Items");
	writer.StartArray();
	for (std::list<ItemPuchaseRequest>::iterator iter = Items.begin(); iter != Items.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	
	
	
	writer.EndObject();
}

bool StartPurchaseRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* CatalogVersion_member = obj.FindMember("CatalogVersion");
	if (CatalogVersion_member != NULL) CatalogVersion = CatalogVersion_member->value.GetString();
	
	const Value::Member* Items_member = obj.FindMember("Items");
	if (Items_member != NULL) {
		const rapidjson::Value& memberList = Items_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Items.push_back(ItemPuchaseRequest(memberList[i]));
		}
	}
	
	
	return true;
}


CartItem::~CartItem()
{
	
}

void CartItem::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(ItemId.length() > 0) { writer.String("ItemId"); writer.String(ItemId.c_str()); }
	
	if(ItemClass.length() > 0) { writer.String("ItemClass"); writer.String(ItemClass.c_str()); }
	
	if(ItemInstanceId.length() > 0) { writer.String("ItemInstanceId"); writer.String(ItemInstanceId.c_str()); }
	
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
	
	if(!VCAmount.empty()) {
	writer.String("VCAmount");
	writer.StartObject();
	for (std::map<std::string, Uint32>::iterator iter = VCAmount.begin(); iter != VCAmount.end(); ++iter) {
		writer.String(iter->first.c_str()); writer.Uint(iter->second);
	}
	writer.EndObject();
	}
	
	
	writer.EndObject();
}

bool CartItem::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* ItemId_member = obj.FindMember("ItemId");
	if (ItemId_member != NULL) ItemId = ItemId_member->value.GetString();
	
	const Value::Member* ItemClass_member = obj.FindMember("ItemClass");
	if (ItemClass_member != NULL) ItemClass = ItemClass_member->value.GetString();
	
	const Value::Member* ItemInstanceId_member = obj.FindMember("ItemInstanceId");
	if (ItemInstanceId_member != NULL) ItemInstanceId = ItemInstanceId_member->value.GetString();
	
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
	
	const Value::Member* VCAmount_member = obj.FindMember("VCAmount");
	if (VCAmount_member != NULL) {
		for (Value::ConstMemberIterator iter = VCAmount_member->value.MemberBegin(); iter != VCAmount_member->value.MemberEnd(); ++iter) {
			VCAmount[iter->name.GetString()] = iter->value.GetUint();
		}
	}
	
	
	return true;
}


PaymentOption::~PaymentOption()
{
	
}

void PaymentOption::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(Currency.length() > 0) { writer.String("Currency"); writer.String(Currency.c_str()); }
	
	if(ProviderName.length() > 0) { writer.String("ProviderName"); writer.String(ProviderName.c_str()); }
	
	writer.String("Price"); writer.Uint(Price);
	
	writer.String("StoreCredit"); writer.Uint(StoreCredit);
	
	
	writer.EndObject();
}

bool PaymentOption::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Currency_member = obj.FindMember("Currency");
	if (Currency_member != NULL) Currency = Currency_member->value.GetString();
	
	const Value::Member* ProviderName_member = obj.FindMember("ProviderName");
	if (ProviderName_member != NULL) ProviderName = ProviderName_member->value.GetString();
	
	const Value::Member* Price_member = obj.FindMember("Price");
	if (Price_member != NULL) Price = Price_member->value.GetUint();
	
	const Value::Member* StoreCredit_member = obj.FindMember("StoreCredit");
	if (StoreCredit_member != NULL) StoreCredit = StoreCredit_member->value.GetUint();
	
	
	return true;
}


StartPurchaseResult::~StartPurchaseResult()
{
	
}

void StartPurchaseResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(OrderId.length() > 0) { writer.String("OrderId"); writer.String(OrderId.c_str()); }
	
	if(!Contents.empty()) {
	writer.String("Contents");
	writer.StartArray();
	for (std::list<CartItem>::iterator iter = Contents.begin(); iter != Contents.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	 }
	
	if(!PaymentOptions.empty()) {
	writer.String("PaymentOptions");
	writer.StartArray();
	for (std::list<PaymentOption>::iterator iter = PaymentOptions.begin(); iter != PaymentOptions.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	 }
	
	if(!VirtualCurrencyBalances.empty()) {
	writer.String("VirtualCurrencyBalances");
	writer.StartObject();
	for (std::map<std::string, Int32>::iterator iter = VirtualCurrencyBalances.begin(); iter != VirtualCurrencyBalances.end(); ++iter) {
		writer.String(iter->first.c_str()); writer.Int(iter->second);
	}
	writer.EndObject();
	}
	
	
	writer.EndObject();
}

bool StartPurchaseResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* OrderId_member = obj.FindMember("OrderId");
	if (OrderId_member != NULL) OrderId = OrderId_member->value.GetString();
	
	const Value::Member* Contents_member = obj.FindMember("Contents");
	if (Contents_member != NULL) {
		const rapidjson::Value& memberList = Contents_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Contents.push_back(CartItem(memberList[i]));
		}
	}
	
	const Value::Member* PaymentOptions_member = obj.FindMember("PaymentOptions");
	if (PaymentOptions_member != NULL) {
		const rapidjson::Value& memberList = PaymentOptions_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			PaymentOptions.push_back(PaymentOption(memberList[i]));
		}
	}
	
	const Value::Member* VirtualCurrencyBalances_member = obj.FindMember("VirtualCurrencyBalances");
	if (VirtualCurrencyBalances_member != NULL) {
		for (Value::ConstMemberIterator iter = VirtualCurrencyBalances_member->value.MemberBegin(); iter != VirtualCurrencyBalances_member->value.MemberEnd(); ++iter) {
			VirtualCurrencyBalances[iter->name.GetString()] = iter->value.GetInt();
		}
	}
	
	
	return true;
}


PayForPurchaseRequest::~PayForPurchaseRequest()
{
	
}

void PayForPurchaseRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("OrderId"); writer.String(OrderId.c_str());
	
	writer.String("ProviderName"); writer.String(ProviderName.c_str());
	
	writer.String("Currency"); writer.String(Currency.c_str());
	
	
	writer.EndObject();
}

bool PayForPurchaseRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* OrderId_member = obj.FindMember("OrderId");
	if (OrderId_member != NULL) OrderId = OrderId_member->value.GetString();
	
	const Value::Member* ProviderName_member = obj.FindMember("ProviderName");
	if (ProviderName_member != NULL) ProviderName = ProviderName_member->value.GetString();
	
	const Value::Member* Currency_member = obj.FindMember("Currency");
	if (Currency_member != NULL) Currency = Currency_member->value.GetString();
	
	
	return true;
}


void PlayFab::writeTransactionStatusEnumJSON(TransactionStatus enumVal, PFStringJsonWriter& writer)
{
	switch(enumVal)
	{
		
		case TransactionStatusCreateCart: writer.String("CreateCart"); break;
		case TransactionStatusInit: writer.String("Init"); break;
		case TransactionStatusApproved: writer.String("Approved"); break;
		case TransactionStatusSucceeded: writer.String("Succeeded"); break;
		case TransactionStatusFailedByProvider: writer.String("FailedByProvider"); break;
		case TransactionStatusRefundPending: writer.String("RefundPending"); break;
		case TransactionStatusRefunded: writer.String("Refunded"); break;
		case TransactionStatusRefundFailed: writer.String("RefundFailed"); break;
		case TransactionStatusChargedBack: writer.String("ChargedBack"); break;
		case TransactionStatusFailedByUber: writer.String("FailedByUber"); break;
		case TransactionStatusRevoked: writer.String("Revoked"); break;
		case TransactionStatusTradePending: writer.String("TradePending"); break;
		case TransactionStatusUpgraded: writer.String("Upgraded"); break;
		case TransactionStatusOther: writer.String("Other"); break;
	}
}

TransactionStatus PlayFab::readTransactionStatusFromValue(const rapidjson::Value& obj)
{
	std::string enumStr = obj.GetString();
	if(enumStr == "CreateCart")
		return TransactionStatusCreateCart;
	else if(enumStr == "Init")
		return TransactionStatusInit;
	else if(enumStr == "Approved")
		return TransactionStatusApproved;
	else if(enumStr == "Succeeded")
		return TransactionStatusSucceeded;
	else if(enumStr == "FailedByProvider")
		return TransactionStatusFailedByProvider;
	else if(enumStr == "RefundPending")
		return TransactionStatusRefundPending;
	else if(enumStr == "Refunded")
		return TransactionStatusRefunded;
	else if(enumStr == "RefundFailed")
		return TransactionStatusRefundFailed;
	else if(enumStr == "ChargedBack")
		return TransactionStatusChargedBack;
	else if(enumStr == "FailedByUber")
		return TransactionStatusFailedByUber;
	else if(enumStr == "Revoked")
		return TransactionStatusRevoked;
	else if(enumStr == "TradePending")
		return TransactionStatusTradePending;
	else if(enumStr == "Upgraded")
		return TransactionStatusUpgraded;
	else if(enumStr == "Other")
		return TransactionStatusOther;
	
	return TransactionStatusCreateCart;
}


PurchaseData::~PurchaseData()
{
	
}

void PurchaseData::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(PlayFabId.length() > 0) { writer.String("PlayFabId"); writer.String(PlayFabId.c_str()); }
	
	if(OrderId.length() > 0) { writer.String("OrderId"); writer.String(OrderId.c_str()); }
	
	if(Status.notNull()) { writer.String("Status"); writeTransactionStatusEnumJSON(Status, writer); }
	
	if(!VCAmount.empty()) {
	writer.String("VCAmount");
	writer.StartObject();
	for (std::map<std::string, Int32>::iterator iter = VCAmount.begin(); iter != VCAmount.end(); ++iter) {
		writer.String(iter->first.c_str()); writer.Int(iter->second);
	}
	writer.EndObject();
	}
	
	if(PurchaseCurrency.length() > 0) { writer.String("PurchaseCurrency"); writer.String(PurchaseCurrency.c_str()); }
	
	writer.String("PurchasePrice"); writer.Uint(PurchasePrice);
	
	writer.String("CreditApplied"); writer.Uint(CreditApplied);
	
	if(ProviderData.length() > 0) { writer.String("ProviderData"); writer.String(ProviderData.c_str()); }
	
	
	writer.EndObject();
}

bool PurchaseData::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* PlayFabId_member = obj.FindMember("PlayFabId");
	if (PlayFabId_member != NULL) PlayFabId = PlayFabId_member->value.GetString();
	
	const Value::Member* OrderId_member = obj.FindMember("OrderId");
	if (OrderId_member != NULL) OrderId = OrderId_member->value.GetString();
	
	const Value::Member* Status_member = obj.FindMember("Status");
	if (Status_member != NULL) Status = readTransactionStatusFromValue(Status_member->value);
	
	const Value::Member* VCAmount_member = obj.FindMember("VCAmount");
	if (VCAmount_member != NULL) {
		for (Value::ConstMemberIterator iter = VCAmount_member->value.MemberBegin(); iter != VCAmount_member->value.MemberEnd(); ++iter) {
			VCAmount[iter->name.GetString()] = iter->value.GetInt();
		}
	}
	
	const Value::Member* PurchaseCurrency_member = obj.FindMember("PurchaseCurrency");
	if (PurchaseCurrency_member != NULL) PurchaseCurrency = PurchaseCurrency_member->value.GetString();
	
	const Value::Member* PurchasePrice_member = obj.FindMember("PurchasePrice");
	if (PurchasePrice_member != NULL) PurchasePrice = PurchasePrice_member->value.GetUint();
	
	const Value::Member* CreditApplied_member = obj.FindMember("CreditApplied");
	if (CreditApplied_member != NULL) CreditApplied = CreditApplied_member->value.GetUint();
	
	const Value::Member* ProviderData_member = obj.FindMember("ProviderData");
	if (ProviderData_member != NULL) ProviderData = ProviderData_member->value.GetString();
	
	
	return true;
}


PayForPurchaseResult::~PayForPurchaseResult()
{
	if(Purchase != NULL) delete Purchase;
	
}

void PayForPurchaseResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(Purchase != NULL) { writer.String("Purchase"); Purchase->writeJSON(writer); }
	
	if(PurchaseConfirmationPageURL.length() > 0) { writer.String("PurchaseConfirmationPageURL"); writer.String(PurchaseConfirmationPageURL.c_str()); }
	
	if(!VirtualCurrency.empty()) {
	writer.String("VirtualCurrency");
	writer.StartObject();
	for (std::map<std::string, Int32>::iterator iter = VirtualCurrency.begin(); iter != VirtualCurrency.end(); ++iter) {
		writer.String(iter->first.c_str()); writer.Int(iter->second);
	}
	writer.EndObject();
	}
	
	
	writer.EndObject();
}

bool PayForPurchaseResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Purchase_member = obj.FindMember("Purchase");
	if (Purchase_member != NULL) Purchase = new PurchaseData(Purchase_member->value);
	
	const Value::Member* PurchaseConfirmationPageURL_member = obj.FindMember("PurchaseConfirmationPageURL");
	if (PurchaseConfirmationPageURL_member != NULL) PurchaseConfirmationPageURL = PurchaseConfirmationPageURL_member->value.GetString();
	
	const Value::Member* VirtualCurrency_member = obj.FindMember("VirtualCurrency");
	if (VirtualCurrency_member != NULL) {
		for (Value::ConstMemberIterator iter = VirtualCurrency_member->value.MemberBegin(); iter != VirtualCurrency_member->value.MemberEnd(); ++iter) {
			VirtualCurrency[iter->name.GetString()] = iter->value.GetInt();
		}
	}
	
	
	return true;
}


ConfirmPurchaseRequest::~ConfirmPurchaseRequest()
{
	
}

void ConfirmPurchaseRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("OrderId"); writer.String(OrderId.c_str());
	
	
	writer.EndObject();
}

bool ConfirmPurchaseRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* OrderId_member = obj.FindMember("OrderId");
	if (OrderId_member != NULL) OrderId = OrderId_member->value.GetString();
	
	
	return true;
}


PurchasedItem::~PurchasedItem()
{
	
}

void PurchasedItem::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(ItemInstanceId.length() > 0) { writer.String("ItemInstanceId"); writer.String(ItemInstanceId.c_str()); }
	
	if(ItemId.length() > 0) { writer.String("ItemId"); writer.String(ItemId.c_str()); }
	
	if(CatalogVersion.length() > 0) { writer.String("CatalogVersion"); writer.String(CatalogVersion.c_str()); }
	
	if(DisplayName.length() > 0) { writer.String("DisplayName"); writer.String(DisplayName.c_str()); }
	
	if(UnitCurrency.length() > 0) { writer.String("UnitCurrency"); writer.String(UnitCurrency.c_str()); }
	
	writer.String("UnitPrice"); writer.Uint(UnitPrice);
	
	if(!BundleContents.empty()) {
	writer.String("BundleContents");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = BundleContents.begin(); iter != BundleContents.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool PurchasedItem::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* ItemInstanceId_member = obj.FindMember("ItemInstanceId");
	if (ItemInstanceId_member != NULL) ItemInstanceId = ItemInstanceId_member->value.GetString();
	
	const Value::Member* ItemId_member = obj.FindMember("ItemId");
	if (ItemId_member != NULL) ItemId = ItemId_member->value.GetString();
	
	const Value::Member* CatalogVersion_member = obj.FindMember("CatalogVersion");
	if (CatalogVersion_member != NULL) CatalogVersion = CatalogVersion_member->value.GetString();
	
	const Value::Member* DisplayName_member = obj.FindMember("DisplayName");
	if (DisplayName_member != NULL) DisplayName = DisplayName_member->value.GetString();
	
	const Value::Member* UnitCurrency_member = obj.FindMember("UnitCurrency");
	if (UnitCurrency_member != NULL) UnitCurrency = UnitCurrency_member->value.GetString();
	
	const Value::Member* UnitPrice_member = obj.FindMember("UnitPrice");
	if (UnitPrice_member != NULL) UnitPrice = UnitPrice_member->value.GetUint();
	
	const Value::Member* BundleContents_member = obj.FindMember("BundleContents");
	if (BundleContents_member != NULL) {
		const rapidjson::Value& memberList = BundleContents_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			BundleContents.push_back(memberList[i].GetString());
		}
	}
	
	
	return true;
}


ConfirmPurchaseResult::~ConfirmPurchaseResult()
{
	
}

void ConfirmPurchaseResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(OrderId.length() > 0) { writer.String("OrderId"); writer.String(OrderId.c_str()); }
	
	if(PurchaseDate.notNull()) { writer.String("PurchaseDate"); writeDatetime(PurchaseDate, writer); }
	
	if(!Items.empty()) {
	writer.String("Items");
	writer.StartArray();
	for (std::list<PurchasedItem>::iterator iter = Items.begin(); iter != Items.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool ConfirmPurchaseResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* OrderId_member = obj.FindMember("OrderId");
	if (OrderId_member != NULL) OrderId = OrderId_member->value.GetString();
	
	const Value::Member* PurchaseDate_member = obj.FindMember("PurchaseDate");
	if (PurchaseDate_member != NULL) PurchaseDate = readDatetime(PurchaseDate_member->value);
	
	const Value::Member* Items_member = obj.FindMember("Items");
	if (Items_member != NULL) {
		const rapidjson::Value& memberList = Items_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Items.push_back(PurchasedItem(memberList[i]));
		}
	}
	
	
	return true;
}


RedeemCouponRequest::~RedeemCouponRequest()
{
	
}

void RedeemCouponRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("CouponCode"); writer.String(CouponCode.c_str());
	
	if(CatalogVersion.length() > 0) { writer.String("CatalogVersion"); writer.String(CatalogVersion.c_str()); }
	
	
	writer.EndObject();
}

bool RedeemCouponRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* CouponCode_member = obj.FindMember("CouponCode");
	if (CouponCode_member != NULL) CouponCode = CouponCode_member->value.GetString();
	
	const Value::Member* CatalogVersion_member = obj.FindMember("CatalogVersion");
	if (CatalogVersion_member != NULL) CatalogVersion = CatalogVersion_member->value.GetString();
	
	
	return true;
}


RedeemCouponResult::~RedeemCouponResult()
{
	
}

void RedeemCouponResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!GrantedItems.empty()) {
	writer.String("GrantedItems");
	writer.StartArray();
	for (std::list<ItemInstance>::iterator iter = GrantedItems.begin(); iter != GrantedItems.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool RedeemCouponResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* GrantedItems_member = obj.FindMember("GrantedItems");
	if (GrantedItems_member != NULL) {
		const rapidjson::Value& memberList = GrantedItems_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			GrantedItems.push_back(ItemInstance(memberList[i]));
		}
	}
	
	
	return true;
}


UnlockContainerItemRequest::~UnlockContainerItemRequest()
{
	
}

void UnlockContainerItemRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("CrateItemId"); writer.String(CrateItemId.c_str());
	
	if(CatalogVersion.length() > 0) { writer.String("CatalogVersion"); writer.String(CatalogVersion.c_str()); }
	
	
	writer.EndObject();
}

bool UnlockContainerItemRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* CrateItemId_member = obj.FindMember("CrateItemId");
	if (CrateItemId_member != NULL) CrateItemId = CrateItemId_member->value.GetString();
	
	const Value::Member* CatalogVersion_member = obj.FindMember("CatalogVersion");
	if (CatalogVersion_member != NULL) CatalogVersion = CatalogVersion_member->value.GetString();
	
	
	return true;
}


UnlockContainerItemResult::~UnlockContainerItemResult()
{
	
}

void UnlockContainerItemResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(UnlockedItem.length() > 0) { writer.String("UnlockedItem"); writer.String(UnlockedItem.c_str()); }
	
	if(!GrantedItems.empty()) {
	writer.String("GrantedItems");
	writer.StartArray();
	for (std::list<ItemInstance>::iterator iter = GrantedItems.begin(); iter != GrantedItems.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool UnlockContainerItemResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* UnlockedItem_member = obj.FindMember("UnlockedItem");
	if (UnlockedItem_member != NULL) UnlockedItem = UnlockedItem_member->value.GetString();
	
	const Value::Member* GrantedItems_member = obj.FindMember("GrantedItems");
	if (GrantedItems_member != NULL) {
		const rapidjson::Value& memberList = GrantedItems_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			GrantedItems.push_back(ItemInstance(memberList[i]));
		}
	}
	
	
	return true;
}


SendAccountRecoveryEmailRequest::~SendAccountRecoveryEmailRequest()
{
	
}

void SendAccountRecoveryEmailRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("Email"); writer.String(Email.c_str());
	
	writer.String("TitleId"); writer.String(TitleId.c_str());
	
	
	writer.EndObject();
}

bool SendAccountRecoveryEmailRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Email_member = obj.FindMember("Email");
	if (Email_member != NULL) Email = Email_member->value.GetString();
	
	const Value::Member* TitleId_member = obj.FindMember("TitleId");
	if (TitleId_member != NULL) TitleId = TitleId_member->value.GetString();
	
	
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


GetTitleNewsRequest::~GetTitleNewsRequest()
{
	
}

void GetTitleNewsRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(Count.notNull()) { writer.String("Count"); writer.Uint(Count); }
	
	
	writer.EndObject();
}

bool GetTitleNewsRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Count_member = obj.FindMember("Count");
	if (Count_member != NULL) Count = Count_member->value.GetUint();
	
	
	return true;
}


TitleNewsItem::~TitleNewsItem()
{
	
}

void TitleNewsItem::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(Timestamp.notNull()) { writer.String("Timestamp"); writeDatetime(Timestamp, writer); }
	
	if(Title.length() > 0) { writer.String("Title"); writer.String(Title.c_str()); }
	
	if(Body.length() > 0) { writer.String("Body"); writer.String(Body.c_str()); }
	
	
	writer.EndObject();
}

bool TitleNewsItem::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Timestamp_member = obj.FindMember("Timestamp");
	if (Timestamp_member != NULL) Timestamp = readDatetime(Timestamp_member->value);
	
	const Value::Member* Title_member = obj.FindMember("Title");
	if (Title_member != NULL) Title = Title_member->value.GetString();
	
	const Value::Member* Body_member = obj.FindMember("Body");
	if (Body_member != NULL) Body = Body_member->value.GetString();
	
	
	return true;
}


GetTitleNewsResult::~GetTitleNewsResult()
{
	
}

void GetTitleNewsResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!News.empty()) {
	writer.String("News");
	writer.StartArray();
	for (std::list<TitleNewsItem>::iterator iter = News.begin(); iter != News.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool GetTitleNewsResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* News_member = obj.FindMember("News");
	if (News_member != NULL) {
		const rapidjson::Value& memberList = News_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			News.push_back(TitleNewsItem(memberList[i]));
		}
	}
	
	
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


GetUserDataRequest::~GetUserDataRequest()
{
	
}

void GetUserDataRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!Keys.empty()) {
	writer.String("Keys");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = Keys.begin(); iter != Keys.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool GetUserDataRequest::readFromValue(const rapidjson::Value& obj)
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


GetUserDataResult::~GetUserDataResult()
{
	
}

void GetUserDataResult::writeJSON(PFStringJsonWriter& writer)
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

bool GetUserDataResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Data_member = obj.FindMember("Data");
	if (Data_member != NULL) {
		for (Value::ConstMemberIterator iter = Data_member->value.MemberBegin(); iter != Data_member->value.MemberEnd(); ++iter) {
			Data[iter->name.GetString()] = iter->value.GetString();
		}
	}
	
	
	return true;
}


UpdateUserDataRequest::~UpdateUserDataRequest()
{
	
}

void UpdateUserDataRequest::writeJSON(PFStringJsonWriter& writer)
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

bool UpdateUserDataRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Data_member = obj.FindMember("Data");
	if (Data_member != NULL) {
		for (Value::ConstMemberIterator iter = Data_member->value.MemberBegin(); iter != Data_member->value.MemberEnd(); ++iter) {
			Data[iter->name.GetString()] = iter->value.GetString();
		}
	}
	
	
	return true;
}


UpdateUserDataResult::~UpdateUserDataResult()
{
	
}

void UpdateUserDataResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool UpdateUserDataResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


UpdateUserTitleDisplayNameRequest::~UpdateUserTitleDisplayNameRequest()
{
	
}

void UpdateUserTitleDisplayNameRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("DisplayName"); writer.String(DisplayName.c_str());
	
	
	writer.EndObject();
}

bool UpdateUserTitleDisplayNameRequest::readFromValue(const rapidjson::Value& obj)
{
	
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


RegisterForIOSPushNotificationRequest::~RegisterForIOSPushNotificationRequest()
{
	
}

void RegisterForIOSPushNotificationRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("DeviceToken"); writer.String(DeviceToken.c_str());
	
	
	writer.EndObject();
}

bool RegisterForIOSPushNotificationRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* DeviceToken_member = obj.FindMember("DeviceToken");
	if (DeviceToken_member != NULL) DeviceToken = DeviceToken_member->value.GetString();
	
	
	return true;
}


RegisterForIOSPushNotificationResult::~RegisterForIOSPushNotificationResult()
{
	
}

void RegisterForIOSPushNotificationResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool RegisterForIOSPushNotificationResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


AndroidDevicePushNotificationRegistrationRequest::~AndroidDevicePushNotificationRegistrationRequest()
{
	
}

void AndroidDevicePushNotificationRegistrationRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("DeviceToken"); writer.String(DeviceToken.c_str());
	
	
	writer.EndObject();
}

bool AndroidDevicePushNotificationRegistrationRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* DeviceToken_member = obj.FindMember("DeviceToken");
	if (DeviceToken_member != NULL) DeviceToken = DeviceToken_member->value.GetString();
	
	
	return true;
}


AndroidDevicePushNotificationRegistrationResult::~AndroidDevicePushNotificationRegistrationResult()
{
	
}

void AndroidDevicePushNotificationRegistrationResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool AndroidDevicePushNotificationRegistrationResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


ValidateIOSReceiptRequest::~ValidateIOSReceiptRequest()
{
	
}

void ValidateIOSReceiptRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("ReceiptData"); writer.String(ReceiptData.c_str());
	
	writer.String("CurrencyCode"); writer.String(CurrencyCode.c_str());
	
	writer.String("ObjectName"); writer.String(ObjectName.c_str());
	
	writer.String("PurchasePrice"); writer.Double(PurchasePrice);
	
	
	writer.EndObject();
}

bool ValidateIOSReceiptRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* ReceiptData_member = obj.FindMember("ReceiptData");
	if (ReceiptData_member != NULL) ReceiptData = ReceiptData_member->value.GetString();
	
	const Value::Member* CurrencyCode_member = obj.FindMember("CurrencyCode");
	if (CurrencyCode_member != NULL) CurrencyCode = CurrencyCode_member->value.GetString();
	
	const Value::Member* ObjectName_member = obj.FindMember("ObjectName");
	if (ObjectName_member != NULL) ObjectName = ObjectName_member->value.GetString();
	
	const Value::Member* PurchasePrice_member = obj.FindMember("PurchasePrice");
	if (PurchasePrice_member != NULL) PurchasePrice = PurchasePrice_member->value.GetDouble();
	
	
	return true;
}


ValidateIOSReceiptResult::~ValidateIOSReceiptResult()
{
	
}

void ValidateIOSReceiptResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	
	writer.EndObject();
}

bool ValidateIOSReceiptResult::readFromValue(const rapidjson::Value& obj)
{
	
	
	return true;
}


LoginWithGoogleAccountRequest::~LoginWithGoogleAccountRequest()
{
	
}

void LoginWithGoogleAccountRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("TitleId"); writer.String(TitleId.c_str());
	
	writer.String("AccessToken"); writer.String(AccessToken.c_str());
	
	
	writer.EndObject();
}

bool LoginWithGoogleAccountRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* TitleId_member = obj.FindMember("TitleId");
	if (TitleId_member != NULL) TitleId = TitleId_member->value.GetString();
	
	const Value::Member* AccessToken_member = obj.FindMember("AccessToken");
	if (AccessToken_member != NULL) AccessToken = AccessToken_member->value.GetString();
	
	
	return true;
}


ValidateGooglePlayPurchaseRequest::~ValidateGooglePlayPurchaseRequest()
{
	
}

void ValidateGooglePlayPurchaseRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("packageName"); writer.String(packageName.c_str());
	
	writer.String("productId"); writer.String(productId.c_str());
	
	writer.String("purchaseToken"); writer.String(purchaseToken.c_str());
	
	if(accessToken.length() > 0) { writer.String("accessToken"); writer.String(accessToken.c_str()); }
	
	
	writer.EndObject();
}

bool ValidateGooglePlayPurchaseRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* packageName_member = obj.FindMember("packageName");
	if (packageName_member != NULL) packageName = packageName_member->value.GetString();
	
	const Value::Member* productId_member = obj.FindMember("productId");
	if (productId_member != NULL) productId = productId_member->value.GetString();
	
	const Value::Member* purchaseToken_member = obj.FindMember("purchaseToken");
	if (purchaseToken_member != NULL) purchaseToken = purchaseToken_member->value.GetString();
	
	const Value::Member* accessToken_member = obj.FindMember("accessToken");
	if (accessToken_member != NULL) accessToken = accessToken_member->value.GetString();
	
	
	return true;
}


ValidateGooglePlayPurchaseResult::~ValidateGooglePlayPurchaseResult()
{
	
}

void ValidateGooglePlayPurchaseResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(kind.length() > 0) { writer.String("kind"); writer.String(kind.c_str()); }
	
	if(purchaseTime.notNull()) { writer.String("purchaseTime"); writeDatetime(purchaseTime, writer); }
	
	writer.String("puchaseState"); writer.Int(puchaseState);
	
	writer.String("consumptionState"); writer.Int(consumptionState);
	
	if(developerPayload.length() > 0) { writer.String("developerPayload"); writer.String(developerPayload.c_str()); }
	
	
	writer.EndObject();
}

bool ValidateGooglePlayPurchaseResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* kind_member = obj.FindMember("kind");
	if (kind_member != NULL) kind = kind_member->value.GetString();
	
	const Value::Member* purchaseTime_member = obj.FindMember("purchaseTime");
	if (purchaseTime_member != NULL) purchaseTime = readDatetime(purchaseTime_member->value);
	
	const Value::Member* puchaseState_member = obj.FindMember("puchaseState");
	if (puchaseState_member != NULL) puchaseState = puchaseState_member->value.GetInt();
	
	const Value::Member* consumptionState_member = obj.FindMember("consumptionState");
	if (consumptionState_member != NULL) consumptionState = consumptionState_member->value.GetInt();
	
	const Value::Member* developerPayload_member = obj.FindMember("developerPayload");
	if (developerPayload_member != NULL) developerPayload = developerPayload_member->value.GetString();
	
	
	return true;
}


AddFriendRequest::~AddFriendRequest()
{
	
}

void AddFriendRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(FriendPlayFabId.length() > 0) { writer.String("FriendPlayFabId"); writer.String(FriendPlayFabId.c_str()); }
	
	if(FriendUsername.length() > 0) { writer.String("FriendUsername"); writer.String(FriendUsername.c_str()); }
	
	if(FriendEmail.length() > 0) { writer.String("FriendEmail"); writer.String(FriendEmail.c_str()); }
	
	if(FriendTitleDisplayName.length() > 0) { writer.String("FriendTitleDisplayName"); writer.String(FriendTitleDisplayName.c_str()); }
	
	
	writer.EndObject();
}

bool AddFriendRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* FriendPlayFabId_member = obj.FindMember("FriendPlayFabId");
	if (FriendPlayFabId_member != NULL) FriendPlayFabId = FriendPlayFabId_member->value.GetString();
	
	const Value::Member* FriendUsername_member = obj.FindMember("FriendUsername");
	if (FriendUsername_member != NULL) FriendUsername = FriendUsername_member->value.GetString();
	
	const Value::Member* FriendEmail_member = obj.FindMember("FriendEmail");
	if (FriendEmail_member != NULL) FriendEmail = FriendEmail_member->value.GetString();
	
	const Value::Member* FriendTitleDisplayName_member = obj.FindMember("FriendTitleDisplayName");
	if (FriendTitleDisplayName_member != NULL) FriendTitleDisplayName = FriendTitleDisplayName_member->value.GetString();
	
	
	return true;
}


AddFriendResult::~AddFriendResult()
{
	
}

void AddFriendResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("Created"); writer.Bool(Created);
	
	
	writer.EndObject();
}

bool AddFriendResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Created_member = obj.FindMember("Created");
	if (Created_member != NULL) Created = Created_member->value.GetBool();
	
	
	return true;
}


void PlayFab::writeRegionEnumJSON(Region enumVal, PFStringJsonWriter& writer)
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

Region PlayFab::readRegionFromValue(const rapidjson::Value& obj)
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


StartGameRequest::~StartGameRequest()
{
	
}

void StartGameRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("BuildVersion"); writer.String(BuildVersion.c_str());
	
	writer.String("Region"); writeRegionEnumJSON(Region, writer);
	
	writer.String("GameMode"); writer.String(GameMode.c_str());
	
	writer.String("PasswordRestricted"); writer.Bool(PasswordRestricted);
	
	if(ReplayLobbyId.length() > 0) { writer.String("ReplayLobbyId"); writer.String(ReplayLobbyId.c_str()); }
	
	
	writer.EndObject();
}

bool StartGameRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* BuildVersion_member = obj.FindMember("BuildVersion");
	if (BuildVersion_member != NULL) BuildVersion = BuildVersion_member->value.GetString();
	
	const Value::Member* Region_member = obj.FindMember("Region");
	if (Region_member != NULL) Region = readRegionFromValue(Region_member->value);
	
	const Value::Member* GameMode_member = obj.FindMember("GameMode");
	if (GameMode_member != NULL) GameMode = GameMode_member->value.GetString();
	
	const Value::Member* PasswordRestricted_member = obj.FindMember("PasswordRestricted");
	if (PasswordRestricted_member != NULL) PasswordRestricted = PasswordRestricted_member->value.GetBool();
	
	const Value::Member* ReplayLobbyId_member = obj.FindMember("ReplayLobbyId");
	if (ReplayLobbyId_member != NULL) ReplayLobbyId = ReplayLobbyId_member->value.GetString();
	
	
	return true;
}


StartGameResult::~StartGameResult()
{
	
}

void StartGameResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(LobbyID.length() > 0) { writer.String("LobbyID"); writer.String(LobbyID.c_str()); }
	
	if(ServerHostname.length() > 0) { writer.String("ServerHostname"); writer.String(ServerHostname.c_str()); }
	
	if(ServerPort.notNull()) { writer.String("ServerPort"); writer.Uint(ServerPort); }
	
	if(Ticket.length() > 0) { writer.String("Ticket"); writer.String(Ticket.c_str()); }
	
	if(Expires.length() > 0) { writer.String("Expires"); writer.String(Expires.c_str()); }
	
	if(Password.length() > 0) { writer.String("Password"); writer.String(Password.c_str()); }
	
	
	writer.EndObject();
}

bool StartGameResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* LobbyID_member = obj.FindMember("LobbyID");
	if (LobbyID_member != NULL) LobbyID = LobbyID_member->value.GetString();
	
	const Value::Member* ServerHostname_member = obj.FindMember("ServerHostname");
	if (ServerHostname_member != NULL) ServerHostname = ServerHostname_member->value.GetString();
	
	const Value::Member* ServerPort_member = obj.FindMember("ServerPort");
	if (ServerPort_member != NULL) ServerPort = ServerPort_member->value.GetUint();
	
	const Value::Member* Ticket_member = obj.FindMember("Ticket");
	if (Ticket_member != NULL) Ticket = Ticket_member->value.GetString();
	
	const Value::Member* Expires_member = obj.FindMember("Expires");
	if (Expires_member != NULL) Expires = Expires_member->value.GetString();
	
	const Value::Member* Password_member = obj.FindMember("Password");
	if (Password_member != NULL) Password = Password_member->value.GetString();
	
	
	return true;
}


MatchmakeRequest::~MatchmakeRequest()
{
	
}

void MatchmakeRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(BuildVersion.length() > 0) { writer.String("BuildVersion"); writer.String(BuildVersion.c_str()); }
	
	if(Region.notNull()) { writer.String("Region"); writeRegionEnumJSON(Region, writer); }
	
	if(GameMode.length() > 0) { writer.String("GameMode"); writer.String(GameMode.c_str()); }
	
	if(LobbyId.length() > 0) { writer.String("LobbyId"); writer.String(LobbyId.c_str()); }
	
	if(EnableQueue.notNull()) { writer.String("EnableQueue"); writer.Bool(EnableQueue); }
	
	
	writer.EndObject();
}

bool MatchmakeRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* BuildVersion_member = obj.FindMember("BuildVersion");
	if (BuildVersion_member != NULL) BuildVersion = BuildVersion_member->value.GetString();
	
	const Value::Member* Region_member = obj.FindMember("Region");
	if (Region_member != NULL) Region = readRegionFromValue(Region_member->value);
	
	const Value::Member* GameMode_member = obj.FindMember("GameMode");
	if (GameMode_member != NULL) GameMode = GameMode_member->value.GetString();
	
	const Value::Member* LobbyId_member = obj.FindMember("LobbyId");
	if (LobbyId_member != NULL) LobbyId = LobbyId_member->value.GetString();
	
	const Value::Member* EnableQueue_member = obj.FindMember("EnableQueue");
	if (EnableQueue_member != NULL) EnableQueue = EnableQueue_member->value.GetBool();
	
	
	return true;
}


void PlayFab::writeMatchmakeStatusEnumJSON(MatchmakeStatus enumVal, PFStringJsonWriter& writer)
{
	switch(enumVal)
	{
		
		case MatchmakeStatusComplete: writer.String("Complete"); break;
		case MatchmakeStatusWaiting: writer.String("Waiting"); break;
	}
}

MatchmakeStatus PlayFab::readMatchmakeStatusFromValue(const rapidjson::Value& obj)
{
	std::string enumStr = obj.GetString();
	if(enumStr == "Complete")
		return MatchmakeStatusComplete;
	else if(enumStr == "Waiting")
		return MatchmakeStatusWaiting;
	
	return MatchmakeStatusComplete;
}


MatchmakeResult::~MatchmakeResult()
{
	
}

void MatchmakeResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(LobbyID.length() > 0) { writer.String("LobbyID"); writer.String(LobbyID.c_str()); }
	
	if(ServerHostname.length() > 0) { writer.String("ServerHostname"); writer.String(ServerHostname.c_str()); }
	
	if(ServerPort.notNull()) { writer.String("ServerPort"); writer.Uint(ServerPort); }
	
	if(WebSocketPort.notNull()) { writer.String("WebSocketPort"); writer.Uint(WebSocketPort); }
	
	if(Ticket.length() > 0) { writer.String("Ticket"); writer.String(Ticket.c_str()); }
	
	if(Expires.length() > 0) { writer.String("Expires"); writer.String(Expires.c_str()); }
	
	if(PollWaitTimeMS.notNull()) { writer.String("PollWaitTimeMS"); writer.Uint(PollWaitTimeMS); }
	
	if(Status.notNull()) { writer.String("Status"); writeMatchmakeStatusEnumJSON(Status, writer); }
	
	if(!Queue.empty()) {
	writer.String("Queue");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = Queue.begin(); iter != Queue.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool MatchmakeResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* LobbyID_member = obj.FindMember("LobbyID");
	if (LobbyID_member != NULL) LobbyID = LobbyID_member->value.GetString();
	
	const Value::Member* ServerHostname_member = obj.FindMember("ServerHostname");
	if (ServerHostname_member != NULL) ServerHostname = ServerHostname_member->value.GetString();
	
	const Value::Member* ServerPort_member = obj.FindMember("ServerPort");
	if (ServerPort_member != NULL) ServerPort = ServerPort_member->value.GetUint();
	
	const Value::Member* WebSocketPort_member = obj.FindMember("WebSocketPort");
	if (WebSocketPort_member != NULL) WebSocketPort = WebSocketPort_member->value.GetUint();
	
	const Value::Member* Ticket_member = obj.FindMember("Ticket");
	if (Ticket_member != NULL) Ticket = Ticket_member->value.GetString();
	
	const Value::Member* Expires_member = obj.FindMember("Expires");
	if (Expires_member != NULL) Expires = Expires_member->value.GetString();
	
	const Value::Member* PollWaitTimeMS_member = obj.FindMember("PollWaitTimeMS");
	if (PollWaitTimeMS_member != NULL) PollWaitTimeMS = PollWaitTimeMS_member->value.GetUint();
	
	const Value::Member* Status_member = obj.FindMember("Status");
	if (Status_member != NULL) Status = readMatchmakeStatusFromValue(Status_member->value);
	
	const Value::Member* Queue_member = obj.FindMember("Queue");
	if (Queue_member != NULL) {
		const rapidjson::Value& memberList = Queue_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Queue.push_back(memberList[i].GetString());
		}
	}
	
	
	return true;
}


CurrentGamesRequest::~CurrentGamesRequest()
{
	
}

void CurrentGamesRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(Region.notNull()) { writer.String("Region"); writeRegionEnumJSON(Region, writer); }
	
	if(BuildVersion.length() > 0) { writer.String("BuildVersion"); writer.String(BuildVersion.c_str()); }
	
	if(IncludeState.length() > 0) { writer.String("IncludeState"); writer.String(IncludeState.c_str()); }
	
	
	writer.EndObject();
}

bool CurrentGamesRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Region_member = obj.FindMember("Region");
	if (Region_member != NULL) Region = readRegionFromValue(Region_member->value);
	
	const Value::Member* BuildVersion_member = obj.FindMember("BuildVersion");
	if (BuildVersion_member != NULL) BuildVersion = BuildVersion_member->value.GetString();
	
	const Value::Member* IncludeState_member = obj.FindMember("IncludeState");
	if (IncludeState_member != NULL) IncludeState = IncludeState_member->value.GetString();
	
	
	return true;
}


GameInfo::~GameInfo()
{
	
}

void GameInfo::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(Region.notNull()) { writer.String("Region"); writeRegionEnumJSON(Region, writer); }
	
	if(LobbyID.length() > 0) { writer.String("LobbyID"); writer.String(LobbyID.c_str()); }
	
	if(BuildVersion.length() > 0) { writer.String("BuildVersion"); writer.String(BuildVersion.c_str()); }
	
	if(GameMode.length() > 0) { writer.String("GameMode"); writer.String(GameMode.c_str()); }
	
	if(Map.length() > 0) { writer.String("Map"); writer.String(Map.c_str()); }
	
	writer.String("MaxPlayers"); writer.Int(MaxPlayers);
	
	if(!PlayerUsernames.empty()) {
	writer.String("PlayerUsernames");
	writer.StartArray();
	for (std::list<std::string>::iterator iter = PlayerUsernames.begin(); iter != PlayerUsernames.end(); iter++) {
		writer.String(iter->c_str());
	}
	writer.EndArray();
	 }
	
	writer.String("RunTime"); writer.Uint(RunTime);
	
	if(GameServerState.length() > 0) { writer.String("GameServerState"); writer.String(GameServerState.c_str()); }
	
	if(TitleData.length() > 0) { writer.String("TitleData"); writer.String(TitleData.c_str()); }
	
	
	writer.EndObject();
}

bool GameInfo::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Region_member = obj.FindMember("Region");
	if (Region_member != NULL) Region = readRegionFromValue(Region_member->value);
	
	const Value::Member* LobbyID_member = obj.FindMember("LobbyID");
	if (LobbyID_member != NULL) LobbyID = LobbyID_member->value.GetString();
	
	const Value::Member* BuildVersion_member = obj.FindMember("BuildVersion");
	if (BuildVersion_member != NULL) BuildVersion = BuildVersion_member->value.GetString();
	
	const Value::Member* GameMode_member = obj.FindMember("GameMode");
	if (GameMode_member != NULL) GameMode = GameMode_member->value.GetString();
	
	const Value::Member* Map_member = obj.FindMember("Map");
	if (Map_member != NULL) Map = Map_member->value.GetString();
	
	const Value::Member* MaxPlayers_member = obj.FindMember("MaxPlayers");
	if (MaxPlayers_member != NULL) MaxPlayers = MaxPlayers_member->value.GetInt();
	
	const Value::Member* PlayerUsernames_member = obj.FindMember("PlayerUsernames");
	if (PlayerUsernames_member != NULL) {
		const rapidjson::Value& memberList = PlayerUsernames_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			PlayerUsernames.push_back(memberList[i].GetString());
		}
	}
	
	const Value::Member* RunTime_member = obj.FindMember("RunTime");
	if (RunTime_member != NULL) RunTime = RunTime_member->value.GetUint();
	
	const Value::Member* GameServerState_member = obj.FindMember("GameServerState");
	if (GameServerState_member != NULL) GameServerState = GameServerState_member->value.GetString();
	
	const Value::Member* TitleData_member = obj.FindMember("TitleData");
	if (TitleData_member != NULL) TitleData = TitleData_member->value.GetString();
	
	
	return true;
}


CurrentGamesResult::~CurrentGamesResult()
{
	
}

void CurrentGamesResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!Games.empty()) {
	writer.String("Games");
	writer.StartArray();
	for (std::list<GameInfo>::iterator iter = Games.begin(); iter != Games.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	 }
	
	writer.String("PlayerCount"); writer.Int(PlayerCount);
	
	writer.String("GameCount"); writer.Int(GameCount);
	
	if(IncompleteResult.notNull()) { writer.String("IncompleteResult"); writer.Bool(IncompleteResult); }
	
	
	writer.EndObject();
}

bool CurrentGamesResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Games_member = obj.FindMember("Games");
	if (Games_member != NULL) {
		const rapidjson::Value& memberList = Games_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Games.push_back(GameInfo(memberList[i]));
		}
	}
	
	const Value::Member* PlayerCount_member = obj.FindMember("PlayerCount");
	if (PlayerCount_member != NULL) PlayerCount = PlayerCount_member->value.GetInt();
	
	const Value::Member* GameCount_member = obj.FindMember("GameCount");
	if (GameCount_member != NULL) GameCount = GameCount_member->value.GetInt();
	
	const Value::Member* IncompleteResult_member = obj.FindMember("IncompleteResult");
	if (IncompleteResult_member != NULL) IncompleteResult = IncompleteResult_member->value.GetBool();
	
	
	return true;
}


GameServerRegionsRequest::~GameServerRegionsRequest()
{
	
}

void GameServerRegionsRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("BuildVersion"); writer.String(BuildVersion.c_str());
	
	if(TitleId.length() > 0) { writer.String("TitleId"); writer.String(TitleId.c_str()); }
	
	
	writer.EndObject();
}

bool GameServerRegionsRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* BuildVersion_member = obj.FindMember("BuildVersion");
	if (BuildVersion_member != NULL) BuildVersion = BuildVersion_member->value.GetString();
	
	const Value::Member* TitleId_member = obj.FindMember("TitleId");
	if (TitleId_member != NULL) TitleId = TitleId_member->value.GetString();
	
	
	return true;
}


GameModeInfo::~GameModeInfo()
{
	
}

void GameModeInfo::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(GameMode.length() > 0) { writer.String("GameMode"); writer.String(GameMode.c_str()); }
	
	writer.String("GameCount"); writer.Uint(GameCount);
	
	writer.String("GamePlayersCount"); writer.Uint(GamePlayersCount);
	
	
	writer.EndObject();
}

bool GameModeInfo::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* GameMode_member = obj.FindMember("GameMode");
	if (GameMode_member != NULL) GameMode = GameMode_member->value.GetString();
	
	const Value::Member* GameCount_member = obj.FindMember("GameCount");
	if (GameCount_member != NULL) GameCount = GameCount_member->value.GetUint();
	
	const Value::Member* GamePlayersCount_member = obj.FindMember("GamePlayersCount");
	if (GamePlayersCount_member != NULL) GamePlayersCount = GamePlayersCount_member->value.GetUint();
	
	
	return true;
}


RegionInfo::~RegionInfo()
{
	
}

void RegionInfo::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(Region.notNull()) { writer.String("Region"); writeRegionEnumJSON(Region, writer); }
	
	if(Name.length() > 0) { writer.String("Name"); writer.String(Name.c_str()); }
	
	writer.String("Available"); writer.Bool(Available);
	
	if(PingUrl.length() > 0) { writer.String("PingUrl"); writer.String(PingUrl.c_str()); }
	
	writer.String("GameCount"); writer.Uint(GameCount);
	
	writer.String("GamePlayersCount"); writer.Uint(GamePlayersCount);
	
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

bool RegionInfo::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Region_member = obj.FindMember("Region");
	if (Region_member != NULL) Region = readRegionFromValue(Region_member->value);
	
	const Value::Member* Name_member = obj.FindMember("Name");
	if (Name_member != NULL) Name = Name_member->value.GetString();
	
	const Value::Member* Available_member = obj.FindMember("Available");
	if (Available_member != NULL) Available = Available_member->value.GetBool();
	
	const Value::Member* PingUrl_member = obj.FindMember("PingUrl");
	if (PingUrl_member != NULL) PingUrl = PingUrl_member->value.GetString();
	
	const Value::Member* GameCount_member = obj.FindMember("GameCount");
	if (GameCount_member != NULL) GameCount = GameCount_member->value.GetUint();
	
	const Value::Member* GamePlayersCount_member = obj.FindMember("GamePlayersCount");
	if (GamePlayersCount_member != NULL) GamePlayersCount = GamePlayersCount_member->value.GetUint();
	
	const Value::Member* GameModes_member = obj.FindMember("GameModes");
	if (GameModes_member != NULL) {
		const rapidjson::Value& memberList = GameModes_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			GameModes.push_back(GameModeInfo(memberList[i]));
		}
	}
	
	
	return true;
}


GameServerRegionsResult::~GameServerRegionsResult()
{
	
}

void GameServerRegionsResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!Regions.empty()) {
	writer.String("Regions");
	writer.StartArray();
	for (std::list<RegionInfo>::iterator iter = Regions.begin(); iter != Regions.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool GameServerRegionsResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Regions_member = obj.FindMember("Regions");
	if (Regions_member != NULL) {
		const rapidjson::Value& memberList = Regions_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Regions.push_back(RegionInfo(memberList[i]));
		}
	}
	
	
	return true;
}


RegionPlaylistsRequest::~RegionPlaylistsRequest()
{
	
}

void RegionPlaylistsRequest::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	writer.String("BuildVersion"); writer.String(BuildVersion.c_str());
	
	writer.String("Region"); writeRegionEnumJSON(Region, writer);
	
	if(TitleId.length() > 0) { writer.String("TitleId"); writer.String(TitleId.c_str()); }
	
	
	writer.EndObject();
}

bool RegionPlaylistsRequest::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* BuildVersion_member = obj.FindMember("BuildVersion");
	if (BuildVersion_member != NULL) BuildVersion = BuildVersion_member->value.GetString();
	
	const Value::Member* Region_member = obj.FindMember("Region");
	if (Region_member != NULL) Region = readRegionFromValue(Region_member->value);
	
	const Value::Member* TitleId_member = obj.FindMember("TitleId");
	if (TitleId_member != NULL) TitleId = TitleId_member->value.GetString();
	
	
	return true;
}


PlaylistInfo::~PlaylistInfo()
{
	
}

void PlaylistInfo::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(PlaylistId.length() > 0) { writer.String("PlaylistId"); writer.String(PlaylistId.c_str()); }
	
	writer.String("GameCount"); writer.Uint(GameCount);
	
	writer.String("GamePlayersCount"); writer.Uint(GamePlayersCount);
	
	
	writer.EndObject();
}

bool PlaylistInfo::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* PlaylistId_member = obj.FindMember("PlaylistId");
	if (PlaylistId_member != NULL) PlaylistId = PlaylistId_member->value.GetString();
	
	const Value::Member* GameCount_member = obj.FindMember("GameCount");
	if (GameCount_member != NULL) GameCount = GameCount_member->value.GetUint();
	
	const Value::Member* GamePlayersCount_member = obj.FindMember("GamePlayersCount");
	if (GamePlayersCount_member != NULL) GamePlayersCount = GamePlayersCount_member->value.GetUint();
	
	
	return true;
}


RegionPlaylistsResult::~RegionPlaylistsResult()
{
	
}

void RegionPlaylistsResult::writeJSON(PFStringJsonWriter& writer)
{
    writer.StartObject();

	
	if(!Playlists.empty()) {
	writer.String("Playlists");
	writer.StartArray();
	for (std::list<PlaylistInfo>::iterator iter = Playlists.begin(); iter != Playlists.end(); iter++) {
		iter->writeJSON(writer);
	}
	writer.EndArray();
	 }
	
	
	writer.EndObject();
}

bool RegionPlaylistsResult::readFromValue(const rapidjson::Value& obj)
{
	
	const Value::Member* Playlists_member = obj.FindMember("Playlists");
	if (Playlists_member != NULL) {
		const rapidjson::Value& memberList = Playlists_member->value;
		for (SizeType i = 0; i < memberList.Size(); i++) {
			Playlists.push_back(PlaylistInfo(memberList[i]));
		}
	}
	
	
	return true;
}



