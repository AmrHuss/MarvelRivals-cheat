#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102921

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Marvel_classes.hpp"
#include "Hero_1029_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102921.PyConfig_102921
// 0x0028 (0x00C0 - 0x0098)
class UPyConfig_102921 final : public UMarvelAbilityConfig
{
public:
	float                                         MaxAccumulateTime;                                 // 0x0098(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            AccumulateCurve;                                   // 0x00A0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                           ProjectileSizeCurve;                               // 0x00A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MatainFullStateTime;                               // 0x00B0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           FullAccumuCue;                                     // 0x00B4(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_102921">();
	}
	static class UPyConfig_102921* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_102921>();
	}
};
static_assert(alignof(UPyConfig_102921) == 0x000008, "Wrong alignment on UPyConfig_102921");
static_assert(sizeof(UPyConfig_102921) == 0x0000C0, "Wrong size on UPyConfig_102921");
static_assert(offsetof(UPyConfig_102921, MaxAccumulateTime) == 0x000098, "Member 'UPyConfig_102921::MaxAccumulateTime' has a wrong offset!");
static_assert(offsetof(UPyConfig_102921, AccumulateCurve) == 0x0000A0, "Member 'UPyConfig_102921::AccumulateCurve' has a wrong offset!");
static_assert(offsetof(UPyConfig_102921, ProjectileSizeCurve) == 0x0000A8, "Member 'UPyConfig_102921::ProjectileSizeCurve' has a wrong offset!");
static_assert(offsetof(UPyConfig_102921, MatainFullStateTime) == 0x0000B0, "Member 'UPyConfig_102921::MatainFullStateTime' has a wrong offset!");
static_assert(offsetof(UPyConfig_102921, FullAccumuCue) == 0x0000B4, "Member 'UPyConfig_102921::FullAccumuCue' has a wrong offset!");

// PythonClass PyAbility_102921.PyCue_Projectile_Loop_10292101
// 0x0040 (0x0DA0 - 0x0D60)
class APyCue_Projectile_Loop_10292101 final : public AMarvelCueNotify_Projectile
{
public:
	class UCurveVector*                           ChiBladeFXSizeCurve;                               // 0x0D60(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bControlScale;                                     // 0x0D68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bControlLoc;                                       // 0x0D69(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D6A[0x2];                                      // 0x0D6A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimerInterval;                                     // 0x0D6C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            ScaleCurve;                                        // 0x0D70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            LocCurve;                                          // 0x0D78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScaleLength;                                       // 0x0D80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LocLength;                                         // 0x0D84(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LoopFxRelativeLoc;                                 // 0x0D88(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnRemoveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Projectile_Loop_10292101">();
	}
	static class APyCue_Projectile_Loop_10292101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Projectile_Loop_10292101>();
	}
};
static_assert(alignof(APyCue_Projectile_Loop_10292101) == 0x000008, "Wrong alignment on APyCue_Projectile_Loop_10292101");
static_assert(sizeof(APyCue_Projectile_Loop_10292101) == 0x000DA0, "Wrong size on APyCue_Projectile_Loop_10292101");
static_assert(offsetof(APyCue_Projectile_Loop_10292101, ChiBladeFXSizeCurve) == 0x000D60, "Member 'APyCue_Projectile_Loop_10292101::ChiBladeFXSizeCurve' has a wrong offset!");
static_assert(offsetof(APyCue_Projectile_Loop_10292101, bControlScale) == 0x000D68, "Member 'APyCue_Projectile_Loop_10292101::bControlScale' has a wrong offset!");
static_assert(offsetof(APyCue_Projectile_Loop_10292101, bControlLoc) == 0x000D69, "Member 'APyCue_Projectile_Loop_10292101::bControlLoc' has a wrong offset!");
static_assert(offsetof(APyCue_Projectile_Loop_10292101, TimerInterval) == 0x000D6C, "Member 'APyCue_Projectile_Loop_10292101::TimerInterval' has a wrong offset!");
static_assert(offsetof(APyCue_Projectile_Loop_10292101, ScaleCurve) == 0x000D70, "Member 'APyCue_Projectile_Loop_10292101::ScaleCurve' has a wrong offset!");
static_assert(offsetof(APyCue_Projectile_Loop_10292101, LocCurve) == 0x000D78, "Member 'APyCue_Projectile_Loop_10292101::LocCurve' has a wrong offset!");
static_assert(offsetof(APyCue_Projectile_Loop_10292101, ScaleLength) == 0x000D80, "Member 'APyCue_Projectile_Loop_10292101::ScaleLength' has a wrong offset!");
static_assert(offsetof(APyCue_Projectile_Loop_10292101, LocLength) == 0x000D84, "Member 'APyCue_Projectile_Loop_10292101::LocLength' has a wrong offset!");
static_assert(offsetof(APyCue_Projectile_Loop_10292101, LoopFxRelativeLoc) == 0x000D88, "Member 'APyCue_Projectile_Loop_10292101::LoopFxRelativeLoc' has a wrong offset!");

// PythonClass PyAbility_102921.PyAbility_102921
// 0x0000 (0x2568 - 0x2568)
class UPyAbility_102921 : public UMarvelAbility_LongPressTrigger
{
public:
	void BeginPlay();
	void K2_ActivateAbility();
	void K2_TriggerGameplay(float HoldTime);
	void K2_OnGatherCallback(int32 GatherIdx);
	void K2_OnEndAbility(bool bWasCancelled);
	void NativeOnMontageCompleted(const class FString& Tag);
	void NativeOnMontageCancelled(const class FString& Tag);
	void NativeOnMontageInterrupted(const class FString& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102921">();
	}
	static class UPyAbility_102921* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102921>();
	}
};
static_assert(alignof(UPyAbility_102921) == 0x000008, "Wrong alignment on UPyAbility_102921");
static_assert(sizeof(UPyAbility_102921) == 0x002568, "Wrong size on UPyAbility_102921");

// PythonClass PyAbility_102921.PyProjectile_10292101
// 0x0010 (0x2F70 - 0x2F60)
class APyProjectile_10292101 final : public AProjectile_10292101
{
public:
	float                                         AccumulateTime;                                    // 0x2F60(0x0004)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void K2_OnInitializeData();
	float GetAccumulateTime();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyProjectile_10292101">();
	}
	static class APyProjectile_10292101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyProjectile_10292101>();
	}
};
static_assert(alignof(APyProjectile_10292101) == 0x000010, "Wrong alignment on APyProjectile_10292101");
static_assert(sizeof(APyProjectile_10292101) == 0x002F70, "Wrong size on APyProjectile_10292101");
static_assert(offsetof(APyProjectile_10292101, AccumulateTime) == 0x002F60, "Member 'APyProjectile_10292101::AccumulateTime' has a wrong offset!");

// PythonClass PyAbility_102921.PyUIController_102921
// 0x0000 (0x0C68 - 0x0C68)
class UPyUIController_102921 final : public UUIController_102921
{
public:
	void OnInit();
	void OnDestruct();
	void OnServerTimeDeltaChanged();
	void UpdateReticle(float Radius);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_102921">();
	}
	static class UPyUIController_102921* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_102921>();
	}
};
static_assert(alignof(UPyUIController_102921) == 0x000008, "Wrong alignment on UPyUIController_102921");
static_assert(sizeof(UPyUIController_102921) == 0x000C68, "Wrong size on UPyUIController_102921");

// PythonClass PyAbility_102921.PyCue_Ability_Loop_10292101
// 0x0038 (0x0E38 - 0x0E00)
class APyCue_Ability_Loop_10292101 final : public AMarvelCueNotify_Ability
{
public:
	int32                                         AbilityID;                                         // 0x0E00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          NeedHandleDissolve2WhenMaxAccumulate;              // 0x0E04(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E05[0x3];                                      // 0x0E05(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimerInterval;                                     // 0x0E08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E0C[0x4];                                      // 0x0E0C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            DissolveCurve;                                     // 0x0E10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            Dissolve2Curve;                                    // 0x0E18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DissolveLength;                                    // 0x0E20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Dissolve2Length;                                   // 0x0E24(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ParamName;                                         // 0x0E28(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnRemoveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnAbilityGatherStateChange(bool IsStart);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10292101">();
	}
	static class APyCue_Ability_Loop_10292101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10292101>();
	}
};
static_assert(alignof(APyCue_Ability_Loop_10292101) == 0x000008, "Wrong alignment on APyCue_Ability_Loop_10292101");
static_assert(sizeof(APyCue_Ability_Loop_10292101) == 0x000E38, "Wrong size on APyCue_Ability_Loop_10292101");
static_assert(offsetof(APyCue_Ability_Loop_10292101, AbilityID) == 0x000E00, "Member 'APyCue_Ability_Loop_10292101::AbilityID' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10292101, NeedHandleDissolve2WhenMaxAccumulate) == 0x000E04, "Member 'APyCue_Ability_Loop_10292101::NeedHandleDissolve2WhenMaxAccumulate' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10292101, TimerInterval) == 0x000E08, "Member 'APyCue_Ability_Loop_10292101::TimerInterval' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10292101, DissolveCurve) == 0x000E10, "Member 'APyCue_Ability_Loop_10292101::DissolveCurve' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10292101, Dissolve2Curve) == 0x000E18, "Member 'APyCue_Ability_Loop_10292101::Dissolve2Curve' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10292101, DissolveLength) == 0x000E20, "Member 'APyCue_Ability_Loop_10292101::DissolveLength' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10292101, Dissolve2Length) == 0x000E24, "Member 'APyCue_Ability_Loop_10292101::Dissolve2Length' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10292101, ParamName) == 0x000E28, "Member 'APyCue_Ability_Loop_10292101::ParamName' has a wrong offset!");

}
