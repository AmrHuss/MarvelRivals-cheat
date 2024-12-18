#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101611

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_101611.PyEffectiveComponent_10161101.K2_OnPreApplyContainer
// 0x0020 (0x0020 - 0x0000)
struct PyEffectiveComponent_10161101_K2_OnPreApplyContainer final
{
public:
	TArray<struct FHitResult>                     HitResults;                                        // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                     ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(PyEffectiveComponent_10161101_K2_OnPreApplyContainer) == 0x000008, "Wrong alignment on PyEffectiveComponent_10161101_K2_OnPreApplyContainer");
static_assert(sizeof(PyEffectiveComponent_10161101_K2_OnPreApplyContainer) == 0x000020, "Wrong size on PyEffectiveComponent_10161101_K2_OnPreApplyContainer");
static_assert(offsetof(PyEffectiveComponent_10161101_K2_OnPreApplyContainer, HitResults) == 0x000000, "Member 'PyEffectiveComponent_10161101_K2_OnPreApplyContainer::HitResults' has a wrong offset!");
static_assert(offsetof(PyEffectiveComponent_10161101_K2_OnPreApplyContainer, ReturnValue) == 0x000010, "Member 'PyEffectiveComponent_10161101_K2_OnPreApplyContainer::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_101611.PyAbility_101611.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101611_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101611_NativeOnMontageCompleted) == 0x000008, "Wrong alignment on PyAbility_101611_NativeOnMontageCompleted");
static_assert(sizeof(PyAbility_101611_NativeOnMontageCompleted) == 0x000010, "Wrong size on PyAbility_101611_NativeOnMontageCompleted");
static_assert(offsetof(PyAbility_101611_NativeOnMontageCompleted, Tag) == 0x000000, "Member 'PyAbility_101611_NativeOnMontageCompleted::Tag' has a wrong offset!");

// PythonFunction PyAbility_101611.PyAbility_101611.NativeOnMontageBlendOut
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101611_NativeOnMontageBlendOut final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101611_NativeOnMontageBlendOut) == 0x000008, "Wrong alignment on PyAbility_101611_NativeOnMontageBlendOut");
static_assert(sizeof(PyAbility_101611_NativeOnMontageBlendOut) == 0x000010, "Wrong size on PyAbility_101611_NativeOnMontageBlendOut");
static_assert(offsetof(PyAbility_101611_NativeOnMontageBlendOut, Tag) == 0x000000, "Member 'PyAbility_101611_NativeOnMontageBlendOut::Tag' has a wrong offset!");

// PythonFunction PyAbility_101611.PyAbility_101611.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101611_NativeOnMontageInterrupted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101611_NativeOnMontageInterrupted) == 0x000008, "Wrong alignment on PyAbility_101611_NativeOnMontageInterrupted");
static_assert(sizeof(PyAbility_101611_NativeOnMontageInterrupted) == 0x000010, "Wrong size on PyAbility_101611_NativeOnMontageInterrupted");
static_assert(offsetof(PyAbility_101611_NativeOnMontageInterrupted, Tag) == 0x000000, "Member 'PyAbility_101611_NativeOnMontageInterrupted::Tag' has a wrong offset!");

// PythonFunction PyAbility_101611.PyAbility_101611.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101611_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101611_NativeOnMontageCancelled) == 0x000008, "Wrong alignment on PyAbility_101611_NativeOnMontageCancelled");
static_assert(sizeof(PyAbility_101611_NativeOnMontageCancelled) == 0x000010, "Wrong size on PyAbility_101611_NativeOnMontageCancelled");
static_assert(offsetof(PyAbility_101611_NativeOnMontageCancelled, Tag) == 0x000000, "Member 'PyAbility_101611_NativeOnMontageCancelled::Tag' has a wrong offset!");

}

