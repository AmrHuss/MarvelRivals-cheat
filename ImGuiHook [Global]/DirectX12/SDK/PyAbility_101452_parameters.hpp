#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101452

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Hero_1014_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_101452.PyAbility_101452.OnAbilityFailed
// 0x0068 (0x0068 - 0x0000)
struct PyAbility_101452_OnAbilityFailed final
{
public:
	struct FGameplayTagContainer                  FailureReason;                                     // 0x0000(0x0068)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyAbility_101452_OnAbilityFailed) == 0x000008, "Wrong alignment on PyAbility_101452_OnAbilityFailed");
static_assert(sizeof(PyAbility_101452_OnAbilityFailed) == 0x000068, "Wrong size on PyAbility_101452_OnAbilityFailed");
static_assert(offsetof(PyAbility_101452_OnAbilityFailed, FailureReason) == 0x000000, "Member 'PyAbility_101452_OnAbilityFailed::FailureReason' has a wrong offset!");

// PythonFunction PyAbility_101452.PyAbility_101452.OnZiplineEndTask
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_101452_OnZiplineEndTask final
{
public:
	class AActor*                                 InZipline;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101452_OnZiplineEndTask) == 0x000008, "Wrong alignment on PyAbility_101452_OnZiplineEndTask");
static_assert(sizeof(PyAbility_101452_OnZiplineEndTask) == 0x000008, "Wrong size on PyAbility_101452_OnZiplineEndTask");
static_assert(offsetof(PyAbility_101452_OnZiplineEndTask, InZipline) == 0x000000, "Member 'PyAbility_101452_OnZiplineEndTask::InZipline' has a wrong offset!");

// PythonFunction PyAbility_101452.PyAbility_101452.OnCharacterTranslatedByPortal
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_101452_OnCharacterTranslatedByPortal final
{
public:
	class APortalViewActor*                       InPortal;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101452_OnCharacterTranslatedByPortal) == 0x000008, "Wrong alignment on PyAbility_101452_OnCharacterTranslatedByPortal");
static_assert(sizeof(PyAbility_101452_OnCharacterTranslatedByPortal) == 0x000008, "Wrong size on PyAbility_101452_OnCharacterTranslatedByPortal");
static_assert(offsetof(PyAbility_101452_OnCharacterTranslatedByPortal, InPortal) == 0x000000, "Member 'PyAbility_101452_OnCharacterTranslatedByPortal::InPortal' has a wrong offset!");

// PythonFunction PyAbility_101452.PyAbility_101452.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101452_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101452_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_101452_K2_OnEndAbility");
static_assert(sizeof(PyAbility_101452_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_101452_K2_OnEndAbility");
static_assert(offsetof(PyAbility_101452_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_101452_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// PythonFunction PyAbility_101452.PyAbility_101452.SetAbilityStage
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101452_SetAbilityStage final
{
public:
	EAbilityStage_101452                          InAbilityStage;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101452_SetAbilityStage) == 0x000001, "Wrong alignment on PyAbility_101452_SetAbilityStage");
static_assert(sizeof(PyAbility_101452_SetAbilityStage) == 0x000001, "Wrong size on PyAbility_101452_SetAbilityStage");
static_assert(offsetof(PyAbility_101452_SetAbilityStage, InAbilityStage) == 0x000000, "Member 'PyAbility_101452_SetAbilityStage::InAbilityStage' has a wrong offset!");

// PythonFunction PyAbility_101452.PyAbility_101452.GetTargetLocation
// 0x0018 (0x0018 - 0x0000)
struct PyAbility_101452_GetTargetLocation final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101452_GetTargetLocation) == 0x000008, "Wrong alignment on PyAbility_101452_GetTargetLocation");
static_assert(sizeof(PyAbility_101452_GetTargetLocation) == 0x000018, "Wrong size on PyAbility_101452_GetTargetLocation");
static_assert(offsetof(PyAbility_101452_GetTargetLocation, ReturnValue) == 0x000000, "Member 'PyAbility_101452_GetTargetLocation::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_101452.PyAbility_101452.GetDashDirection
// 0x0018 (0x0018 - 0x0000)
struct PyAbility_101452_GetDashDirection final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101452_GetDashDirection) == 0x000008, "Wrong alignment on PyAbility_101452_GetDashDirection");
static_assert(sizeof(PyAbility_101452_GetDashDirection) == 0x000018, "Wrong size on PyAbility_101452_GetDashDirection");
static_assert(offsetof(PyAbility_101452_GetDashDirection, ReturnValue) == 0x000000, "Member 'PyAbility_101452_GetDashDirection::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_101452.PyAbility_101452.OnDashFinished
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101452_OnDashFinished final
{
public:
	EDashStopReason                               Reason;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101452_OnDashFinished) == 0x000001, "Wrong alignment on PyAbility_101452_OnDashFinished");
static_assert(sizeof(PyAbility_101452_OnDashFinished) == 0x000001, "Wrong size on PyAbility_101452_OnDashFinished");
static_assert(offsetof(PyAbility_101452_OnDashFinished, Reason) == 0x000000, "Member 'PyAbility_101452_OnDashFinished::Reason' has a wrong offset!");

// PythonFunction PyAbility_101452.PySummoned_Cue_10145201_Loop.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PySummoned_Cue_10145201_Loop_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PySummoned_Cue_10145201_Loop_WhileActiveFX) == 0x000008, "Wrong alignment on PySummoned_Cue_10145201_Loop_WhileActiveFX");
static_assert(sizeof(PySummoned_Cue_10145201_Loop_WhileActiveFX) == 0x0001C0, "Wrong size on PySummoned_Cue_10145201_Loop_WhileActiveFX");
static_assert(offsetof(PySummoned_Cue_10145201_Loop_WhileActiveFX, MyTarget) == 0x000000, "Member 'PySummoned_Cue_10145201_Loop_WhileActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PySummoned_Cue_10145201_Loop_WhileActiveFX, Parameters) == 0x000008, "Member 'PySummoned_Cue_10145201_Loop_WhileActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_101452.PySummoned_Cue_10145201_Loop.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PySummoned_Cue_10145201_Loop_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PySummoned_Cue_10145201_Loop_OnRemoveFX) == 0x000008, "Wrong alignment on PySummoned_Cue_10145201_Loop_OnRemoveFX");
static_assert(sizeof(PySummoned_Cue_10145201_Loop_OnRemoveFX) == 0x0001C0, "Wrong size on PySummoned_Cue_10145201_Loop_OnRemoveFX");
static_assert(offsetof(PySummoned_Cue_10145201_Loop_OnRemoveFX, MyTarget) == 0x000000, "Member 'PySummoned_Cue_10145201_Loop_OnRemoveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PySummoned_Cue_10145201_Loop_OnRemoveFX, Parameters) == 0x000008, "Member 'PySummoned_Cue_10145201_Loop_OnRemoveFX::Parameters' has a wrong offset!");

}
