#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103761

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_103761.PySummonedComp_10376101.OnAttributeChange
// 0x0020 (0x0020 - 0x0000)
struct PySummonedComp_10376101_OnAttributeChange final
{
public:
	class AActor*                                 SourceActor_0;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ParamHandle;                                       // 0x0008(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(PySummonedComp_10376101_OnAttributeChange) == 0x000008, "Wrong alignment on PySummonedComp_10376101_OnAttributeChange");
static_assert(sizeof(PySummonedComp_10376101_OnAttributeChange) == 0x000020, "Wrong size on PySummonedComp_10376101_OnAttributeChange");
static_assert(offsetof(PySummonedComp_10376101_OnAttributeChange, SourceActor_0) == 0x000000, "Member 'PySummonedComp_10376101_OnAttributeChange::SourceActor_0' has a wrong offset!");
static_assert(offsetof(PySummonedComp_10376101_OnAttributeChange, ParamHandle) == 0x000008, "Member 'PySummonedComp_10376101_OnAttributeChange::ParamHandle' has a wrong offset!");

// PythonFunction PyAbility_103761.PySummonedComp_10376101.OnShellSummonedSpawned
// 0x0008 (0x0008 - 0x0000)
struct PySummonedComp_10376101_OnShellSummonedSpawned final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySummonedComp_10376101_OnShellSummonedSpawned) == 0x000008, "Wrong alignment on PySummonedComp_10376101_OnShellSummonedSpawned");
static_assert(sizeof(PySummonedComp_10376101_OnShellSummonedSpawned) == 0x000008, "Wrong size on PySummonedComp_10376101_OnShellSummonedSpawned");
static_assert(offsetof(PySummonedComp_10376101_OnShellSummonedSpawned, InActor) == 0x000000, "Member 'PySummonedComp_10376101_OnShellSummonedSpawned::InActor' has a wrong offset!");

// PythonFunction PyAbility_103761.PyAbility_103761.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103761_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103761_CanActivate) == 0x000001, "Wrong alignment on PyAbility_103761_CanActivate");
static_assert(sizeof(PyAbility_103761_CanActivate) == 0x000001, "Wrong size on PyAbility_103761_CanActivate");
static_assert(offsetof(PyAbility_103761_CanActivate, ReturnValue) == 0x000000, "Member 'PyAbility_103761_CanActivate::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_103761.PyAbility_103761.OnMainSummonedEndTask
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_103761_OnMainSummonedEndTask final
{
public:
	class AActor*                                 Summoner;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103761_OnMainSummonedEndTask) == 0x000008, "Wrong alignment on PyAbility_103761_OnMainSummonedEndTask");
static_assert(sizeof(PyAbility_103761_OnMainSummonedEndTask) == 0x000008, "Wrong size on PyAbility_103761_OnMainSummonedEndTask");
static_assert(offsetof(PyAbility_103761_OnMainSummonedEndTask, Summoner) == 0x000000, "Member 'PyAbility_103761_OnMainSummonedEndTask::Summoner' has a wrong offset!");

// PythonFunction PyAbility_103761.PyAbility_103761.OnMovementModeChanged
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_103761_OnMovementModeChanged final
{
public:
	class ACharacter*                             Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 PreMode;                                           // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         NewMode;                                           // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103761_OnMovementModeChanged) == 0x000008, "Wrong alignment on PyAbility_103761_OnMovementModeChanged");
static_assert(sizeof(PyAbility_103761_OnMovementModeChanged) == 0x000010, "Wrong size on PyAbility_103761_OnMovementModeChanged");
static_assert(offsetof(PyAbility_103761_OnMovementModeChanged, Actor) == 0x000000, "Member 'PyAbility_103761_OnMovementModeChanged::Actor' has a wrong offset!");
static_assert(offsetof(PyAbility_103761_OnMovementModeChanged, PreMode) == 0x000008, "Member 'PyAbility_103761_OnMovementModeChanged::PreMode' has a wrong offset!");
static_assert(offsetof(PyAbility_103761_OnMovementModeChanged, NewMode) == 0x000009, "Member 'PyAbility_103761_OnMovementModeChanged::NewMode' has a wrong offset!");

// DelegateFunction PyAbility_103761.PyAbility_103761.OnThrowSummoner__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103761_OnThrowSummoner__DelegateSignature final
{
public:
	bool                                          bIsThrow;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103761_OnThrowSummoner__DelegateSignature) == 0x000001, "Wrong alignment on PyAbility_103761_OnThrowSummoner__DelegateSignature");
static_assert(sizeof(PyAbility_103761_OnThrowSummoner__DelegateSignature) == 0x000001, "Wrong size on PyAbility_103761_OnThrowSummoner__DelegateSignature");
static_assert(offsetof(PyAbility_103761_OnThrowSummoner__DelegateSignature, bIsThrow) == 0x000000, "Member 'PyAbility_103761_OnThrowSummoner__DelegateSignature::bIsThrow' has a wrong offset!");

// PythonFunction PyAbility_103761.PyAbility_103761.OnTargetTaskValidData
// 0x0168 (0x0168 - 0x0000)
struct PyAbility_103761_OnTargetTaskValidData final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0168)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyAbility_103761_OnTargetTaskValidData) == 0x000008, "Wrong alignment on PyAbility_103761_OnTargetTaskValidData");
static_assert(sizeof(PyAbility_103761_OnTargetTaskValidData) == 0x000168, "Wrong size on PyAbility_103761_OnTargetTaskValidData");
static_assert(offsetof(PyAbility_103761_OnTargetTaskValidData, Data) == 0x000000, "Member 'PyAbility_103761_OnTargetTaskValidData::Data' has a wrong offset!");

// PythonFunction PyAbility_103761.PyAbility_103761.SpawnSummonedProjectile
// 0x00A0 (0x00A0 - 0x0000)
struct PyAbility_103761_SpawnSummonedProjectile final
{
public:
	struct FMarvelAbilitySocketInfo               SocketInfo;                                        // 0x0000(0x00A0)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(PyAbility_103761_SpawnSummonedProjectile) == 0x000010, "Wrong alignment on PyAbility_103761_SpawnSummonedProjectile");
static_assert(sizeof(PyAbility_103761_SpawnSummonedProjectile) == 0x0000A0, "Wrong size on PyAbility_103761_SpawnSummonedProjectile");
static_assert(offsetof(PyAbility_103761_SpawnSummonedProjectile, SocketInfo) == 0x000000, "Member 'PyAbility_103761_SpawnSummonedProjectile::SocketInfo' has a wrong offset!");

// PythonFunction PyAbility_103761.PyAbility_103761.GetAbilityDuration
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_103761_GetAbilityDuration final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103761_GetAbilityDuration) == 0x000004, "Wrong alignment on PyAbility_103761_GetAbilityDuration");
static_assert(sizeof(PyAbility_103761_GetAbilityDuration) == 0x000004, "Wrong size on PyAbility_103761_GetAbilityDuration");
static_assert(offsetof(PyAbility_103761_GetAbilityDuration, ReturnValue) == 0x000000, "Member 'PyAbility_103761_GetAbilityDuration::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_103761.PyAbility_103761.HandleAnimSocketInfo
// 0x00B0 (0x00B0 - 0x0000)
struct PyAbility_103761_HandleAnimSocketInfo final
{
public:
	int32                                         SocketId;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarvelAbilitySocketInfo               SocketInfo;                                        // 0x0010(0x00A0)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(PyAbility_103761_HandleAnimSocketInfo) == 0x000010, "Wrong alignment on PyAbility_103761_HandleAnimSocketInfo");
static_assert(sizeof(PyAbility_103761_HandleAnimSocketInfo) == 0x0000B0, "Wrong size on PyAbility_103761_HandleAnimSocketInfo");
static_assert(offsetof(PyAbility_103761_HandleAnimSocketInfo, SocketId) == 0x000000, "Member 'PyAbility_103761_HandleAnimSocketInfo::SocketId' has a wrong offset!");
static_assert(offsetof(PyAbility_103761_HandleAnimSocketInfo, SocketInfo) == 0x000010, "Member 'PyAbility_103761_HandleAnimSocketInfo::SocketInfo' has a wrong offset!");

// PythonFunction PyAbility_103761.PyAbility_103761.OnMainSummonedSpawned
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_103761_OnMainSummonedSpawned final
{
public:
	class AActor*                                 Summoned;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103761_OnMainSummonedSpawned) == 0x000008, "Wrong alignment on PyAbility_103761_OnMainSummonedSpawned");
static_assert(sizeof(PyAbility_103761_OnMainSummonedSpawned) == 0x000008, "Wrong size on PyAbility_103761_OnMainSummonedSpawned");
static_assert(offsetof(PyAbility_103761_OnMainSummonedSpawned, Summoned) == 0x000000, "Member 'PyAbility_103761_OnMainSummonedSpawned::Summoned' has a wrong offset!");

// PythonFunction PyAbility_103761.PyAbility_103761.InitSummoned
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_103761_InitSummoned final
{
public:
	class AActor*                                 Summoned;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103761_InitSummoned) == 0x000008, "Wrong alignment on PyAbility_103761_InitSummoned");
static_assert(sizeof(PyAbility_103761_InitSummoned) == 0x000008, "Wrong size on PyAbility_103761_InitSummoned");
static_assert(offsetof(PyAbility_103761_InitSummoned, Summoned) == 0x000000, "Member 'PyAbility_103761_InitSummoned::Summoned' has a wrong offset!");

// PythonFunction PyAbility_103761.PyAbility_103761.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103761_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103761_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_103761_K2_OnEndAbility");
static_assert(sizeof(PyAbility_103761_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_103761_K2_OnEndAbility");
static_assert(offsetof(PyAbility_103761_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_103761_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// PythonFunction PyAbility_103761.PyAbility_103761.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_103761_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103761_NativeOnMontageCompleted) == 0x000008, "Wrong alignment on PyAbility_103761_NativeOnMontageCompleted");
static_assert(sizeof(PyAbility_103761_NativeOnMontageCompleted) == 0x000010, "Wrong size on PyAbility_103761_NativeOnMontageCompleted");
static_assert(offsetof(PyAbility_103761_NativeOnMontageCompleted, Tag) == 0x000000, "Member 'PyAbility_103761_NativeOnMontageCompleted::Tag' has a wrong offset!");

// PythonFunction PyAbility_103761.PyAbility_103761.NativeOnMontageBlendOut
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_103761_NativeOnMontageBlendOut final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103761_NativeOnMontageBlendOut) == 0x000008, "Wrong alignment on PyAbility_103761_NativeOnMontageBlendOut");
static_assert(sizeof(PyAbility_103761_NativeOnMontageBlendOut) == 0x000010, "Wrong size on PyAbility_103761_NativeOnMontageBlendOut");
static_assert(offsetof(PyAbility_103761_NativeOnMontageBlendOut, Tag) == 0x000000, "Member 'PyAbility_103761_NativeOnMontageBlendOut::Tag' has a wrong offset!");

// PythonFunction PyAbility_103761.PyAbility_103761.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_103761_NativeOnMontageInterrupted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103761_NativeOnMontageInterrupted) == 0x000008, "Wrong alignment on PyAbility_103761_NativeOnMontageInterrupted");
static_assert(sizeof(PyAbility_103761_NativeOnMontageInterrupted) == 0x000010, "Wrong size on PyAbility_103761_NativeOnMontageInterrupted");
static_assert(offsetof(PyAbility_103761_NativeOnMontageInterrupted, Tag) == 0x000000, "Member 'PyAbility_103761_NativeOnMontageInterrupted::Tag' has a wrong offset!");

// PythonFunction PyAbility_103761.PyAbility_103761.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_103761_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103761_NativeOnMontageCancelled) == 0x000008, "Wrong alignment on PyAbility_103761_NativeOnMontageCancelled");
static_assert(sizeof(PyAbility_103761_NativeOnMontageCancelled) == 0x000010, "Wrong size on PyAbility_103761_NativeOnMontageCancelled");
static_assert(offsetof(PyAbility_103761_NativeOnMontageCancelled, Tag) == 0x000000, "Member 'PyAbility_103761_NativeOnMontageCancelled::Tag' has a wrong offset!");

// PythonFunction PyAbility_103761.PyAbility_103761.NativeOnMontageEvent
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_103761_NativeOnMontageEvent final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103761_NativeOnMontageEvent) == 0x000008, "Wrong alignment on PyAbility_103761_NativeOnMontageEvent");
static_assert(sizeof(PyAbility_103761_NativeOnMontageEvent) == 0x000010, "Wrong size on PyAbility_103761_NativeOnMontageEvent");
static_assert(offsetof(PyAbility_103761_NativeOnMontageEvent, Tag) == 0x000000, "Member 'PyAbility_103761_NativeOnMontageEvent::Tag' has a wrong offset!");

// PythonFunction PyAbility_103761.PyCue_Summoner_Loop_10376101.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Summoner_Loop_10376101_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Summoner_Loop_10376101_WhileActiveFX) == 0x000008, "Wrong alignment on PyCue_Summoner_Loop_10376101_WhileActiveFX");
static_assert(sizeof(PyCue_Summoner_Loop_10376101_WhileActiveFX) == 0x0001C0, "Wrong size on PyCue_Summoner_Loop_10376101_WhileActiveFX");
static_assert(offsetof(PyCue_Summoner_Loop_10376101_WhileActiveFX, MyTarget) == 0x000000, "Member 'PyCue_Summoner_Loop_10376101_WhileActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10376101_WhileActiveFX, Parameters) == 0x000008, "Member 'PyCue_Summoner_Loop_10376101_WhileActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103761.PyCue_Summoner_Loop_10376101.K2_UpdateTeamVisualEffect
// 0x0010 (0x0010 - 0x0000)
struct PyCue_Summoner_Loop_10376101_K2_UpdateTeamVisualEffect final
{
public:
	struct FTeamVisual                            NewTeamVisual;                                     // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(PyCue_Summoner_Loop_10376101_K2_UpdateTeamVisualEffect) == 0x000004, "Wrong alignment on PyCue_Summoner_Loop_10376101_K2_UpdateTeamVisualEffect");
static_assert(sizeof(PyCue_Summoner_Loop_10376101_K2_UpdateTeamVisualEffect) == 0x000010, "Wrong size on PyCue_Summoner_Loop_10376101_K2_UpdateTeamVisualEffect");
static_assert(offsetof(PyCue_Summoner_Loop_10376101_K2_UpdateTeamVisualEffect, NewTeamVisual) == 0x000000, "Member 'PyCue_Summoner_Loop_10376101_K2_UpdateTeamVisualEffect::NewTeamVisual' has a wrong offset!");

// PythonFunction PyAbility_103761.PyCue_Summoner_Loop_10376101.OnAttributeChange
// 0x0020 (0x0020 - 0x0000)
struct PyCue_Summoner_Loop_10376101_OnAttributeChange final
{
public:
	class AActor*                                 SourceActor;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ParamHandle;                                       // 0x0008(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Summoner_Loop_10376101_OnAttributeChange) == 0x000008, "Wrong alignment on PyCue_Summoner_Loop_10376101_OnAttributeChange");
static_assert(sizeof(PyCue_Summoner_Loop_10376101_OnAttributeChange) == 0x000020, "Wrong size on PyCue_Summoner_Loop_10376101_OnAttributeChange");
static_assert(offsetof(PyCue_Summoner_Loop_10376101_OnAttributeChange, SourceActor) == 0x000000, "Member 'PyCue_Summoner_Loop_10376101_OnAttributeChange::SourceActor' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10376101_OnAttributeChange, ParamHandle) == 0x000008, "Member 'PyCue_Summoner_Loop_10376101_OnAttributeChange::ParamHandle' has a wrong offset!");

// PythonFunction PyAbility_103761.PyCue_Summoner_Loop_10376101.OnExecuteFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Summoner_Loop_10376101_OnExecuteFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Summoner_Loop_10376101_OnExecuteFX) == 0x000008, "Wrong alignment on PyCue_Summoner_Loop_10376101_OnExecuteFX");
static_assert(sizeof(PyCue_Summoner_Loop_10376101_OnExecuteFX) == 0x0001C0, "Wrong size on PyCue_Summoner_Loop_10376101_OnExecuteFX");
static_assert(offsetof(PyCue_Summoner_Loop_10376101_OnExecuteFX, MyTarget) == 0x000000, "Member 'PyCue_Summoner_Loop_10376101_OnExecuteFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10376101_OnExecuteFX, Parameters) == 0x000008, "Member 'PyCue_Summoner_Loop_10376101_OnExecuteFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103761.PyCue_Summoner_Loop_10376101.OnExecuteAudio
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Summoner_Loop_10376101_OnExecuteAudio final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Summoner_Loop_10376101_OnExecuteAudio) == 0x000008, "Wrong alignment on PyCue_Summoner_Loop_10376101_OnExecuteAudio");
static_assert(sizeof(PyCue_Summoner_Loop_10376101_OnExecuteAudio) == 0x0001C0, "Wrong size on PyCue_Summoner_Loop_10376101_OnExecuteAudio");
static_assert(offsetof(PyCue_Summoner_Loop_10376101_OnExecuteAudio, MyTarget) == 0x000000, "Member 'PyCue_Summoner_Loop_10376101_OnExecuteAudio::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10376101_OnExecuteAudio, Parameters) == 0x000008, "Member 'PyCue_Summoner_Loop_10376101_OnExecuteAudio::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103761.PyCue_Summoner_Loop_10376101.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Summoner_Loop_10376101_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Summoner_Loop_10376101_OnRemoveFX) == 0x000008, "Wrong alignment on PyCue_Summoner_Loop_10376101_OnRemoveFX");
static_assert(sizeof(PyCue_Summoner_Loop_10376101_OnRemoveFX) == 0x0001C0, "Wrong size on PyCue_Summoner_Loop_10376101_OnRemoveFX");
static_assert(offsetof(PyCue_Summoner_Loop_10376101_OnRemoveFX, MyTarget) == 0x000000, "Member 'PyCue_Summoner_Loop_10376101_OnRemoveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10376101_OnRemoveFX, Parameters) == 0x000008, "Member 'PyCue_Summoner_Loop_10376101_OnRemoveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103761.PyCue_Scope_HitImpact_10376102.GetDecalScale
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Scope_HitImpact_10376102_GetDecalScale final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         ReturnValue;                                       // 0x01C0(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Scope_HitImpact_10376102_GetDecalScale) == 0x000008, "Wrong alignment on PyCue_Scope_HitImpact_10376102_GetDecalScale");
static_assert(sizeof(PyCue_Scope_HitImpact_10376102_GetDecalScale) == 0x0001C8, "Wrong size on PyCue_Scope_HitImpact_10376102_GetDecalScale");
static_assert(offsetof(PyCue_Scope_HitImpact_10376102_GetDecalScale, MyTarget) == 0x000000, "Member 'PyCue_Scope_HitImpact_10376102_GetDecalScale::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Scope_HitImpact_10376102_GetDecalScale, Parameters) == 0x000008, "Member 'PyCue_Scope_HitImpact_10376102_GetDecalScale::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_Scope_HitImpact_10376102_GetDecalScale, ReturnValue) == 0x0001C0, "Member 'PyCue_Scope_HitImpact_10376102_GetDecalScale::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_103761.PyCue_Scope_HitImpact_10376102.SetDecalMaterialParameter
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Scope_HitImpact_10376102_SetDecalMaterialParameter final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	class UDecalComponent*                        DecalComp;                                         // 0x01C0(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Scope_HitImpact_10376102_SetDecalMaterialParameter) == 0x000008, "Wrong alignment on PyCue_Scope_HitImpact_10376102_SetDecalMaterialParameter");
static_assert(sizeof(PyCue_Scope_HitImpact_10376102_SetDecalMaterialParameter) == 0x0001C8, "Wrong size on PyCue_Scope_HitImpact_10376102_SetDecalMaterialParameter");
static_assert(offsetof(PyCue_Scope_HitImpact_10376102_SetDecalMaterialParameter, MyTarget) == 0x000000, "Member 'PyCue_Scope_HitImpact_10376102_SetDecalMaterialParameter::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Scope_HitImpact_10376102_SetDecalMaterialParameter, Parameters) == 0x000008, "Member 'PyCue_Scope_HitImpact_10376102_SetDecalMaterialParameter::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_Scope_HitImpact_10376102_SetDecalMaterialParameter, DecalComp) == 0x0001C0, "Member 'PyCue_Scope_HitImpact_10376102_SetDecalMaterialParameter::DecalComp' has a wrong offset!");

// PythonFunction PyAbility_103761.PyCue_Projectile_Loop_10376105.OnExecuteFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Projectile_Loop_10376105_OnExecuteFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Projectile_Loop_10376105_OnExecuteFX) == 0x000008, "Wrong alignment on PyCue_Projectile_Loop_10376105_OnExecuteFX");
static_assert(sizeof(PyCue_Projectile_Loop_10376105_OnExecuteFX) == 0x0001C0, "Wrong size on PyCue_Projectile_Loop_10376105_OnExecuteFX");
static_assert(offsetof(PyCue_Projectile_Loop_10376105_OnExecuteFX, MyTarget) == 0x000000, "Member 'PyCue_Projectile_Loop_10376105_OnExecuteFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_10376105_OnExecuteFX, Parameters) == 0x000008, "Member 'PyCue_Projectile_Loop_10376105_OnExecuteFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103761.PyCue_Projectile_Loop_10376105.OnActorPostForceChanged
// 0x0058 (0x0058 - 0x0000)
struct PyCue_Projectile_Loop_10376105_OnActorPostForceChanged final
{
public:
	class AActor*                                 SourceActor;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMarvelTargetActorGenerateInfo         GenerateInfo;                                      // 0x0008(0x0048)(ConstParm, Parm, OutParm, ReferenceParm)
	ETargetActorType                              TargetActorType;                                   // 0x0050(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AbilityID;                                         // 0x0054(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Projectile_Loop_10376105_OnActorPostForceChanged) == 0x000008, "Wrong alignment on PyCue_Projectile_Loop_10376105_OnActorPostForceChanged");
static_assert(sizeof(PyCue_Projectile_Loop_10376105_OnActorPostForceChanged) == 0x000058, "Wrong size on PyCue_Projectile_Loop_10376105_OnActorPostForceChanged");
static_assert(offsetof(PyCue_Projectile_Loop_10376105_OnActorPostForceChanged, SourceActor) == 0x000000, "Member 'PyCue_Projectile_Loop_10376105_OnActorPostForceChanged::SourceActor' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_10376105_OnActorPostForceChanged, GenerateInfo) == 0x000008, "Member 'PyCue_Projectile_Loop_10376105_OnActorPostForceChanged::GenerateInfo' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_10376105_OnActorPostForceChanged, TargetActorType) == 0x000050, "Member 'PyCue_Projectile_Loop_10376105_OnActorPostForceChanged::TargetActorType' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_10376105_OnActorPostForceChanged, AbilityID) == 0x000054, "Member 'PyCue_Projectile_Loop_10376105_OnActorPostForceChanged::AbilityID' has a wrong offset!");

// PythonFunction PyAbility_103761.PyCue_Scope_Start_10376102.OnScopeNiagaraSpawned
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Scope_Start_10376102_OnScopeNiagaraSpawned final
{
public:
	class UNiagaraComponent*                      InNiagaraComponent;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 MyTarget;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0010(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Scope_Start_10376102_OnScopeNiagaraSpawned) == 0x000008, "Wrong alignment on PyCue_Scope_Start_10376102_OnScopeNiagaraSpawned");
static_assert(sizeof(PyCue_Scope_Start_10376102_OnScopeNiagaraSpawned) == 0x0001C8, "Wrong size on PyCue_Scope_Start_10376102_OnScopeNiagaraSpawned");
static_assert(offsetof(PyCue_Scope_Start_10376102_OnScopeNiagaraSpawned, InNiagaraComponent) == 0x000000, "Member 'PyCue_Scope_Start_10376102_OnScopeNiagaraSpawned::InNiagaraComponent' has a wrong offset!");
static_assert(offsetof(PyCue_Scope_Start_10376102_OnScopeNiagaraSpawned, MyTarget) == 0x000008, "Member 'PyCue_Scope_Start_10376102_OnScopeNiagaraSpawned::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Scope_Start_10376102_OnScopeNiagaraSpawned, Parameters) == 0x000010, "Member 'PyCue_Scope_Start_10376102_OnScopeNiagaraSpawned::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103761.PyCue_Scope_Start_10376102.OnHitSceneNiagaraSpawned
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Scope_Start_10376102_OnHitSceneNiagaraSpawned final
{
public:
	class UNiagaraComponent*                      InNiagaraComponent;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 MyTarget;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0010(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Scope_Start_10376102_OnHitSceneNiagaraSpawned) == 0x000008, "Wrong alignment on PyCue_Scope_Start_10376102_OnHitSceneNiagaraSpawned");
static_assert(sizeof(PyCue_Scope_Start_10376102_OnHitSceneNiagaraSpawned) == 0x0001C8, "Wrong size on PyCue_Scope_Start_10376102_OnHitSceneNiagaraSpawned");
static_assert(offsetof(PyCue_Scope_Start_10376102_OnHitSceneNiagaraSpawned, InNiagaraComponent) == 0x000000, "Member 'PyCue_Scope_Start_10376102_OnHitSceneNiagaraSpawned::InNiagaraComponent' has a wrong offset!");
static_assert(offsetof(PyCue_Scope_Start_10376102_OnHitSceneNiagaraSpawned, MyTarget) == 0x000008, "Member 'PyCue_Scope_Start_10376102_OnHitSceneNiagaraSpawned::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Scope_Start_10376102_OnHitSceneNiagaraSpawned, Parameters) == 0x000010, "Member 'PyCue_Scope_Start_10376102_OnHitSceneNiagaraSpawned::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103761.PyCue_Scope_Start_10376102.OnExecuteFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Scope_Start_10376102_OnExecuteFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Scope_Start_10376102_OnExecuteFX) == 0x000008, "Wrong alignment on PyCue_Scope_Start_10376102_OnExecuteFX");
static_assert(sizeof(PyCue_Scope_Start_10376102_OnExecuteFX) == 0x0001C0, "Wrong size on PyCue_Scope_Start_10376102_OnExecuteFX");
static_assert(offsetof(PyCue_Scope_Start_10376102_OnExecuteFX, MyTarget) == 0x000000, "Member 'PyCue_Scope_Start_10376102_OnExecuteFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Scope_Start_10376102_OnExecuteFX, Parameters) == 0x000008, "Member 'PyCue_Scope_Start_10376102_OnExecuteFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103761.PyUIController_103761.SetAbility
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_103761_SetAbility final
{
public:
	int32                                         InAbilityId;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayAbility*                       InAbility;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_103761_SetAbility) == 0x000008, "Wrong alignment on PyUIController_103761_SetAbility");
static_assert(sizeof(PyUIController_103761_SetAbility) == 0x000010, "Wrong size on PyUIController_103761_SetAbility");
static_assert(offsetof(PyUIController_103761_SetAbility, InAbilityId) == 0x000000, "Member 'PyUIController_103761_SetAbility::InAbilityId' has a wrong offset!");
static_assert(offsetof(PyUIController_103761_SetAbility, InAbility) == 0x000008, "Member 'PyUIController_103761_SetAbility::InAbility' has a wrong offset!");

}

