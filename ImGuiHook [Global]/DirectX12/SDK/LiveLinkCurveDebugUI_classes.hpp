#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLinkCurveDebugUI

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class ULiveLinkDebuggerBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void DisplayLiveLinkDebugger(const class FString& SubjectName);
	static void HideLiveLinkDebugger();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkDebuggerBlueprintLibrary">();
	}
	static class ULiveLinkDebuggerBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkDebuggerBlueprintLibrary>();
	}
};
static_assert(alignof(ULiveLinkDebuggerBlueprintLibrary) == 0x000008, "Wrong alignment on ULiveLinkDebuggerBlueprintLibrary");
static_assert(sizeof(ULiveLinkDebuggerBlueprintLibrary) == 0x000030, "Wrong size on ULiveLinkDebuggerBlueprintLibrary");

// Class LiveLinkCurveDebugUI.LiveLinkDebuggerSettings
// 0x0030 (0x0060 - 0x0030)
class ULiveLinkDebuggerSettings final : public UObject
{
public:
	struct FSlateColor                            MinBarColor;                                       // 0x0030(0x0014)(Edit, Config, NativeAccessSpecifierPublic)
	struct FSlateColor                            MaxBarColor;                                       // 0x0044(0x0014)(Edit, Config, NativeAccessSpecifierPublic)
	float                                         DPIScaleMultiplier;                                // 0x0058(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FSlateColor GetBarColorForCurveValue(float CurveValue) const;
	float GetDPIScaleBasedOnSize(const struct FIntPoint& Size) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkDebuggerSettings">();
	}
	static class ULiveLinkDebuggerSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkDebuggerSettings>();
	}
};
static_assert(alignof(ULiveLinkDebuggerSettings) == 0x000008, "Wrong alignment on ULiveLinkDebuggerSettings");
static_assert(sizeof(ULiveLinkDebuggerSettings) == 0x000060, "Wrong size on ULiveLinkDebuggerSettings");
static_assert(offsetof(ULiveLinkDebuggerSettings, MinBarColor) == 0x000030, "Member 'ULiveLinkDebuggerSettings::MinBarColor' has a wrong offset!");
static_assert(offsetof(ULiveLinkDebuggerSettings, MaxBarColor) == 0x000044, "Member 'ULiveLinkDebuggerSettings::MaxBarColor' has a wrong offset!");
static_assert(offsetof(ULiveLinkDebuggerSettings, DPIScaleMultiplier) == 0x000058, "Member 'ULiveLinkDebuggerSettings::DPIScaleMultiplier' has a wrong offset!");

}
