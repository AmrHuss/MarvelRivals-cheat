#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyEscortLevelStatistics

#include "Basic.hpp"

#include "PyLevelStatistics_classes.hpp"


namespace SDK
{

// PythonClass PyEscortLevelStatistics.PyEscortLevelStatistics
// 0x0008 (0x0040 - 0x0038)
class UPyEscortLevelStatistics : public UPyLevelStatistics
{
public:
	class UPyEscortPartStatistics*                EscortPartStatistics;                              // 0x0038(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void Initialize();
	void Shutdown();
	void OnPayloadActivate(class AActor* Payload);
	void TraceProgress();
	void OnPayloadRouteStart(class AActor* Payload);
	void OnPayloadRouteEnd(class AActor* Payload);
	float OnRoundEnd();
	void OnRoundTransitionStart();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyEscortLevelStatistics">();
	}
	static class UPyEscortLevelStatistics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyEscortLevelStatistics>();
	}
};
static_assert(alignof(UPyEscortLevelStatistics) == 0x000008, "Wrong alignment on UPyEscortLevelStatistics");
static_assert(sizeof(UPyEscortLevelStatistics) == 0x000040, "Wrong size on UPyEscortLevelStatistics");
static_assert(offsetof(UPyEscortLevelStatistics, EscortPartStatistics) == 0x000038, "Member 'UPyEscortLevelStatistics::EscortPartStatistics' has a wrong offset!");

}

