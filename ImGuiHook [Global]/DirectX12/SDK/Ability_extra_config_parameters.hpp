#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_extra_config

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction ability_extra_config.PyActivationExtraConfig_ThroughEnemyConfig.InitExtraConfig
// 0x0008 (0x0008 - 0x0000)
struct PyActivationExtraConfig_ThroughEnemyConfig_InitExtraConfig final
{
public:
	class UObject*                                Ai_owner;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyActivationExtraConfig_ThroughEnemyConfig_InitExtraConfig) == 0x000008, "Wrong alignment on PyActivationExtraConfig_ThroughEnemyConfig_InitExtraConfig");
static_assert(sizeof(PyActivationExtraConfig_ThroughEnemyConfig_InitExtraConfig) == 0x000008, "Wrong size on PyActivationExtraConfig_ThroughEnemyConfig_InitExtraConfig");
static_assert(offsetof(PyActivationExtraConfig_ThroughEnemyConfig_InitExtraConfig, Ai_owner) == 0x000000, "Member 'PyActivationExtraConfig_ThroughEnemyConfig_InitExtraConfig::Ai_owner' has a wrong offset!");

// PythonFunction ability_extra_config.PyActivationExtraConfig_SkillTimeTriggerConfig.InitExtraConfig
// 0x0008 (0x0008 - 0x0000)
struct PyActivationExtraConfig_SkillTimeTriggerConfig_InitExtraConfig final
{
public:
	class UObject*                                Ai_owner;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyActivationExtraConfig_SkillTimeTriggerConfig_InitExtraConfig) == 0x000008, "Wrong alignment on PyActivationExtraConfig_SkillTimeTriggerConfig_InitExtraConfig");
static_assert(sizeof(PyActivationExtraConfig_SkillTimeTriggerConfig_InitExtraConfig) == 0x000008, "Wrong size on PyActivationExtraConfig_SkillTimeTriggerConfig_InitExtraConfig");
static_assert(offsetof(PyActivationExtraConfig_SkillTimeTriggerConfig_InitExtraConfig, Ai_owner) == 0x000000, "Member 'PyActivationExtraConfig_SkillTimeTriggerConfig_InitExtraConfig::Ai_owner' has a wrong offset!");

// PythonFunction ability_extra_config.PyActivationExtraConfig_SkillTimeTriggerConfig.GetConfigName
// 0x0010 (0x0010 - 0x0000)
struct PyActivationExtraConfig_SkillTimeTriggerConfig_GetConfigName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(PyActivationExtraConfig_SkillTimeTriggerConfig_GetConfigName) == 0x000008, "Wrong alignment on PyActivationExtraConfig_SkillTimeTriggerConfig_GetConfigName");
static_assert(sizeof(PyActivationExtraConfig_SkillTimeTriggerConfig_GetConfigName) == 0x000010, "Wrong size on PyActivationExtraConfig_SkillTimeTriggerConfig_GetConfigName");
static_assert(offsetof(PyActivationExtraConfig_SkillTimeTriggerConfig_GetConfigName, ReturnValue) == 0x000000, "Member 'PyActivationExtraConfig_SkillTimeTriggerConfig_GetConfigName::ReturnValue' has a wrong offset!");

// PythonFunction ability_extra_config.PyActivationExtraConfig_SubSkillConfig.GetConfigName
// 0x0010 (0x0010 - 0x0000)
struct PyActivationExtraConfig_SubSkillConfig_GetConfigName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(PyActivationExtraConfig_SubSkillConfig_GetConfigName) == 0x000008, "Wrong alignment on PyActivationExtraConfig_SubSkillConfig_GetConfigName");
static_assert(sizeof(PyActivationExtraConfig_SubSkillConfig_GetConfigName) == 0x000010, "Wrong size on PyActivationExtraConfig_SubSkillConfig_GetConfigName");
static_assert(offsetof(PyActivationExtraConfig_SubSkillConfig_GetConfigName, ReturnValue) == 0x000000, "Member 'PyActivationExtraConfig_SubSkillConfig_GetConfigName::ReturnValue' has a wrong offset!");

}

