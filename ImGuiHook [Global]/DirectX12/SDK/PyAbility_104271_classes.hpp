#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104271

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Marvel_classes.hpp"
#include "Hero_1042_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_104271.PyConfig_104271
// 0x0030 (0x00C8 - 0x0098)
class UPyConfig_104271 final : public UMarvelAbilityConfig
{
public:
	struct FGameplayTag                           SpecialTag;                                        // 0x0098(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   DelayEndTags;                                      // 0x00A8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<int32>                                 OtherAbilityIDs;                                   // 0x00B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_104271">();
	}
	static class UPyConfig_104271* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_104271>();
	}
};
static_assert(alignof(UPyConfig_104271) == 0x000008, "Wrong alignment on UPyConfig_104271");
static_assert(sizeof(UPyConfig_104271) == 0x0000C8, "Wrong size on UPyConfig_104271");
static_assert(offsetof(UPyConfig_104271, SpecialTag) == 0x000098, "Member 'UPyConfig_104271::SpecialTag' has a wrong offset!");
static_assert(offsetof(UPyConfig_104271, DelayEndTags) == 0x0000A8, "Member 'UPyConfig_104271::DelayEndTags' has a wrong offset!");
static_assert(offsetof(UPyConfig_104271, OtherAbilityIDs) == 0x0000B8, "Member 'UPyConfig_104271::OtherAbilityIDs' has a wrong offset!");

// PythonClass PyAbility_104271.PyAbility_104271
// 0x0048 (0x2598 - 0x2550)
class UPyAbility_104271 : public UMarvelGameplayAbility
{
public:
	int32                                         AbilityState;                                      // 0x2550(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SpiderLegState;                                    // 0x2554(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnAbilityStateChange;                              // 0x2558(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnAbilityBeginOrEnd;                               // 0x2568(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSpiderLegStateChange;                            // 0x2578(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSpiderFXBegin;                                   // 0x2588(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnAbilityStateChange__DelegateSignature();
	void OnAbilityBeginOrEnd__DelegateSignature(bool State);
	void OnSpiderLegStateChange__DelegateSignature();
	void OnSpiderFXBegin__DelegateSignature(bool bIsBeginFX);
	void BeginPlay();
	void OnRep_AbilityState();
	void UpdateAbilityState();
	void OnRep_SpiderLegState();
	void UpdateSpiderLegState();
	void K2_ActivateAbility();
	void OnDurationEnd();
	void ExitAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void NativeOnMontageEvent(const class FString& Tag);
	void MulticastNoticeFX(bool bIsBeginState);
	void MulticastNotice(bool State);
	void NativeOnMontageCompleted(const class FString& Tag);
	void NativeOnMontageInterrupted(const class FString& Tag);
	void NativeOnMontageCancelled(const class FString& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104271">();
	}
	static class UPyAbility_104271* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104271>();
	}
};
static_assert(alignof(UPyAbility_104271) == 0x000008, "Wrong alignment on UPyAbility_104271");
static_assert(sizeof(UPyAbility_104271) == 0x002598, "Wrong size on UPyAbility_104271");
static_assert(offsetof(UPyAbility_104271, AbilityState) == 0x002550, "Member 'UPyAbility_104271::AbilityState' has a wrong offset!");
static_assert(offsetof(UPyAbility_104271, SpiderLegState) == 0x002554, "Member 'UPyAbility_104271::SpiderLegState' has a wrong offset!");
static_assert(offsetof(UPyAbility_104271, OnAbilityStateChange) == 0x002558, "Member 'UPyAbility_104271::OnAbilityStateChange' has a wrong offset!");
static_assert(offsetof(UPyAbility_104271, OnAbilityBeginOrEnd) == 0x002568, "Member 'UPyAbility_104271::OnAbilityBeginOrEnd' has a wrong offset!");
static_assert(offsetof(UPyAbility_104271, OnSpiderLegStateChange) == 0x002578, "Member 'UPyAbility_104271::OnSpiderLegStateChange' has a wrong offset!");
static_assert(offsetof(UPyAbility_104271, OnSpiderFXBegin) == 0x002588, "Member 'UPyAbility_104271::OnSpiderFXBegin' has a wrong offset!");

// PythonClass PyAbility_104271.PyUIController_104271
// 0x0038 (0x0C90 - 0x0C58)
class UPyUIController_104271 final : public UUIC_Ability
{
public:
	struct FGameplayTag                           Tag_UltimateActive;                                // 0x0C58(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C64[0x4];                                      // 0x0C64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 AbilityIDs_HideWhenUltimateActive;                 // 0x0C68(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<int32>                                 AbilityIDs_ShowWhenUltimateActive;                 // 0x0C78(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                         NormalWeaponAbilityID;                             // 0x0C88(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetAbility(int32 InAbilityId, class UGameplayAbility* InAbility);
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_104271">();
	}
	static class UPyUIController_104271* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_104271>();
	}
};
static_assert(alignof(UPyUIController_104271) == 0x000008, "Wrong alignment on UPyUIController_104271");
static_assert(sizeof(UPyUIController_104271) == 0x000C90, "Wrong size on UPyUIController_104271");
static_assert(offsetof(UPyUIController_104271, Tag_UltimateActive) == 0x000C58, "Member 'UPyUIController_104271::Tag_UltimateActive' has a wrong offset!");
static_assert(offsetof(UPyUIController_104271, AbilityIDs_HideWhenUltimateActive) == 0x000C68, "Member 'UPyUIController_104271::AbilityIDs_HideWhenUltimateActive' has a wrong offset!");
static_assert(offsetof(UPyUIController_104271, AbilityIDs_ShowWhenUltimateActive) == 0x000C78, "Member 'UPyUIController_104271::AbilityIDs_ShowWhenUltimateActive' has a wrong offset!");
static_assert(offsetof(UPyUIController_104271, NormalWeaponAbilityID) == 0x000C88, "Member 'UPyUIController_104271::NormalWeaponAbilityID' has a wrong offset!");

// PythonClass PyAbility_104271.PyAbilityCue_10427101
// 0x0050 (0x0FC0 - 0x0F70)
class APyAbilityCue_10427101 final : public ACue_AbilityLoop_10427101
{
public:
	int32                                         AbilityID;                                         // 0x0F70(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F74[0x4];                                      // 0x0F74(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ShoulderMaterialName;                              // 0x0F78(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            BeginMaterialCurve;                                // 0x0F88(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            EndMaterialCurve;                                  // 0x0F90(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFXSystemAsset*                         FullyArmedFX;                                      // 0x0F98(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFXSystemAsset*                         UnFullyArmedFX;                                    // 0x0FA0(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 GunBeginMaterialName;                              // 0x0FA8(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            GunBeginMaterialCurve;                             // 0x0FB8(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void UpdateShoulderMaterial(class FName TrackName, class FName PropertyName, float OutValue);
	void UpdateBeginShoulderMaterial(class FName TrackName, class FName PropertyName, float OutValue);
	void OnBeginTimelineFinish();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbilityCue_10427101">();
	}
	static class APyAbilityCue_10427101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyAbilityCue_10427101>();
	}
};
static_assert(alignof(APyAbilityCue_10427101) == 0x000008, "Wrong alignment on APyAbilityCue_10427101");
static_assert(sizeof(APyAbilityCue_10427101) == 0x000FC0, "Wrong size on APyAbilityCue_10427101");
static_assert(offsetof(APyAbilityCue_10427101, AbilityID) == 0x000F70, "Member 'APyAbilityCue_10427101::AbilityID' has a wrong offset!");
static_assert(offsetof(APyAbilityCue_10427101, ShoulderMaterialName) == 0x000F78, "Member 'APyAbilityCue_10427101::ShoulderMaterialName' has a wrong offset!");
static_assert(offsetof(APyAbilityCue_10427101, BeginMaterialCurve) == 0x000F88, "Member 'APyAbilityCue_10427101::BeginMaterialCurve' has a wrong offset!");
static_assert(offsetof(APyAbilityCue_10427101, EndMaterialCurve) == 0x000F90, "Member 'APyAbilityCue_10427101::EndMaterialCurve' has a wrong offset!");
static_assert(offsetof(APyAbilityCue_10427101, FullyArmedFX) == 0x000F98, "Member 'APyAbilityCue_10427101::FullyArmedFX' has a wrong offset!");
static_assert(offsetof(APyAbilityCue_10427101, UnFullyArmedFX) == 0x000FA0, "Member 'APyAbilityCue_10427101::UnFullyArmedFX' has a wrong offset!");
static_assert(offsetof(APyAbilityCue_10427101, GunBeginMaterialName) == 0x000FA8, "Member 'APyAbilityCue_10427101::GunBeginMaterialName' has a wrong offset!");
static_assert(offsetof(APyAbilityCue_10427101, GunBeginMaterialCurve) == 0x000FB8, "Member 'APyAbilityCue_10427101::GunBeginMaterialCurve' has a wrong offset!");

// PythonClass PyAbility_104271.PyWidget_10427101
// 0x0000 (0x05A0 - 0x05A0)
class UPyWidget_10427101 final : public UWidget_10427101
{
public:
	void UpdateRunSpeedLine(bool bIsRunState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_10427101">();
	}
	static class UPyWidget_10427101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_10427101>();
	}
};
static_assert(alignof(UPyWidget_10427101) == 0x000008, "Wrong alignment on UPyWidget_10427101");
static_assert(sizeof(UPyWidget_10427101) == 0x0005A0, "Wrong size on UPyWidget_10427101");

}

