#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyPayloadShowActorBase

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyPayloadShowActorBase.PyPayloadShowActorBase
// 0x0010 (0x04B0 - 0x04A0)
class APyPayloadShowActorBase final : public ALevelNPCActor
{
public:
	class USkeletalMeshComponent*                 PayloadShowMesh;                                   // 0x04A0(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartShowDelay;                                    // 0x04A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyPayloadShowActorBase">();
	}
	static class APyPayloadShowActorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyPayloadShowActorBase>();
	}
};
static_assert(alignof(APyPayloadShowActorBase) == 0x000008, "Wrong alignment on APyPayloadShowActorBase");
static_assert(sizeof(APyPayloadShowActorBase) == 0x0004B0, "Wrong size on APyPayloadShowActorBase");
static_assert(offsetof(APyPayloadShowActorBase, PayloadShowMesh) == 0x0004A0, "Member 'APyPayloadShowActorBase::PayloadShowMesh' has a wrong offset!");
static_assert(offsetof(APyPayloadShowActorBase, StartShowDelay) == 0x0004A8, "Member 'APyPayloadShowActorBase::StartShowDelay' has a wrong offset!");

}

