#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyRoundRuleComponent

#include "Basic.hpp"

#include "MarvelLevel_classes.hpp"
#include "PyRuleComponent_classes.hpp"


namespace SDK
{

// PythonClass PyRoundRuleComponent.PyRoundConfig
// 0x0060 (0x0090 - 0x0030)
class UPyRoundConfig : public UMarvelRuleConfig
{
public:
	float                                         SelectHeroTime;                                    // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PrePareTime;                                       // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Countdown;                                         // 0x0038(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RemainingTime;                                     // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int32, float>                            PrepareBuffIds;                                    // 0x0040(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyRoundConfig">();
	}
	static class UPyRoundConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyRoundConfig>();
	}
};
static_assert(alignof(UPyRoundConfig) == 0x000008, "Wrong alignment on UPyRoundConfig");
static_assert(sizeof(UPyRoundConfig) == 0x000090, "Wrong size on UPyRoundConfig");
static_assert(offsetof(UPyRoundConfig, SelectHeroTime) == 0x000030, "Member 'UPyRoundConfig::SelectHeroTime' has a wrong offset!");
static_assert(offsetof(UPyRoundConfig, PrePareTime) == 0x000034, "Member 'UPyRoundConfig::PrePareTime' has a wrong offset!");
static_assert(offsetof(UPyRoundConfig, Countdown) == 0x000038, "Member 'UPyRoundConfig::Countdown' has a wrong offset!");
static_assert(offsetof(UPyRoundConfig, RemainingTime) == 0x00003C, "Member 'UPyRoundConfig::RemainingTime' has a wrong offset!");
static_assert(offsetof(UPyRoundConfig, PrepareBuffIds) == 0x000040, "Member 'UPyRoundConfig::PrepareBuffIds' has a wrong offset!");

// PythonClass PyRoundRuleComponent.PyControlRoundConfig
// 0x0008 (0x0098 - 0x0090)
class UPyControlRoundConfig final : public UPyRoundConfig
{
public:
	float                                         VictoryRaisingSpeed;                               // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VictoryProgressMax;                                // 0x0094(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyControlRoundConfig">();
	}
	static class UPyControlRoundConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyControlRoundConfig>();
	}
};
static_assert(alignof(UPyControlRoundConfig) == 0x000008, "Wrong alignment on UPyControlRoundConfig");
static_assert(sizeof(UPyControlRoundConfig) == 0x000098, "Wrong size on UPyControlRoundConfig");
static_assert(offsetof(UPyControlRoundConfig, VictoryRaisingSpeed) == 0x000090, "Member 'UPyControlRoundConfig::VictoryRaisingSpeed' has a wrong offset!");
static_assert(offsetof(UPyControlRoundConfig, VictoryProgressMax) == 0x000094, "Member 'UPyControlRoundConfig::VictoryProgressMax' has a wrong offset!");

// PythonClass PyRoundRuleComponent.PyRoundRuleComponent
// 0x0060 (0x0150 - 0x00F0)
class UPyRoundRuleComponent final : public UPyRuleComponent
{
public:
	float                                         SelectHeroTime;                                    // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PrePareTime;                                       // 0x00F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Countdown;                                         // 0x00F8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RemainingTime;                                     // 0x00FC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int32, float>                            PrepareBuffIds;                                    // 0x0100(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	void OnRep_RemainingTime();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyRoundRuleComponent">();
	}
	static class UPyRoundRuleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyRoundRuleComponent>();
	}
};
static_assert(alignof(UPyRoundRuleComponent) == 0x000008, "Wrong alignment on UPyRoundRuleComponent");
static_assert(sizeof(UPyRoundRuleComponent) == 0x000150, "Wrong size on UPyRoundRuleComponent");
static_assert(offsetof(UPyRoundRuleComponent, SelectHeroTime) == 0x0000F0, "Member 'UPyRoundRuleComponent::SelectHeroTime' has a wrong offset!");
static_assert(offsetof(UPyRoundRuleComponent, PrePareTime) == 0x0000F4, "Member 'UPyRoundRuleComponent::PrePareTime' has a wrong offset!");
static_assert(offsetof(UPyRoundRuleComponent, Countdown) == 0x0000F8, "Member 'UPyRoundRuleComponent::Countdown' has a wrong offset!");
static_assert(offsetof(UPyRoundRuleComponent, RemainingTime) == 0x0000FC, "Member 'UPyRoundRuleComponent::RemainingTime' has a wrong offset!");
static_assert(offsetof(UPyRoundRuleComponent, PrepareBuffIds) == 0x000100, "Member 'UPyRoundRuleComponent::PrepareBuffIds' has a wrong offset!");

}
