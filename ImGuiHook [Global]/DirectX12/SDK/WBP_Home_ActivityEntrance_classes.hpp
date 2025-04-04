#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Home_ActivityEntrance

#include "Basic.hpp"

#include "PyWidget_HomeEntrance_Main_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Home_ActivityEntrance.WBP_Home_ActivityEntrance_C
// 0x0048 (0x0760 - 0x0718)
class UWBP_Home_ActivityEntrance_C final : public UPyWidget_HomeEntrance_Main
{
public:
	class UMarvelButton*                          Btn_FoldActivity;                                  // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_ShowActivity;                                  // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_KeyWidget_C*                KeyWidgetBP_PS;                                    // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Activity;                                  // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_ActivityShow_BtnTips;                      // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Button;                                    // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_Reddot;                                       // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_Activity;                                     // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_Home_Activity;                                // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Home_ActivityEntrance_C">();
	}
	static class UWBP_Home_ActivityEntrance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Home_ActivityEntrance_C>();
	}
};
static_assert(alignof(UWBP_Home_ActivityEntrance_C) == 0x000008, "Wrong alignment on UWBP_Home_ActivityEntrance_C");
static_assert(sizeof(UWBP_Home_ActivityEntrance_C) == 0x000760, "Wrong size on UWBP_Home_ActivityEntrance_C");
static_assert(offsetof(UWBP_Home_ActivityEntrance_C, Btn_FoldActivity) == 0x000718, "Member 'UWBP_Home_ActivityEntrance_C::Btn_FoldActivity' has a wrong offset!");
static_assert(offsetof(UWBP_Home_ActivityEntrance_C, Btn_ShowActivity) == 0x000720, "Member 'UWBP_Home_ActivityEntrance_C::Btn_ShowActivity' has a wrong offset!");
static_assert(offsetof(UWBP_Home_ActivityEntrance_C, KeyWidgetBP_PS) == 0x000728, "Member 'UWBP_Home_ActivityEntrance_C::KeyWidgetBP_PS' has a wrong offset!");
static_assert(offsetof(UWBP_Home_ActivityEntrance_C, Overlay_Activity) == 0x000730, "Member 'UWBP_Home_ActivityEntrance_C::Overlay_Activity' has a wrong offset!");
static_assert(offsetof(UWBP_Home_ActivityEntrance_C, Overlay_ActivityShow_BtnTips) == 0x000738, "Member 'UWBP_Home_ActivityEntrance_C::Overlay_ActivityShow_BtnTips' has a wrong offset!");
static_assert(offsetof(UWBP_Home_ActivityEntrance_C, Overlay_Button) == 0x000740, "Member 'UWBP_Home_ActivityEntrance_C::Overlay_Button' has a wrong offset!");
static_assert(offsetof(UWBP_Home_ActivityEntrance_C, Slot_Reddot) == 0x000748, "Member 'UWBP_Home_ActivityEntrance_C::Slot_Reddot' has a wrong offset!");
static_assert(offsetof(UWBP_Home_ActivityEntrance_C, VBox_Activity) == 0x000750, "Member 'UWBP_Home_ActivityEntrance_C::VBox_Activity' has a wrong offset!");
static_assert(offsetof(UWBP_Home_ActivityEntrance_C, VBox_Home_Activity) == 0x000758, "Member 'UWBP_Home_ActivityEntrance_C::VBox_Home_Activity' has a wrong offset!");

}

