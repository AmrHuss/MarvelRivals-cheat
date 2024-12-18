#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104901

#include "Basic.hpp"

#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_104901.PyAbility_104901.BroadcastEnterHealStage
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104901_BroadcastEnterHealStage final
{
public:
	bool                                          bCanHeal;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104901_BroadcastEnterHealStage) == 0x000001, "Wrong alignment on PyAbility_104901_BroadcastEnterHealStage");
static_assert(sizeof(PyAbility_104901_BroadcastEnterHealStage) == 0x000001, "Wrong size on PyAbility_104901_BroadcastEnterHealStage");
static_assert(offsetof(PyAbility_104901_BroadcastEnterHealStage, bCanHeal) == 0x000000, "Member 'PyAbility_104901_BroadcastEnterHealStage::bCanHeal' has a wrong offset!");

// PythonFunction PyAbility_104901.PyAbility_104901.BindNotTreatShieldChanged
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104901_BindNotTreatShieldChanged final
{
public:
	bool                                          bBind;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104901_BindNotTreatShieldChanged) == 0x000001, "Wrong alignment on PyAbility_104901_BindNotTreatShieldChanged");
static_assert(sizeof(PyAbility_104901_BindNotTreatShieldChanged) == 0x000001, "Wrong size on PyAbility_104901_BindNotTreatShieldChanged");
static_assert(offsetof(PyAbility_104901_BindNotTreatShieldChanged, bBind) == 0x000000, "Member 'PyAbility_104901_BindNotTreatShieldChanged::bBind' has a wrong offset!");

// PythonFunction PyAbility_104901.PyAbility_104901.OnNotTreatShieldhanged
// 0x0020 (0x0020 - 0x0000)
struct PyAbility_104901_OnNotTreatShieldhanged final
{
public:
	class AActor*                                 SourceAcatar;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0008(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104901_OnNotTreatShieldhanged) == 0x000008, "Wrong alignment on PyAbility_104901_OnNotTreatShieldhanged");
static_assert(sizeof(PyAbility_104901_OnNotTreatShieldhanged) == 0x000020, "Wrong size on PyAbility_104901_OnNotTreatShieldhanged");
static_assert(offsetof(PyAbility_104901_OnNotTreatShieldhanged, SourceAcatar) == 0x000000, "Member 'PyAbility_104901_OnNotTreatShieldhanged::SourceAcatar' has a wrong offset!");
static_assert(offsetof(PyAbility_104901_OnNotTreatShieldhanged, ModifierParameterHandle) == 0x000008, "Member 'PyAbility_104901_OnNotTreatShieldhanged::ModifierParameterHandle' has a wrong offset!");

// PythonFunction PyAbility_104901.PyAbility_104901.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104901_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104901_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_104901_K2_OnEndAbility");
static_assert(sizeof(PyAbility_104901_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_104901_K2_OnEndAbility");
static_assert(offsetof(PyAbility_104901_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_104901_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

