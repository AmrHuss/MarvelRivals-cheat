#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103702

#include "Basic.hpp"

#include "Hero_1037_classes.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_103702.PyConfig_103702
// 0x0010 (0x10D0 - 0x10C0)
class UPyConfig_103702 final : public UConfig_103702
{
public:
	float                                         HoldTime;                                          // 0x10C0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_103702">();
	}
	static class UPyConfig_103702* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_103702>();
	}
};
static_assert(alignof(UPyConfig_103702) == 0x000010, "Wrong alignment on UPyConfig_103702");
static_assert(sizeof(UPyConfig_103702) == 0x0010D0, "Wrong size on UPyConfig_103702");
static_assert(offsetof(UPyConfig_103702, HoldTime) == 0x0010C0, "Member 'UPyConfig_103702::HoldTime' has a wrong offset!");

// PythonClass PyAbility_103702.PyAbility_103702
// 0x0000 (0x2568 - 0x2568)
class UPyAbility_103702 : public UMarvelAbility_LongPressTrigger
{
public:
	void BeginPlay();
	bool CanActivate();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103702">();
	}
	static class UPyAbility_103702* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103702>();
	}
};
static_assert(alignof(UPyAbility_103702) == 0x000008, "Wrong alignment on UPyAbility_103702");
static_assert(sizeof(UPyAbility_103702) == 0x002568, "Wrong size on UPyAbility_103702");

}
