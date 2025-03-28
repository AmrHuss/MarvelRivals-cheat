#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyDeathZone

#include "Basic.hpp"

#include "MarvelLevel_classes.hpp"
#include "Engine_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyDeathZone.PyDeathZone
// 0x0000 (0x0470 - 0x0470)
class APyDeathZone final : public ADeathZoneActor
{
public:
	void ReceiveInit();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void SetColor();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyDeathZone">();
	}
	static class APyDeathZone* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyDeathZone>();
	}
};
static_assert(alignof(APyDeathZone) == 0x000008, "Wrong alignment on APyDeathZone");
static_assert(sizeof(APyDeathZone) == 0x000470, "Wrong size on APyDeathZone");

// PythonClass PyDeathZone.PyDebugZone
// 0x0008 (0x0478 - 0x0470)
class APyDebugZone final : public AMarvelLevelActorBase
{
public:
	bool                                          DebugMode;                                         // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveBeginPlay();
	void SetColor();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyDebugZone">();
	}
	static class APyDebugZone* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyDebugZone>();
	}
};
static_assert(alignof(APyDebugZone) == 0x000008, "Wrong alignment on APyDebugZone");
static_assert(sizeof(APyDebugZone) == 0x000478, "Wrong size on APyDebugZone");
static_assert(offsetof(APyDebugZone, DebugMode) == 0x000470, "Member 'APyDebugZone::DebugMode' has a wrong offset!");

}

