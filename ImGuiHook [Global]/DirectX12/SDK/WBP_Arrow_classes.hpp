#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Arrow

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Arrow.WBP_Arrow_C
// 0x0018 (0x03D0 - 0x03B8)
class UWBP_Arrow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Loop;                                         // 0x03C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Arrow;                                         // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Arrow(int32 EntryPoint);
	void PlayLoopAnim();
	void SetAttackColor();
	void SetDefaultColor();
	void StopLoopAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Arrow_C">();
	}
	static class UWBP_Arrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Arrow_C>();
	}
};
static_assert(alignof(UWBP_Arrow_C) == 0x000008, "Wrong alignment on UWBP_Arrow_C");
static_assert(sizeof(UWBP_Arrow_C) == 0x0003D0, "Wrong size on UWBP_Arrow_C");
static_assert(offsetof(UWBP_Arrow_C, UberGraphFrame) == 0x0003B8, "Member 'UWBP_Arrow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Arrow_C, Anim_Loop) == 0x0003C0, "Member 'UWBP_Arrow_C::Anim_Loop' has a wrong offset!");
static_assert(offsetof(UWBP_Arrow_C, Img_Arrow) == 0x0003C8, "Member 'UWBP_Arrow_C::Img_Arrow' has a wrong offset!");

}
