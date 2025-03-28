#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LanguageLogic

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass LanguageLogic.UISettingEntryLanguageHandler
// 0x0000 (0x0030 - 0x0030)
class UUISettingEntryLanguageHandler final : public UUISettingEntrySettingHandler
{
public:
	void BP_OnApply(class UObject* Obj, const class FString& Setting_key, const TMap<class FString, class FString>& P, const TMap<int32, class FText>& OPTIONS, float Value);
	float BP_GetCurrentValue(class UObject* Obj, const class FString& Setting_key, const TMap<class FString, class FString>& P, const TMap<int32, class FText>& O);
	TMap<class FString, int32> BP_OnChanged(class UObject* Obj, const class FString& Setting_key, const TMap<class FString, class FString>& Params_0, const TMap<int32, class FText>& OPTIONS, float Value, const TMap<class FString, int32>& Tags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UISettingEntryLanguageHandler">();
	}
	static class UUISettingEntryLanguageHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUISettingEntryLanguageHandler>();
	}
};
static_assert(alignof(UUISettingEntryLanguageHandler) == 0x000008, "Wrong alignment on UUISettingEntryLanguageHandler");
static_assert(sizeof(UUISettingEntryLanguageHandler) == 0x000030, "Wrong size on UUISettingEntryLanguageHandler");

// PythonClass LanguageLogic.UISettingEntryLanguageOptionGenerator
// 0x0000 (0x0030 - 0x0030)
class UUISettingEntryLanguageOptionGenerator final : public UUISettingEntryOptionsGenerator
{
public:
	TMap<int32, class FText> BP_Gen(class UObject* Obj, const class FString& Setting_key, const TMap<int32, class FText>& OPTIONS);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UISettingEntryLanguageOptionGenerator">();
	}
	static class UUISettingEntryLanguageOptionGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUISettingEntryLanguageOptionGenerator>();
	}
};
static_assert(alignof(UUISettingEntryLanguageOptionGenerator) == 0x000008, "Wrong alignment on UUISettingEntryLanguageOptionGenerator");
static_assert(sizeof(UUISettingEntryLanguageOptionGenerator) == 0x000030, "Wrong size on UUISettingEntryLanguageOptionGenerator");

}

