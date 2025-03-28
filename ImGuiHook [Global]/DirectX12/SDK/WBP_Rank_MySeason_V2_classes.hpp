#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Rank_MySeason_V2

#include "Basic.hpp"

#include "PyWidget_Rank_MySeason_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Rank_MySeason_V2.WBP_Rank_MySeason_V2_C
// 0x0030 (0x0730 - 0x0700)
class UWBP_Rank_MySeason_V2_C final : public UPyWidget_Rank_MySeason
{
public:
	class UMarvelHorizontalBox*                   HBox_ResidualTime;                                 // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_RewardListBg;                                  // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_TitleBg;                                       // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelListView*                        ListView_RewardList;                               // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_RemainTime;                                   // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Rank_RankInfo_C*                   WBP_RankInfo;                                      // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Rank_MySeason_V2_C">();
	}
	static class UWBP_Rank_MySeason_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Rank_MySeason_V2_C>();
	}
};
static_assert(alignof(UWBP_Rank_MySeason_V2_C) == 0x000008, "Wrong alignment on UWBP_Rank_MySeason_V2_C");
static_assert(sizeof(UWBP_Rank_MySeason_V2_C) == 0x000730, "Wrong size on UWBP_Rank_MySeason_V2_C");
static_assert(offsetof(UWBP_Rank_MySeason_V2_C, HBox_ResidualTime) == 0x000700, "Member 'UWBP_Rank_MySeason_V2_C::HBox_ResidualTime' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_MySeason_V2_C, Img_RewardListBg) == 0x000708, "Member 'UWBP_Rank_MySeason_V2_C::Img_RewardListBg' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_MySeason_V2_C, Img_TitleBg) == 0x000710, "Member 'UWBP_Rank_MySeason_V2_C::Img_TitleBg' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_MySeason_V2_C, ListView_RewardList) == 0x000718, "Member 'UWBP_Rank_MySeason_V2_C::ListView_RewardList' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_MySeason_V2_C, Text_RemainTime) == 0x000720, "Member 'UWBP_Rank_MySeason_V2_C::Text_RemainTime' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_MySeason_V2_C, WBP_RankInfo) == 0x000728, "Member 'UWBP_Rank_MySeason_V2_C::WBP_RankInfo' has a wrong offset!");

}

