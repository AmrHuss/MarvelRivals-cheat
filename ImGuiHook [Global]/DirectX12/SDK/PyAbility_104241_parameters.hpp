#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104241

#include "Basic.hpp"

#include "Hero_1042_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_104241.PyAbility_104241.OnActivateActionPressed
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_104241_OnActivateActionPressed final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104241_OnActivateActionPressed) == 0x000004, "Wrong alignment on PyAbility_104241_OnActivateActionPressed");
static_assert(sizeof(PyAbility_104241_OnActivateActionPressed) == 0x000004, "Wrong size on PyAbility_104241_OnActivateActionPressed");
static_assert(offsetof(PyAbility_104241_OnActivateActionPressed, TimeWaited) == 0x000000, "Member 'PyAbility_104241_OnActivateActionPressed::TimeWaited' has a wrong offset!");

// PythonFunction PyAbility_104241.PyAbility_104241.OnConfirmEvent
// 0x0168 (0x0168 - 0x0000)
struct PyAbility_104241_OnConfirmEvent final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0168)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyAbility_104241_OnConfirmEvent) == 0x000008, "Wrong alignment on PyAbility_104241_OnConfirmEvent");
static_assert(sizeof(PyAbility_104241_OnConfirmEvent) == 0x000168, "Wrong size on PyAbility_104241_OnConfirmEvent");
static_assert(offsetof(PyAbility_104241_OnConfirmEvent, Data) == 0x000000, "Member 'PyAbility_104241_OnConfirmEvent::Data' has a wrong offset!");

// PythonFunction PyAbility_104241.PyAbility_104241.OnCancelEvent
// 0x0168 (0x0168 - 0x0000)
struct PyAbility_104241_OnCancelEvent final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0168)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyAbility_104241_OnCancelEvent) == 0x000008, "Wrong alignment on PyAbility_104241_OnCancelEvent");
static_assert(sizeof(PyAbility_104241_OnCancelEvent) == 0x000168, "Wrong size on PyAbility_104241_OnCancelEvent");
static_assert(offsetof(PyAbility_104241_OnCancelEvent, Data) == 0x000000, "Member 'PyAbility_104241_OnCancelEvent::Data' has a wrong offset!");

// PythonFunction PyAbility_104241.PyAbility_104241.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104241_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104241_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_104241_K2_OnEndAbility");
static_assert(sizeof(PyAbility_104241_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_104241_K2_OnEndAbility");
static_assert(offsetof(PyAbility_104241_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_104241_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// DelegateFunction PyAbility_104241.PySummonedComp_10424101.OnStateChange__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct PySummonedComp_10424101_OnStateChange__DelegateSignature final
{
public:
	EState_10424101                               NewState;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySummonedComp_10424101_OnStateChange__DelegateSignature) == 0x000001, "Wrong alignment on PySummonedComp_10424101_OnStateChange__DelegateSignature");
static_assert(sizeof(PySummonedComp_10424101_OnStateChange__DelegateSignature) == 0x000001, "Wrong size on PySummonedComp_10424101_OnStateChange__DelegateSignature");
static_assert(offsetof(PySummonedComp_10424101_OnStateChange__DelegateSignature, NewState) == 0x000000, "Member 'PySummonedComp_10424101_OnStateChange__DelegateSignature::NewState' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummonedComp_10424101.SetState
// 0x0001 (0x0001 - 0x0000)
struct PySummonedComp_10424101_SetState final
{
public:
	EState_10424101                               NewState;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySummonedComp_10424101_SetState) == 0x000001, "Wrong alignment on PySummonedComp_10424101_SetState");
static_assert(sizeof(PySummonedComp_10424101_SetState) == 0x000001, "Wrong size on PySummonedComp_10424101_SetState");
static_assert(offsetof(PySummonedComp_10424101_SetState, NewState) == 0x000000, "Member 'PySummonedComp_10424101_SetState::NewState' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummonedComp_10424101.SetEvent
// 0x0001 (0x0001 - 0x0000)
struct PySummonedComp_10424101_SetEvent final
{
public:
	EEvent_10424101                               NewEvent;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySummonedComp_10424101_SetEvent) == 0x000001, "Wrong alignment on PySummonedComp_10424101_SetEvent");
static_assert(sizeof(PySummonedComp_10424101_SetEvent) == 0x000001, "Wrong size on PySummonedComp_10424101_SetEvent");
static_assert(offsetof(PySummonedComp_10424101_SetEvent, NewEvent) == 0x000000, "Member 'PySummonedComp_10424101_SetEvent::NewEvent' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummonedComp_10424101.MulticastLaunch
// 0x0030 (0x0030 - 0x0000)
struct PySummonedComp_10424101_MulticastLaunch final
{
public:
	struct FVector                                StartLocation;                                     // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Velocity;                                          // 0x0018(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySummonedComp_10424101_MulticastLaunch) == 0x000008, "Wrong alignment on PySummonedComp_10424101_MulticastLaunch");
static_assert(sizeof(PySummonedComp_10424101_MulticastLaunch) == 0x000030, "Wrong size on PySummonedComp_10424101_MulticastLaunch");
static_assert(offsetof(PySummonedComp_10424101_MulticastLaunch, StartLocation) == 0x000000, "Member 'PySummonedComp_10424101_MulticastLaunch::StartLocation' has a wrong offset!");
static_assert(offsetof(PySummonedComp_10424101_MulticastLaunch, Velocity) == 0x000018, "Member 'PySummonedComp_10424101_MulticastLaunch::Velocity' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummonedComp_10424101.OnProjectileHit
// 0x0160 (0x0160 - 0x0000)
struct PySummonedComp_10424101_OnProjectileHit final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0160)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PySummonedComp_10424101_OnProjectileHit) == 0x000008, "Wrong alignment on PySummonedComp_10424101_OnProjectileHit");
static_assert(sizeof(PySummonedComp_10424101_OnProjectileHit) == 0x000160, "Wrong size on PySummonedComp_10424101_OnProjectileHit");
static_assert(offsetof(PySummonedComp_10424101_OnProjectileHit, Hit) == 0x000000, "Member 'PySummonedComp_10424101_OnProjectileHit::Hit' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummonedComp_10424101.OnAttachActorDestroyed
// 0x0018 (0x0018 - 0x0000)
struct PySummonedComp_10424101_OnAttachActorDestroyed final
{
public:
	class UGeometryCollectionComponent*           Component;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Name_0;                                            // 0x0008(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySummonedComp_10424101_OnAttachActorDestroyed) == 0x000008, "Wrong alignment on PySummonedComp_10424101_OnAttachActorDestroyed");
static_assert(sizeof(PySummonedComp_10424101_OnAttachActorDestroyed) == 0x000018, "Wrong size on PySummonedComp_10424101_OnAttachActorDestroyed");
static_assert(offsetof(PySummonedComp_10424101_OnAttachActorDestroyed, Component) == 0x000000, "Member 'PySummonedComp_10424101_OnAttachActorDestroyed::Component' has a wrong offset!");
static_assert(offsetof(PySummonedComp_10424101_OnAttachActorDestroyed, Name_0) == 0x000008, "Member 'PySummonedComp_10424101_OnAttachActorDestroyed::Name_0' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummonedComp_10424101.OnChaosBroken
// 0x0078 (0x0078 - 0x0000)
struct PySummonedComp_10424101_OnChaosBroken final
{
public:
	struct FChaosBreakEvent                       BreakEvent;                                        // 0x0000(0x0078)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(PySummonedComp_10424101_OnChaosBroken) == 0x000008, "Wrong alignment on PySummonedComp_10424101_OnChaosBroken");
static_assert(sizeof(PySummonedComp_10424101_OnChaosBroken) == 0x000078, "Wrong size on PySummonedComp_10424101_OnChaosBroken");
static_assert(offsetof(PySummonedComp_10424101_OnChaosBroken, BreakEvent) == 0x000000, "Member 'PySummonedComp_10424101_OnChaosBroken::BreakEvent' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummonedComp_10424101.OnAttachComponentFracture
// 0x0030 (0x0030 - 0x0000)
struct PySummonedComp_10424101_OnAttachComponentFracture final
{
public:
	struct FVector                                Point;                                             // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Direction;                                         // 0x0018(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySummonedComp_10424101_OnAttachComponentFracture) == 0x000008, "Wrong alignment on PySummonedComp_10424101_OnAttachComponentFracture");
static_assert(sizeof(PySummonedComp_10424101_OnAttachComponentFracture) == 0x000030, "Wrong size on PySummonedComp_10424101_OnAttachComponentFracture");
static_assert(offsetof(PySummonedComp_10424101_OnAttachComponentFracture, Point) == 0x000000, "Member 'PySummonedComp_10424101_OnAttachComponentFracture::Point' has a wrong offset!");
static_assert(offsetof(PySummonedComp_10424101_OnAttachComponentFracture, Direction) == 0x000018, "Member 'PySummonedComp_10424101_OnAttachComponentFracture::Direction' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummonedComp_10424101.OnPresetDestuctionBegin
// 0x000C (0x000C - 0x0000)
struct PySummonedComp_10424101_OnPresetDestuctionBegin final
{
public:
	class FName                                   LevelName;                                         // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySummonedComp_10424101_OnPresetDestuctionBegin) == 0x000004, "Wrong alignment on PySummonedComp_10424101_OnPresetDestuctionBegin");
static_assert(sizeof(PySummonedComp_10424101_OnPresetDestuctionBegin) == 0x00000C, "Wrong size on PySummonedComp_10424101_OnPresetDestuctionBegin");
static_assert(offsetof(PySummonedComp_10424101_OnPresetDestuctionBegin, LevelName) == 0x000000, "Member 'PySummonedComp_10424101_OnPresetDestuctionBegin::LevelName' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummoned_10424101.GetCurrentState
// 0x0001 (0x0001 - 0x0000)
struct PySummoned_10424101_GetCurrentState final
{
public:
	EState_10424101                               ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySummoned_10424101_GetCurrentState) == 0x000001, "Wrong alignment on PySummoned_10424101_GetCurrentState");
static_assert(sizeof(PySummoned_10424101_GetCurrentState) == 0x000001, "Wrong size on PySummoned_10424101_GetCurrentState");
static_assert(offsetof(PySummoned_10424101_GetCurrentState, ReturnValue) == 0x000000, "Member 'PySummoned_10424101_GetCurrentState::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummonerLoop_10424101_Cue.WhileActive
// 0x01C8 (0x01C8 - 0x0000)
struct PySummonerLoop_10424101_Cue_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySummonerLoop_10424101_Cue_WhileActive) == 0x000008, "Wrong alignment on PySummonerLoop_10424101_Cue_WhileActive");
static_assert(sizeof(PySummonerLoop_10424101_Cue_WhileActive) == 0x0001C8, "Wrong size on PySummonerLoop_10424101_Cue_WhileActive");
static_assert(offsetof(PySummonerLoop_10424101_Cue_WhileActive, MyTarget) == 0x000000, "Member 'PySummonerLoop_10424101_Cue_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(PySummonerLoop_10424101_Cue_WhileActive, Parameters) == 0x000008, "Member 'PySummonerLoop_10424101_Cue_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(PySummonerLoop_10424101_Cue_WhileActive, ReturnValue) == 0x0001C0, "Member 'PySummonerLoop_10424101_Cue_WhileActive::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummonerLoop_10424101_Cue.OnExecuteFX
// 0x01C0 (0x01C0 - 0x0000)
struct PySummonerLoop_10424101_Cue_OnExecuteFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PySummonerLoop_10424101_Cue_OnExecuteFX) == 0x000008, "Wrong alignment on PySummonerLoop_10424101_Cue_OnExecuteFX");
static_assert(sizeof(PySummonerLoop_10424101_Cue_OnExecuteFX) == 0x0001C0, "Wrong size on PySummonerLoop_10424101_Cue_OnExecuteFX");
static_assert(offsetof(PySummonerLoop_10424101_Cue_OnExecuteFX, MyTarget) == 0x000000, "Member 'PySummonerLoop_10424101_Cue_OnExecuteFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PySummonerLoop_10424101_Cue_OnExecuteFX, Parameters) == 0x000008, "Member 'PySummonerLoop_10424101_Cue_OnExecuteFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummonerLoop_10424101_Cue.OnRemove
// 0x01C8 (0x01C8 - 0x0000)
struct PySummonerLoop_10424101_Cue_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySummonerLoop_10424101_Cue_OnRemove) == 0x000008, "Wrong alignment on PySummonerLoop_10424101_Cue_OnRemove");
static_assert(sizeof(PySummonerLoop_10424101_Cue_OnRemove) == 0x0001C8, "Wrong size on PySummonerLoop_10424101_Cue_OnRemove");
static_assert(offsetof(PySummonerLoop_10424101_Cue_OnRemove, MyTarget) == 0x000000, "Member 'PySummonerLoop_10424101_Cue_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(PySummonerLoop_10424101_Cue_OnRemove, Parameters) == 0x000008, "Member 'PySummonerLoop_10424101_Cue_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(PySummonerLoop_10424101_Cue_OnRemove, ReturnValue) == 0x0001C0, "Member 'PySummonerLoop_10424101_Cue_OnRemove::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummonerLoop_10424102_Cue.WhileActiveAudio
// 0x01C0 (0x01C0 - 0x0000)
struct PySummonerLoop_10424102_Cue_WhileActiveAudio final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PySummonerLoop_10424102_Cue_WhileActiveAudio) == 0x000008, "Wrong alignment on PySummonerLoop_10424102_Cue_WhileActiveAudio");
static_assert(sizeof(PySummonerLoop_10424102_Cue_WhileActiveAudio) == 0x0001C0, "Wrong size on PySummonerLoop_10424102_Cue_WhileActiveAudio");
static_assert(offsetof(PySummonerLoop_10424102_Cue_WhileActiveAudio, MyTarget) == 0x000000, "Member 'PySummonerLoop_10424102_Cue_WhileActiveAudio::MyTarget' has a wrong offset!");
static_assert(offsetof(PySummonerLoop_10424102_Cue_WhileActiveAudio, Parameters) == 0x000008, "Member 'PySummonerLoop_10424102_Cue_WhileActiveAudio::Parameters' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummonerLoop_10424102_Cue.OnRemoveAudio
// 0x01C0 (0x01C0 - 0x0000)
struct PySummonerLoop_10424102_Cue_OnRemoveAudio final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PySummonerLoop_10424102_Cue_OnRemoveAudio) == 0x000008, "Wrong alignment on PySummonerLoop_10424102_Cue_OnRemoveAudio");
static_assert(sizeof(PySummonerLoop_10424102_Cue_OnRemoveAudio) == 0x0001C0, "Wrong size on PySummonerLoop_10424102_Cue_OnRemoveAudio");
static_assert(offsetof(PySummonerLoop_10424102_Cue_OnRemoveAudio, MyTarget) == 0x000000, "Member 'PySummonerLoop_10424102_Cue_OnRemoveAudio::MyTarget' has a wrong offset!");
static_assert(offsetof(PySummonerLoop_10424102_Cue_OnRemoveAudio, Parameters) == 0x000008, "Member 'PySummonerLoop_10424102_Cue_OnRemoveAudio::Parameters' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummonerLoop_10424103_Cue.WhileActive
// 0x01C8 (0x01C8 - 0x0000)
struct PySummonerLoop_10424103_Cue_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySummonerLoop_10424103_Cue_WhileActive) == 0x000008, "Wrong alignment on PySummonerLoop_10424103_Cue_WhileActive");
static_assert(sizeof(PySummonerLoop_10424103_Cue_WhileActive) == 0x0001C8, "Wrong size on PySummonerLoop_10424103_Cue_WhileActive");
static_assert(offsetof(PySummonerLoop_10424103_Cue_WhileActive, MyTarget) == 0x000000, "Member 'PySummonerLoop_10424103_Cue_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(PySummonerLoop_10424103_Cue_WhileActive, Parameters) == 0x000008, "Member 'PySummonerLoop_10424103_Cue_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(PySummonerLoop_10424103_Cue_WhileActive, ReturnValue) == 0x0001C0, "Member 'PySummonerLoop_10424103_Cue_WhileActive::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_104241.PySummonerLoop_10424103_Cue.OnExecuteFX
// 0x01C0 (0x01C0 - 0x0000)
struct PySummonerLoop_10424103_Cue_OnExecuteFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PySummonerLoop_10424103_Cue_OnExecuteFX) == 0x000008, "Wrong alignment on PySummonerLoop_10424103_Cue_OnExecuteFX");
static_assert(sizeof(PySummonerLoop_10424103_Cue_OnExecuteFX) == 0x0001C0, "Wrong size on PySummonerLoop_10424103_Cue_OnExecuteFX");
static_assert(offsetof(PySummonerLoop_10424103_Cue_OnExecuteFX, MyTarget) == 0x000000, "Member 'PySummonerLoop_10424103_Cue_OnExecuteFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PySummonerLoop_10424103_Cue_OnExecuteFX, Parameters) == 0x000008, "Member 'PySummonerLoop_10424103_Cue_OnExecuteFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_104241.PyCue_Summoner_Loop_10424105.WhileActive
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Summoner_Loop_10424105_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Summoner_Loop_10424105_WhileActive) == 0x000008, "Wrong alignment on PyCue_Summoner_Loop_10424105_WhileActive");
static_assert(sizeof(PyCue_Summoner_Loop_10424105_WhileActive) == 0x0001C8, "Wrong size on PyCue_Summoner_Loop_10424105_WhileActive");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_WhileActive, MyTarget) == 0x000000, "Member 'PyCue_Summoner_Loop_10424105_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_WhileActive, Parameters) == 0x000008, "Member 'PyCue_Summoner_Loop_10424105_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_WhileActive, ReturnValue) == 0x0001C0, "Member 'PyCue_Summoner_Loop_10424105_WhileActive::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_104241.PyCue_Summoner_Loop_10424105.OnRemove
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Summoner_Loop_10424105_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Summoner_Loop_10424105_OnRemove) == 0x000008, "Wrong alignment on PyCue_Summoner_Loop_10424105_OnRemove");
static_assert(sizeof(PyCue_Summoner_Loop_10424105_OnRemove) == 0x0001C8, "Wrong size on PyCue_Summoner_Loop_10424105_OnRemove");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_OnRemove, MyTarget) == 0x000000, "Member 'PyCue_Summoner_Loop_10424105_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_OnRemove, Parameters) == 0x000008, "Member 'PyCue_Summoner_Loop_10424105_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_OnRemove, ReturnValue) == 0x0001C0, "Member 'PyCue_Summoner_Loop_10424105_OnRemove::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_104241.PyCue_Summoner_Loop_10424105.UpdateWebScale
// 0x0018 (0x0018 - 0x0000)
struct PyCue_Summoner_Loop_10424105_UpdateWebScale final
{
public:
	struct FVector                                OutValue;                                          // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Summoner_Loop_10424105_UpdateWebScale) == 0x000008, "Wrong alignment on PyCue_Summoner_Loop_10424105_UpdateWebScale");
static_assert(sizeof(PyCue_Summoner_Loop_10424105_UpdateWebScale) == 0x000018, "Wrong size on PyCue_Summoner_Loop_10424105_UpdateWebScale");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_UpdateWebScale, OutValue) == 0x000000, "Member 'PyCue_Summoner_Loop_10424105_UpdateWebScale::OutValue' has a wrong offset!");

// PythonFunction PyAbility_104241.PyCue_Summoner_Loop_10424105.UpdateWebAlpha
// 0x001C (0x001C - 0x0000)
struct PyCue_Summoner_Loop_10424105_UpdateWebAlpha final
{
public:
	class FName                                   TrackName;                                         // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   PropertyName;                                      // 0x000C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OutValue;                                          // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Summoner_Loop_10424105_UpdateWebAlpha) == 0x000004, "Wrong alignment on PyCue_Summoner_Loop_10424105_UpdateWebAlpha");
static_assert(sizeof(PyCue_Summoner_Loop_10424105_UpdateWebAlpha) == 0x00001C, "Wrong size on PyCue_Summoner_Loop_10424105_UpdateWebAlpha");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_UpdateWebAlpha, TrackName) == 0x000000, "Member 'PyCue_Summoner_Loop_10424105_UpdateWebAlpha::TrackName' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_UpdateWebAlpha, PropertyName) == 0x00000C, "Member 'PyCue_Summoner_Loop_10424105_UpdateWebAlpha::PropertyName' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_UpdateWebAlpha, OutValue) == 0x000018, "Member 'PyCue_Summoner_Loop_10424105_UpdateWebAlpha::OutValue' has a wrong offset!");

// PythonFunction PyAbility_104241.PyCue_Summoner_Loop_10424105.UpdateWebWPO
// 0x001C (0x001C - 0x0000)
struct PyCue_Summoner_Loop_10424105_UpdateWebWPO final
{
public:
	class FName                                   TrackName;                                         // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   PropertyName;                                      // 0x000C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OutValue;                                          // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Summoner_Loop_10424105_UpdateWebWPO) == 0x000004, "Wrong alignment on PyCue_Summoner_Loop_10424105_UpdateWebWPO");
static_assert(sizeof(PyCue_Summoner_Loop_10424105_UpdateWebWPO) == 0x00001C, "Wrong size on PyCue_Summoner_Loop_10424105_UpdateWebWPO");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_UpdateWebWPO, TrackName) == 0x000000, "Member 'PyCue_Summoner_Loop_10424105_UpdateWebWPO::TrackName' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_UpdateWebWPO, PropertyName) == 0x00000C, "Member 'PyCue_Summoner_Loop_10424105_UpdateWebWPO::PropertyName' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_UpdateWebWPO, OutValue) == 0x000018, "Member 'PyCue_Summoner_Loop_10424105_UpdateWebWPO::OutValue' has a wrong offset!");

// PythonFunction PyAbility_104241.PyCue_Summoner_Loop_10424105.UpdateWebEmissive
// 0x001C (0x001C - 0x0000)
struct PyCue_Summoner_Loop_10424105_UpdateWebEmissive final
{
public:
	class FName                                   TrackName;                                         // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   PropertyName;                                      // 0x000C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OutValue;                                          // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Summoner_Loop_10424105_UpdateWebEmissive) == 0x000004, "Wrong alignment on PyCue_Summoner_Loop_10424105_UpdateWebEmissive");
static_assert(sizeof(PyCue_Summoner_Loop_10424105_UpdateWebEmissive) == 0x00001C, "Wrong size on PyCue_Summoner_Loop_10424105_UpdateWebEmissive");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_UpdateWebEmissive, TrackName) == 0x000000, "Member 'PyCue_Summoner_Loop_10424105_UpdateWebEmissive::TrackName' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_UpdateWebEmissive, PropertyName) == 0x00000C, "Member 'PyCue_Summoner_Loop_10424105_UpdateWebEmissive::PropertyName' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10424105_UpdateWebEmissive, OutValue) == 0x000018, "Member 'PyCue_Summoner_Loop_10424105_UpdateWebEmissive::OutValue' has a wrong offset!");

// PythonFunction PyAbility_104241.PyCue_SummonerLoop_10424104.WhileActive
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_SummonerLoop_10424104_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_SummonerLoop_10424104_WhileActive) == 0x000008, "Wrong alignment on PyCue_SummonerLoop_10424104_WhileActive");
static_assert(sizeof(PyCue_SummonerLoop_10424104_WhileActive) == 0x0001C8, "Wrong size on PyCue_SummonerLoop_10424104_WhileActive");
static_assert(offsetof(PyCue_SummonerLoop_10424104_WhileActive, MyTarget) == 0x000000, "Member 'PyCue_SummonerLoop_10424104_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_SummonerLoop_10424104_WhileActive, Parameters) == 0x000008, "Member 'PyCue_SummonerLoop_10424104_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_SummonerLoop_10424104_WhileActive, ReturnValue) == 0x0001C0, "Member 'PyCue_SummonerLoop_10424104_WhileActive::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_104241.PyCue_SummonerLoop_10424104.OnSummonedEnd
// 0x0008 (0x0008 - 0x0000)
struct PyCue_SummonerLoop_10424104_OnSummonedEnd final
{
public:
	class AActor*                                 Summoned;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_SummonerLoop_10424104_OnSummonedEnd) == 0x000008, "Wrong alignment on PyCue_SummonerLoop_10424104_OnSummonedEnd");
static_assert(sizeof(PyCue_SummonerLoop_10424104_OnSummonedEnd) == 0x000008, "Wrong size on PyCue_SummonerLoop_10424104_OnSummonedEnd");
static_assert(offsetof(PyCue_SummonerLoop_10424104_OnSummonedEnd, Summoned) == 0x000000, "Member 'PyCue_SummonerLoop_10424104_OnSummonedEnd::Summoned' has a wrong offset!");

// PythonFunction PyAbility_104241.PyCue_SummonerLoop_10424104.OnRemove
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_SummonerLoop_10424104_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_SummonerLoop_10424104_OnRemove) == 0x000008, "Wrong alignment on PyCue_SummonerLoop_10424104_OnRemove");
static_assert(sizeof(PyCue_SummonerLoop_10424104_OnRemove) == 0x0001C8, "Wrong size on PyCue_SummonerLoop_10424104_OnRemove");
static_assert(offsetof(PyCue_SummonerLoop_10424104_OnRemove, MyTarget) == 0x000000, "Member 'PyCue_SummonerLoop_10424104_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_SummonerLoop_10424104_OnRemove, Parameters) == 0x000008, "Member 'PyCue_SummonerLoop_10424104_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_SummonerLoop_10424104_OnRemove, ReturnValue) == 0x0001C0, "Member 'PyCue_SummonerLoop_10424104_OnRemove::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_104241.PyCue_Ability_Loop_10424101.WhileActive
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Ability_Loop_10424101_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Ability_Loop_10424101_WhileActive) == 0x000008, "Wrong alignment on PyCue_Ability_Loop_10424101_WhileActive");
static_assert(sizeof(PyCue_Ability_Loop_10424101_WhileActive) == 0x0001C8, "Wrong size on PyCue_Ability_Loop_10424101_WhileActive");
static_assert(offsetof(PyCue_Ability_Loop_10424101_WhileActive, MyTarget) == 0x000000, "Member 'PyCue_Ability_Loop_10424101_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Loop_10424101_WhileActive, Parameters) == 0x000008, "Member 'PyCue_Ability_Loop_10424101_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Loop_10424101_WhileActive, ReturnValue) == 0x0001C0, "Member 'PyCue_Ability_Loop_10424101_WhileActive::ReturnValue' has a wrong offset!");

}
