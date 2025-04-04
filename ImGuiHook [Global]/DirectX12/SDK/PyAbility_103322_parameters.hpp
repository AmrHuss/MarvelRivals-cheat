#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103322

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_103322.PyAbility_103322.OnActivateFailed
// 0x0068 (0x0068 - 0x0000)
struct PyAbility_103322_OnActivateFailed final
{
public:
	struct FGameplayTagContainer                  FailReason;                                        // 0x0000(0x0068)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyAbility_103322_OnActivateFailed) == 0x000008, "Wrong alignment on PyAbility_103322_OnActivateFailed");
static_assert(sizeof(PyAbility_103322_OnActivateFailed) == 0x000068, "Wrong size on PyAbility_103322_OnActivateFailed");
static_assert(offsetof(PyAbility_103322_OnActivateFailed, FailReason) == 0x000000, "Member 'PyAbility_103322_OnActivateFailed::FailReason' has a wrong offset!");

// PythonFunction PyAbility_103322.PyAbility_103322.K2_OnClientActivateAbilityRejected
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103322_K2_OnClientActivateAbilityRejected final
{
public:
	bool                                          bIsCurrentActivation;                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103322_K2_OnClientActivateAbilityRejected) == 0x000001, "Wrong alignment on PyAbility_103322_K2_OnClientActivateAbilityRejected");
static_assert(sizeof(PyAbility_103322_K2_OnClientActivateAbilityRejected) == 0x000001, "Wrong size on PyAbility_103322_K2_OnClientActivateAbilityRejected");
static_assert(offsetof(PyAbility_103322_K2_OnClientActivateAbilityRejected, bIsCurrentActivation) == 0x000000, "Member 'PyAbility_103322_K2_OnClientActivateAbilityRejected::bIsCurrentActivation' has a wrong offset!");

// PythonFunction PyAbility_103322.PyAbility_103322.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103322_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103322_CanActivate) == 0x000001, "Wrong alignment on PyAbility_103322_CanActivate");
static_assert(sizeof(PyAbility_103322_CanActivate) == 0x000001, "Wrong size on PyAbility_103322_CanActivate");
static_assert(offsetof(PyAbility_103322_CanActivate, ReturnValue) == 0x000000, "Member 'PyAbility_103322_CanActivate::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_103322.PyAbility_103322.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_103322_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103322_NativeOnMontageCompleted) == 0x000008, "Wrong alignment on PyAbility_103322_NativeOnMontageCompleted");
static_assert(sizeof(PyAbility_103322_NativeOnMontageCompleted) == 0x000010, "Wrong size on PyAbility_103322_NativeOnMontageCompleted");
static_assert(offsetof(PyAbility_103322_NativeOnMontageCompleted, Tag) == 0x000000, "Member 'PyAbility_103322_NativeOnMontageCompleted::Tag' has a wrong offset!");

// PythonFunction PyAbility_103322.PyAbility_103322.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103322_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103322_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_103322_K2_OnEndAbility");
static_assert(sizeof(PyAbility_103322_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_103322_K2_OnEndAbility");
static_assert(offsetof(PyAbility_103322_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_103322_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

