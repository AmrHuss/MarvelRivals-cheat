#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyTrainingPlayerStatistics

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// PythonClass PyTrainingPlayerStatistics.PyTrainingPlayerStatistics
// 0x0000 (0x0030 - 0x0030)
class UPyTrainingPlayerStatistics final : public UObject
{
public:
	void Initialize(class AMarvelPlayerState* Player_state);
	void Shutdown();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyTrainingPlayerStatistics">();
	}
	static class UPyTrainingPlayerStatistics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyTrainingPlayerStatistics>();
	}
};
static_assert(alignof(UPyTrainingPlayerStatistics) == 0x000008, "Wrong alignment on UPyTrainingPlayerStatistics");
static_assert(sizeof(UPyTrainingPlayerStatistics) == 0x000030, "Wrong size on UPyTrainingPlayerStatistics");

}
