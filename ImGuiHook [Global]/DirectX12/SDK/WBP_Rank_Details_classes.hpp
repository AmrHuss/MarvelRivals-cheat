#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Rank_Details

#include "Basic.hpp"

#include "PyWidget_RankDetailsPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Rank_Details.WBP_Rank_Details_C
// 0x0030 (0x0640 - 0x0610)
class UWBP_Rank_Details_C final : public UPyWidget_RankDetails
{
public:
	class UWBP_Rank_MySeason_V2_C*                MySeasonPanel;                                     // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_NavigationBar_LV2_C*        NavBar;                                            // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Rank_RuleContent_V2_C*             RuleContentPanel;                                  // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_BgAngle_V2_C*               WBP_Common_BgAngle_V2;                             // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Chat_C*                     WBP_Common_Chat;                                   // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Bg_C*                       WBP_UniversalCrystal;                              // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Rank_Details_C">();
	}
	static class UWBP_Rank_Details_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Rank_Details_C>();
	}
};
static_assert(alignof(UWBP_Rank_Details_C) == 0x000008, "Wrong alignment on UWBP_Rank_Details_C");
static_assert(sizeof(UWBP_Rank_Details_C) == 0x000640, "Wrong size on UWBP_Rank_Details_C");
static_assert(offsetof(UWBP_Rank_Details_C, MySeasonPanel) == 0x000610, "Member 'UWBP_Rank_Details_C::MySeasonPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_Details_C, NavBar) == 0x000618, "Member 'UWBP_Rank_Details_C::NavBar' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_Details_C, RuleContentPanel) == 0x000620, "Member 'UWBP_Rank_Details_C::RuleContentPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_Details_C, WBP_Common_BgAngle_V2) == 0x000628, "Member 'UWBP_Rank_Details_C::WBP_Common_BgAngle_V2' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_Details_C, WBP_Common_Chat) == 0x000630, "Member 'UWBP_Rank_Details_C::WBP_Common_Chat' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_Details_C, WBP_UniversalCrystal) == 0x000638, "Member 'UWBP_Rank_Details_C::WBP_UniversalCrystal' has a wrong offset!");

}

