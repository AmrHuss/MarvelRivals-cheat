#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyMarvelGameState

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// DelegateFunction PyMarvelGameState.PyMarvelGameState.DispatcherUpvoteOther__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PyMarvelGameState_DispatcherUpvoteOther__DelegateSignature final
{
public:
	int32                                         Source_UID;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Target_UID;                                        // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_DispatcherUpvoteOther__DelegateSignature) == 0x000004, "Wrong alignment on PyMarvelGameState_DispatcherUpvoteOther__DelegateSignature");
static_assert(sizeof(PyMarvelGameState_DispatcherUpvoteOther__DelegateSignature) == 0x000008, "Wrong size on PyMarvelGameState_DispatcherUpvoteOther__DelegateSignature");
static_assert(offsetof(PyMarvelGameState_DispatcherUpvoteOther__DelegateSignature, Source_UID) == 0x000000, "Member 'PyMarvelGameState_DispatcherUpvoteOther__DelegateSignature::Source_UID' has a wrong offset!");
static_assert(offsetof(PyMarvelGameState_DispatcherUpvoteOther__DelegateSignature, Target_UID) == 0x000004, "Member 'PyMarvelGameState_DispatcherUpvoteOther__DelegateSignature::Target_UID' has a wrong offset!");

// DelegateFunction PyMarvelGameState.PyMarvelGameState.HeroUseTimeChanged__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct PyMarvelGameState_HeroUseTimeChanged__DelegateSignature final
{
public:
	int32                                         Player_uid;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Hero_id;                                           // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_HeroUseTimeChanged__DelegateSignature) == 0x000004, "Wrong alignment on PyMarvelGameState_HeroUseTimeChanged__DelegateSignature");
static_assert(sizeof(PyMarvelGameState_HeroUseTimeChanged__DelegateSignature) == 0x00000C, "Wrong size on PyMarvelGameState_HeroUseTimeChanged__DelegateSignature");
static_assert(offsetof(PyMarvelGameState_HeroUseTimeChanged__DelegateSignature, Player_uid) == 0x000000, "Member 'PyMarvelGameState_HeroUseTimeChanged__DelegateSignature::Player_uid' has a wrong offset!");
static_assert(offsetof(PyMarvelGameState_HeroUseTimeChanged__DelegateSignature, Hero_id) == 0x000004, "Member 'PyMarvelGameState_HeroUseTimeChanged__DelegateSignature::Hero_id' has a wrong offset!");
static_assert(offsetof(PyMarvelGameState_HeroUseTimeChanged__DelegateSignature, Time) == 0x000008, "Member 'PyMarvelGameState_HeroUseTimeChanged__DelegateSignature::Time' has a wrong offset!");

// DelegateFunction PyMarvelGameState.PyMarvelGameState.OnKillCountChangeDispatcher__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PyMarvelGameState_OnKillCountChangeDispatcher__DelegateSignature final
{
public:
	EBattleSide                                   battle_sid;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Kill_count;                                        // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_OnKillCountChangeDispatcher__DelegateSignature) == 0x000004, "Wrong alignment on PyMarvelGameState_OnKillCountChangeDispatcher__DelegateSignature");
static_assert(sizeof(PyMarvelGameState_OnKillCountChangeDispatcher__DelegateSignature) == 0x000008, "Wrong size on PyMarvelGameState_OnKillCountChangeDispatcher__DelegateSignature");
static_assert(offsetof(PyMarvelGameState_OnKillCountChangeDispatcher__DelegateSignature, battle_sid) == 0x000000, "Member 'PyMarvelGameState_OnKillCountChangeDispatcher__DelegateSignature::battle_sid' has a wrong offset!");
static_assert(offsetof(PyMarvelGameState_OnKillCountChangeDispatcher__DelegateSignature, Kill_count) == 0x000004, "Member 'PyMarvelGameState_OnKillCountChangeDispatcher__DelegateSignature::Kill_count' has a wrong offset!");

// DelegateFunction PyMarvelGameState.PyMarvelGameState.OnPlayerRespawnUpdateDispatcher__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PyMarvelGameState_OnPlayerRespawnUpdateDispatcher__DelegateSignature final
{
public:
	class AMarvelPlayerState*                     PlayerState;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_OnPlayerRespawnUpdateDispatcher__DelegateSignature) == 0x000008, "Wrong alignment on PyMarvelGameState_OnPlayerRespawnUpdateDispatcher__DelegateSignature");
static_assert(sizeof(PyMarvelGameState_OnPlayerRespawnUpdateDispatcher__DelegateSignature) == 0x000008, "Wrong size on PyMarvelGameState_OnPlayerRespawnUpdateDispatcher__DelegateSignature");
static_assert(offsetof(PyMarvelGameState_OnPlayerRespawnUpdateDispatcher__DelegateSignature, PlayerState) == 0x000000, "Member 'PyMarvelGameState_OnPlayerRespawnUpdateDispatcher__DelegateSignature::PlayerState' has a wrong offset!");

// DelegateFunction PyMarvelGameState.PyMarvelGameState.OnPlayerReconnectTimeoutDispatcher__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PyMarvelGameState_OnPlayerReconnectTimeoutDispatcher__DelegateSignature final
{
public:
	class AMarvelPlayerState*                     PS;                                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_OnPlayerReconnectTimeoutDispatcher__DelegateSignature) == 0x000008, "Wrong alignment on PyMarvelGameState_OnPlayerReconnectTimeoutDispatcher__DelegateSignature");
static_assert(sizeof(PyMarvelGameState_OnPlayerReconnectTimeoutDispatcher__DelegateSignature) == 0x000008, "Wrong size on PyMarvelGameState_OnPlayerReconnectTimeoutDispatcher__DelegateSignature");
static_assert(offsetof(PyMarvelGameState_OnPlayerReconnectTimeoutDispatcher__DelegateSignature, PS) == 0x000000, "Member 'PyMarvelGameState_OnPlayerReconnectTimeoutDispatcher__DelegateSignature::PS' has a wrong offset!");

// PythonFunction PyMarvelGameState.PyMarvelGameState.GetRoundLegacyInfoInt
// 0x0020 (0x0020 - 0x0000)
struct PyMarvelGameState_GetRoundLegacyInfoInt final
{
public:
	int32                                         Round_played_idx;                                  // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Name_0;                                            // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_GetRoundLegacyInfoInt) == 0x000008, "Wrong alignment on PyMarvelGameState_GetRoundLegacyInfoInt");
static_assert(sizeof(PyMarvelGameState_GetRoundLegacyInfoInt) == 0x000020, "Wrong size on PyMarvelGameState_GetRoundLegacyInfoInt");
static_assert(offsetof(PyMarvelGameState_GetRoundLegacyInfoInt, Round_played_idx) == 0x000000, "Member 'PyMarvelGameState_GetRoundLegacyInfoInt::Round_played_idx' has a wrong offset!");
static_assert(offsetof(PyMarvelGameState_GetRoundLegacyInfoInt, Name_0) == 0x000008, "Member 'PyMarvelGameState_GetRoundLegacyInfoInt::Name_0' has a wrong offset!");
static_assert(offsetof(PyMarvelGameState_GetRoundLegacyInfoInt, ReturnValue) == 0x000018, "Member 'PyMarvelGameState_GetRoundLegacyInfoInt::ReturnValue' has a wrong offset!");

// PythonFunction PyMarvelGameState.PyMarvelGameState.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct PyMarvelGameState_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_ReceiveEndPlay) == 0x000001, "Wrong alignment on PyMarvelGameState_ReceiveEndPlay");
static_assert(sizeof(PyMarvelGameState_ReceiveEndPlay) == 0x000001, "Wrong size on PyMarvelGameState_ReceiveEndPlay");
static_assert(offsetof(PyMarvelGameState_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'PyMarvelGameState_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// PythonFunction PyMarvelGameState.PyMarvelGameState.RegisterCharacter
// 0x0008 (0x0008 - 0x0000)
struct PyMarvelGameState_RegisterCharacter final
{
public:
	class AMarvelBaseCharacter*                   InCharacter;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_RegisterCharacter) == 0x000008, "Wrong alignment on PyMarvelGameState_RegisterCharacter");
static_assert(sizeof(PyMarvelGameState_RegisterCharacter) == 0x000008, "Wrong size on PyMarvelGameState_RegisterCharacter");
static_assert(offsetof(PyMarvelGameState_RegisterCharacter, InCharacter) == 0x000000, "Member 'PyMarvelGameState_RegisterCharacter::InCharacter' has a wrong offset!");

// PythonFunction PyMarvelGameState.PyMarvelGameState.UnregisterCharacter
// 0x0008 (0x0008 - 0x0000)
struct PyMarvelGameState_UnregisterCharacter final
{
public:
	class AMarvelBaseCharacter*                   InCharacter;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_UnregisterCharacter) == 0x000008, "Wrong alignment on PyMarvelGameState_UnregisterCharacter");
static_assert(sizeof(PyMarvelGameState_UnregisterCharacter) == 0x000008, "Wrong size on PyMarvelGameState_UnregisterCharacter");
static_assert(offsetof(PyMarvelGameState_UnregisterCharacter, InCharacter) == 0x000000, "Member 'PyMarvelGameState_UnregisterCharacter::InCharacter' has a wrong offset!");

// PythonFunction PyMarvelGameState.PyMarvelGameState.HasRoundStarted
// 0x0001 (0x0001 - 0x0000)
struct PyMarvelGameState_HasRoundStarted final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_HasRoundStarted) == 0x000001, "Wrong alignment on PyMarvelGameState_HasRoundStarted");
static_assert(sizeof(PyMarvelGameState_HasRoundStarted) == 0x000001, "Wrong size on PyMarvelGameState_HasRoundStarted");
static_assert(offsetof(PyMarvelGameState_HasRoundStarted, ReturnValue) == 0x000000, "Member 'PyMarvelGameState_HasRoundStarted::ReturnValue' has a wrong offset!");

// PythonFunction PyMarvelGameState.PyMarvelGameState.GetLevelCtrlPawn
// 0x0008 (0x0008 - 0x0000)
struct PyMarvelGameState_GetLevelCtrlPawn final
{
public:
	class AMarvelLevelCtrlPawn*                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_GetLevelCtrlPawn) == 0x000008, "Wrong alignment on PyMarvelGameState_GetLevelCtrlPawn");
static_assert(sizeof(PyMarvelGameState_GetLevelCtrlPawn) == 0x000008, "Wrong size on PyMarvelGameState_GetLevelCtrlPawn");
static_assert(offsetof(PyMarvelGameState_GetLevelCtrlPawn, ReturnValue) == 0x000000, "Member 'PyMarvelGameState_GetLevelCtrlPawn::ReturnValue' has a wrong offset!");

// PythonFunction PyMarvelGameState.PyMarvelGameState.NeedsEpicMomentForMatch
// 0x0001 (0x0001 - 0x0000)
struct PyMarvelGameState_NeedsEpicMomentForMatch final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_NeedsEpicMomentForMatch) == 0x000001, "Wrong alignment on PyMarvelGameState_NeedsEpicMomentForMatch");
static_assert(sizeof(PyMarvelGameState_NeedsEpicMomentForMatch) == 0x000001, "Wrong size on PyMarvelGameState_NeedsEpicMomentForMatch");
static_assert(offsetof(PyMarvelGameState_NeedsEpicMomentForMatch, ReturnValue) == 0x000000, "Member 'PyMarvelGameState_NeedsEpicMomentForMatch::ReturnValue' has a wrong offset!");

// PythonFunction PyMarvelGameState.PyMarvelGameState.BroadcastBattleEnd
// 0x0001 (0x0001 - 0x0000)
struct PyMarvelGameState_BroadcastBattleEnd final
{
public:
	EBattleSide                                   Win_side;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_BroadcastBattleEnd) == 0x000001, "Wrong alignment on PyMarvelGameState_BroadcastBattleEnd");
static_assert(sizeof(PyMarvelGameState_BroadcastBattleEnd) == 0x000001, "Wrong size on PyMarvelGameState_BroadcastBattleEnd");
static_assert(offsetof(PyMarvelGameState_BroadcastBattleEnd, Win_side) == 0x000000, "Member 'PyMarvelGameState_BroadcastBattleEnd::Win_side' has a wrong offset!");

// PythonFunction PyMarvelGameState.PyMarvelGameState.BroadcastUpvoteOther
// 0x0008 (0x0008 - 0x0000)
struct PyMarvelGameState_BroadcastUpvoteOther final
{
public:
	int32                                         Source_UID;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Target_UID;                                        // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_BroadcastUpvoteOther) == 0x000004, "Wrong alignment on PyMarvelGameState_BroadcastUpvoteOther");
static_assert(sizeof(PyMarvelGameState_BroadcastUpvoteOther) == 0x000008, "Wrong size on PyMarvelGameState_BroadcastUpvoteOther");
static_assert(offsetof(PyMarvelGameState_BroadcastUpvoteOther, Source_UID) == 0x000000, "Member 'PyMarvelGameState_BroadcastUpvoteOther::Source_UID' has a wrong offset!");
static_assert(offsetof(PyMarvelGameState_BroadcastUpvoteOther, Target_UID) == 0x000004, "Member 'PyMarvelGameState_BroadcastUpvoteOther::Target_UID' has a wrong offset!");

// PythonFunction PyMarvelGameState.PyMarvelGameState.server_notify_ds_traceback
// 0x0010 (0x0010 - 0x0000)
struct PyMarvelGameState_Server_notify_ds_traceback final
{
public:
	class FString                                 Content;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_Server_notify_ds_traceback) == 0x000008, "Wrong alignment on PyMarvelGameState_Server_notify_ds_traceback");
static_assert(sizeof(PyMarvelGameState_Server_notify_ds_traceback) == 0x000010, "Wrong size on PyMarvelGameState_Server_notify_ds_traceback");
static_assert(offsetof(PyMarvelGameState_Server_notify_ds_traceback, Content) == 0x000000, "Member 'PyMarvelGameState_Server_notify_ds_traceback::Content' has a wrong offset!");

// PythonFunction PyMarvelGameState.PyMarvelGameState.GetServerTimeSeconds
// 0x0004 (0x0004 - 0x0000)
struct PyMarvelGameState_GetServerTimeSeconds final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_GetServerTimeSeconds) == 0x000004, "Wrong alignment on PyMarvelGameState_GetServerTimeSeconds");
static_assert(sizeof(PyMarvelGameState_GetServerTimeSeconds) == 0x000004, "Wrong size on PyMarvelGameState_GetServerTimeSeconds");
static_assert(offsetof(PyMarvelGameState_GetServerTimeSeconds, ReturnValue) == 0x000000, "Member 'PyMarvelGameState_GetServerTimeSeconds::ReturnValue' has a wrong offset!");

// PythonFunction PyMarvelGameState.PyMarvelGameState.GetOnlinePlayerUids
// 0x0010 (0x0010 - 0x0000)
struct PyMarvelGameState_GetOnlinePlayerUids final
{
public:
	TArray<int32>                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(PyMarvelGameState_GetOnlinePlayerUids) == 0x000008, "Wrong alignment on PyMarvelGameState_GetOnlinePlayerUids");
static_assert(sizeof(PyMarvelGameState_GetOnlinePlayerUids) == 0x000010, "Wrong size on PyMarvelGameState_GetOnlinePlayerUids");
static_assert(offsetof(PyMarvelGameState_GetOnlinePlayerUids, ReturnValue) == 0x000000, "Member 'PyMarvelGameState_GetOnlinePlayerUids::ReturnValue' has a wrong offset!");

// PythonFunction PyMarvelGameState.PyMarvelGameState.IsInBorder
// 0x0020 (0x0020 - 0x0000)
struct PyMarvelGameState_IsInBorder final
{
public:
	struct FVector                                InLocation;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_IsInBorder) == 0x000008, "Wrong alignment on PyMarvelGameState_IsInBorder");
static_assert(sizeof(PyMarvelGameState_IsInBorder) == 0x000020, "Wrong size on PyMarvelGameState_IsInBorder");
static_assert(offsetof(PyMarvelGameState_IsInBorder, InLocation) == 0x000000, "Member 'PyMarvelGameState_IsInBorder::InLocation' has a wrong offset!");
static_assert(offsetof(PyMarvelGameState_IsInBorder, ReturnValue) == 0x000018, "Member 'PyMarvelGameState_IsInBorder::ReturnValue' has a wrong offset!");

// PythonFunction PyMarvelGameState.PyMarvelGameState.NetMultiCastReceiveBattleResult
// 0x0010 (0x0010 - 0x0000)
struct PyMarvelGameState_NetMultiCastReceiveBattleResult final
{
public:
	class FString                                 battle_result;                                     // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_NetMultiCastReceiveBattleResult) == 0x000008, "Wrong alignment on PyMarvelGameState_NetMultiCastReceiveBattleResult");
static_assert(sizeof(PyMarvelGameState_NetMultiCastReceiveBattleResult) == 0x000010, "Wrong size on PyMarvelGameState_NetMultiCastReceiveBattleResult");
static_assert(offsetof(PyMarvelGameState_NetMultiCastReceiveBattleResult, battle_result) == 0x000000, "Member 'PyMarvelGameState_NetMultiCastReceiveBattleResult::battle_result' has a wrong offset!");

// PythonFunction PyMarvelGameState.PyMarvelGameState.NetMultiCastReceiveMVPChange
// 0x0010 (0x0010 - 0x0000)
struct PyMarvelGameState_NetMultiCastReceiveMVPChange final
{
public:
	class FString                                 Mvp_info;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_NetMultiCastReceiveMVPChange) == 0x000008, "Wrong alignment on PyMarvelGameState_NetMultiCastReceiveMVPChange");
static_assert(sizeof(PyMarvelGameState_NetMultiCastReceiveMVPChange) == 0x000010, "Wrong size on PyMarvelGameState_NetMultiCastReceiveMVPChange");
static_assert(offsetof(PyMarvelGameState_NetMultiCastReceiveMVPChange, Mvp_info) == 0x000000, "Member 'PyMarvelGameState_NetMultiCastReceiveMVPChange::Mvp_info' has a wrong offset!");

// DelegateFunction PyMarvelGameState.PyMarvelGameState.OnSignalBeResponded__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct PyMarvelGameState_OnSignalBeResponded__DelegateSignature final
{
public:
	int32                                         SignalID;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMarvelBaseCharacter*                   SourceActor;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_OnSignalBeResponded__DelegateSignature) == 0x000008, "Wrong alignment on PyMarvelGameState_OnSignalBeResponded__DelegateSignature");
static_assert(sizeof(PyMarvelGameState_OnSignalBeResponded__DelegateSignature) == 0x000010, "Wrong size on PyMarvelGameState_OnSignalBeResponded__DelegateSignature");
static_assert(offsetof(PyMarvelGameState_OnSignalBeResponded__DelegateSignature, SignalID) == 0x000000, "Member 'PyMarvelGameState_OnSignalBeResponded__DelegateSignature::SignalID' has a wrong offset!");
static_assert(offsetof(PyMarvelGameState_OnSignalBeResponded__DelegateSignature, SourceActor) == 0x000008, "Member 'PyMarvelGameState_OnSignalBeResponded__DelegateSignature::SourceActor' has a wrong offset!");

// DelegateFunction PyMarvelGameState.PyMarvelGameState.OnSendSignalSuccess__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct PyMarvelGameState_OnSendSignalSuccess__DelegateSignature final
{
public:
	int32                                         SignalID;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMarvelBaseCharacter*                   ResponseTarget;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyMarvelGameState_OnSendSignalSuccess__DelegateSignature) == 0x000008, "Wrong alignment on PyMarvelGameState_OnSendSignalSuccess__DelegateSignature");
static_assert(sizeof(PyMarvelGameState_OnSendSignalSuccess__DelegateSignature) == 0x000010, "Wrong size on PyMarvelGameState_OnSendSignalSuccess__DelegateSignature");
static_assert(offsetof(PyMarvelGameState_OnSendSignalSuccess__DelegateSignature, SignalID) == 0x000000, "Member 'PyMarvelGameState_OnSendSignalSuccess__DelegateSignature::SignalID' has a wrong offset!");
static_assert(offsetof(PyMarvelGameState_OnSendSignalSuccess__DelegateSignature, ResponseTarget) == 0x000008, "Member 'PyMarvelGameState_OnSendSignalSuccess__DelegateSignature::ResponseTarget' has a wrong offset!");

}
