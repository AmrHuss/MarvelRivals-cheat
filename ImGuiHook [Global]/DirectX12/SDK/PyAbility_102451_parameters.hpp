#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102451

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_102451.PyAbility_102451.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102451_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102451_CanActivate) == 0x000001, "Wrong alignment on PyAbility_102451_CanActivate");
static_assert(sizeof(PyAbility_102451_CanActivate) == 0x000001, "Wrong size on PyAbility_102451_CanActivate");
static_assert(offsetof(PyAbility_102451_CanActivate, ReturnValue) == 0x000000, "Member 'PyAbility_102451_CanActivate::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_102451.PyAbility_102451.OnOwnerDeath
// 0x0028 (0x0028 - 0x0000)
struct PyAbility_102451_OnOwnerDeath final
{
public:
	class AActor*                                 Source;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Dest;                                              // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               Parm;                                              // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102451_OnOwnerDeath) == 0x000008, "Wrong alignment on PyAbility_102451_OnOwnerDeath");
static_assert(sizeof(PyAbility_102451_OnOwnerDeath) == 0x000028, "Wrong size on PyAbility_102451_OnOwnerDeath");
static_assert(offsetof(PyAbility_102451_OnOwnerDeath, Source) == 0x000000, "Member 'PyAbility_102451_OnOwnerDeath::Source' has a wrong offset!");
static_assert(offsetof(PyAbility_102451_OnOwnerDeath, Dest) == 0x000008, "Member 'PyAbility_102451_OnOwnerDeath::Dest' has a wrong offset!");
static_assert(offsetof(PyAbility_102451_OnOwnerDeath, Parm) == 0x000010, "Member 'PyAbility_102451_OnOwnerDeath::Parm' has a wrong offset!");

// PythonFunction PyAbility_102451.PyAbility_102451.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102451_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102451_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_102451_K2_OnEndAbility");
static_assert(sizeof(PyAbility_102451_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_102451_K2_OnEndAbility");
static_assert(offsetof(PyAbility_102451_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_102451_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// PythonFunction PyAbility_102451.PyAbility_102451.HandleAnimSocketInfo
// 0x00B0 (0x00B0 - 0x0000)
struct PyAbility_102451_HandleAnimSocketInfo final
{
public:
	int32                                         SocketId;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarvelAbilitySocketInfo               SocketInfo;                                        // 0x0010(0x00A0)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(PyAbility_102451_HandleAnimSocketInfo) == 0x000010, "Wrong alignment on PyAbility_102451_HandleAnimSocketInfo");
static_assert(sizeof(PyAbility_102451_HandleAnimSocketInfo) == 0x0000B0, "Wrong size on PyAbility_102451_HandleAnimSocketInfo");
static_assert(offsetof(PyAbility_102451_HandleAnimSocketInfo, SocketId) == 0x000000, "Member 'PyAbility_102451_HandleAnimSocketInfo::SocketId' has a wrong offset!");
static_assert(offsetof(PyAbility_102451_HandleAnimSocketInfo, SocketInfo) == 0x000010, "Member 'PyAbility_102451_HandleAnimSocketInfo::SocketInfo' has a wrong offset!");

// PythonFunction PyAbility_102451.PyAbility_102451.OnCrowProjectileSpawned
// 0x0170 (0x0170 - 0x0000)
struct PyAbility_102451_OnCrowProjectileSpawned final
{
public:
	class AActor*                                 SpawnActor;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0008(0x0168)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyAbility_102451_OnCrowProjectileSpawned) == 0x000008, "Wrong alignment on PyAbility_102451_OnCrowProjectileSpawned");
static_assert(sizeof(PyAbility_102451_OnCrowProjectileSpawned) == 0x000170, "Wrong size on PyAbility_102451_OnCrowProjectileSpawned");
static_assert(offsetof(PyAbility_102451_OnCrowProjectileSpawned, SpawnActor) == 0x000000, "Member 'PyAbility_102451_OnCrowProjectileSpawned::SpawnActor' has a wrong offset!");
static_assert(offsetof(PyAbility_102451_OnCrowProjectileSpawned, Data) == 0x000008, "Member 'PyAbility_102451_OnCrowProjectileSpawned::Data' has a wrong offset!");

// PythonFunction PyAbility_102451.PyAbility_102451.OnCrowProjectileEndTask
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_102451_OnCrowProjectileEndTask final
{
public:
	class AActor*                                 InProjectile;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102451_OnCrowProjectileEndTask) == 0x000008, "Wrong alignment on PyAbility_102451_OnCrowProjectileEndTask");
static_assert(sizeof(PyAbility_102451_OnCrowProjectileEndTask) == 0x000008, "Wrong size on PyAbility_102451_OnCrowProjectileEndTask");
static_assert(offsetof(PyAbility_102451_OnCrowProjectileEndTask, InProjectile) == 0x000000, "Member 'PyAbility_102451_OnCrowProjectileEndTask::InProjectile' has a wrong offset!");

// PythonFunction PyAbility_102451.PyAbility_102451.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102451_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102451_NativeOnMontageCompleted) == 0x000008, "Wrong alignment on PyAbility_102451_NativeOnMontageCompleted");
static_assert(sizeof(PyAbility_102451_NativeOnMontageCompleted) == 0x000010, "Wrong size on PyAbility_102451_NativeOnMontageCompleted");
static_assert(offsetof(PyAbility_102451_NativeOnMontageCompleted, Tag) == 0x000000, "Member 'PyAbility_102451_NativeOnMontageCompleted::Tag' has a wrong offset!");

// PythonFunction PyAbility_102451.PyAbility_102451.NativeOnMontageBlendOut
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102451_NativeOnMontageBlendOut final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102451_NativeOnMontageBlendOut) == 0x000008, "Wrong alignment on PyAbility_102451_NativeOnMontageBlendOut");
static_assert(sizeof(PyAbility_102451_NativeOnMontageBlendOut) == 0x000010, "Wrong size on PyAbility_102451_NativeOnMontageBlendOut");
static_assert(offsetof(PyAbility_102451_NativeOnMontageBlendOut, Tag) == 0x000000, "Member 'PyAbility_102451_NativeOnMontageBlendOut::Tag' has a wrong offset!");

// PythonFunction PyAbility_102451.PyAbility_102451.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102451_NativeOnMontageInterrupted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102451_NativeOnMontageInterrupted) == 0x000008, "Wrong alignment on PyAbility_102451_NativeOnMontageInterrupted");
static_assert(sizeof(PyAbility_102451_NativeOnMontageInterrupted) == 0x000010, "Wrong size on PyAbility_102451_NativeOnMontageInterrupted");
static_assert(offsetof(PyAbility_102451_NativeOnMontageInterrupted, Tag) == 0x000000, "Member 'PyAbility_102451_NativeOnMontageInterrupted::Tag' has a wrong offset!");

// PythonFunction PyAbility_102451.PyAbility_102451.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102451_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102451_NativeOnMontageCancelled) == 0x000008, "Wrong alignment on PyAbility_102451_NativeOnMontageCancelled");
static_assert(sizeof(PyAbility_102451_NativeOnMontageCancelled) == 0x000010, "Wrong size on PyAbility_102451_NativeOnMontageCancelled");
static_assert(offsetof(PyAbility_102451_NativeOnMontageCancelled, Tag) == 0x000000, "Member 'PyAbility_102451_NativeOnMontageCancelled::Tag' has a wrong offset!");

// PythonFunction PyAbility_102451.PyAbility_102451.NativeOnMontageEvent
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102451_NativeOnMontageEvent final
{
public:
	class FString                                 EventTag;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102451_NativeOnMontageEvent) == 0x000008, "Wrong alignment on PyAbility_102451_NativeOnMontageEvent");
static_assert(sizeof(PyAbility_102451_NativeOnMontageEvent) == 0x000010, "Wrong size on PyAbility_102451_NativeOnMontageEvent");
static_assert(offsetof(PyAbility_102451_NativeOnMontageEvent, EventTag) == 0x000000, "Member 'PyAbility_102451_NativeOnMontageEvent::EventTag' has a wrong offset!");

// DelegateFunction PyAbility_102451.PyAbility_102451.OnHelaShiftTeleportDistance__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_102451_OnHelaShiftTeleportDistance__DelegateSignature final
{
public:
	float                                         Distance;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102451_OnHelaShiftTeleportDistance__DelegateSignature) == 0x000004, "Wrong alignment on PyAbility_102451_OnHelaShiftTeleportDistance__DelegateSignature");
static_assert(sizeof(PyAbility_102451_OnHelaShiftTeleportDistance__DelegateSignature) == 0x000004, "Wrong size on PyAbility_102451_OnHelaShiftTeleportDistance__DelegateSignature");
static_assert(offsetof(PyAbility_102451_OnHelaShiftTeleportDistance__DelegateSignature, Distance) == 0x000000, "Member 'PyAbility_102451_OnHelaShiftTeleportDistance__DelegateSignature::Distance' has a wrong offset!");

}

