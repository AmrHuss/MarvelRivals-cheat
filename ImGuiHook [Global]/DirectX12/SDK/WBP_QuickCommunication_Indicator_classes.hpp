#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QuickCommunication_Indicator

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_QuickCommunication_Indicator.WBP_QuickCommunication_Indicator_C
// 0x0030 (0x08B0 - 0x0880)
class UWBP_QuickCommunication_Indicator_C final : public UMarvel3DWidget
{
public:
	uint8                                         Pad_878[0x8];                                      // 0x0878(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMarvelImage*                           Img_bg;                                            // 0x0888(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Communicate_Icon;                              // 0x0890(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Edgeglow_Vx_1;                                 // 0x0898(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_frame;                                         // 0x08A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ImageMaskCut_C*                    WBP_Texture;                                       // 0x08A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_QuickCommunication_Indicator(int32 EntryPoint);
	void OnAnimationStarted(const class UWidgetAnimation* Animation);
	void WidgetAnimationEvt_Anim_FadeOut_K2Node_WidgetAnimationEvent_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_QuickCommunication_Indicator_C">();
	}
	static class UWBP_QuickCommunication_Indicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_QuickCommunication_Indicator_C>();
	}
};
static_assert(alignof(UWBP_QuickCommunication_Indicator_C) == 0x000010, "Wrong alignment on UWBP_QuickCommunication_Indicator_C");
static_assert(sizeof(UWBP_QuickCommunication_Indicator_C) == 0x0008B0, "Wrong size on UWBP_QuickCommunication_Indicator_C");
static_assert(offsetof(UWBP_QuickCommunication_Indicator_C, UberGraphFrame) == 0x000880, "Member 'UWBP_QuickCommunication_Indicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommunication_Indicator_C, Img_bg) == 0x000888, "Member 'UWBP_QuickCommunication_Indicator_C::Img_bg' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommunication_Indicator_C, Img_Communicate_Icon) == 0x000890, "Member 'UWBP_QuickCommunication_Indicator_C::Img_Communicate_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommunication_Indicator_C, Img_Edgeglow_Vx_1) == 0x000898, "Member 'UWBP_QuickCommunication_Indicator_C::Img_Edgeglow_Vx_1' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommunication_Indicator_C, Img_frame) == 0x0008A0, "Member 'UWBP_QuickCommunication_Indicator_C::Img_frame' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommunication_Indicator_C, WBP_Texture) == 0x0008A8, "Member 'UWBP_QuickCommunication_Indicator_C::WBP_Texture' has a wrong offset!");

}

