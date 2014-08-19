WindowsSDK
==========

Windows C++ SDK for PlayFab

# SDKs

This package contains three different versions of the PlayFab SDK. 

PlayFabClientSDK - This version contains only client libraries and is designed for integration with your game client
PlayFabServerSDK - Contains server and admin APIs designed to be called from your custom logic server or build process
PlayFabSDK - Contains all APIs in one SDK.

# Integration


To integrate the PlayFab SDK into your Visual Studio project, follow these steps.

## Linker Settings

1.

Under your project's Properties panel, open up "Configuration Properties\Linker". Add the following to the "Additional Linker Directories" line:

```
$(PlayFabRoot)\PlayFabSDK\lib\Win32;$(PlayFabRoot)\PlayFabSDK\dependencies\lib\Win32;
```
Substitute $(PlayFabRoot) for wherever you have the PlayFabSDK installed in your project. If you have a x64 target in your project, substitute x64 for Win32 in the above path.

2.

In the Properties panel, switch to "Configuration Properties\Linker\Input"

Add the following libraries to the "Additional Dependencies" line:
```
zlibd.lib;libeay32d.lib;ssleay32d.lib;libcurld.lib;PlayFabAPId.lib;ws2_32.lib;wldap32.lib;
```

## Preprocessor settings

Open your project's Properties panel and switch to "Configuration Properties\C/C++".

Add the following paths to the line "Additional Include Directories":

```
$(PlayFabRoot)\PlayFabSDK\include;$(PlayFabRoot)\PlayFabSDK\dependencies\include;
```

Substitute $(PlayFabRoot) for wherever you have the PlayFabSDK installed in your project.

## Done

Your project should now be ready to compile and link against the PlayFabSDK.


# API Docs

Please see http://api.playfab.com/Documentation/ for complete documentation of all PlayFab SDK calls.
