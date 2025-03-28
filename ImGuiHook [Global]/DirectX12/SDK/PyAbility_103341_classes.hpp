#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103341

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "Hero_1033_structs.hpp"
#include "Hero_1033_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_103341.PyConfig_103341
// 0x0028 (0x00C0 - 0x0098)
class UPyConfig_103341 final : public UMarvelAbilityConfig
{
public:
	struct FStateChangedTaskParam                 InputConfig;                                       // 0x0098(0x0028)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_103341">();
	}
	static class UPyConfig_103341* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_103341>();
	}
};
static_assert(alignof(UPyConfig_103341) == 0x000008, "Wrong alignment on UPyConfig_103341");
static_assert(sizeof(UPyConfig_103341) == 0x0000C0, "Wrong size on UPyConfig_103341");
static_assert(offsetof(UPyConfig_103341, InputConfig) == 0x000098, "Member 'UPyConfig_103341::InputConfig' has a wrong offset!");

// PythonClass PyAbility_103341.PyProjectile_10334101
// 0x0010 (0x2F70 - 0x2F60)
class APyProjectile_10334101 final : public AMarvelAbilityTargetActor_Projectile
{
public:
	FMulticastInlineDelegateProperty_             OnProjectileReachMaxDistance;                      // 0x2F60(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void K2_OnProcessHit(const struct FHitResult& Hit);
	void K2_OnFlyOverMaxDistance(const struct FHitResult& Hit);
	void K2_OnEndAgentTask();
	void OnProjectileReachMaxDistance__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyProjectile_10334101">();
	}
	static class APyProjectile_10334101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyProjectile_10334101>();
	}
};
static_assert(alignof(APyProjectile_10334101) == 0x000010, "Wrong alignment on APyProjectile_10334101");
static_assert(sizeof(APyProjectile_10334101) == 0x002F70, "Wrong size on APyProjectile_10334101");
static_assert(offsetof(APyProjectile_10334101, OnProjectileReachMaxDistance) == 0x002F60, "Member 'APyProjectile_10334101::OnProjectileReachMaxDistance' has a wrong offset!");

// PythonClass PyAbility_103341.PyCue_Ability_Loop_10334102
// 0x0000 (0x0E00 - 0x0E00)
class APyCue_Ability_Loop_10334102 final : public AMarvelCueNotify_Ability
{
public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10334102">();
	}
	static class APyCue_Ability_Loop_10334102* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10334102>();
	}
};
static_assert(alignof(APyCue_Ability_Loop_10334102) == 0x000008, "Wrong alignment on APyCue_Ability_Loop_10334102");
static_assert(sizeof(APyCue_Ability_Loop_10334102) == 0x000E00, "Wrong size on APyCue_Ability_Loop_10334102");

// PythonClass PyAbility_103341.PyAbility_103341
// 0x0000 (0x2550 - 0x2550)
class UPyAbility_103341 : public UAbility_103341
{
public:
	void K2_ActivateAbility();
	void SetRunState(EBlackWidow_RunState RunState);
	void SetCanActivateJump(bool bCanActivateJump);
	void BindRunInput();
	void OnRunStateStart(float StateIntervalTime);
	void OnRunReleased(float StateIntervalTime);
	void ShiftReleased();
	void BindJumpInput();
	void OnJumpPressed(float Time);
	void EnhanceJump();
	void JumpToEndSection();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103341">();
	}
	static class UPyAbility_103341* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103341>();
	}
};
static_assert(alignof(UPyAbility_103341) == 0x000008, "Wrong alignment on UPyAbility_103341");
static_assert(sizeof(UPyAbility_103341) == 0x002550, "Wrong size on UPyAbility_103341");

// PythonClass PyAbility_103341.PyCue_Projectile_Loop_10334101
// 0x0000 (0x0D80 - 0x0D80)
class APyCue_Projectile_Loop_10334101 final : public ACueProjectileLoop_1033_RopeHook
{
public:
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnExecuteFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnRemoveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnTagUpdated(const struct FGameplayTag& Tag, bool Exist);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Projectile_Loop_10334101">();
	}
	static class APyCue_Projectile_Loop_10334101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Projectile_Loop_10334101>();
	}
};
static_assert(alignof(APyCue_Projectile_Loop_10334101) == 0x000008, "Wrong alignment on APyCue_Projectile_Loop_10334101");
static_assert(sizeof(APyCue_Projectile_Loop_10334101) == 0x000D80, "Wrong size on APyCue_Projectile_Loop_10334101");

}

