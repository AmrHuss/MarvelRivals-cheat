#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102331

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102331.PyConfig_102331
// 0x2628 (0x26C0 - 0x0098)
class UPyConfig_102331 final : public UMarvelAbilityConfig
{
public:
	struct FDashAbilityInfo                       DashInfo;                                          // 0x0098(0x0B70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDashAbilityInfo                       DashInfoAtWall;                                    // 0x0C08(0x0B70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_1778[0x8];                                     // 0x1778(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarvelAbilityTraceContext             TargetSceneParam;                                  // 0x1780(0x0F30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         DistanceThreshold;                                 // 0x26B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_102331">();
	}
	static class UPyConfig_102331* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_102331>();
	}
};
static_assert(alignof(UPyConfig_102331) == 0x000010, "Wrong alignment on UPyConfig_102331");
static_assert(sizeof(UPyConfig_102331) == 0x0026C0, "Wrong size on UPyConfig_102331");
static_assert(offsetof(UPyConfig_102331, DashInfo) == 0x000098, "Member 'UPyConfig_102331::DashInfo' has a wrong offset!");
static_assert(offsetof(UPyConfig_102331, DashInfoAtWall) == 0x000C08, "Member 'UPyConfig_102331::DashInfoAtWall' has a wrong offset!");
static_assert(offsetof(UPyConfig_102331, TargetSceneParam) == 0x001780, "Member 'UPyConfig_102331::TargetSceneParam' has a wrong offset!");
static_assert(offsetof(UPyConfig_102331, DistanceThreshold) == 0x0026B0, "Member 'UPyConfig_102331::DistanceThreshold' has a wrong offset!");

// PythonClass PyAbility_102331.PyAbility_102331
// 0x0008 (0x2560 - 0x2558)
class UPyAbility_102331 : public UAbility_108
{
public:
	bool                                          IsLaunch;                                          // 0x2558(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void BeginPlay();
	void K2_ActivateAbility();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	bool TryMakeTriggerContext(struct FGameplayEventData& EventData);
	void MissileEventNotify();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102331">();
	}
	static class UPyAbility_102331* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102331>();
	}
};
static_assert(alignof(UPyAbility_102331) == 0x000008, "Wrong alignment on UPyAbility_102331");
static_assert(sizeof(UPyAbility_102331) == 0x002560, "Wrong size on UPyAbility_102331");
static_assert(offsetof(UPyAbility_102331, IsLaunch) == 0x002558, "Member 'UPyAbility_102331::IsLaunch' has a wrong offset!");

}
