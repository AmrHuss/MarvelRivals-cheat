#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101198

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_101198.PyAbility_101198.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101198_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101198_CanActivate) == 0x000001, "Wrong alignment on PyAbility_101198_CanActivate");
static_assert(sizeof(PyAbility_101198_CanActivate) == 0x000001, "Wrong size on PyAbility_101198_CanActivate");
static_assert(offsetof(PyAbility_101198_CanActivate, ReturnValue) == 0x000000, "Member 'PyAbility_101198_CanActivate::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_101198.PyAbility_101198.K2_TriggerGameplay
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_101198_K2_TriggerGameplay final
{
public:
	float                                         HoldTime;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101198_K2_TriggerGameplay) == 0x000004, "Wrong alignment on PyAbility_101198_K2_TriggerGameplay");
static_assert(sizeof(PyAbility_101198_K2_TriggerGameplay) == 0x000004, "Wrong size on PyAbility_101198_K2_TriggerGameplay");
static_assert(offsetof(PyAbility_101198_K2_TriggerGameplay, HoldTime) == 0x000000, "Member 'PyAbility_101198_K2_TriggerGameplay::HoldTime' has a wrong offset!");

// PythonFunction PyAbility_101198.PyAbility_101198.K2_MaxHoldTimeGameplay
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_101198_K2_MaxHoldTimeGameplay final
{
public:
	float                                         HoldTime;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101198_K2_MaxHoldTimeGameplay) == 0x000004, "Wrong alignment on PyAbility_101198_K2_MaxHoldTimeGameplay");
static_assert(sizeof(PyAbility_101198_K2_MaxHoldTimeGameplay) == 0x000004, "Wrong size on PyAbility_101198_K2_MaxHoldTimeGameplay");
static_assert(offsetof(PyAbility_101198_K2_MaxHoldTimeGameplay, HoldTime) == 0x000000, "Member 'PyAbility_101198_K2_MaxHoldTimeGameplay::HoldTime' has a wrong offset!");

// PythonFunction PyAbility_101198.PyAbility_101198.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101198_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101198_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_101198_K2_OnEndAbility");
static_assert(sizeof(PyAbility_101198_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_101198_K2_OnEndAbility");
static_assert(offsetof(PyAbility_101198_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_101198_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// PythonFunction PyAbility_101198.PyAbility_101198.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101198_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101198_NativeOnMontageCompleted) == 0x000008, "Wrong alignment on PyAbility_101198_NativeOnMontageCompleted");
static_assert(sizeof(PyAbility_101198_NativeOnMontageCompleted) == 0x000010, "Wrong size on PyAbility_101198_NativeOnMontageCompleted");
static_assert(offsetof(PyAbility_101198_NativeOnMontageCompleted, Tag) == 0x000000, "Member 'PyAbility_101198_NativeOnMontageCompleted::Tag' has a wrong offset!");

// PythonFunction PyAbility_101198.PyAbility_101198.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101198_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101198_NativeOnMontageCancelled) == 0x000008, "Wrong alignment on PyAbility_101198_NativeOnMontageCancelled");
static_assert(sizeof(PyAbility_101198_NativeOnMontageCancelled) == 0x000010, "Wrong size on PyAbility_101198_NativeOnMontageCancelled");
static_assert(offsetof(PyAbility_101198_NativeOnMontageCancelled, Tag) == 0x000000, "Member 'PyAbility_101198_NativeOnMontageCancelled::Tag' has a wrong offset!");

// PythonFunction PyAbility_101198.PyAbility_101198.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101198_NativeOnMontageInterrupted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101198_NativeOnMontageInterrupted) == 0x000008, "Wrong alignment on PyAbility_101198_NativeOnMontageInterrupted");
static_assert(sizeof(PyAbility_101198_NativeOnMontageInterrupted) == 0x000010, "Wrong size on PyAbility_101198_NativeOnMontageInterrupted");
static_assert(offsetof(PyAbility_101198_NativeOnMontageInterrupted, Tag) == 0x000000, "Member 'PyAbility_101198_NativeOnMontageInterrupted::Tag' has a wrong offset!");

}
