#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104221

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_104221.PyBuffCue_10422101.WhileActive
// 0x01C8 (0x01C8 - 0x0000)
struct PyBuffCue_10422101_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyBuffCue_10422101_WhileActive) == 0x000008, "Wrong alignment on PyBuffCue_10422101_WhileActive");
static_assert(sizeof(PyBuffCue_10422101_WhileActive) == 0x0001C8, "Wrong size on PyBuffCue_10422101_WhileActive");
static_assert(offsetof(PyBuffCue_10422101_WhileActive, MyTarget) == 0x000000, "Member 'PyBuffCue_10422101_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(PyBuffCue_10422101_WhileActive, Parameters) == 0x000008, "Member 'PyBuffCue_10422101_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(PyBuffCue_10422101_WhileActive, ReturnValue) == 0x0001C0, "Member 'PyBuffCue_10422101_WhileActive::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_104221.PyBuffCue_10422101.OnRemove
// 0x01C8 (0x01C8 - 0x0000)
struct PyBuffCue_10422101_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyBuffCue_10422101_OnRemove) == 0x000008, "Wrong alignment on PyBuffCue_10422101_OnRemove");
static_assert(sizeof(PyBuffCue_10422101_OnRemove) == 0x0001C8, "Wrong size on PyBuffCue_10422101_OnRemove");
static_assert(offsetof(PyBuffCue_10422101_OnRemove, MyTarget) == 0x000000, "Member 'PyBuffCue_10422101_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(PyBuffCue_10422101_OnRemove, Parameters) == 0x000008, "Member 'PyBuffCue_10422101_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(PyBuffCue_10422101_OnRemove, ReturnValue) == 0x0001C0, "Member 'PyBuffCue_10422101_OnRemove::ReturnValue' has a wrong offset!");

}
