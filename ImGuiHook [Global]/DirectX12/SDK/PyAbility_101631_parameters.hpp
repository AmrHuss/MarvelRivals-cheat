#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101631

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_101631.PyAbility_101631.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101631_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101631_NativeOnMontageCompleted) == 0x000008, "Wrong alignment on PyAbility_101631_NativeOnMontageCompleted");
static_assert(sizeof(PyAbility_101631_NativeOnMontageCompleted) == 0x000010, "Wrong size on PyAbility_101631_NativeOnMontageCompleted");
static_assert(offsetof(PyAbility_101631_NativeOnMontageCompleted, Tag) == 0x000000, "Member 'PyAbility_101631_NativeOnMontageCompleted::Tag' has a wrong offset!");

// PythonFunction PyAbility_101631.PyAbility_101631.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101631_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101631_NativeOnMontageCancelled) == 0x000008, "Wrong alignment on PyAbility_101631_NativeOnMontageCancelled");
static_assert(sizeof(PyAbility_101631_NativeOnMontageCancelled) == 0x000010, "Wrong size on PyAbility_101631_NativeOnMontageCancelled");
static_assert(offsetof(PyAbility_101631_NativeOnMontageCancelled, Tag) == 0x000000, "Member 'PyAbility_101631_NativeOnMontageCancelled::Tag' has a wrong offset!");

// PythonFunction PyAbility_101631.PyAbility_101631.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101631_NativeOnMontageInterrupted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101631_NativeOnMontageInterrupted) == 0x000008, "Wrong alignment on PyAbility_101631_NativeOnMontageInterrupted");
static_assert(sizeof(PyAbility_101631_NativeOnMontageInterrupted) == 0x000010, "Wrong size on PyAbility_101631_NativeOnMontageInterrupted");
static_assert(offsetof(PyAbility_101631_NativeOnMontageInterrupted, Tag) == 0x000000, "Member 'PyAbility_101631_NativeOnMontageInterrupted::Tag' has a wrong offset!");

// PythonFunction PyAbility_101631.PyAbility_101631.HandleAnimSocketInfo
// 0x00B0 (0x00B0 - 0x0000)
struct PyAbility_101631_HandleAnimSocketInfo final
{
public:
	int32                                         SocketId;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarvelAbilitySocketInfo               SocketInfo;                                        // 0x0010(0x00A0)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(PyAbility_101631_HandleAnimSocketInfo) == 0x000010, "Wrong alignment on PyAbility_101631_HandleAnimSocketInfo");
static_assert(sizeof(PyAbility_101631_HandleAnimSocketInfo) == 0x0000B0, "Wrong size on PyAbility_101631_HandleAnimSocketInfo");
static_assert(offsetof(PyAbility_101631_HandleAnimSocketInfo, SocketId) == 0x000000, "Member 'PyAbility_101631_HandleAnimSocketInfo::SocketId' has a wrong offset!");
static_assert(offsetof(PyAbility_101631_HandleAnimSocketInfo, SocketInfo) == 0x000010, "Member 'PyAbility_101631_HandleAnimSocketInfo::SocketInfo' has a wrong offset!");

// PythonFunction PyAbility_101631.PyCue_Summoner_Loop_10163101.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Summoner_Loop_10163101_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Summoner_Loop_10163101_WhileActiveFX) == 0x000008, "Wrong alignment on PyCue_Summoner_Loop_10163101_WhileActiveFX");
static_assert(sizeof(PyCue_Summoner_Loop_10163101_WhileActiveFX) == 0x0001C0, "Wrong size on PyCue_Summoner_Loop_10163101_WhileActiveFX");
static_assert(offsetof(PyCue_Summoner_Loop_10163101_WhileActiveFX, MyTarget) == 0x000000, "Member 'PyCue_Summoner_Loop_10163101_WhileActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10163101_WhileActiveFX, Parameters) == 0x000008, "Member 'PyCue_Summoner_Loop_10163101_WhileActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_101631.PyCue_Summoner_Loop_10163101.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Summoner_Loop_10163101_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Summoner_Loop_10163101_OnRemoveFX) == 0x000008, "Wrong alignment on PyCue_Summoner_Loop_10163101_OnRemoveFX");
static_assert(sizeof(PyCue_Summoner_Loop_10163101_OnRemoveFX) == 0x0001C0, "Wrong size on PyCue_Summoner_Loop_10163101_OnRemoveFX");
static_assert(offsetof(PyCue_Summoner_Loop_10163101_OnRemoveFX, MyTarget) == 0x000000, "Member 'PyCue_Summoner_Loop_10163101_OnRemoveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10163101_OnRemoveFX, Parameters) == 0x000008, "Member 'PyCue_Summoner_Loop_10163101_OnRemoveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_101631.PyCue_Summoner_Loop_10163101.OnExecuteFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Summoner_Loop_10163101_OnExecuteFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Summoner_Loop_10163101_OnExecuteFX) == 0x000008, "Wrong alignment on PyCue_Summoner_Loop_10163101_OnExecuteFX");
static_assert(sizeof(PyCue_Summoner_Loop_10163101_OnExecuteFX) == 0x0001C0, "Wrong size on PyCue_Summoner_Loop_10163101_OnExecuteFX");
static_assert(offsetof(PyCue_Summoner_Loop_10163101_OnExecuteFX, MyTarget) == 0x000000, "Member 'PyCue_Summoner_Loop_10163101_OnExecuteFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Summoner_Loop_10163101_OnExecuteFX, Parameters) == 0x000008, "Member 'PyCue_Summoner_Loop_10163101_OnExecuteFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_101631.PyCue_Summoner_Loop_10163101.OnPositionReady
// 0x0008 (0x0008 - 0x0000)
struct PyCue_Summoner_Loop_10163101_OnPositionReady final
{
public:
	class AActor*                                 Value;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Summoner_Loop_10163101_OnPositionReady) == 0x000008, "Wrong alignment on PyCue_Summoner_Loop_10163101_OnPositionReady");
static_assert(sizeof(PyCue_Summoner_Loop_10163101_OnPositionReady) == 0x000008, "Wrong size on PyCue_Summoner_Loop_10163101_OnPositionReady");
static_assert(offsetof(PyCue_Summoner_Loop_10163101_OnPositionReady, Value) == 0x000000, "Member 'PyCue_Summoner_Loop_10163101_OnPositionReady::Value' has a wrong offset!");

// PythonFunction PyAbility_101631.PyCue_Summoner_Loop_10163101.OnMontageNotifyBegin
// 0x000C (0x000C - 0x0000)
struct PyCue_Summoner_Loop_10163101_OnMontageNotifyBegin final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Summoner_Loop_10163101_OnMontageNotifyBegin) == 0x000004, "Wrong alignment on PyCue_Summoner_Loop_10163101_OnMontageNotifyBegin");
static_assert(sizeof(PyCue_Summoner_Loop_10163101_OnMontageNotifyBegin) == 0x00000C, "Wrong size on PyCue_Summoner_Loop_10163101_OnMontageNotifyBegin");
static_assert(offsetof(PyCue_Summoner_Loop_10163101_OnMontageNotifyBegin, NotifyName) == 0x000000, "Member 'PyCue_Summoner_Loop_10163101_OnMontageNotifyBegin::NotifyName' has a wrong offset!");

// PythonFunction PyAbility_101631.PyCue_Summoner_Loop_10163101.SetFXDelValue
// 0x0004 (0x0004 - 0x0000)
struct PyCue_Summoner_Loop_10163101_SetFXDelValue final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Summoner_Loop_10163101_SetFXDelValue) == 0x000004, "Wrong alignment on PyCue_Summoner_Loop_10163101_SetFXDelValue");
static_assert(sizeof(PyCue_Summoner_Loop_10163101_SetFXDelValue) == 0x000004, "Wrong size on PyCue_Summoner_Loop_10163101_SetFXDelValue");
static_assert(offsetof(PyCue_Summoner_Loop_10163101_SetFXDelValue, Value) == 0x000000, "Member 'PyCue_Summoner_Loop_10163101_SetFXDelValue::Value' has a wrong offset!");

}
