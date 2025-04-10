#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyNoviceComputer

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyNoviceComputer.PyNoviceComputer
// 0x00B0 (0x0520 - 0x0470)
class APyNoviceComputer final : public AMarvelLevelActorBase
{
public:
	struct FUIActionData                          HoldActionTips;                                    // 0x0470(0x0058)(Edit, NativeAccessSpecifierPublic)
	struct FUIActionData                          PressActionTips;                                   // 0x04C8(0x0058)(Edit, NativeAccessSpecifierPublic)

public:
	void ReceiveInit();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyNoviceComputer">();
	}
	static class APyNoviceComputer* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyNoviceComputer>();
	}
};
static_assert(alignof(APyNoviceComputer) == 0x000008, "Wrong alignment on APyNoviceComputer");
static_assert(sizeof(APyNoviceComputer) == 0x000520, "Wrong size on APyNoviceComputer");
static_assert(offsetof(APyNoviceComputer, HoldActionTips) == 0x000470, "Member 'APyNoviceComputer::HoldActionTips' has a wrong offset!");
static_assert(offsetof(APyNoviceComputer, PressActionTips) == 0x0004C8, "Member 'APyNoviceComputer::PressActionTips' has a wrong offset!");

}

