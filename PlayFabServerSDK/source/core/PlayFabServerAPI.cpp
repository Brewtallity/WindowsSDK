#include "playfab/PlayFabServerAPI.h"
#include "playfab/HttpRequest.h"
#include "playfab/PlayFabSettings.h"
#include "playfab/PlayFabResultHandler.h"
#include "HttpRequesterCURL.h"

#include <string>


using namespace PlayFab;

PlayFabServerAPI::PlayFabServerAPI()
    : PlayFabServerAPI(NULL, false)
{
   
}

PlayFabServerAPI::PlayFabServerAPI(IHttpRequester* requester, bool ownRequester)
    : mHttpRequester(requester), mOwnsRequester(ownRequester)
{
    if(mHttpRequester == NULL)
    {
        mOwnsRequester = true;
        mHttpRequester = new HttpRequesterCURL();
    }

}



PlayFabServerAPI::~PlayFabServerAPI()
{
    if(mOwnsRequester && mHttpRequester != NULL)
    {
        delete mHttpRequester;
        mOwnsRequester = false;
        mHttpRequester = NULL;
    }
}



IHttpRequester* PlayFabServerAPI::GetRequester(bool relinquishOwnership /* = false*/)
{
    if(relinquishOwnership)
    {
        mOwnsRequester = false;
    }
    return mHttpRequester;
}

void PlayFabServerAPI::Update()
{
    if(mHttpRequester != NULL)
    {
        mHttpRequester->UpdateRequests();
    }
}


void PlayFabServerAPI::GetUserAccountInfo(
    GetUserAccountInfoRequest& request,
    GetUserAccountInfoCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetUserAccountInfo"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserAccountInfoResult, this);
}

void PlayFabServerAPI::OnGetUserAccountInfoResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetUserAccountInfoResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserAccountInfoCallback successCallback = static_cast<GetUserAccountInfoCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetUserData(
    GetUserDataRequest& request,
    GetUserDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetUserData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserDataResult, this);
}

void PlayFabServerAPI::OnGetUserDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserDataCallback successCallback = static_cast<GetUserDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetUserInternalData(
    GetUserDataRequest& request,
    GetUserInternalDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetUserInternalData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserInternalDataResult, this);
}

void PlayFabServerAPI::OnGetUserInternalDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserInternalDataCallback successCallback = static_cast<GetUserInternalDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetUserReadOnlyData(
    GetUserDataRequest& request,
    GetUserReadOnlyDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetUserReadOnlyData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserReadOnlyDataResult, this);
}

void PlayFabServerAPI::OnGetUserReadOnlyDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserReadOnlyDataCallback successCallback = static_cast<GetUserReadOnlyDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::UpdateUserData(
    UpdateUserDataRequest& request,
    UpdateUserDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/UpdateUserData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateUserDataResult, this);
}

void PlayFabServerAPI::OnUpdateUserDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateUserDataCallback successCallback = static_cast<UpdateUserDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::UpdateUserInternalData(
    UpdateUserDataRequest& request,
    UpdateUserInternalDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/UpdateUserInternalData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateUserInternalDataResult, this);
}

void PlayFabServerAPI::OnUpdateUserInternalDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateUserInternalDataCallback successCallback = static_cast<UpdateUserInternalDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::UpdateUserReadOnlyData(
    UpdateUserDataRequest& request,
    UpdateUserReadOnlyDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/UpdateUserReadOnlyData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateUserReadOnlyDataResult, this);
}

void PlayFabServerAPI::OnUpdateUserReadOnlyDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateUserReadOnlyDataCallback successCallback = static_cast<UpdateUserReadOnlyDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetCatalogItems(
    GetCatalogItemsRequest& request,
    GetCatalogItemsCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetCatalogItems"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetCatalogItemsResult, this);
}

void PlayFabServerAPI::OnGetCatalogItemsResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetCatalogItemsResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetCatalogItemsCallback successCallback = static_cast<GetCatalogItemsCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetTitleData(
    GetTitleDataRequest& request,
    GetTitleDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetTitleData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetTitleDataResult, this);
}

void PlayFabServerAPI::OnGetTitleDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetTitleDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetTitleDataCallback successCallback = static_cast<GetTitleDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::SetTitleData(
    SetTitleDataRequest& request,
    SetTitleDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/SetTitleData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnSetTitleDataResult, this);
}

void PlayFabServerAPI::OnSetTitleDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    SetTitleDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            SetTitleDataCallback successCallback = static_cast<SetTitleDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::AddUserVirtualCurrency(
    AddUserVirtualCurrencyRequest& request,
    AddUserVirtualCurrencyCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/AddUserVirtualCurrency"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnAddUserVirtualCurrencyResult, this);
}

void PlayFabServerAPI::OnAddUserVirtualCurrencyResult(int httpStatus, HttpRequest* request, void* userData)
{
    ModifyUserVirtualCurrencyResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            AddUserVirtualCurrencyCallback successCallback = static_cast<AddUserVirtualCurrencyCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetUserInventory(
    GetUserInventoryRequest& request,
    GetUserInventoryCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetUserInventory"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserInventoryResult, this);
}

void PlayFabServerAPI::OnGetUserInventoryResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetUserInventoryResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserInventoryCallback successCallback = static_cast<GetUserInventoryCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GrantItemsToUsers(
    GrantItemsToUsersRequest& request,
    GrantItemsToUsersCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GrantItemsToUsers"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGrantItemsToUsersResult, this);
}

void PlayFabServerAPI::OnGrantItemsToUsersResult(int httpStatus, HttpRequest* request, void* userData)
{
    GrantItemsToUsersResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GrantItemsToUsersCallback successCallback = static_cast<GrantItemsToUsersCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::SubtractUserVirtualCurrency(
    SubtractUserVirtualCurrencyRequest& request,
    SubtractUserVirtualCurrencyCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/SubtractUserVirtualCurrency"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnSubtractUserVirtualCurrencyResult, this);
}

void PlayFabServerAPI::OnSubtractUserVirtualCurrencyResult(int httpStatus, HttpRequest* request, void* userData)
{
    ModifyUserVirtualCurrencyResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            SubtractUserVirtualCurrencyCallback successCallback = static_cast<SubtractUserVirtualCurrencyCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::NotifyMatchmakerPlayerLeft(
    NotifyMatchmakerPlayerLeftRequest& request,
    NotifyMatchmakerPlayerLeftCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/NotifyMatchmakerPlayerLeft"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnNotifyMatchmakerPlayerLeftResult, this);
}

void PlayFabServerAPI::OnNotifyMatchmakerPlayerLeftResult(int httpStatus, HttpRequest* request, void* userData)
{
    NotifyMatchmakerPlayerLeftResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            NotifyMatchmakerPlayerLeftCallback successCallback = static_cast<NotifyMatchmakerPlayerLeftCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::RedeemMatchmakerTicket(
    RedeemMatchmakerTicketRequest& request,
    RedeemMatchmakerTicketCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/RedeemMatchmakerTicket"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnRedeemMatchmakerTicketResult, this);
}

void PlayFabServerAPI::OnRedeemMatchmakerTicketResult(int httpStatus, HttpRequest* request, void* userData)
{
    RedeemMatchmakerTicketResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            RedeemMatchmakerTicketCallback successCallback = static_cast<RedeemMatchmakerTicketCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::AwardSteamAchievement(
    AwardSteamAchievementRequest& request,
    AwardSteamAchievementCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/AwardSteamAchievement"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnAwardSteamAchievementResult, this);
}

void PlayFabServerAPI::OnAwardSteamAchievementResult(int httpStatus, HttpRequest* request, void* userData)
{
    AwardSteamAchievementResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            AwardSteamAchievementCallback successCallback = static_cast<AwardSteamAchievementCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}



