#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_WatchView_KnockoutItem_V2

#include "Basic.hpp"

#include "PyWidget_League_KnockoutStage_WatchView_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_WatchView_KnockoutItem_V2.WBP_League_WatchView_KnockoutItem_V2_C
// 0x00A0 (0x0648 - 0x05A8)
class UWBP_League_WatchView_KnockoutItem_V2_C final : public UPyWidget_League_KnockoutStage_WatchView_Item
{
public:
	class UMarvelButton*                          Btn_GameData;                                      // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Ancillary_TeamColor_C*      Btn_Watch;                                         // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_Watch_Living;                                  // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_GameData_Hover;                                // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Map_Pic;                                       // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_BtnWatch;                                  // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_GameData;                                  // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Living;                                    // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_WatchView_Item;                            // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Draw;                                         // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_InProgress;                                   // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Lose;                                         // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Score;                                        // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Session;                                      // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Start_Time;                                   // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Time;                                         // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Win;                                          // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_Live_News_C*                WBP_League_Live_News;                              // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_Live_News_C*                WBP_League_Live_News_Watch;                        // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WSwitcher_Result;                                  // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_WatchView_KnockoutItem_V2_C">();
	}
	static class UWBP_League_WatchView_KnockoutItem_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_WatchView_KnockoutItem_V2_C>();
	}
};
static_assert(alignof(UWBP_League_WatchView_KnockoutItem_V2_C) == 0x000008, "Wrong alignment on UWBP_League_WatchView_KnockoutItem_V2_C");
static_assert(sizeof(UWBP_League_WatchView_KnockoutItem_V2_C) == 0x000648, "Wrong size on UWBP_League_WatchView_KnockoutItem_V2_C");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Btn_GameData) == 0x0005A8, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Btn_GameData' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Btn_Watch) == 0x0005B0, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Btn_Watch' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Btn_Watch_Living) == 0x0005B8, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Btn_Watch_Living' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Img_GameData_Hover) == 0x0005C0, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Img_GameData_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Img_Map_Pic) == 0x0005C8, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Img_Map_Pic' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Overlay_BtnWatch) == 0x0005D0, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Overlay_BtnWatch' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Overlay_GameData) == 0x0005D8, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Overlay_GameData' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Overlay_Living) == 0x0005E0, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Overlay_Living' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, SizeBox_WatchView_Item) == 0x0005E8, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::SizeBox_WatchView_Item' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Text_Draw) == 0x0005F0, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Text_Draw' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Text_InProgress) == 0x0005F8, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Text_InProgress' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Text_Lose) == 0x000600, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Text_Lose' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Text_Score) == 0x000608, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Text_Score' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Text_Session) == 0x000610, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Text_Session' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Text_Start_Time) == 0x000618, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Text_Start_Time' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Text_Time) == 0x000620, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Text_Time' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, Text_Win) == 0x000628, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::Text_Win' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, WBP_League_Live_News) == 0x000630, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::WBP_League_Live_News' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, WBP_League_Live_News_Watch) == 0x000638, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::WBP_League_Live_News_Watch' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchView_KnockoutItem_V2_C, WSwitcher_Result) == 0x000640, "Member 'UWBP_League_WatchView_KnockoutItem_V2_C::WSwitcher_Result' has a wrong offset!");

}

