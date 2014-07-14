#ifndef PLAYFAB_BASE_MODEL_H_
#define PLAYFAB_BASE_MODEL_H_

#include <string>
#include <ctime>
#include <list>
#include <map>

#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/encodings.h"
#include "rapidjson/stringbuffer.h"


namespace PlayFab
{

	typedef rapidjson::Writer< rapidjson::GenericStringBuffer< rapidjson::UTF8<> > > PFStringJsonWriter;

	typedef unsigned short Uint16;
	typedef short Int16;
	typedef unsigned long Uint32;
	typedef long Int32;
	typedef unsigned long long Uint64;
	typedef long long Int64;

    template <typename BoxedType>
    class Boxed
    {
    public:
        BoxedType mValue;

        Boxed() : mValue(), mIsSet(false) {}
        Boxed(BoxedType value) : mValue(value), mIsSet(true) {}

        Boxed& Boxed::operator=(BoxedType value) { mValue = value; mIsSet = true; return *this; }
        operator BoxedType() { return mValue; }

        void setNull() { mIsSet = false; }
        bool notNull() { return mIsSet; }
        bool isNull() { return !mIsSet; }
    private:
        bool mIsSet;
    };

    typedef Boxed<bool> OptionalBool;
    typedef Boxed<Uint16> OptionalUint16;
    typedef Boxed<Int16> OptionalInt16;
    typedef Boxed<Uint32> OptionalUint32;
    typedef Boxed<Int32> OptionalInt32;
    typedef Boxed<Uint64> OptionalUint64;
    typedef Boxed<Int64> OptionalInt64;
    typedef Boxed<float> OptionalFloat;
    typedef Boxed<double> OptionalDouble;
    typedef Boxed<time_t> OptionalTime;


    struct PlayFabBaseModel
    {
		virtual ~PlayFabBaseModel() {}
        virtual void writeJSON(PFStringJsonWriter& writer) = 0;
        virtual bool readFromValue(const rapidjson::Value& obj) = 0;

        std::string toJSONString();
    };
	
	void writeDatetime(time_t datetime, PFStringJsonWriter& writer);
    time_t readDatetime(const rapidjson::Value& obj);
}

#endif