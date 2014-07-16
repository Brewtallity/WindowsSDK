#include "playfab/PlayFabAdminAPI.h"
#include "playfab/HttpRequest.h"
#include "playfab/PlayFabSettings.h"
#include "playfab/PlayFabResultHandler.h"
#include "playfab/HttpRequesterCURL.h"

#include <string>


using namespace PlayFab;

PlayFabAdminAPI::PlayFabAdminAPI()
    : PlayFabAdminAPI(NULL, false)
{
   
}

PlayFabAdminAPI::PlayFabAdminAPI(IHttpRequester* requester, bool ownRequester)
    : mHttpRequester(requester), mOwnsRequester(ownRequester)
{
    if(mHttpRequester == NULL)
    {
        mOwnsRequester = true;
        mHttpRequester = new HttpRequesterCURL();
    }

}



PlayFabAdminAPI::~PlayFabAdminAPI()
{
    if(mOwnsRequester && mHttpRequester != NULL)
    {
        delete mHttpRequester;
        mOwnsRequester = false;
        mHttpRequester = NULL;
    }
}



IHttpRequester* PlayFabAdminAPI::GetRequester(bool relinquishOwnership /* = false*/)
{
    if(relinquishOwnership)
    {
        mOwnsRequester = false;
    }
    return mHttpRequester;
}

void PlayFabAdminAPI::Update()
{
    if(mHttpRequester != NULL)
    {
        mHttpRequester->UpdateRequests();
    }
}


void PlayFabAdminAPI::GetUserAccountInfo(
    GetUserAccountInfoRequest& request,
    GetUserAccountInfoCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetUserAccountInfo"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserAccountInfoResult, this);
}

void PlayFabAdminAPI::OnGetUserAccountInfoResult(int httpStatus, HttpRequest* request, void* userData)
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


void PlayFabAdminAPI::SendAccountRecoveryEmail(
    SendAccountRecoveryEmailRequest& request,
    SendAccountRecoveryEmailCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/SendAccountRecoveryEmail"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnSendAccountRecoveryEmailResult, this);
}

void PlayFabAdminAPI::OnSendAccountRecoveryEmailResult(int httpStatus, HttpRequest* request, void* userData)
{
    SendAccountRecoveryEmailResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            SendAccountRecoveryEmailCallback successCallback = static_cast<SendAccountRecoveryEmailCallback>(request->GetResultCallback());
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


void PlayFabAdminAPI::UpdateUserTitleDisplayName(
    UpdateUserTitleDisplayNameRequest& request,
    UpdateUserTitleDisplayNameCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/UpdateUserTitleDisplayName"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateUserTitleDisplayNameResult, this);
}

void PlayFabAdminAPI::OnUpdateUserTitleDisplayNameResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateUserTitleDisplayNameResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateUserTitleDisplayNameCallback successCallback = static_cast<UpdateUserTitleDisplayNameCallback>(request->GetResultCallback());
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


void PlayFabAdminAPI::GetCatalogItems(
    GetCatalogItemsRequest& request,
    GetCatalogItemsCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetCatalogItems"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetCatalogItemsResult, this);
}

void PlayFabAdminAPI::OnGetCatalogItemsResult(int httpStatus, HttpRequest* request, void* userData)
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


void PlayFabAdminAPI::GetRandomResultTables(
    
    GetRandomResultTablesCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetRandomResultTables"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody("{}");
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetRandomResultTablesResult, this);
}

void PlayFabAdminAPI::OnGetRandomResultTablesResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetRandomResultTablesResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetRandomResultTablesCallback successCallback = static_cast<GetRandomResultTablesCallback>(request->GetResultCallback());
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


void PlayFabAdminAPI::GetTitleData(
    GetTitleDataRequest& request,
    GetTitleDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetTitleData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetTitleDataResult, this);
}

void PlayFabAdminAPI::OnGetTitleDataResult(int httpStatus, HttpRequest* request, void* userData)
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


void PlayFabAdminAPI::SetCatalogItems(
    UpdateCatalogItemsRequest& request,
    SetCatalogItemsCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/SetCatalogItems"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnSetCatalogItemsResult, this);
}

void PlayFabAdminAPI::OnSetCatalogItemsResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateCatalogItemsResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            SetCatalogItemsCallback successCallback = static_cast<SetCatalogItemsCallback>(request->GetResultCallback());
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


void PlayFabAdminAPI::SetTitleData(
    SetTitleDataRequest& request,
    SetTitleDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/SetTitleData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnSetTitleDataResult, this);
}

void PlayFabAdminAPI::OnSetTitleDataResult(int httpStatus, HttpRequest* request, void* userData)
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


void PlayFabAdminAPI::UpdateCatalogItems(
    UpdateCatalogItemsRequest& request,
    UpdateCatalogItemsCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/UpdateCatalogItems"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateCatalogItemsResult, this);
}

void PlayFabAdminAPI::OnUpdateCatalogItemsResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateCatalogItemsResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateCatalogItemsCallback successCallback = static_cast<UpdateCatalogItemsCallback>(request->GetResultCallback());
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


void PlayFabAdminAPI::UpdateRandomResultTables(
    UpdateRandomResultTablesRequest& request,
    UpdateRandomResultTablesCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/UpdateRandomResultTables"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateRandomResultTablesResult, this);
}

void PlayFabAdminAPI::OnUpdateRandomResultTablesResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateRandomResultTablesResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateRandomResultTablesCallback successCallback = static_cast<UpdateRandomResultTablesCallback>(request->GetResultCallback());
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


void PlayFabAdminAPI::GetUserInventory(
    GetUserInventoryRequest& request,
    GetUserInventoryCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetUserInventory"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserInventoryResult, this);
}

void PlayFabAdminAPI::OnGetUserInventoryResult(int httpStatus, HttpRequest* request, void* userData)
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


void PlayFabAdminAPI::RevokeInventoryItem(
    RevokeInventoryItemRequest& request,
    RevokeInventoryItemCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/RevokeInventoryItem"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnRevokeInventoryItemResult, this);
}

void PlayFabAdminAPI::OnRevokeInventoryItemResult(int httpStatus, HttpRequest* request, void* userData)
{
    RevokeInventoryResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            RevokeInventoryItemCallback successCallback = static_cast<RevokeInventoryItemCallback>(request->GetResultCallback());
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


void PlayFabAdminAPI::GetMatchmakerGameInfo(
    GetMatchmakerGameInfoRequest& request,
    GetMatchmakerGameInfoCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetMatchmakerGameInfo"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetMatchmakerGameInfoResult, this);
}

void PlayFabAdminAPI::OnGetMatchmakerGameInfoResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetMatchmakerGameInfoResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetMatchmakerGameInfoCallback successCallback = static_cast<GetMatchmakerGameInfoCallback>(request->GetResultCallback());
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


void PlayFabAdminAPI::GetMatchmakerGameModes(
    GetMatchmakerGameModesRequest& request,
    GetMatchmakerGameModesCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetMatchmakerGameModes"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetMatchmakerGameModesResult, this);
}

void PlayFabAdminAPI::OnGetMatchmakerGameModesResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetMatchmakerGameModesResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetMatchmakerGameModesCallback successCallback = static_cast<GetMatchmakerGameModesCallback>(request->GetResultCallback());
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


void PlayFabAdminAPI::ModifyMatchmakerGameModes(
    ModifyMatchmakerGameModesRequest& request,
    ModifyMatchmakerGameModesCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/ModifyMatchmakerGameModes"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnModifyMatchmakerGameModesResult, this);
}

void PlayFabAdminAPI::OnModifyMatchmakerGameModesResult(int httpStatus, HttpRequest* request, void* userData)
{
    ModifyMatchmakerGameModesResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            ModifyMatchmakerGameModesCallback successCallback = static_cast<ModifyMatchmakerGameModesCallback>(request->GetResultCallback());
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


void PlayFabAdminAPI::AddServerBuild(
    AddServerBuildRequest& request,
    AddServerBuildCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/AddServerBuild"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnAddServerBuildResult, this);
}

void PlayFabAdminAPI::OnAddServerBuildResult(int httpStatus, HttpRequest* request, void* userData)
{
    AddServerBuildResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            AddServerBuildCallback successCallback = static_cast<AddServerBuildCallback>(request->GetResultCallback());
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


void PlayFabAdminAPI::GetServerBuildInfo(
    GetServerBuildInfoRequest& request,
    GetServerBuildInfoCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetServerBuildInfo"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetServerBuildInfoResult, this);
}

void PlayFabAdminAPI::OnGetServerBuildInfoResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetServerBuildInfoResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetServerBuildInfoCallback successCallback = static_cast<GetServerBuildInfoCallback>(request->GetResultCallback());
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


void PlayFabAdminAPI::ListServerBuilds(
    
    ListServerBuildsCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/ListServerBuilds"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody("{}");
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnListServerBuildsResult, this);
}

void PlayFabAdminAPI::OnListServerBuildsResult(int httpStatus, HttpRequest* request, void* userData)
{
    ListBuildsResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            ListServerBuildsCallback successCallback = static_cast<ListServerBuildsCallback>(request->GetResultCallback());
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


void PlayFabAdminAPI::ModifyServerBuild(
    ModifyServerBuildRequest& request,
    ModifyServerBuildCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/ModifyServerBuild"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnModifyServerBuildResult, this);
}

void PlayFabAdminAPI::OnModifyServerBuildResult(int httpStatus, HttpRequest* request, void* userData)
{
    ModifyServerBuildResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            ModifyServerBuildCallback successCallback = static_cast<ModifyServerBuildCallback>(request->GetResultCallback());
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


void PlayFabAdminAPI::RemoveServerBuild(
    RemoveServerBuildRequest& request,
    RemoveServerBuildCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/RemoveServerBuild"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnRemoveServerBuildResult, this);
}

void PlayFabAdminAPI::OnRemoveServerBuildResult(int httpStatus, HttpRequest* request, void* userData)
{
    RemoveServerBuildResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            RemoveServerBuildCallback successCallback = static_cast<RemoveServerBuildCallback>(request->GetResultCallback());
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




