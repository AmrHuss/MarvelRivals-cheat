#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101197

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_101197.PyAbility_101197.K2_ActivateAbilityFromEvent
// 0x0290 (0x0290 - 0x0000)
struct PyAbility_101197_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x0290)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyAbility_101197_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on PyAbility_101197_K2_ActivateAbilityFromEvent");
static_assert(sizeof(PyAbility_101197_K2_ActivateAbilityFromEvent) == 0x000290, "Wrong size on PyAbility_101197_K2_ActivateAbilityFromEvent");
static_assert(offsetof(PyAbility_101197_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'PyAbility_101197_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// PythonFunction PyAbility_101197.PyAbility_101197.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101197_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101197_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_101197_K2_OnEndAbility");
static_assert(sizeof(PyAbility_101197_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_101197_K2_OnEndAbility");
static_assert(offsetof(PyAbility_101197_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_101197_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// PythonFunction PyAbility_101197.PyAbility_101197.OnOwnerTagUpdated
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101197_OnOwnerTagUpdated final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101197_OnOwnerTagUpdated) == 0x000004, "Wrong alignment on PyAbility_101197_OnOwnerTagUpdated");
static_assert(sizeof(PyAbility_101197_OnOwnerTagUpdated) == 0x000010, "Wrong size on PyAbility_101197_OnOwnerTagUpdated");
static_assert(offsetof(PyAbility_101197_OnOwnerTagUpdated, Tag) == 0x000000, "Member 'PyAbility_101197_OnOwnerTagUpdated::Tag' has a wrong offset!");
static_assert(offsetof(PyAbility_101197_OnOwnerTagUpdated, Exist) == 0x00000C, "Member 'PyAbility_101197_OnOwnerTagUpdated::Exist' has a wrong offset!");

// PythonFunction PyAbility_101197.PyAbility_101197.OnConfimedTargetTagUpdated
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101197_OnConfimedTargetTagUpdated final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101197_OnConfimedTargetTagUpdated) == 0x000004, "Wrong alignment on PyAbility_101197_OnConfimedTargetTagUpdated");
static_assert(sizeof(PyAbility_101197_OnConfimedTargetTagUpdated) == 0x000010, "Wrong size on PyAbility_101197_OnConfimedTargetTagUpdated");
static_assert(offsetof(PyAbility_101197_OnConfimedTargetTagUpdated, Tag) == 0x000000, "Member 'PyAbility_101197_OnConfimedTargetTagUpdated::Tag' has a wrong offset!");
static_assert(offsetof(PyAbility_101197_OnConfimedTargetTagUpdated, Exist) == 0x00000C, "Member 'PyAbility_101197_OnConfimedTargetTagUpdated::Exist' has a wrong offset!");

// PythonFunction PyAbility_101197.PyAbility_101197.IsAbilityNormalEnd
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101197_IsAbilityNormalEnd final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101197_IsAbilityNormalEnd) == 0x000001, "Wrong alignment on PyAbility_101197_IsAbilityNormalEnd");
static_assert(sizeof(PyAbility_101197_IsAbilityNormalEnd) == 0x000001, "Wrong size on PyAbility_101197_IsAbilityNormalEnd");
static_assert(offsetof(PyAbility_101197_IsAbilityNormalEnd, ReturnValue) == 0x000000, "Member 'PyAbility_101197_IsAbilityNormalEnd::ReturnValue' has a wrong offset!");

}
