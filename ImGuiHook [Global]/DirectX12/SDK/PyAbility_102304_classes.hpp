#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102304

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102304.PyConfig_102304
// 0x0030 (0x0110 - 0x00E0)
class UPyConfig_102304 final : public UWallRunningPassiveAbilityConfig
{
public:
	bool                                          bIsWaitStateChanged;                               // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStateChangedTaskParam                 TaskParam;                                         // 0x00E4(0x0028)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_102304">();
	}
	static class UPyConfig_102304* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_102304>();
	}
};
static_assert(alignof(UPyConfig_102304) == 0x000008, "Wrong alignment on UPyConfig_102304");
static_assert(sizeof(UPyConfig_102304) == 0x000110, "Wrong size on UPyConfig_102304");
static_assert(offsetof(UPyConfig_102304, bIsWaitStateChanged) == 0x0000E0, "Member 'UPyConfig_102304::bIsWaitStateChanged' has a wrong offset!");
static_assert(offsetof(UPyConfig_102304, TaskParam) == 0x0000E4, "Member 'UPyConfig_102304::TaskParam' has a wrong offset!");

// PythonClass PyAbility_102304.PyAbility_102304
// 0x0000 (0x2568 - 0x2568)
class UPyAbility_102304 : public UWallRunningPassiveAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102304">();
	}
	static class UPyAbility_102304* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102304>();
	}
};
static_assert(alignof(UPyAbility_102304) == 0x000008, "Wrong alignment on UPyAbility_102304");
static_assert(sizeof(UPyAbility_102304) == 0x002568, "Wrong size on UPyAbility_102304");

// PythonClass PyAbility_102304.PyUIController_102304
// 0x0000 (0x0C58 - 0x0C58)
class UPyUIController_102304 final : public UUIC_Ability
{
public:
	void OnInit();
	void OnDestruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_102304">();
	}
	static class UPyUIController_102304* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_102304>();
	}
};
static_assert(alignof(UPyUIController_102304) == 0x000008, "Wrong alignment on UPyUIController_102304");
static_assert(sizeof(UPyUIController_102304) == 0x000C58, "Wrong size on UPyUIController_102304");

}

