#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SeasonAndModeFilter

#include "Basic.hpp"

#include "PyWidget_CareerSeasonAndModeFilter_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SeasonAndModeFilter.WBP_SeasonAndModeFilter_C
// 0x0028 (0x0620 - 0x05F8)
class UWBP_SeasonAndModeFilter_C final : public UPyWidget_CareerSeasonAndModeFilter
{
public:
	class UWidgetAnimation*                       Anim_FadeIn_Right;                                 // 0x05F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_FadeIn_Left;                                  // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_DropDownList_Light_C*              DropDownList_Mode;                                 // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DropDownList_Light_C*              DropDownList_Season;                               // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_DrawMenu;                                     // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SeasonAndModeFilter_C">();
	}
	static class UWBP_SeasonAndModeFilter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SeasonAndModeFilter_C>();
	}
};
static_assert(alignof(UWBP_SeasonAndModeFilter_C) == 0x000008, "Wrong alignment on UWBP_SeasonAndModeFilter_C");
static_assert(sizeof(UWBP_SeasonAndModeFilter_C) == 0x000620, "Wrong size on UWBP_SeasonAndModeFilter_C");
static_assert(offsetof(UWBP_SeasonAndModeFilter_C, Anim_FadeIn_Right) == 0x0005F8, "Member 'UWBP_SeasonAndModeFilter_C::Anim_FadeIn_Right' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonAndModeFilter_C, Anim_FadeIn_Left) == 0x000600, "Member 'UWBP_SeasonAndModeFilter_C::Anim_FadeIn_Left' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonAndModeFilter_C, DropDownList_Mode) == 0x000608, "Member 'UWBP_SeasonAndModeFilter_C::DropDownList_Mode' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonAndModeFilter_C, DropDownList_Season) == 0x000610, "Member 'UWBP_SeasonAndModeFilter_C::DropDownList_Season' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonAndModeFilter_C, HBox_DrawMenu) == 0x000618, "Member 'UWBP_SeasonAndModeFilter_C::HBox_DrawMenu' has a wrong offset!");

}
