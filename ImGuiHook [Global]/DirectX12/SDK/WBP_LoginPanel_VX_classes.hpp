#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoginPanel_VX

#include "Basic.hpp"

#include "PyWidget_Marvel_Logo_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LoginPanel_VX.WBP_LoginPanel_VX_C
// 0x0020 (0x0608 - 0x05E8)
class UWBP_LoginPanel_VX_C final : public UPyWidget_Marvel_Logo
{
public:
	class UMarvelImage*                           Img_Logo;                                          // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelCanvasPanel*                     Panel_FadeIn;                                      // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelCanvasPanel*                     Panel_FadeOut;                                     // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelCanvasPanel*                     Panel_Loop;                                        // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LoginPanel_VX_C">();
	}
	static class UWBP_LoginPanel_VX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LoginPanel_VX_C>();
	}
};
static_assert(alignof(UWBP_LoginPanel_VX_C) == 0x000008, "Wrong alignment on UWBP_LoginPanel_VX_C");
static_assert(sizeof(UWBP_LoginPanel_VX_C) == 0x000608, "Wrong size on UWBP_LoginPanel_VX_C");
static_assert(offsetof(UWBP_LoginPanel_VX_C, Img_Logo) == 0x0005E8, "Member 'UWBP_LoginPanel_VX_C::Img_Logo' has a wrong offset!");
static_assert(offsetof(UWBP_LoginPanel_VX_C, Panel_FadeIn) == 0x0005F0, "Member 'UWBP_LoginPanel_VX_C::Panel_FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_LoginPanel_VX_C, Panel_FadeOut) == 0x0005F8, "Member 'UWBP_LoginPanel_VX_C::Panel_FadeOut' has a wrong offset!");
static_assert(offsetof(UWBP_LoginPanel_VX_C, Panel_Loop) == 0x000600, "Member 'UWBP_LoginPanel_VX_C::Panel_Loop' has a wrong offset!");

}

