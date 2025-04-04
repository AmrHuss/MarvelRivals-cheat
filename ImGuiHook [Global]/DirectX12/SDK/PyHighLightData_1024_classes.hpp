#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyHighLightData_1024

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyHighLightData_1024.PyHighLightData_1024
// 0x0008 (0x0050 - 0x0048)
class UPyHighLightData_1024 : public UHeroHighLightData
{
public:
	int32                                         HighLightID_102411;                                // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void K2_Initialize();
	void K2_Shutdown();
	void OnActorDeath(class AActor* Killer, class AActor* Target, const struct FAttributeModifierHandle& ParmaHandle, const struct FGlobalEventExtraData& ExtraData);
	void OnTargetActorRecycleAgentTask(class AActor* SourceActor, class UMarvelGameplayAbility* SourceAbility, const struct FMarvelTargetActorGenerateInfo& GenerateInfo, const struct FEndAgentTaskInfo& AgentTaskInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyHighLightData_1024">();
	}
	static class UPyHighLightData_1024* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyHighLightData_1024>();
	}
};
static_assert(alignof(UPyHighLightData_1024) == 0x000008, "Wrong alignment on UPyHighLightData_1024");
static_assert(sizeof(UPyHighLightData_1024) == 0x000050, "Wrong size on UPyHighLightData_1024");
static_assert(offsetof(UPyHighLightData_1024, HighLightID_102411) == 0x000048, "Member 'UPyHighLightData_1024::HighLightID_102411' has a wrong offset!");

}

