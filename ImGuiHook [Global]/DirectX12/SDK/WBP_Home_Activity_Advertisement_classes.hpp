#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Home_Activity_Advertisement

#include "Basic.hpp"

#include "PyWidget_HomeEntrance_Advertisement_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Home_Activity_Advertisement.WBP_Home_Activity_Advertisement_C
// 0x0038 (0x0628 - 0x05F0)
class UWBP_Home_Activity_Advertisement_C final : public UPyWidget_HomeEntrance_Advertisement_Image_Widget
{
public:
	class UWidgetAnimation*                       Anim_Out;                                          // 0x05F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Hover;                                        // 0x05F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Switch;                                       // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_Item;                                          // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Activity_Bg1;                                  // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Activity_Bg2;                                  // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Box;                                        // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Home_Activity_Advertisement_C">();
	}
	static class UWBP_Home_Activity_Advertisement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Home_Activity_Advertisement_C>();
	}
};
static_assert(alignof(UWBP_Home_Activity_Advertisement_C) == 0x000008, "Wrong alignment on UWBP_Home_Activity_Advertisement_C");
static_assert(sizeof(UWBP_Home_Activity_Advertisement_C) == 0x000628, "Wrong size on UWBP_Home_Activity_Advertisement_C");
static_assert(offsetof(UWBP_Home_Activity_Advertisement_C, Anim_Out) == 0x0005F0, "Member 'UWBP_Home_Activity_Advertisement_C::Anim_Out' has a wrong offset!");
static_assert(offsetof(UWBP_Home_Activity_Advertisement_C, Anim_Hover) == 0x0005F8, "Member 'UWBP_Home_Activity_Advertisement_C::Anim_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Home_Activity_Advertisement_C, Anim_Switch) == 0x000600, "Member 'UWBP_Home_Activity_Advertisement_C::Anim_Switch' has a wrong offset!");
static_assert(offsetof(UWBP_Home_Activity_Advertisement_C, Btn_Item) == 0x000608, "Member 'UWBP_Home_Activity_Advertisement_C::Btn_Item' has a wrong offset!");
static_assert(offsetof(UWBP_Home_Activity_Advertisement_C, Img_Activity_Bg1) == 0x000610, "Member 'UWBP_Home_Activity_Advertisement_C::Img_Activity_Bg1' has a wrong offset!");
static_assert(offsetof(UWBP_Home_Activity_Advertisement_C, Img_Activity_Bg2) == 0x000618, "Member 'UWBP_Home_Activity_Advertisement_C::Img_Activity_Bg2' has a wrong offset!");
static_assert(offsetof(UWBP_Home_Activity_Advertisement_C, Img_Bg_Box) == 0x000620, "Member 'UWBP_Home_Activity_Advertisement_C::Img_Bg_Box' has a wrong offset!");

}
