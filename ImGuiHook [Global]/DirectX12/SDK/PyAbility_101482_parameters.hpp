#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101482

#include "Basic.hpp"

#include "Hero_1014_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_101482.PyAbility_101482.ParentAbilityChange
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101482_ParentAbilityChange final
{
public:
	EState_101481                                 State;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101482_ParentAbilityChange) == 0x000001, "Wrong alignment on PyAbility_101482_ParentAbilityChange");
static_assert(sizeof(PyAbility_101482_ParentAbilityChange) == 0x000001, "Wrong size on PyAbility_101482_ParentAbilityChange");
static_assert(offsetof(PyAbility_101482_ParentAbilityChange, State) == 0x000000, "Member 'PyAbility_101482_ParentAbilityChange::State' has a wrong offset!");

// PythonFunction PyAbility_101482.PyAbility_101482.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101482_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101482_NativeOnMontageCompleted) == 0x000008, "Wrong alignment on PyAbility_101482_NativeOnMontageCompleted");
static_assert(sizeof(PyAbility_101482_NativeOnMontageCompleted) == 0x000010, "Wrong size on PyAbility_101482_NativeOnMontageCompleted");
static_assert(offsetof(PyAbility_101482_NativeOnMontageCompleted, Tag) == 0x000000, "Member 'PyAbility_101482_NativeOnMontageCompleted::Tag' has a wrong offset!");

// PythonFunction PyAbility_101482.PyAbility_101482.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101482_K2_OnEndAbility final
{
public:
	bool                                          Cancel;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101482_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_101482_K2_OnEndAbility");
static_assert(sizeof(PyAbility_101482_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_101482_K2_OnEndAbility");
static_assert(offsetof(PyAbility_101482_K2_OnEndAbility, Cancel) == 0x000000, "Member 'PyAbility_101482_K2_OnEndAbility::Cancel' has a wrong offset!");

// PythonFunction PyAbility_101482.PyCue_Ability_Loop_101482.WhileActive
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Ability_Loop_101482_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Ability_Loop_101482_WhileActive) == 0x000008, "Wrong alignment on PyCue_Ability_Loop_101482_WhileActive");
static_assert(sizeof(PyCue_Ability_Loop_101482_WhileActive) == 0x0001C8, "Wrong size on PyCue_Ability_Loop_101482_WhileActive");
static_assert(offsetof(PyCue_Ability_Loop_101482_WhileActive, MyTarget) == 0x000000, "Member 'PyCue_Ability_Loop_101482_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Loop_101482_WhileActive, Parameters) == 0x000008, "Member 'PyCue_Ability_Loop_101482_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Loop_101482_WhileActive, ReturnValue) == 0x0001C0, "Member 'PyCue_Ability_Loop_101482_WhileActive::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_101482.PyCue_Ability_Loop_101482.OnRemove
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Ability_Loop_101482_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Ability_Loop_101482_OnRemove) == 0x000008, "Wrong alignment on PyCue_Ability_Loop_101482_OnRemove");
static_assert(sizeof(PyCue_Ability_Loop_101482_OnRemove) == 0x0001C8, "Wrong size on PyCue_Ability_Loop_101482_OnRemove");
static_assert(offsetof(PyCue_Ability_Loop_101482_OnRemove, MyTarget) == 0x000000, "Member 'PyCue_Ability_Loop_101482_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Loop_101482_OnRemove, Parameters) == 0x000008, "Member 'PyCue_Ability_Loop_101482_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Loop_101482_OnRemove, ReturnValue) == 0x0001C0, "Member 'PyCue_Ability_Loop_101482_OnRemove::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_101482.PyCue_Ability_Loop_101482.ToggleGunMaterial
// 0x0001 (0x0001 - 0x0000)
struct PyCue_Ability_Loop_101482_ToggleGunMaterial final
{
public:
	bool                                          WarmUp;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Ability_Loop_101482_ToggleGunMaterial) == 0x000001, "Wrong alignment on PyCue_Ability_Loop_101482_ToggleGunMaterial");
static_assert(sizeof(PyCue_Ability_Loop_101482_ToggleGunMaterial) == 0x000001, "Wrong size on PyCue_Ability_Loop_101482_ToggleGunMaterial");
static_assert(offsetof(PyCue_Ability_Loop_101482_ToggleGunMaterial, WarmUp) == 0x000000, "Member 'PyCue_Ability_Loop_101482_ToggleGunMaterial::WarmUp' has a wrong offset!");

}

