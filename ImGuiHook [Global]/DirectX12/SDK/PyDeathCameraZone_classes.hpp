#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyDeathCameraZone

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// PythonClass PyDeathCameraZone.PyDeathCamaraZone
// 0x0000 (0x0470 - 0x0470)
class APyDeathCamaraZone final : public AActor
{
public:
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyDeathCamaraZone">();
	}
	static class APyDeathCamaraZone* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyDeathCamaraZone>();
	}
};
static_assert(alignof(APyDeathCamaraZone) == 0x000008, "Wrong alignment on APyDeathCamaraZone");
static_assert(sizeof(APyDeathCamaraZone) == 0x000470, "Wrong size on APyDeathCamaraZone");

// PythonClass PyDeathCameraZone.PyDeathCameraPoint
// 0x0000 (0x0470 - 0x0470)
class APyDeathCameraPoint final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyDeathCameraPoint">();
	}
	static class APyDeathCameraPoint* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyDeathCameraPoint>();
	}
};
static_assert(alignof(APyDeathCameraPoint) == 0x000008, "Wrong alignment on APyDeathCameraPoint");
static_assert(sizeof(APyDeathCameraPoint) == 0x000470, "Wrong size on APyDeathCameraPoint");

}
