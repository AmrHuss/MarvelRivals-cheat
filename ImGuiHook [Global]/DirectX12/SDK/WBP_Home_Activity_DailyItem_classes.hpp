#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Home_Activity_DailyItem

#include "Basic.hpp"

#include "PyWidget_HomeEntrance_Activity_Item_Task_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Home_Activity_DailyItem.WBP_Home_Activity_DailyItem_C
// 0x0050 (0x0638 - 0x05E8)
class UWBP_Home_Activity_DailyItem_C final : public UPyWidget_HomeEntrance_Activity_Item_Widget_Task
{
public:
	class UMarvelButton*                          Btn_Item;                                          // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_TaskItems;                                    // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_bg;                                            // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Cutline_0;                                     // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Cutline_1;                                     // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Item_Hover;                                    // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Activity_Item;                             // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Home_Activity_TaskItem_C*          TaskItem_0;                                        // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Home_Activity_TaskItem_C*          TaskItem_1;                                        // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Home_Activity_TaskItem_C*          TaskItem_2;                                        // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Home_Activity_DailyItem_C">();
	}
	static class UWBP_Home_Activity_DailyItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Home_Activity_DailyItem_C>();
	}
};
static_assert(alignof(UWBP_Home_Activity_DailyItem_C) == 0x000008, "Wrong alignment on UWBP_Home_Activity_DailyItem_C");
static_assert(sizeof(UWBP_Home_Activity_DailyItem_C) == 0x000638, "Wrong size on UWBP_Home_Activity_DailyItem_C");
static_assert(offsetof(UWBP_Home_Activity_DailyItem_C, Btn_Item) == 0x0005E8, "Member 'UWBP_Home_Activity_DailyItem_C::Btn_Item' has a wrong offset!");
static_assert(offsetof(UWBP_Home_Activity_DailyItem_C, HBox_TaskItems) == 0x0005F0, "Member 'UWBP_Home_Activity_DailyItem_C::HBox_TaskItems' has a wrong offset!");
static_assert(offsetof(UWBP_Home_Activity_DailyItem_C, Img_bg) == 0x0005F8, "Member 'UWBP_Home_Activity_DailyItem_C::Img_bg' has a wrong offset!");
static_assert(offsetof(UWBP_Home_Activity_DailyItem_C, Img_Cutline_0) == 0x000600, "Member 'UWBP_Home_Activity_DailyItem_C::Img_Cutline_0' has a wrong offset!");
static_assert(offsetof(UWBP_Home_Activity_DailyItem_C, Img_Cutline_1) == 0x000608, "Member 'UWBP_Home_Activity_DailyItem_C::Img_Cutline_1' has a wrong offset!");
static_assert(offsetof(UWBP_Home_Activity_DailyItem_C, Img_Item_Hover) == 0x000610, "Member 'UWBP_Home_Activity_DailyItem_C::Img_Item_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Home_Activity_DailyItem_C, Overlay_Activity_Item) == 0x000618, "Member 'UWBP_Home_Activity_DailyItem_C::Overlay_Activity_Item' has a wrong offset!");
static_assert(offsetof(UWBP_Home_Activity_DailyItem_C, TaskItem_0) == 0x000620, "Member 'UWBP_Home_Activity_DailyItem_C::TaskItem_0' has a wrong offset!");
static_assert(offsetof(UWBP_Home_Activity_DailyItem_C, TaskItem_1) == 0x000628, "Member 'UWBP_Home_Activity_DailyItem_C::TaskItem_1' has a wrong offset!");
static_assert(offsetof(UWBP_Home_Activity_DailyItem_C, TaskItem_2) == 0x000630, "Member 'UWBP_Home_Activity_DailyItem_C::TaskItem_2' has a wrong offset!");

}
