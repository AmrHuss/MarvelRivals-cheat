#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102941

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_102941.PyCue_Ability_Instant_10294101.OnExecuteFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Instant_10294101_OnExecuteFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Ability_Instant_10294101_OnExecuteFX) == 0x000008, "Wrong alignment on PyCue_Ability_Instant_10294101_OnExecuteFX");
static_assert(sizeof(PyCue_Ability_Instant_10294101_OnExecuteFX) == 0x0001C0, "Wrong size on PyCue_Ability_Instant_10294101_OnExecuteFX");
static_assert(offsetof(PyCue_Ability_Instant_10294101_OnExecuteFX, MyTarget) == 0x000000, "Member 'PyCue_Ability_Instant_10294101_OnExecuteFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Instant_10294101_OnExecuteFX, Parameters) == 0x000008, "Member 'PyCue_Ability_Instant_10294101_OnExecuteFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_102941.PyAbility_102941.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102941_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102941_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_102941_K2_OnEndAbility");
static_assert(sizeof(PyAbility_102941_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_102941_K2_OnEndAbility");
static_assert(offsetof(PyAbility_102941_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_102941_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// PythonFunction PyAbility_102941.PyAbility_102941.NativeOnMontageEvent
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102941_NativeOnMontageEvent final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102941_NativeOnMontageEvent) == 0x000008, "Wrong alignment on PyAbility_102941_NativeOnMontageEvent");
static_assert(sizeof(PyAbility_102941_NativeOnMontageEvent) == 0x000010, "Wrong size on PyAbility_102941_NativeOnMontageEvent");
static_assert(offsetof(PyAbility_102941_NativeOnMontageEvent, Tag) == 0x000000, "Member 'PyAbility_102941_NativeOnMontageEvent::Tag' has a wrong offset!");

// PythonFunction PyAbility_102941.PyAbility_102941.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102941_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102941_NativeOnMontageCancelled) == 0x000008, "Wrong alignment on PyAbility_102941_NativeOnMontageCancelled");
static_assert(sizeof(PyAbility_102941_NativeOnMontageCancelled) == 0x000010, "Wrong size on PyAbility_102941_NativeOnMontageCancelled");
static_assert(offsetof(PyAbility_102941_NativeOnMontageCancelled, Tag) == 0x000000, "Member 'PyAbility_102941_NativeOnMontageCancelled::Tag' has a wrong offset!");

}

