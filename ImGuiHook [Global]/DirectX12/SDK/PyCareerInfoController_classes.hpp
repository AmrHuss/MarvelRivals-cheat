#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyCareerInfoController

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyCareerInfoController.PyCareerInfoController
// 0x0000 (0x0040 - 0x0040)
class UPyCareerInfoController final : public UCareerInfoController
{
public:
	void OnInitialize();
	void OnShutdown();
	void PyOnActorKillOther(int32 Player_uid, int32 Hero_id, bool Is_solo_kill, bool Is_head_kill, bool Is_last_kill, bool Is_terrain_kill);
	void PyOnActorBeKill(int32 Player_uid, int32 Hero_id);
	void PyCharacterSelectIDChanged(class AMarvelPlayerState* PlayerState, int32 Hero_id);
	void PyOnPossessNewCharacter(class AMarvelPlayerState* PlayerState, class AMarvelBaseCharacter* Character);
	void PyOnAddPlayerState(class AMarvelPlayerState* PlayerState);
	void PyOnDelPlayerState(class AMarvelPlayerState* PlayerState);
	void OnControlOwnerChanged(EBattleSide battle_side);
	void OnSwitchBattleSide();
	void OnMatchStateChanged(EMatchState MatchState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCareerInfoController">();
	}
	static class UPyCareerInfoController* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyCareerInfoController>();
	}
};
static_assert(alignof(UPyCareerInfoController) == 0x000008, "Wrong alignment on UPyCareerInfoController");
static_assert(sizeof(UPyCareerInfoController) == 0x000040, "Wrong size on UPyCareerInfoController");

}
