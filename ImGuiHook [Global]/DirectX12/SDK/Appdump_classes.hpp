#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Appdump

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class Appdump.AppDumpAssociatedFile
// 0x0040 (0x0070 - 0x0030)
class UAppDumpAssociatedFile final : public UObject
{
public:
	uint8                                         Pad_30[0x40];                                      // 0x0030(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AppDumpAssociatedFile">();
	}
	static class UAppDumpAssociatedFile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppDumpAssociatedFile>();
	}
};
static_assert(alignof(UAppDumpAssociatedFile) == 0x000008, "Wrong alignment on UAppDumpAssociatedFile");
static_assert(sizeof(UAppDumpAssociatedFile) == 0x000070, "Wrong size on UAppDumpAssociatedFile");

// Class Appdump.AppdumpLibrary
// 0x0000 (0x0030 - 0x0030)
class UAppdumpLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddFiles(const TArray<class UAppDumpAssociatedFile*>& NtAssociatedFileArray);
	static void CaptureBacktrace();
	static class FString GetUploadFileDir();
	static class UAppDumpAssociatedFile* InitWithFile(const class FString& DesFileName, const class FString& SrcContent, const class FString& SrcFilePath, const class FString& FileFeature);
	static bool IsLastTimeAnr();
	static bool IsLastTimeCrash();
	static void PostFiles(const class UAppDumpAssociatedFile* MainFile, const TArray<class UAppDumpAssociatedFile*>& MinorFileArray, const class FString& ErrorType);
	static void PostScriptError(const class FString& ErrorContent);
	static bool SafelyBindCondition(const class FString& Key, const class FString& Value);
	static bool SafelyUnbindCondition(const class FString& Key, const class FString& Value);
	static void SetBranch(const class FString& branch);
	static void SetDebugMode(bool DebugMode);
	static void SetEventOccurCallback(const TDelegate<void(int32 EventType, const class FString& EventInfo)>& TOnEventOccurBLCallback);
	static void SetHost(const class FString& Host);
	static void SetParam(const class FString& Key, const class FString& Value);
	static void SetUrl(const class FString& URL);
	static void StartHuntingCrash();
	static void Unseal();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AppdumpLibrary">();
	}
	static class UAppdumpLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppdumpLibrary>();
	}
};
static_assert(alignof(UAppdumpLibrary) == 0x000008, "Wrong alignment on UAppdumpLibrary");
static_assert(sizeof(UAppdumpLibrary) == 0x000030, "Wrong size on UAppdumpLibrary");

// Class Appdump.AppdumpRuntimeSettings
// 0x0028 (0x0058 - 0x0030)
class UAppdumpRuntimeSettings final : public UObject
{
public:
	class FString                                 ProjectID;                                         // 0x0030(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AppKey;                                            // 0x0040(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ChineseMainland;                                   // 0x0050(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AutoStart;                                         // 0x0051(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          WindowsEnable;                                     // 0x0052(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          GPUMemoryMonitorEnable;                            // 0x0053(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AppdumpRuntimeSettings">();
	}
	static class UAppdumpRuntimeSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppdumpRuntimeSettings>();
	}
};
static_assert(alignof(UAppdumpRuntimeSettings) == 0x000008, "Wrong alignment on UAppdumpRuntimeSettings");
static_assert(sizeof(UAppdumpRuntimeSettings) == 0x000058, "Wrong size on UAppdumpRuntimeSettings");
static_assert(offsetof(UAppdumpRuntimeSettings, ProjectID) == 0x000030, "Member 'UAppdumpRuntimeSettings::ProjectID' has a wrong offset!");
static_assert(offsetof(UAppdumpRuntimeSettings, AppKey) == 0x000040, "Member 'UAppdumpRuntimeSettings::AppKey' has a wrong offset!");
static_assert(offsetof(UAppdumpRuntimeSettings, ChineseMainland) == 0x000050, "Member 'UAppdumpRuntimeSettings::ChineseMainland' has a wrong offset!");
static_assert(offsetof(UAppdumpRuntimeSettings, AutoStart) == 0x000051, "Member 'UAppdumpRuntimeSettings::AutoStart' has a wrong offset!");
static_assert(offsetof(UAppdumpRuntimeSettings, WindowsEnable) == 0x000052, "Member 'UAppdumpRuntimeSettings::WindowsEnable' has a wrong offset!");
static_assert(offsetof(UAppdumpRuntimeSettings, GPUMemoryMonitorEnable) == 0x000053, "Member 'UAppdumpRuntimeSettings::GPUMemoryMonitorEnable' has a wrong offset!");

}

