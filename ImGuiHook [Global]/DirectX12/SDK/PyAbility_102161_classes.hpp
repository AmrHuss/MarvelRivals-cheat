#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102161

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102161.PyAbility_102161
// 0x0000 (0x2558 - 0x2558)
class UPyAbility_102161 : public UAbility_108
{
public:
	void BeginPlay();
	void MissileEventNotify();
	void K2_OnEndAbility(bool Cancel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102161">();
	}
	static class UPyAbility_102161* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102161>();
	}
};
static_assert(alignof(UPyAbility_102161) == 0x000008, "Wrong alignment on UPyAbility_102161");
static_assert(sizeof(UPyAbility_102161) == 0x002558, "Wrong size on UPyAbility_102161");

// PythonClass PyAbility_102161.PyCue_Projectile_Loop_10216101
// 0x0020 (0x0D80 - 0x0D60)
class APyCue_Projectile_Loop_10216101 final : public AMarvelCueNotify_Projectile
{
public:
	float                                         SonicBoomFxLen;                                    // 0x0D60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D64[0x4];                                      // 0x0D64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         ReleaseFX;                                         // 0x0D68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            FXScaleCurve;                                      // 0x0D70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimerInterval;                                     // 0x0D78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DelayTimeToPlayFloorEffect;                        // 0x0D7C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void TimeToPlayFloorDustEffect();
	void OnRemoveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Projectile_Loop_10216101">();
	}
	static class APyCue_Projectile_Loop_10216101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Projectile_Loop_10216101>();
	}
};
static_assert(alignof(APyCue_Projectile_Loop_10216101) == 0x000008, "Wrong alignment on APyCue_Projectile_Loop_10216101");
static_assert(sizeof(APyCue_Projectile_Loop_10216101) == 0x000D80, "Wrong size on APyCue_Projectile_Loop_10216101");
static_assert(offsetof(APyCue_Projectile_Loop_10216101, SonicBoomFxLen) == 0x000D60, "Member 'APyCue_Projectile_Loop_10216101::SonicBoomFxLen' has a wrong offset!");
static_assert(offsetof(APyCue_Projectile_Loop_10216101, ReleaseFX) == 0x000D68, "Member 'APyCue_Projectile_Loop_10216101::ReleaseFX' has a wrong offset!");
static_assert(offsetof(APyCue_Projectile_Loop_10216101, FXScaleCurve) == 0x000D70, "Member 'APyCue_Projectile_Loop_10216101::FXScaleCurve' has a wrong offset!");
static_assert(offsetof(APyCue_Projectile_Loop_10216101, TimerInterval) == 0x000D78, "Member 'APyCue_Projectile_Loop_10216101::TimerInterval' has a wrong offset!");
static_assert(offsetof(APyCue_Projectile_Loop_10216101, DelayTimeToPlayFloorEffect) == 0x000D7C, "Member 'APyCue_Projectile_Loop_10216101::DelayTimeToPlayFloorEffect' has a wrong offset!");

}
