#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102752

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_102752.PyAbility_102752.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102752_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102752_CanActivate) == 0x000001, "Wrong alignment on PyAbility_102752_CanActivate");
static_assert(sizeof(PyAbility_102752_CanActivate) == 0x000001, "Wrong size on PyAbility_102752_CanActivate");
static_assert(offsetof(PyAbility_102752_CanActivate, ReturnValue) == 0x000000, "Member 'PyAbility_102752_CanActivate::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_102752.PyAbility_102752.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102752_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102752_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_102752_K2_OnEndAbility");
static_assert(sizeof(PyAbility_102752_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_102752_K2_OnEndAbility");
static_assert(offsetof(PyAbility_102752_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_102752_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
