#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_135

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_135.PyConfig_135
// 0x0000 (0x1040 - 0x1040)
class UPyConfig_135 final : public UConfig_135
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_135">();
	}
	static class UPyConfig_135* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_135>();
	}
};
static_assert(alignof(UPyConfig_135) == 0x000010, "Wrong alignment on UPyConfig_135");
static_assert(sizeof(UPyConfig_135) == 0x001040, "Wrong size on UPyConfig_135");

// PythonClass PyAbility_135.PyCue_Summoner_Loop_13502
// 0x0000 (0x0E30 - 0x0E30)
class APyCue_Summoner_Loop_13502 final : public AMarvelCueNotify_Summoned
{
public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnRelevantChanged(bool Relevant);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Summoner_Loop_13502">();
	}
	static class APyCue_Summoner_Loop_13502* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Summoner_Loop_13502>();
	}
};
static_assert(alignof(APyCue_Summoner_Loop_13502) == 0x000008, "Wrong alignment on APyCue_Summoner_Loop_13502");
static_assert(sizeof(APyCue_Summoner_Loop_13502) == 0x000E30, "Wrong size on APyCue_Summoner_Loop_13502");

// PythonClass PyAbility_135.PyAbility_135
// 0x0000 (0x2550 - 0x2550)
class UPyAbility_135 : public UMarvelGameplayAbility
{
public:
	void BeginPlay();
	void K2_ActivateAbility();
	void MissileEventNotify();
	void K2_OnEndAbility(bool Cancel);
	void NativeOnMontageInterrupted(const class FString& Tag);
	void NativeOnMontageCancelled(const class FString& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_135">();
	}
	static class UPyAbility_135* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_135>();
	}
};
static_assert(alignof(UPyAbility_135) == 0x000008, "Wrong alignment on UPyAbility_135");
static_assert(sizeof(UPyAbility_135) == 0x002550, "Wrong size on UPyAbility_135");

// PythonClass PyAbility_135.PyCue_Ability_Loop_13501
// 0x0018 (0x0E18 - 0x0E00)
class APyCue_Ability_Loop_13501 final : public AMarvelCueNotify_Ability
{
public:
	int32                                         AbilityID;                                         // 0x0E00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeoutTime;                                       // 0x0E04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            AlphaCurve;                                        // 0x0E08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimerInterval;                                     // 0x0E10(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnRemoveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_13501">();
	}
	static class APyCue_Ability_Loop_13501* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_13501>();
	}
};
static_assert(alignof(APyCue_Ability_Loop_13501) == 0x000008, "Wrong alignment on APyCue_Ability_Loop_13501");
static_assert(sizeof(APyCue_Ability_Loop_13501) == 0x000E18, "Wrong size on APyCue_Ability_Loop_13501");
static_assert(offsetof(APyCue_Ability_Loop_13501, AbilityID) == 0x000E00, "Member 'APyCue_Ability_Loop_13501::AbilityID' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_13501, FadeoutTime) == 0x000E04, "Member 'APyCue_Ability_Loop_13501::FadeoutTime' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_13501, AlphaCurve) == 0x000E08, "Member 'APyCue_Ability_Loop_13501::AlphaCurve' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_13501, TimerInterval) == 0x000E10, "Member 'APyCue_Ability_Loop_13501::TimerInterval' has a wrong offset!");

// PythonClass PyAbility_135.PyCue_Ability_Loop_13503
// 0x0000 (0x0E00 - 0x0E00)
class APyCue_Ability_Loop_13503 final : public AMarvelCueNotify_Ability
{
public:
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnRemoveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_13503">();
	}
	static class APyCue_Ability_Loop_13503* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_13503>();
	}
};
static_assert(alignof(APyCue_Ability_Loop_13503) == 0x000008, "Wrong alignment on APyCue_Ability_Loop_13503");
static_assert(sizeof(APyCue_Ability_Loop_13503) == 0x000E00, "Wrong size on APyCue_Ability_Loop_13503");

}
