#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyUICUnit_SummonNum

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction PyUICUnit_SummonNum.PyUICUnit_SummonNum.OnActorChange
// 0x0008 (0x0008 - 0x0000)
struct PyUICUnit_SummonNum_OnActorChange final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUICUnit_SummonNum_OnActorChange) == 0x000008, "Wrong alignment on PyUICUnit_SummonNum_OnActorChange");
static_assert(sizeof(PyUICUnit_SummonNum_OnActorChange) == 0x000008, "Wrong size on PyUICUnit_SummonNum_OnActorChange");
static_assert(offsetof(PyUICUnit_SummonNum_OnActorChange, Target) == 0x000000, "Member 'PyUICUnit_SummonNum_OnActorChange::Target' has a wrong offset!");

// PythonFunction PyUICUnit_SummonNum.PyUICUnit_SummonNum.SetMaxNum
// 0x0004 (0x0004 - 0x0000)
struct PyUICUnit_SummonNum_SetMaxNum final
{
public:
	int32                                         InTotalNumMax;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUICUnit_SummonNum_SetMaxNum) == 0x000004, "Wrong alignment on PyUICUnit_SummonNum_SetMaxNum");
static_assert(sizeof(PyUICUnit_SummonNum_SetMaxNum) == 0x000004, "Wrong size on PyUICUnit_SummonNum_SetMaxNum");
static_assert(offsetof(PyUICUnit_SummonNum_SetMaxNum, InTotalNumMax) == 0x000000, "Member 'PyUICUnit_SummonNum_SetMaxNum::InTotalNumMax' has a wrong offset!");

// PythonFunction PyUICUnit_SummonNum.PyUICUnit_SummonNum.SetCurNum
// 0x0004 (0x0004 - 0x0000)
struct PyUICUnit_SummonNum_SetCurNum final
{
public:
	int32                                         InTotalNumCur;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUICUnit_SummonNum_SetCurNum) == 0x000004, "Wrong alignment on PyUICUnit_SummonNum_SetCurNum");
static_assert(sizeof(PyUICUnit_SummonNum_SetCurNum) == 0x000004, "Wrong size on PyUICUnit_SummonNum_SetCurNum");
static_assert(offsetof(PyUICUnit_SummonNum_SetCurNum, InTotalNumCur) == 0x000000, "Member 'PyUICUnit_SummonNum_SetCurNum::InTotalNumCur' has a wrong offset!");

// PythonFunction PyUICUnit_SummonNum.PyUICUnit_SummonNum.SetSummonedDesc
// 0x0018 (0x0018 - 0x0000)
struct PyUICUnit_SummonNum_SetSummonedDesc final
{
public:
	class FText                                   InDesc;                                            // 0x0000(0x0018)(Parm)
};
static_assert(alignof(PyUICUnit_SummonNum_SetSummonedDesc) == 0x000008, "Wrong alignment on PyUICUnit_SummonNum_SetSummonedDesc");
static_assert(sizeof(PyUICUnit_SummonNum_SetSummonedDesc) == 0x000018, "Wrong size on PyUICUnit_SummonNum_SetSummonedDesc");
static_assert(offsetof(PyUICUnit_SummonNum_SetSummonedDesc, InDesc) == 0x000000, "Member 'PyUICUnit_SummonNum_SetSummonedDesc::InDesc' has a wrong offset!");

}
