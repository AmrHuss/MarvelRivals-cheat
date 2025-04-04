#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_WatchGame

#include "Basic.hpp"

#include "PyWidget_LeagueDetails_Watch_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_WatchGame.WBP_League_WatchGame_C
// 0x0028 (0x0620 - 0x05F8)
class UWBP_League_WatchGame_C final : public UPyWidget_LeagueDetails_WatchPanel
{
public:
	class UWBP_Common_Btn_Lv1_Y_C*                Btn_Bcak;                                          // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv2_B_C*                Btn_Change;                                        // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv2_B_C*                Btn_Schedule;                                      // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Empty;                                     // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_ItemList;                                  // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_WatchGame_C">();
	}
	static class UWBP_League_WatchGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_WatchGame_C>();
	}
};
static_assert(alignof(UWBP_League_WatchGame_C) == 0x000008, "Wrong alignment on UWBP_League_WatchGame_C");
static_assert(sizeof(UWBP_League_WatchGame_C) == 0x000620, "Wrong size on UWBP_League_WatchGame_C");
static_assert(offsetof(UWBP_League_WatchGame_C, Btn_Bcak) == 0x0005F8, "Member 'UWBP_League_WatchGame_C::Btn_Bcak' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchGame_C, Btn_Change) == 0x000600, "Member 'UWBP_League_WatchGame_C::Btn_Change' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchGame_C, Btn_Schedule) == 0x000608, "Member 'UWBP_League_WatchGame_C::Btn_Schedule' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchGame_C, Overlay_Empty) == 0x000610, "Member 'UWBP_League_WatchGame_C::Overlay_Empty' has a wrong offset!");
static_assert(offsetof(UWBP_League_WatchGame_C, WrapBox_ItemList) == 0x000618, "Member 'UWBP_League_WatchGame_C::WrapBox_ItemList' has a wrong offset!");

}

