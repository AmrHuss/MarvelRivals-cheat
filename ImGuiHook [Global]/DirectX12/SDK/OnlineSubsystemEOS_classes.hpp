#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemEOS

#include "Basic.hpp"

#include "SocketSubsystemEOS_classes.hpp"
#include "Engine_classes.hpp"
#include "OnlineSubsystemEOS_structs.hpp"


namespace SDK
{

// Class OnlineSubsystemEOS.NetDriverEOS
// 0x0000 (0x0B90 - 0x0B90)
class UNetDriverEOS final : public UNetDriverEOSBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetDriverEOS">();
	}
	static class UNetDriverEOS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetDriverEOS>();
	}
};
static_assert(alignof(UNetDriverEOS) == 0x000010, "Wrong alignment on UNetDriverEOS");
static_assert(sizeof(UNetDriverEOS) == 0x000B90, "Wrong size on UNetDriverEOS");

// Class OnlineSubsystemEOS.EOSArtifactSettings
// 0x0000 (0x0038 - 0x0038)
class UEOSArtifactSettings final : public UDataAsset
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EOSArtifactSettings">();
	}
	static class UEOSArtifactSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEOSArtifactSettings>();
	}
};
static_assert(alignof(UEOSArtifactSettings) == 0x000008, "Wrong alignment on UEOSArtifactSettings");
static_assert(sizeof(UEOSArtifactSettings) == 0x000038, "Wrong size on UEOSArtifactSettings");

// Class OnlineSubsystemEOS.EOSSettings
// 0x0068 (0x00A8 - 0x0040)
class UEOSSettings final : public URuntimeOptionsBase
{
public:
	class FString                                 CacheDir;                                          // 0x0040(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DefaultArtifactName;                               // 0x0050(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TickBudgetInMilliseconds;                          // 0x0060(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableOverlay;                                    // 0x0064(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableSocialOverlay;                              // 0x0065(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableEditorOverlay;                              // 0x0066(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldEnforceBeingLaunchedByEGS;                  // 0x0067(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         TitleStorageTags;                                  // 0x0068(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                         TitleStorageReadChunkLength;                       // 0x0078(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FArtifactSettings>              Artifacts;                                         // 0x0080(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                         AuthScopeFlags;                                    // 0x0090(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                          bUseEAS;                                           // 0x00A0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseEOSConnect;                                    // 0x00A1(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMirrorStatsToEOS;                                 // 0x00A2(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMirrorAchievementsToEOS;                          // 0x00A3(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseEOSSessions;                                   // 0x00A4(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMirrorPresenceToEAS;                              // 0x00A5(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A6[0x2];                                       // 0x00A6(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EOSSettings">();
	}
	static class UEOSSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEOSSettings>();
	}
};
static_assert(alignof(UEOSSettings) == 0x000008, "Wrong alignment on UEOSSettings");
static_assert(sizeof(UEOSSettings) == 0x0000A8, "Wrong size on UEOSSettings");
static_assert(offsetof(UEOSSettings, CacheDir) == 0x000040, "Member 'UEOSSettings::CacheDir' has a wrong offset!");
static_assert(offsetof(UEOSSettings, DefaultArtifactName) == 0x000050, "Member 'UEOSSettings::DefaultArtifactName' has a wrong offset!");
static_assert(offsetof(UEOSSettings, TickBudgetInMilliseconds) == 0x000060, "Member 'UEOSSettings::TickBudgetInMilliseconds' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bEnableOverlay) == 0x000064, "Member 'UEOSSettings::bEnableOverlay' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bEnableSocialOverlay) == 0x000065, "Member 'UEOSSettings::bEnableSocialOverlay' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bEnableEditorOverlay) == 0x000066, "Member 'UEOSSettings::bEnableEditorOverlay' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bShouldEnforceBeingLaunchedByEGS) == 0x000067, "Member 'UEOSSettings::bShouldEnforceBeingLaunchedByEGS' has a wrong offset!");
static_assert(offsetof(UEOSSettings, TitleStorageTags) == 0x000068, "Member 'UEOSSettings::TitleStorageTags' has a wrong offset!");
static_assert(offsetof(UEOSSettings, TitleStorageReadChunkLength) == 0x000078, "Member 'UEOSSettings::TitleStorageReadChunkLength' has a wrong offset!");
static_assert(offsetof(UEOSSettings, Artifacts) == 0x000080, "Member 'UEOSSettings::Artifacts' has a wrong offset!");
static_assert(offsetof(UEOSSettings, AuthScopeFlags) == 0x000090, "Member 'UEOSSettings::AuthScopeFlags' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bUseEAS) == 0x0000A0, "Member 'UEOSSettings::bUseEAS' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bUseEOSConnect) == 0x0000A1, "Member 'UEOSSettings::bUseEOSConnect' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bMirrorStatsToEOS) == 0x0000A2, "Member 'UEOSSettings::bMirrorStatsToEOS' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bMirrorAchievementsToEOS) == 0x0000A3, "Member 'UEOSSettings::bMirrorAchievementsToEOS' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bUseEOSSessions) == 0x0000A4, "Member 'UEOSSettings::bUseEOSSessions' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bMirrorPresenceToEAS) == 0x0000A5, "Member 'UEOSSettings::bMirrorPresenceToEAS' has a wrong offset!");

}
