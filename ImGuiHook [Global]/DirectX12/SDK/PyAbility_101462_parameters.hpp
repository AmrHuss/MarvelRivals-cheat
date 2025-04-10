#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101462

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_101462.PyAbility_101462.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101462_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101462_CanActivate) == 0x000001, "Wrong alignment on PyAbility_101462_CanActivate");
static_assert(sizeof(PyAbility_101462_CanActivate) == 0x000001, "Wrong size on PyAbility_101462_CanActivate");
static_assert(offsetof(PyAbility_101462_CanActivate, ReturnValue) == 0x000000, "Member 'PyAbility_101462_CanActivate::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_101462.PyAbility_101462.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101462_K2_OnEndAbility final
{
public:
	bool                                          Cancel;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101462_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_101462_K2_OnEndAbility");
static_assert(sizeof(PyAbility_101462_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_101462_K2_OnEndAbility");
static_assert(offsetof(PyAbility_101462_K2_OnEndAbility, Cancel) == 0x000000, "Member 'PyAbility_101462_K2_OnEndAbility::Cancel' has a wrong offset!");

// PythonFunction PyAbility_101462.PyAbility_101462.OnPressFireInput
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_101462_OnPressFireInput final
{
public:
	float                                         ElapsedTime;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101462_OnPressFireInput) == 0x000004, "Wrong alignment on PyAbility_101462_OnPressFireInput");
static_assert(sizeof(PyAbility_101462_OnPressFireInput) == 0x000004, "Wrong size on PyAbility_101462_OnPressFireInput");
static_assert(offsetof(PyAbility_101462_OnPressFireInput, ElapsedTime) == 0x000000, "Member 'PyAbility_101462_OnPressFireInput::ElapsedTime' has a wrong offset!");

// PythonFunction PyAbility_101462.PyAbility_101462.OnReleaseFireInput
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_101462_OnReleaseFireInput final
{
public:
	float                                         ElapsedTime;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101462_OnReleaseFireInput) == 0x000004, "Wrong alignment on PyAbility_101462_OnReleaseFireInput");
static_assert(sizeof(PyAbility_101462_OnReleaseFireInput) == 0x000004, "Wrong size on PyAbility_101462_OnReleaseFireInput");
static_assert(offsetof(PyAbility_101462_OnReleaseFireInput, ElapsedTime) == 0x000000, "Member 'PyAbility_101462_OnReleaseFireInput::ElapsedTime' has a wrong offset!");

}

