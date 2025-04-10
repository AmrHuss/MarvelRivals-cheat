#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AbilitySystemDebugger

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_AbilitySystemDebugger.WBP_AbilitySystemDebugger_C
// 0x0018 (0x03D0 - 0x03B8)
class UWBP_AbilitySystemDebugger_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMarvelOverlay*                         Content;                                           // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       DebugString;                                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_AbilitySystemDebugger(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_AbilitySystemDebugger_C">();
	}
	static class UWBP_AbilitySystemDebugger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_AbilitySystemDebugger_C>();
	}
};
static_assert(alignof(UWBP_AbilitySystemDebugger_C) == 0x000008, "Wrong alignment on UWBP_AbilitySystemDebugger_C");
static_assert(sizeof(UWBP_AbilitySystemDebugger_C) == 0x0003D0, "Wrong size on UWBP_AbilitySystemDebugger_C");
static_assert(offsetof(UWBP_AbilitySystemDebugger_C, UberGraphFrame) == 0x0003B8, "Member 'UWBP_AbilitySystemDebugger_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_AbilitySystemDebugger_C, Content) == 0x0003C0, "Member 'UWBP_AbilitySystemDebugger_C::Content' has a wrong offset!");
static_assert(offsetof(UWBP_AbilitySystemDebugger_C, DebugString) == 0x0003C8, "Member 'UWBP_AbilitySystemDebugger_C::DebugString' has a wrong offset!");

}

