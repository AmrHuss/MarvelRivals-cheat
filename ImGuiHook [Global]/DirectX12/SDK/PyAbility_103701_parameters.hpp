#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103701

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// DelegateFunction PyAbility_103701.PyAbility_103701.OnAddIronByValue__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_103701_OnAddIronByValue__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103701_OnAddIronByValue__DelegateSignature) == 0x000004, "Wrong alignment on PyAbility_103701_OnAddIronByValue__DelegateSignature");
static_assert(sizeof(PyAbility_103701_OnAddIronByValue__DelegateSignature) == 0x000004, "Wrong size on PyAbility_103701_OnAddIronByValue__DelegateSignature");
static_assert(offsetof(PyAbility_103701_OnAddIronByValue__DelegateSignature, Value) == 0x000000, "Member 'PyAbility_103701_OnAddIronByValue__DelegateSignature::Value' has a wrong offset!");

// PythonFunction PyAbility_103701.PyAbility_103701.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103701_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103701_CanActivate) == 0x000001, "Wrong alignment on PyAbility_103701_CanActivate");
static_assert(sizeof(PyAbility_103701_CanActivate) == 0x000001, "Wrong size on PyAbility_103701_CanActivate");
static_assert(offsetof(PyAbility_103701_CanActivate, ReturnValue) == 0x000000, "Member 'PyAbility_103701_CanActivate::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_103701.PyAbility_103701.CheckViewportTarget
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_103701_CheckViewportTarget final
{
public:
	class AActor*                                 InTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103701_CheckViewportTarget) == 0x000008, "Wrong alignment on PyAbility_103701_CheckViewportTarget");
static_assert(sizeof(PyAbility_103701_CheckViewportTarget) == 0x000010, "Wrong size on PyAbility_103701_CheckViewportTarget");
static_assert(offsetof(PyAbility_103701_CheckViewportTarget, InTarget) == 0x000000, "Member 'PyAbility_103701_CheckViewportTarget::InTarget' has a wrong offset!");
static_assert(offsetof(PyAbility_103701_CheckViewportTarget, ReturnValue) == 0x000008, "Member 'PyAbility_103701_CheckViewportTarget::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_103701.PyAbility_103701.ShouldStopTrace
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103701_ShouldStopTrace final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103701_ShouldStopTrace) == 0x000001, "Wrong alignment on PyAbility_103701_ShouldStopTrace");
static_assert(sizeof(PyAbility_103701_ShouldStopTrace) == 0x000001, "Wrong size on PyAbility_103701_ShouldStopTrace");
static_assert(offsetof(PyAbility_103701_ShouldStopTrace, ReturnValue) == 0x000000, "Member 'PyAbility_103701_ShouldStopTrace::ReturnValue' has a wrong offset!");

// DelegateFunction PyAbility_103701.PyAbility_103701.OnShootingTargetChangeDelegate__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_103701_OnShootingTargetChangeDelegate__DelegateSignature final
{
public:
	class AActor*                                 NewTarget;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103701_OnShootingTargetChangeDelegate__DelegateSignature) == 0x000008, "Wrong alignment on PyAbility_103701_OnShootingTargetChangeDelegate__DelegateSignature");
static_assert(sizeof(PyAbility_103701_OnShootingTargetChangeDelegate__DelegateSignature) == 0x000008, "Wrong size on PyAbility_103701_OnShootingTargetChangeDelegate__DelegateSignature");
static_assert(offsetof(PyAbility_103701_OnShootingTargetChangeDelegate__DelegateSignature, NewTarget) == 0x000000, "Member 'PyAbility_103701_OnShootingTargetChangeDelegate__DelegateSignature::NewTarget' has a wrong offset!");

// PythonFunction PyAbility_103701.PyAbility_103701.GetFireIronIndex
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_103701_GetFireIronIndex final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103701_GetFireIronIndex) == 0x000004, "Wrong alignment on PyAbility_103701_GetFireIronIndex");
static_assert(sizeof(PyAbility_103701_GetFireIronIndex) == 0x000004, "Wrong size on PyAbility_103701_GetFireIronIndex");
static_assert(offsetof(PyAbility_103701_GetFireIronIndex, ReturnValue) == 0x000000, "Member 'PyAbility_103701_GetFireIronIndex::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_103701.PyAbility_103701.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103701_K2_OnEndAbility final
{
public:
	bool                                          bCancelled;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103701_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_103701_K2_OnEndAbility");
static_assert(sizeof(PyAbility_103701_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_103701_K2_OnEndAbility");
static_assert(offsetof(PyAbility_103701_K2_OnEndAbility, bCancelled) == 0x000000, "Member 'PyAbility_103701_K2_OnEndAbility::bCancelled' has a wrong offset!");

// PythonFunction PyAbility_103701.PyUIController_103701.SetAbility
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_103701_SetAbility final
{
public:
	int32                                         InAbilityId;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayAbility*                       InAbility;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_103701_SetAbility) == 0x000008, "Wrong alignment on PyUIController_103701_SetAbility");
static_assert(sizeof(PyUIController_103701_SetAbility) == 0x000010, "Wrong size on PyUIController_103701_SetAbility");
static_assert(offsetof(PyUIController_103701_SetAbility, InAbilityId) == 0x000000, "Member 'PyUIController_103701_SetAbility::InAbilityId' has a wrong offset!");
static_assert(offsetof(PyUIController_103701_SetAbility, InAbility) == 0x000008, "Member 'PyUIController_103701_SetAbility::InAbility' has a wrong offset!");

// PythonFunction PyAbility_103701.PyCue_Ability_Loop_10370100.IronCountChanged
// 0x0004 (0x0004 - 0x0000)
struct PyCue_Ability_Loop_10370100_IronCountChanged final
{
public:
	int32                                         IronCount;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Ability_Loop_10370100_IronCountChanged) == 0x000004, "Wrong alignment on PyCue_Ability_Loop_10370100_IronCountChanged");
static_assert(sizeof(PyCue_Ability_Loop_10370100_IronCountChanged) == 0x000004, "Wrong size on PyCue_Ability_Loop_10370100_IronCountChanged");
static_assert(offsetof(PyCue_Ability_Loop_10370100_IronCountChanged, IronCount) == 0x000000, "Member 'PyCue_Ability_Loop_10370100_IronCountChanged::IronCount' has a wrong offset!");

// PythonFunction PyAbility_103701.PyCue_Ability_Loop_10370100.OnRemove
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Ability_Loop_10370100_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Ability_Loop_10370100_OnRemove) == 0x000008, "Wrong alignment on PyCue_Ability_Loop_10370100_OnRemove");
static_assert(sizeof(PyCue_Ability_Loop_10370100_OnRemove) == 0x0001C8, "Wrong size on PyCue_Ability_Loop_10370100_OnRemove");
static_assert(offsetof(PyCue_Ability_Loop_10370100_OnRemove, MyTarget) == 0x000000, "Member 'PyCue_Ability_Loop_10370100_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Loop_10370100_OnRemove, Parameters) == 0x000008, "Member 'PyCue_Ability_Loop_10370100_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Loop_10370100_OnRemove, ReturnValue) == 0x0001C0, "Member 'PyCue_Ability_Loop_10370100_OnRemove::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_103701.PyCue_Ability_Loop_10370100.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10370100_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Ability_Loop_10370100_WhileActiveFX) == 0x000008, "Wrong alignment on PyCue_Ability_Loop_10370100_WhileActiveFX");
static_assert(sizeof(PyCue_Ability_Loop_10370100_WhileActiveFX) == 0x0001C0, "Wrong size on PyCue_Ability_Loop_10370100_WhileActiveFX");
static_assert(offsetof(PyCue_Ability_Loop_10370100_WhileActiveFX, MyTarget) == 0x000000, "Member 'PyCue_Ability_Loop_10370100_WhileActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Loop_10370100_WhileActiveFX, Parameters) == 0x000008, "Member 'PyCue_Ability_Loop_10370100_WhileActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103701.PyCue_Ability_Loop_10370100.OnTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct PyCue_Ability_Loop_10370100_OnTagUpdate final
{
public:
	struct FGameplayTag                           TagUpdated;                                        // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          TagExists;                                         // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Ability_Loop_10370100_OnTagUpdate) == 0x000004, "Wrong alignment on PyCue_Ability_Loop_10370100_OnTagUpdate");
static_assert(sizeof(PyCue_Ability_Loop_10370100_OnTagUpdate) == 0x000010, "Wrong size on PyCue_Ability_Loop_10370100_OnTagUpdate");
static_assert(offsetof(PyCue_Ability_Loop_10370100_OnTagUpdate, TagUpdated) == 0x000000, "Member 'PyCue_Ability_Loop_10370100_OnTagUpdate::TagUpdated' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Loop_10370100_OnTagUpdate, TagExists) == 0x00000C, "Member 'PyCue_Ability_Loop_10370100_OnTagUpdate::TagExists' has a wrong offset!");

// PythonFunction PyAbility_103701.PyProjectile_103701.OnAbilityShootingTargetChange
// 0x0008 (0x0008 - 0x0000)
struct PyProjectile_103701_OnAbilityShootingTargetChange final
{
public:
	class AActor*                                 NewTarget;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyProjectile_103701_OnAbilityShootingTargetChange) == 0x000008, "Wrong alignment on PyProjectile_103701_OnAbilityShootingTargetChange");
static_assert(sizeof(PyProjectile_103701_OnAbilityShootingTargetChange) == 0x000008, "Wrong size on PyProjectile_103701_OnAbilityShootingTargetChange");
static_assert(offsetof(PyProjectile_103701_OnAbilityShootingTargetChange, NewTarget) == 0x000000, "Member 'PyProjectile_103701_OnAbilityShootingTargetChange::NewTarget' has a wrong offset!");

// PythonFunction PyAbility_103701.PyProjectile_103701.OnHomingTargetDeath
// 0x0028 (0x0028 - 0x0000)
struct PyProjectile_103701_OnHomingTargetDeath final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 InTargetAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ParamHandle;                                       // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(PyProjectile_103701_OnHomingTargetDeath) == 0x000008, "Wrong alignment on PyProjectile_103701_OnHomingTargetDeath");
static_assert(sizeof(PyProjectile_103701_OnHomingTargetDeath) == 0x000028, "Wrong size on PyProjectile_103701_OnHomingTargetDeath");
static_assert(offsetof(PyProjectile_103701_OnHomingTargetDeath, InSourceAvatar) == 0x000000, "Member 'PyProjectile_103701_OnHomingTargetDeath::InSourceAvatar' has a wrong offset!");
static_assert(offsetof(PyProjectile_103701_OnHomingTargetDeath, InTargetAvatar) == 0x000008, "Member 'PyProjectile_103701_OnHomingTargetDeath::InTargetAvatar' has a wrong offset!");
static_assert(offsetof(PyProjectile_103701_OnHomingTargetDeath, ParamHandle) == 0x000010, "Member 'PyProjectile_103701_OnHomingTargetDeath::ParamHandle' has a wrong offset!");

// PythonFunction PyAbility_103701.PyProjectile_103701.K2_OnProjectileInfoForceChanged_ThreadSafe
// 0x0250 (0x0250 - 0x0000)
struct PyProjectile_103701_K2_OnProjectileInfoForceChanged_ThreadSafe final
{
public:
	struct FProjectileForceChangedInfo            InProjectileForceChangedInfo;                      // 0x0000(0x0250)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyProjectile_103701_K2_OnProjectileInfoForceChanged_ThreadSafe) == 0x000008, "Wrong alignment on PyProjectile_103701_K2_OnProjectileInfoForceChanged_ThreadSafe");
static_assert(sizeof(PyProjectile_103701_K2_OnProjectileInfoForceChanged_ThreadSafe) == 0x000250, "Wrong size on PyProjectile_103701_K2_OnProjectileInfoForceChanged_ThreadSafe");
static_assert(offsetof(PyProjectile_103701_K2_OnProjectileInfoForceChanged_ThreadSafe, InProjectileForceChangedInfo) == 0x000000, "Member 'PyProjectile_103701_K2_OnProjectileInfoForceChanged_ThreadSafe::InProjectileForceChangedInfo' has a wrong offset!");

// DelegateFunction PyAbility_103701.PyWidget_AbilityCharge_103701.OnCurSegmentChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct PyWidget_AbilityCharge_103701_OnCurSegmentChanged__DelegateSignature final
{
public:
	int32                                         InCurrentValue;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_103701_OnCurSegmentChanged__DelegateSignature) == 0x000004, "Wrong alignment on PyWidget_AbilityCharge_103701_OnCurSegmentChanged__DelegateSignature");
static_assert(sizeof(PyWidget_AbilityCharge_103701_OnCurSegmentChanged__DelegateSignature) == 0x000004, "Wrong size on PyWidget_AbilityCharge_103701_OnCurSegmentChanged__DelegateSignature");
static_assert(offsetof(PyWidget_AbilityCharge_103701_OnCurSegmentChanged__DelegateSignature, InCurrentValue) == 0x000000, "Member 'PyWidget_AbilityCharge_103701_OnCurSegmentChanged__DelegateSignature::InCurrentValue' has a wrong offset!");

// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.SetStyle
// 0x0110 (0x0110 - 0x0000)
struct PyWidget_AbilityCharge_103701_SetStyle final
{
public:
	struct FWidgetStyle_AbilityCharge             Style;                                             // 0x0000(0x0110)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyWidget_AbilityCharge_103701_SetStyle) == 0x000008, "Wrong alignment on PyWidget_AbilityCharge_103701_SetStyle");
static_assert(sizeof(PyWidget_AbilityCharge_103701_SetStyle) == 0x000110, "Wrong size on PyWidget_AbilityCharge_103701_SetStyle");
static_assert(offsetof(PyWidget_AbilityCharge_103701_SetStyle, Style) == 0x000000, "Member 'PyWidget_AbilityCharge_103701_SetStyle::Style' has a wrong offset!");

// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.SetPercent
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_AbilityCharge_103701_SetPercent final
{
public:
	float                                         InCurrentValue;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InMaxValue;                                        // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_103701_SetPercent) == 0x000004, "Wrong alignment on PyWidget_AbilityCharge_103701_SetPercent");
static_assert(sizeof(PyWidget_AbilityCharge_103701_SetPercent) == 0x000008, "Wrong size on PyWidget_AbilityCharge_103701_SetPercent");
static_assert(offsetof(PyWidget_AbilityCharge_103701_SetPercent, InCurrentValue) == 0x000000, "Member 'PyWidget_AbilityCharge_103701_SetPercent::InCurrentValue' has a wrong offset!");
static_assert(offsetof(PyWidget_AbilityCharge_103701_SetPercent, InMaxValue) == 0x000004, "Member 'PyWidget_AbilityCharge_103701_SetPercent::InMaxValue' has a wrong offset!");

// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.SetSpeed
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_AbilityCharge_103701_SetSpeed final
{
public:
	float                                         InMaxValue;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InSpeedValue;                                      // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_103701_SetSpeed) == 0x000004, "Wrong alignment on PyWidget_AbilityCharge_103701_SetSpeed");
static_assert(sizeof(PyWidget_AbilityCharge_103701_SetSpeed) == 0x000008, "Wrong size on PyWidget_AbilityCharge_103701_SetSpeed");
static_assert(offsetof(PyWidget_AbilityCharge_103701_SetSpeed, InMaxValue) == 0x000000, "Member 'PyWidget_AbilityCharge_103701_SetSpeed::InMaxValue' has a wrong offset!");
static_assert(offsetof(PyWidget_AbilityCharge_103701_SetSpeed, InSpeedValue) == 0x000004, "Member 'PyWidget_AbilityCharge_103701_SetSpeed::InSpeedValue' has a wrong offset!");

// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.UpdatePercentWithDebounce
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_AbilityCharge_103701_UpdatePercentWithDebounce final
{
public:
	float                                         InCurrentValue;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InMaxValue;                                        // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_103701_UpdatePercentWithDebounce) == 0x000004, "Wrong alignment on PyWidget_AbilityCharge_103701_UpdatePercentWithDebounce");
static_assert(sizeof(PyWidget_AbilityCharge_103701_UpdatePercentWithDebounce) == 0x000008, "Wrong size on PyWidget_AbilityCharge_103701_UpdatePercentWithDebounce");
static_assert(offsetof(PyWidget_AbilityCharge_103701_UpdatePercentWithDebounce, InCurrentValue) == 0x000000, "Member 'PyWidget_AbilityCharge_103701_UpdatePercentWithDebounce::InCurrentValue' has a wrong offset!");
static_assert(offsetof(PyWidget_AbilityCharge_103701_UpdatePercentWithDebounce, InMaxValue) == 0x000004, "Member 'PyWidget_AbilityCharge_103701_UpdatePercentWithDebounce::InMaxValue' has a wrong offset!");

// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.SetSegmentCur
// 0x0004 (0x0004 - 0x0000)
struct PyWidget_AbilityCharge_103701_SetSegmentCur final
{
public:
	int32                                         SegmentCur;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_103701_SetSegmentCur) == 0x000004, "Wrong alignment on PyWidget_AbilityCharge_103701_SetSegmentCur");
static_assert(sizeof(PyWidget_AbilityCharge_103701_SetSegmentCur) == 0x000004, "Wrong size on PyWidget_AbilityCharge_103701_SetSegmentCur");
static_assert(offsetof(PyWidget_AbilityCharge_103701_SetSegmentCur, SegmentCur) == 0x000000, "Member 'PyWidget_AbilityCharge_103701_SetSegmentCur::SegmentCur' has a wrong offset!");

// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.SetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_AbilityCharge_103701_SetVisible final
{
public:
	bool                                          Invisible;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_103701_SetVisible) == 0x000001, "Wrong alignment on PyWidget_AbilityCharge_103701_SetVisible");
static_assert(sizeof(PyWidget_AbilityCharge_103701_SetVisible) == 0x000001, "Wrong size on PyWidget_AbilityCharge_103701_SetVisible");
static_assert(offsetof(PyWidget_AbilityCharge_103701_SetVisible, Invisible) == 0x000000, "Member 'PyWidget_AbilityCharge_103701_SetVisible::Invisible' has a wrong offset!");

// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.SetVisibleImmediately
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_AbilityCharge_103701_SetVisibleImmediately final
{
public:
	bool                                          Invisible;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_103701_SetVisibleImmediately) == 0x000001, "Wrong alignment on PyWidget_AbilityCharge_103701_SetVisibleImmediately");
static_assert(sizeof(PyWidget_AbilityCharge_103701_SetVisibleImmediately) == 0x000001, "Wrong size on PyWidget_AbilityCharge_103701_SetVisibleImmediately");
static_assert(offsetof(PyWidget_AbilityCharge_103701_SetVisibleImmediately, Invisible) == 0x000000, "Member 'PyWidget_AbilityCharge_103701_SetVisibleImmediately::Invisible' has a wrong offset!");

// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.PlayUIAudio
// 0x0004 (0x0004 - 0x0000)
struct PyWidget_AbilityCharge_103701_PlayUIAudio final
{
public:
	int32                                         AudioID;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_103701_PlayUIAudio) == 0x000004, "Wrong alignment on PyWidget_AbilityCharge_103701_PlayUIAudio");
static_assert(sizeof(PyWidget_AbilityCharge_103701_PlayUIAudio) == 0x000004, "Wrong size on PyWidget_AbilityCharge_103701_PlayUIAudio");
static_assert(offsetof(PyWidget_AbilityCharge_103701_PlayUIAudio, AudioID) == 0x000000, "Member 'PyWidget_AbilityCharge_103701_PlayUIAudio::AudioID' has a wrong offset!");

// PythonFunction PyAbility_103701.PyWidget_AbilityCharge_103701.PostUIAudioCallback
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_AbilityCharge_103701_PostUIAudioCallback final
{
public:
	EAkCallbackType                               CallbackType;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkCallbackInfo*                        CallbackInfo;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_103701_PostUIAudioCallback) == 0x000008, "Wrong alignment on PyWidget_AbilityCharge_103701_PostUIAudioCallback");
static_assert(sizeof(PyWidget_AbilityCharge_103701_PostUIAudioCallback) == 0x000010, "Wrong size on PyWidget_AbilityCharge_103701_PostUIAudioCallback");
static_assert(offsetof(PyWidget_AbilityCharge_103701_PostUIAudioCallback, CallbackType) == 0x000000, "Member 'PyWidget_AbilityCharge_103701_PostUIAudioCallback::CallbackType' has a wrong offset!");
static_assert(offsetof(PyWidget_AbilityCharge_103701_PostUIAudioCallback, CallbackInfo) == 0x000008, "Member 'PyWidget_AbilityCharge_103701_PostUIAudioCallback::CallbackInfo' has a wrong offset!");

}

