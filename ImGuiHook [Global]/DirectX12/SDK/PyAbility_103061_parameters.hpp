#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103061

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_103061.PyAbility_103061.NativeOnMontageEvent
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_103061_NativeOnMontageEvent final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103061_NativeOnMontageEvent) == 0x000008, "Wrong alignment on PyAbility_103061_NativeOnMontageEvent");
static_assert(sizeof(PyAbility_103061_NativeOnMontageEvent) == 0x000010, "Wrong size on PyAbility_103061_NativeOnMontageEvent");
static_assert(offsetof(PyAbility_103061_NativeOnMontageEvent, Tag) == 0x000000, "Member 'PyAbility_103061_NativeOnMontageEvent::Tag' has a wrong offset!");

// PythonFunction PyAbility_103061.PyAbility_103061.OnWaitTaskCancel
// 0x0168 (0x0168 - 0x0000)
struct PyAbility_103061_OnWaitTaskCancel final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0168)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyAbility_103061_OnWaitTaskCancel) == 0x000008, "Wrong alignment on PyAbility_103061_OnWaitTaskCancel");
static_assert(sizeof(PyAbility_103061_OnWaitTaskCancel) == 0x000168, "Wrong size on PyAbility_103061_OnWaitTaskCancel");
static_assert(offsetof(PyAbility_103061_OnWaitTaskCancel, Data) == 0x000000, "Member 'PyAbility_103061_OnWaitTaskCancel::Data' has a wrong offset!");

// PythonFunction PyAbility_103061.PyAbility_103061.OnWaitTaskConfirm
// 0x0168 (0x0168 - 0x0000)
struct PyAbility_103061_OnWaitTaskConfirm final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0168)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyAbility_103061_OnWaitTaskConfirm) == 0x000008, "Wrong alignment on PyAbility_103061_OnWaitTaskConfirm");
static_assert(sizeof(PyAbility_103061_OnWaitTaskConfirm) == 0x000168, "Wrong size on PyAbility_103061_OnWaitTaskConfirm");
static_assert(offsetof(PyAbility_103061_OnWaitTaskConfirm, Data) == 0x000000, "Member 'PyAbility_103061_OnWaitTaskConfirm::Data' has a wrong offset!");

// PythonFunction PyAbility_103061.PyCue_Ability_Loop_10306102.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10306102_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Ability_Loop_10306102_WhileActiveFX) == 0x000008, "Wrong alignment on PyCue_Ability_Loop_10306102_WhileActiveFX");
static_assert(sizeof(PyCue_Ability_Loop_10306102_WhileActiveFX) == 0x0001C0, "Wrong size on PyCue_Ability_Loop_10306102_WhileActiveFX");
static_assert(offsetof(PyCue_Ability_Loop_10306102_WhileActiveFX, MyTarget) == 0x000000, "Member 'PyCue_Ability_Loop_10306102_WhileActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Loop_10306102_WhileActiveFX, Parameters) == 0x000008, "Member 'PyCue_Ability_Loop_10306102_WhileActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103061.PyUIController_103061.SetAbility
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_103061_SetAbility final
{
public:
	int32                                         InAbilityId;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayAbility*                       InAbility;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_103061_SetAbility) == 0x000008, "Wrong alignment on PyUIController_103061_SetAbility");
static_assert(sizeof(PyUIController_103061_SetAbility) == 0x000010, "Wrong size on PyUIController_103061_SetAbility");
static_assert(offsetof(PyUIController_103061_SetAbility, InAbilityId) == 0x000000, "Member 'PyUIController_103061_SetAbility::InAbilityId' has a wrong offset!");
static_assert(offsetof(PyUIController_103061_SetAbility, InAbility) == 0x000008, "Member 'PyUIController_103061_SetAbility::InAbility' has a wrong offset!");

// PythonFunction PyAbility_103061.PyCue_Summoned_Loop_10306101.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Summoned_Loop_10306101_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Summoned_Loop_10306101_WhileActiveFX) == 0x000008, "Wrong alignment on PyCue_Summoned_Loop_10306101_WhileActiveFX");
static_assert(sizeof(PyCue_Summoned_Loop_10306101_WhileActiveFX) == 0x0001C0, "Wrong size on PyCue_Summoned_Loop_10306101_WhileActiveFX");
static_assert(offsetof(PyCue_Summoned_Loop_10306101_WhileActiveFX, MyTarget) == 0x000000, "Member 'PyCue_Summoned_Loop_10306101_WhileActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Summoned_Loop_10306101_WhileActiveFX, Parameters) == 0x000008, "Member 'PyCue_Summoned_Loop_10306101_WhileActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103061.PyCue_Summoned_Loop_10306101.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Summoned_Loop_10306101_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Summoned_Loop_10306101_OnRemoveFX) == 0x000008, "Wrong alignment on PyCue_Summoned_Loop_10306101_OnRemoveFX");
static_assert(sizeof(PyCue_Summoned_Loop_10306101_OnRemoveFX) == 0x0001C0, "Wrong size on PyCue_Summoned_Loop_10306101_OnRemoveFX");
static_assert(offsetof(PyCue_Summoned_Loop_10306101_OnRemoveFX, MyTarget) == 0x000000, "Member 'PyCue_Summoned_Loop_10306101_OnRemoveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Summoned_Loop_10306101_OnRemoveFX, Parameters) == 0x000008, "Member 'PyCue_Summoned_Loop_10306101_OnRemoveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103061.PyCue_Projectile_Loop_10306101.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Projectile_Loop_10306101_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Projectile_Loop_10306101_WhileActiveFX) == 0x000008, "Wrong alignment on PyCue_Projectile_Loop_10306101_WhileActiveFX");
static_assert(sizeof(PyCue_Projectile_Loop_10306101_WhileActiveFX) == 0x0001C0, "Wrong size on PyCue_Projectile_Loop_10306101_WhileActiveFX");
static_assert(offsetof(PyCue_Projectile_Loop_10306101_WhileActiveFX, MyTarget) == 0x000000, "Member 'PyCue_Projectile_Loop_10306101_WhileActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_10306101_WhileActiveFX, Parameters) == 0x000008, "Member 'PyCue_Projectile_Loop_10306101_WhileActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103061.PyCue_Projectile_Loop_10306101.OnExecuteFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Projectile_Loop_10306101_OnExecuteFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Projectile_Loop_10306101_OnExecuteFX) == 0x000008, "Wrong alignment on PyCue_Projectile_Loop_10306101_OnExecuteFX");
static_assert(sizeof(PyCue_Projectile_Loop_10306101_OnExecuteFX) == 0x0001C0, "Wrong size on PyCue_Projectile_Loop_10306101_OnExecuteFX");
static_assert(offsetof(PyCue_Projectile_Loop_10306101_OnExecuteFX, MyTarget) == 0x000000, "Member 'PyCue_Projectile_Loop_10306101_OnExecuteFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_10306101_OnExecuteFX, Parameters) == 0x000008, "Member 'PyCue_Projectile_Loop_10306101_OnExecuteFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103061.PyCue_Projectile_Loop_10306101.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Projectile_Loop_10306101_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Projectile_Loop_10306101_OnRemoveFX) == 0x000008, "Wrong alignment on PyCue_Projectile_Loop_10306101_OnRemoveFX");
static_assert(sizeof(PyCue_Projectile_Loop_10306101_OnRemoveFX) == 0x0001C0, "Wrong size on PyCue_Projectile_Loop_10306101_OnRemoveFX");
static_assert(offsetof(PyCue_Projectile_Loop_10306101_OnRemoveFX, MyTarget) == 0x000000, "Member 'PyCue_Projectile_Loop_10306101_OnRemoveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_10306101_OnRemoveFX, Parameters) == 0x000008, "Member 'PyCue_Projectile_Loop_10306101_OnRemoveFX::Parameters' has a wrong offset!");

}
