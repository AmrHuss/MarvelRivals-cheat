#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102921

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_102921.PyCue_Projectile_Loop_10292101.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Projectile_Loop_10292101_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Projectile_Loop_10292101_WhileActiveFX) == 0x000008, "Wrong alignment on PyCue_Projectile_Loop_10292101_WhileActiveFX");
static_assert(sizeof(PyCue_Projectile_Loop_10292101_WhileActiveFX) == 0x0001C0, "Wrong size on PyCue_Projectile_Loop_10292101_WhileActiveFX");
static_assert(offsetof(PyCue_Projectile_Loop_10292101_WhileActiveFX, MyTarget) == 0x000000, "Member 'PyCue_Projectile_Loop_10292101_WhileActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_10292101_WhileActiveFX, Parameters) == 0x000008, "Member 'PyCue_Projectile_Loop_10292101_WhileActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_102921.PyCue_Projectile_Loop_10292101.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Projectile_Loop_10292101_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Projectile_Loop_10292101_OnRemoveFX) == 0x000008, "Wrong alignment on PyCue_Projectile_Loop_10292101_OnRemoveFX");
static_assert(sizeof(PyCue_Projectile_Loop_10292101_OnRemoveFX) == 0x0001C0, "Wrong size on PyCue_Projectile_Loop_10292101_OnRemoveFX");
static_assert(offsetof(PyCue_Projectile_Loop_10292101_OnRemoveFX, MyTarget) == 0x000000, "Member 'PyCue_Projectile_Loop_10292101_OnRemoveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_10292101_OnRemoveFX, Parameters) == 0x000008, "Member 'PyCue_Projectile_Loop_10292101_OnRemoveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_102921.PyAbility_102921.K2_TriggerGameplay
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_102921_K2_TriggerGameplay final
{
public:
	float                                         HoldTime;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102921_K2_TriggerGameplay) == 0x000004, "Wrong alignment on PyAbility_102921_K2_TriggerGameplay");
static_assert(sizeof(PyAbility_102921_K2_TriggerGameplay) == 0x000004, "Wrong size on PyAbility_102921_K2_TriggerGameplay");
static_assert(offsetof(PyAbility_102921_K2_TriggerGameplay, HoldTime) == 0x000000, "Member 'PyAbility_102921_K2_TriggerGameplay::HoldTime' has a wrong offset!");

// PythonFunction PyAbility_102921.PyAbility_102921.K2_OnGatherCallback
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_102921_K2_OnGatherCallback final
{
public:
	int32                                         GatherIdx;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102921_K2_OnGatherCallback) == 0x000004, "Wrong alignment on PyAbility_102921_K2_OnGatherCallback");
static_assert(sizeof(PyAbility_102921_K2_OnGatherCallback) == 0x000004, "Wrong size on PyAbility_102921_K2_OnGatherCallback");
static_assert(offsetof(PyAbility_102921_K2_OnGatherCallback, GatherIdx) == 0x000000, "Member 'PyAbility_102921_K2_OnGatherCallback::GatherIdx' has a wrong offset!");

// PythonFunction PyAbility_102921.PyAbility_102921.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102921_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102921_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_102921_K2_OnEndAbility");
static_assert(sizeof(PyAbility_102921_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_102921_K2_OnEndAbility");
static_assert(offsetof(PyAbility_102921_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_102921_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// PythonFunction PyAbility_102921.PyAbility_102921.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102921_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102921_NativeOnMontageCompleted) == 0x000008, "Wrong alignment on PyAbility_102921_NativeOnMontageCompleted");
static_assert(sizeof(PyAbility_102921_NativeOnMontageCompleted) == 0x000010, "Wrong size on PyAbility_102921_NativeOnMontageCompleted");
static_assert(offsetof(PyAbility_102921_NativeOnMontageCompleted, Tag) == 0x000000, "Member 'PyAbility_102921_NativeOnMontageCompleted::Tag' has a wrong offset!");

// PythonFunction PyAbility_102921.PyAbility_102921.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102921_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102921_NativeOnMontageCancelled) == 0x000008, "Wrong alignment on PyAbility_102921_NativeOnMontageCancelled");
static_assert(sizeof(PyAbility_102921_NativeOnMontageCancelled) == 0x000010, "Wrong size on PyAbility_102921_NativeOnMontageCancelled");
static_assert(offsetof(PyAbility_102921_NativeOnMontageCancelled, Tag) == 0x000000, "Member 'PyAbility_102921_NativeOnMontageCancelled::Tag' has a wrong offset!");

// PythonFunction PyAbility_102921.PyAbility_102921.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102921_NativeOnMontageInterrupted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102921_NativeOnMontageInterrupted) == 0x000008, "Wrong alignment on PyAbility_102921_NativeOnMontageInterrupted");
static_assert(sizeof(PyAbility_102921_NativeOnMontageInterrupted) == 0x000010, "Wrong size on PyAbility_102921_NativeOnMontageInterrupted");
static_assert(offsetof(PyAbility_102921_NativeOnMontageInterrupted, Tag) == 0x000000, "Member 'PyAbility_102921_NativeOnMontageInterrupted::Tag' has a wrong offset!");

// PythonFunction PyAbility_102921.PyProjectile_10292101.GetAccumulateTime
// 0x0004 (0x0004 - 0x0000)
struct PyProjectile_10292101_GetAccumulateTime final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyProjectile_10292101_GetAccumulateTime) == 0x000004, "Wrong alignment on PyProjectile_10292101_GetAccumulateTime");
static_assert(sizeof(PyProjectile_10292101_GetAccumulateTime) == 0x000004, "Wrong size on PyProjectile_10292101_GetAccumulateTime");
static_assert(offsetof(PyProjectile_10292101_GetAccumulateTime, ReturnValue) == 0x000000, "Member 'PyProjectile_10292101_GetAccumulateTime::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_102921.PyUIController_102921.UpdateReticle
// 0x0004 (0x0004 - 0x0000)
struct PyUIController_102921_UpdateReticle final
{
public:
	float                                         Radius;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_102921_UpdateReticle) == 0x000004, "Wrong alignment on PyUIController_102921_UpdateReticle");
static_assert(sizeof(PyUIController_102921_UpdateReticle) == 0x000004, "Wrong size on PyUIController_102921_UpdateReticle");
static_assert(offsetof(PyUIController_102921_UpdateReticle, Radius) == 0x000000, "Member 'PyUIController_102921_UpdateReticle::Radius' has a wrong offset!");

// PythonFunction PyAbility_102921.PyCue_Ability_Loop_10292101.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10292101_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Ability_Loop_10292101_WhileActiveFX) == 0x000008, "Wrong alignment on PyCue_Ability_Loop_10292101_WhileActiveFX");
static_assert(sizeof(PyCue_Ability_Loop_10292101_WhileActiveFX) == 0x0001C0, "Wrong size on PyCue_Ability_Loop_10292101_WhileActiveFX");
static_assert(offsetof(PyCue_Ability_Loop_10292101_WhileActiveFX, MyTarget) == 0x000000, "Member 'PyCue_Ability_Loop_10292101_WhileActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Loop_10292101_WhileActiveFX, Parameters) == 0x000008, "Member 'PyCue_Ability_Loop_10292101_WhileActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_102921.PyCue_Ability_Loop_10292101.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10292101_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Ability_Loop_10292101_OnRemoveFX) == 0x000008, "Wrong alignment on PyCue_Ability_Loop_10292101_OnRemoveFX");
static_assert(sizeof(PyCue_Ability_Loop_10292101_OnRemoveFX) == 0x0001C0, "Wrong size on PyCue_Ability_Loop_10292101_OnRemoveFX");
static_assert(offsetof(PyCue_Ability_Loop_10292101_OnRemoveFX, MyTarget) == 0x000000, "Member 'PyCue_Ability_Loop_10292101_OnRemoveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Loop_10292101_OnRemoveFX, Parameters) == 0x000008, "Member 'PyCue_Ability_Loop_10292101_OnRemoveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_102921.PyCue_Ability_Loop_10292101.OnAbilityGatherStateChange
// 0x0001 (0x0001 - 0x0000)
struct PyCue_Ability_Loop_10292101_OnAbilityGatherStateChange final
{
public:
	bool                                          IsStart;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Ability_Loop_10292101_OnAbilityGatherStateChange) == 0x000001, "Wrong alignment on PyCue_Ability_Loop_10292101_OnAbilityGatherStateChange");
static_assert(sizeof(PyCue_Ability_Loop_10292101_OnAbilityGatherStateChange) == 0x000001, "Wrong size on PyCue_Ability_Loop_10292101_OnAbilityGatherStateChange");
static_assert(offsetof(PyCue_Ability_Loop_10292101_OnAbilityGatherStateChange, IsStart) == 0x000000, "Member 'PyCue_Ability_Loop_10292101_OnAbilityGatherStateChange::IsStart' has a wrong offset!");

}
