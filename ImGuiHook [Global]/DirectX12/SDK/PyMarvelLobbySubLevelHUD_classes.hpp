#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyMarvelLobbySubLevelHUD

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyMarvelLobbySubLevelHUD.PyMarvelLobbySubLevelHUD
// 0x0000 (0x06D8 - 0x06D8)
class APyMarvelLobbySubLevelHUD final : public AMarvelHUD
{
public:
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyMarvelLobbySubLevelHUD">();
	}
	static class APyMarvelLobbySubLevelHUD* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyMarvelLobbySubLevelHUD>();
	}
};
static_assert(alignof(APyMarvelLobbySubLevelHUD) == 0x000008, "Wrong alignment on APyMarvelLobbySubLevelHUD");
static_assert(sizeof(APyMarvelLobbySubLevelHUD) == 0x0006D8, "Wrong size on APyMarvelLobbySubLevelHUD");

}
