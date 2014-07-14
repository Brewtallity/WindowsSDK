#ifndef PLAYFAB_PLAYFABERROR_H_
#define PLAYFAB_PLAYFABERROR_H_

#include <string>
#include <map>

namespace PlayFab
{

    enum PlayFabErrorCode
    {
        PlayFabErrorHostnameNotFound=1,
        PlayFabErrorConnectionTimeout,
        PlayFabErrorConnectionRefused,
        PlayFabErrorSocketError,
		PlayFabErrorSuccess = 0,
		PlayFabErrorInvalidParams = 1000,
		PlayFabErrorAccountNotFound = 1001,
		PlayFabErrorAccountBanned = 1002,
		PlayFabErrorInvalidUsernameOrPassword = 1003,
		PlayFabErrorInvalidTitleId = 1004,
		PlayFabErrorInvalidEmailAddress = 1005,
		PlayFabErrorEmailAddressNotAvailable = 1006,
		PlayFabErrorInvalidUsername = 1007,
		PlayFabErrorInvalidPassword = 1008,
		PlayFabErrorUsernameNotAvailable = 1009,
		PlayFabErrorInvalidSteamTicket = 1010,
		PlayFabErrorAccountAlreadyLinked = 1011,
		PlayFabErrorLinkedAccountAlreadyClaimed = 1012,
		PlayFabErrorInvalidFacebookToken = 1013,
		PlayFabErrorAccountNotLinked = 1014,
		PlayFabErrorFailedByPaymentProvider = 1015,
		PlayFabErrorCouponCodeNotFound = 1016,
		PlayFabErrorInvalidContainerItem = 1017,
		PlayFabErrorContainerNotOwned = 1018,
		PlayFabErrorKeyNotOwned = 1019,
		PlayFabErrorInvalidItemIdInTable = 1020,
		PlayFabErrorInvalidReceipt = 1021,
		PlayFabErrorReceiptAlreadyUsed = 1022,
		PlayFabErrorReceiptCancelled = 1023,
		PlayFabErrorGameNotFound = 1024,
		PlayFabErrorGameModeNotFound = 1025,
		PlayFabErrorInvalidGoogleToken = 1026,
		PlayFabErrorBuildNotFound = 1027,
		PlayFabErrorPlayerNotInGame = 1028,
		PlayFabErrorInvalidTicket = 1029,
		PlayFabErrorInvalidOrderInfo = 1030,
		PlayFabErrorRegistrationIncomplete = 1031,
		PlayFabErrorInvalidPlatform = 1032,
		PlayFabErrorSteamApplicationNotOwned = 1033,
		PlayFabErrorWrongSteamAccount = 1034,
		PlayFabErrorTitleNotActivated = 1035,
		PlayFabErrorRegistrationSessionNotFound = 1036,
		PlayFabErrorNoSuchMod = 1037,
		PlayFabErrorFileNotFound = 1038,
		PlayFabErrorDuplicateEmail = 1039,
		PlayFabErrorItemNotFound = 1040,
		PlayFabErrorItemNotOwned = 1041,
		PlayFabErrorItemNotRecycleable = 1042,
		PlayFabErrorItemNotAffordable = 1043,
		PlayFabErrorInvalidVirtualCurrency = 1044,
		PlayFabErrorNonPositiveValue = 1045,
		PlayFabErrorInvalidRegion = 1046,
		PlayFabErrorRegionAtCapacity = 1047,
		PlayFabErrorServerFailedToStart = 1048,
		PlayFabErrorNameNotAvailable = 1049,
		PlayFabErrorInsufficientFunds = 1050,
		PlayFabErrorInvalidDeviceID = 1051,
		PlayFabErrorInvalidPushNotificationToken = 1052,
		PlayFabErrorNoRemainingUses = 1053,
		PlayFabErrorInvalidPaymentProvider = 1054,
		PlayFabErrorPurchaseInitializationFailure = 1055,
		PlayFabErrorDuplicateUsername = 1056,
		PlayFabErrorInvalidBuyerInfo = 1057,
		PlayFabErrorNoGameModeParamsSet = 1058
    };

    struct PlayFabError
    {
        int HttpCode;
        std::string HttpStatus;
        int ErrorCode;
        std::string ErrorName;
        std::string ErrorMessage;
        std::multimap< std::string, std::string > ErrorDetails;
    };


    typedef void(*ErrorCallback)(PlayFabError& error, void* userData);
}
#endif