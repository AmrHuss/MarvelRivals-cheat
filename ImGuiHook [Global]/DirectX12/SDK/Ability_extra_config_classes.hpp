#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_extra_config

#include "Basic.hpp"

#include "MarvelAI_structs.hpp"
#include "MarvelAI_classes.hpp"


namespace SDK
{

// PythonClass ability_extra_config.PyAbilityActivationExtraConfigBase
// 0x0000 (0x0040 - 0x0040)
class UPyAbilityActivationExtraConfigBase : public UAIAbilityActivationExtraConfig
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbilityActivationExtraConfigBase">();
	}
	static class UPyAbilityActivationExtraConfigBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbilityActivationExtraConfigBase>();
	}
};
static_assert(alignof(UPyAbilityActivationExtraConfigBase) == 0x000008, "Wrong alignment on UPyAbilityActivationExtraConfigBase");
static_assert(sizeof(UPyAbilityActivationExtraConfigBase) == 0x000040, "Wrong size on UPyAbilityActivationExtraConfigBase");

// PythonClass ability_extra_config.PyActivationExtraConfig_ForceConfig
// 0x0010 (0x0050 - 0x0040)
class UPyActivationExtraConfig_ForceConfig final : public UPyAbilityActivationExtraConfigBase
{
public:
	float                                         CheckRange;                                        // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TeammateForce;                                     // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EnemyForce;                                        // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShouldHaveTeammate;                                // 0x004C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShouldHaveEnemy;                                   // 0x004D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyActivationExtraConfig_ForceConfig">();
	}
	static class UPyActivationExtraConfig_ForceConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyActivationExtraConfig_ForceConfig>();
	}
};
static_assert(alignof(UPyActivationExtraConfig_ForceConfig) == 0x000008, "Wrong alignment on UPyActivationExtraConfig_ForceConfig");
static_assert(sizeof(UPyActivationExtraConfig_ForceConfig) == 0x000050, "Wrong size on UPyActivationExtraConfig_ForceConfig");
static_assert(offsetof(UPyActivationExtraConfig_ForceConfig, CheckRange) == 0x000040, "Member 'UPyActivationExtraConfig_ForceConfig::CheckRange' has a wrong offset!");
static_assert(offsetof(UPyActivationExtraConfig_ForceConfig, TeammateForce) == 0x000044, "Member 'UPyActivationExtraConfig_ForceConfig::TeammateForce' has a wrong offset!");
static_assert(offsetof(UPyActivationExtraConfig_ForceConfig, EnemyForce) == 0x000048, "Member 'UPyActivationExtraConfig_ForceConfig::EnemyForce' has a wrong offset!");
static_assert(offsetof(UPyActivationExtraConfig_ForceConfig, ShouldHaveTeammate) == 0x00004C, "Member 'UPyActivationExtraConfig_ForceConfig::ShouldHaveTeammate' has a wrong offset!");
static_assert(offsetof(UPyActivationExtraConfig_ForceConfig, ShouldHaveEnemy) == 0x00004D, "Member 'UPyActivationExtraConfig_ForceConfig::ShouldHaveEnemy' has a wrong offset!");

// PythonClass ability_extra_config.PyActivationExtraConfig_ThroughEnemyConfig
// 0x0018 (0x0058 - 0x0040)
class UPyActivationExtraConfig_ThroughEnemyConfig : public UPyAbilityActivationExtraConfigBase
{
public:
	float                                         CheckRange;                                        // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EnemyDistanceRange;                                // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AccessRange;                                       // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CacheTargetActor;                                  // 0x0050(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void InitExtraConfig(class UObject* Ai_owner);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyActivationExtraConfig_ThroughEnemyConfig">();
	}
	static class UPyActivationExtraConfig_ThroughEnemyConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyActivationExtraConfig_ThroughEnemyConfig>();
	}
};
static_assert(alignof(UPyActivationExtraConfig_ThroughEnemyConfig) == 0x000008, "Wrong alignment on UPyActivationExtraConfig_ThroughEnemyConfig");
static_assert(sizeof(UPyActivationExtraConfig_ThroughEnemyConfig) == 0x000058, "Wrong size on UPyActivationExtraConfig_ThroughEnemyConfig");
static_assert(offsetof(UPyActivationExtraConfig_ThroughEnemyConfig, CheckRange) == 0x000040, "Member 'UPyActivationExtraConfig_ThroughEnemyConfig::CheckRange' has a wrong offset!");
static_assert(offsetof(UPyActivationExtraConfig_ThroughEnemyConfig, EnemyDistanceRange) == 0x000044, "Member 'UPyActivationExtraConfig_ThroughEnemyConfig::EnemyDistanceRange' has a wrong offset!");
static_assert(offsetof(UPyActivationExtraConfig_ThroughEnemyConfig, AccessRange) == 0x000048, "Member 'UPyActivationExtraConfig_ThroughEnemyConfig::AccessRange' has a wrong offset!");
static_assert(offsetof(UPyActivationExtraConfig_ThroughEnemyConfig, CacheTargetActor) == 0x000050, "Member 'UPyActivationExtraConfig_ThroughEnemyConfig::CacheTargetActor' has a wrong offset!");

// PythonClass ability_extra_config.PyActivationExtraConfig_ThroughEnemyConfig_Fly
// 0x0008 (0x0060 - 0x0058)
class UPyActivationExtraConfig_ThroughEnemyConfig_Fly final : public UPyActivationExtraConfig_ThroughEnemyConfig
{
public:
	float                                         UpOffset;                                          // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyActivationExtraConfig_ThroughEnemyConfig_Fly">();
	}
	static class UPyActivationExtraConfig_ThroughEnemyConfig_Fly* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyActivationExtraConfig_ThroughEnemyConfig_Fly>();
	}
};
static_assert(alignof(UPyActivationExtraConfig_ThroughEnemyConfig_Fly) == 0x000008, "Wrong alignment on UPyActivationExtraConfig_ThroughEnemyConfig_Fly");
static_assert(sizeof(UPyActivationExtraConfig_ThroughEnemyConfig_Fly) == 0x000060, "Wrong size on UPyActivationExtraConfig_ThroughEnemyConfig_Fly");
static_assert(offsetof(UPyActivationExtraConfig_ThroughEnemyConfig_Fly, UpOffset) == 0x000058, "Member 'UPyActivationExtraConfig_ThroughEnemyConfig_Fly::UpOffset' has a wrong offset!");

// PythonClass ability_extra_config.PyActivationExtraConfig_SkillTimeTriggerConfig
// 0x0010 (0x0050 - 0x0040)
class UPyActivationExtraConfig_SkillTimeTriggerConfig final : public UPyAbilityActivationExtraConfigBase
{
public:
	struct FRange_FloatValue                      TimeRange;                                         // 0x0040(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         SkillID;                                           // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ForceActive;                                       // 0x004C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void InitExtraConfig(class UObject* Ai_owner);
	class FString GetConfigName();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyActivationExtraConfig_SkillTimeTriggerConfig">();
	}
	static class UPyActivationExtraConfig_SkillTimeTriggerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyActivationExtraConfig_SkillTimeTriggerConfig>();
	}
};
static_assert(alignof(UPyActivationExtraConfig_SkillTimeTriggerConfig) == 0x000008, "Wrong alignment on UPyActivationExtraConfig_SkillTimeTriggerConfig");
static_assert(sizeof(UPyActivationExtraConfig_SkillTimeTriggerConfig) == 0x000050, "Wrong size on UPyActivationExtraConfig_SkillTimeTriggerConfig");
static_assert(offsetof(UPyActivationExtraConfig_SkillTimeTriggerConfig, TimeRange) == 0x000040, "Member 'UPyActivationExtraConfig_SkillTimeTriggerConfig::TimeRange' has a wrong offset!");
static_assert(offsetof(UPyActivationExtraConfig_SkillTimeTriggerConfig, SkillID) == 0x000048, "Member 'UPyActivationExtraConfig_SkillTimeTriggerConfig::SkillID' has a wrong offset!");
static_assert(offsetof(UPyActivationExtraConfig_SkillTimeTriggerConfig, ForceActive) == 0x00004C, "Member 'UPyActivationExtraConfig_SkillTimeTriggerConfig::ForceActive' has a wrong offset!");

// PythonClass ability_extra_config.PyActivationExtraConfig_SubSkillConfig
// 0x0010 (0x0050 - 0x0040)
class UPyActivationExtraConfig_SubSkillConfig final : public UPyAbilityActivationExtraConfigBase
{
public:
	int32                                         SkillID;                                           // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIAbilityUsageAsset*                   AbilityUsage;                                      // 0x0048(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	class FString GetConfigName();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyActivationExtraConfig_SubSkillConfig">();
	}
	static class UPyActivationExtraConfig_SubSkillConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyActivationExtraConfig_SubSkillConfig>();
	}
};
static_assert(alignof(UPyActivationExtraConfig_SubSkillConfig) == 0x000008, "Wrong alignment on UPyActivationExtraConfig_SubSkillConfig");
static_assert(sizeof(UPyActivationExtraConfig_SubSkillConfig) == 0x000050, "Wrong size on UPyActivationExtraConfig_SubSkillConfig");
static_assert(offsetof(UPyActivationExtraConfig_SubSkillConfig, SkillID) == 0x000040, "Member 'UPyActivationExtraConfig_SubSkillConfig::SkillID' has a wrong offset!");
static_assert(offsetof(UPyActivationExtraConfig_SubSkillConfig, AbilityUsage) == 0x000048, "Member 'UPyActivationExtraConfig_SubSkillConfig::AbilityUsage' has a wrong offset!");

}
