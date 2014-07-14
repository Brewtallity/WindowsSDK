
#include "playfab/PlayFabBaseModel.h"

using namespace PlayFab;
using namespace rapidjson;

std::string PlayFabBaseModel::toJSONString()
{
    GenericStringBuffer< UTF8<> > buffer;
    PFStringJsonWriter writer(buffer);
    writeJSON(writer);
    return buffer.GetString();
}

void PlayFab::writeDatetime(time_t datetime, PFStringJsonWriter& writer)
{
	char buff[40];
	strftime(buff, 40, "%Y-%m-%dT%H:%M:%S.000Z", gmtime (&datetime));
	writer.String(buff);
}

time_t PlayFab::readDatetime(const rapidjson::Value& obj)
{
    time_t time = (time_t)0;

    std::string enumStr = obj.GetString();

    tm timeStruct;
    memset(&timeStruct, 0, sizeof(timeStruct));
    unsigned int milliseconds = 0;
    sscanf(enumStr.c_str(), "%u-%u-%uT%u:%u%u.%uZ", &timeStruct.tm_year, &timeStruct.tm_mon, &timeStruct.tm_mday,
                       &timeStruct.tm_hour, &timeStruct.tm_min, &timeStruct.tm_sec, &milliseconds);
    timeStruct.tm_year -= 1900;
    
    time = _mkgmtime(&timeStruct);

    return time;
}