#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAISelectTarget_NearestShadow

#include "Basic.hpp"

#include "PyAISelectTargetLogicBase_classes.hpp"


namespace SDK
{

// PythonClass PyAISelectTarget_NearestShadow.PyAISelectTarget_NearestShadow
// 0x0008 (0x0078 - 0x0070)
class UPyAISelectTarget_NearestShadow : public UPyAISelectTargetLogicBase
{
public:
	int32                                         SummonedID;                                        // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAISelectTarget_NearestShadow">();
	}
	static class UPyAISelectTarget_NearestShadow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAISelectTarget_NearestShadow>();
	}
};
static_assert(alignof(UPyAISelectTarget_NearestShadow) == 0x000008, "Wrong alignment on UPyAISelectTarget_NearestShadow");
static_assert(sizeof(UPyAISelectTarget_NearestShadow) == 0x000078, "Wrong size on UPyAISelectTarget_NearestShadow");
static_assert(offsetof(UPyAISelectTarget_NearestShadow, SummonedID) == 0x000070, "Member 'UPyAISelectTarget_NearestShadow::SummonedID' has a wrong offset!");

}
