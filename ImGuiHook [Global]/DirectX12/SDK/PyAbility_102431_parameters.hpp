#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102431

#include "Basic.hpp"

#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_102431.PyAbility_102431.OnAbilityApplyDamage
// 0x0028 (0x0028 - 0x0000)
struct PyAbility_102431_OnAbilityApplyDamage final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 InTargetAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ParameterHandle;                                   // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102431_OnAbilityApplyDamage) == 0x000008, "Wrong alignment on PyAbility_102431_OnAbilityApplyDamage");
static_assert(sizeof(PyAbility_102431_OnAbilityApplyDamage) == 0x000028, "Wrong size on PyAbility_102431_OnAbilityApplyDamage");
static_assert(offsetof(PyAbility_102431_OnAbilityApplyDamage, InSourceAvatar) == 0x000000, "Member 'PyAbility_102431_OnAbilityApplyDamage::InSourceAvatar' has a wrong offset!");
static_assert(offsetof(PyAbility_102431_OnAbilityApplyDamage, InTargetAvatar) == 0x000008, "Member 'PyAbility_102431_OnAbilityApplyDamage::InTargetAvatar' has a wrong offset!");
static_assert(offsetof(PyAbility_102431_OnAbilityApplyDamage, ParameterHandle) == 0x000010, "Member 'PyAbility_102431_OnAbilityApplyDamage::ParameterHandle' has a wrong offset!");

}
