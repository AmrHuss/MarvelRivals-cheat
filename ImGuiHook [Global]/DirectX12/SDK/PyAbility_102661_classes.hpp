#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102661

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "Hero_1026_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102661.PyCue_AbilityLoop_10266101
// 0x0010 (0x0E10 - 0x0E00)
class APyCue_AbilityLoop_10266101 final : public AMarvelCueNotify_Ability
{
public:
	int32                                         AbilityID;                                         // 0x0E00(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimerDuration1;                                    // 0x0E04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimerDetachAfterDash;                              // 0x0E08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimerRemoveCue;                                    // 0x0E0C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_AbilityLoop_10266101">();
	}
	static class APyCue_AbilityLoop_10266101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_AbilityLoop_10266101>();
	}
};
static_assert(alignof(APyCue_AbilityLoop_10266101) == 0x000008, "Wrong alignment on APyCue_AbilityLoop_10266101");
static_assert(sizeof(APyCue_AbilityLoop_10266101) == 0x000E10, "Wrong size on APyCue_AbilityLoop_10266101");
static_assert(offsetof(APyCue_AbilityLoop_10266101, AbilityID) == 0x000E00, "Member 'APyCue_AbilityLoop_10266101::AbilityID' has a wrong offset!");
static_assert(offsetof(APyCue_AbilityLoop_10266101, TimerDuration1) == 0x000E04, "Member 'APyCue_AbilityLoop_10266101::TimerDuration1' has a wrong offset!");
static_assert(offsetof(APyCue_AbilityLoop_10266101, TimerDetachAfterDash) == 0x000E08, "Member 'APyCue_AbilityLoop_10266101::TimerDetachAfterDash' has a wrong offset!");
static_assert(offsetof(APyCue_AbilityLoop_10266101, TimerRemoveCue) == 0x000E0C, "Member 'APyCue_AbilityLoop_10266101::TimerRemoveCue' has a wrong offset!");

// PythonClass PyAbility_102661.PyConfig_102661
// 0x0B88 (0x0C20 - 0x0098)
class UPyConfig_102661 final : public UConfig_102661
{
public:
	float                                         Distance;                                          // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDashAbilityInfo                       DashInfo;                                          // 0x00A0(0x0B70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                         StampBuffID;                                       // 0x0C10(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ShieldBuffID;                                      // 0x0C14(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EatSignAudioID;                                    // 0x0C18(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_102661">();
	}
	static class UPyConfig_102661* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_102661>();
	}
};
static_assert(alignof(UPyConfig_102661) == 0x000008, "Wrong alignment on UPyConfig_102661");
static_assert(sizeof(UPyConfig_102661) == 0x000C20, "Wrong size on UPyConfig_102661");
static_assert(offsetof(UPyConfig_102661, Distance) == 0x000098, "Member 'UPyConfig_102661::Distance' has a wrong offset!");
static_assert(offsetof(UPyConfig_102661, DashInfo) == 0x0000A0, "Member 'UPyConfig_102661::DashInfo' has a wrong offset!");
static_assert(offsetof(UPyConfig_102661, StampBuffID) == 0x000C10, "Member 'UPyConfig_102661::StampBuffID' has a wrong offset!");
static_assert(offsetof(UPyConfig_102661, ShieldBuffID) == 0x000C14, "Member 'UPyConfig_102661::ShieldBuffID' has a wrong offset!");
static_assert(offsetof(UPyConfig_102661, EatSignAudioID) == 0x000C18, "Member 'UPyConfig_102661::EatSignAudioID' has a wrong offset!");

// PythonClass PyAbility_102661.PyAbility_102661
// 0x0030 (0x25B8 - 0x2588)
class UPyAbility_102661 : public UAbility_102661
{
public:
	FMulticastInlineDelegateProperty_             OnRefreshNumUpdate;                                // 0x2588(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnNeedAddShield;                                   // 0x2598(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnUpCDAudioStage;                                  // 0x25A8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnRefreshNumUpdate__DelegateSignature(int32 Num);
	void BeginPlay();
	bool CanActivate();
	void OnNeedAddShield__DelegateSignature();
	void OnUpCDAudioStage__DelegateSignature();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void NativeOnMontageCompleted(const class FString& Tag);
	void NativeOnMontageInterrupted(const class FString& Tag);
	void NativeOnMontageCancelled(const class FString& Tag);
	void BreakEventNotify();
	void MissileEventNotify();
	void PrepareRefreshCD();
	void OnDashFinish(EDashStopReason Reason);
	void PlayEatSignAudio(class AActor* TargetHero);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102661">();
	}
	static class UPyAbility_102661* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102661>();
	}
};
static_assert(alignof(UPyAbility_102661) == 0x000008, "Wrong alignment on UPyAbility_102661");
static_assert(sizeof(UPyAbility_102661) == 0x0025B8, "Wrong size on UPyAbility_102661");
static_assert(offsetof(UPyAbility_102661, OnRefreshNumUpdate) == 0x002588, "Member 'UPyAbility_102661::OnRefreshNumUpdate' has a wrong offset!");
static_assert(offsetof(UPyAbility_102661, OnNeedAddShield) == 0x002598, "Member 'UPyAbility_102661::OnNeedAddShield' has a wrong offset!");
static_assert(offsetof(UPyAbility_102661, OnUpCDAudioStage) == 0x0025A8, "Member 'UPyAbility_102661::OnUpCDAudioStage' has a wrong offset!");

// PythonClass PyAbility_102661.PyFallability_10266101
// 0x0000 (0x1260 - 0x1260)
class UPyFallability_10266101 : public UMarvelNotTreatFallAbility
{
public:
	void K2_ActivateAbility();
	void AddShield();
	void K2_OnEndAbility(bool Cancel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyFallability_10266101">();
	}
	static class UPyFallability_10266101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyFallability_10266101>();
	}
};
static_assert(alignof(UPyFallability_10266101) == 0x000008, "Wrong alignment on UPyFallability_10266101");
static_assert(sizeof(UPyFallability_10266101) == 0x001260, "Wrong size on UPyFallability_10266101");

// PythonClass PyAbility_102661.PyScope_10266101
// 0x0000 (0x16C0 - 0x16C0)
class APyScope_10266101 final : public AMarvelAbilityTargetActor_Scope
{
public:
	void TraceResults(class UObject* TraceSource, const TArray<struct FHitResult>& HitResults);
	void PlayEatSignAudio(class AActor* TargetHero);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyScope_10266101">();
	}
	static class APyScope_10266101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyScope_10266101>();
	}
};
static_assert(alignof(APyScope_10266101) == 0x000010, "Wrong alignment on APyScope_10266101");
static_assert(sizeof(APyScope_10266101) == 0x0016C0, "Wrong size on APyScope_10266101");

// PythonClass PyAbility_102661.PyUIController_102661
// 0x0020 (0x0C78 - 0x0C58)
class UPyUIController_102661 final : public UUIC_Ability
{
public:
	class UAkAudioEvent*                          Audio_CooldownEnd_Stage_One;                       // 0x0C58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          Audio_CooldownEnd_Stage_Two;                       // 0x0C60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          Audio_CooldownEnd_Stage_Three;                     // 0x0C68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Audio_CooldownEnd_ResetStage_Interval_Time;        // 0x0C70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInit();
	void OnDestruct();
	void OnUpCDAudioStage();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_102661">();
	}
	static class UPyUIController_102661* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_102661>();
	}
};
static_assert(alignof(UPyUIController_102661) == 0x000008, "Wrong alignment on UPyUIController_102661");
static_assert(sizeof(UPyUIController_102661) == 0x000C78, "Wrong size on UPyUIController_102661");
static_assert(offsetof(UPyUIController_102661, Audio_CooldownEnd_Stage_One) == 0x000C58, "Member 'UPyUIController_102661::Audio_CooldownEnd_Stage_One' has a wrong offset!");
static_assert(offsetof(UPyUIController_102661, Audio_CooldownEnd_Stage_Two) == 0x000C60, "Member 'UPyUIController_102661::Audio_CooldownEnd_Stage_Two' has a wrong offset!");
static_assert(offsetof(UPyUIController_102661, Audio_CooldownEnd_Stage_Three) == 0x000C68, "Member 'UPyUIController_102661::Audio_CooldownEnd_Stage_Three' has a wrong offset!");
static_assert(offsetof(UPyUIController_102661, Audio_CooldownEnd_ResetStage_Interval_Time) == 0x000C70, "Member 'UPyUIController_102661::Audio_CooldownEnd_ResetStage_Interval_Time' has a wrong offset!");

}

