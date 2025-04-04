#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: One033001_ShowAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyShowAnimInstance_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass 1033001_ShowAnimBP.1033001_ShowAnimBP_C
// 0x0130 (0x0680 - 0x0550)
class UOne033001_ShowAnimBP_C final : public UPyShowAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0550(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Tag;                        // 0x0558(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0560(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0568(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0570(0x0038)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph;                     // 0x05A8(0x00D0)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_1033001_ShowAnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"1033001_ShowAnimBP_C">();
	}
	static class UOne033001_ShowAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOne033001_ShowAnimBP_C>();
	}
};
static_assert(alignof(UOne033001_ShowAnimBP_C) == 0x000010, "Wrong alignment on UOne033001_ShowAnimBP_C");
static_assert(sizeof(UOne033001_ShowAnimBP_C) == 0x000680, "Wrong size on UOne033001_ShowAnimBP_C");
static_assert(offsetof(UOne033001_ShowAnimBP_C, UberGraphFrame) == 0x000550, "Member 'UOne033001_ShowAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOne033001_ShowAnimBP_C, AnimBlueprintExtension_Tag) == 0x000558, "Member 'UOne033001_ShowAnimBP_C::AnimBlueprintExtension_Tag' has a wrong offset!");
static_assert(offsetof(UOne033001_ShowAnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000560, "Member 'UOne033001_ShowAnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UOne033001_ShowAnimBP_C, AnimBlueprintExtension_Base) == 0x000568, "Member 'UOne033001_ShowAnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UOne033001_ShowAnimBP_C, AnimGraphNode_Root) == 0x000570, "Member 'UOne033001_ShowAnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UOne033001_ShowAnimBP_C, AnimGraphNode_LinkedAnimGraph) == 0x0005A8, "Member 'UOne033001_ShowAnimBP_C::AnimGraphNode_LinkedAnimGraph' has a wrong offset!");

}

