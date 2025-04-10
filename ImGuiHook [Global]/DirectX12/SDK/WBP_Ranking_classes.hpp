#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Ranking

#include "Basic.hpp"

#include "PyWidget_Ranking_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Ranking.WBP_Ranking_C
// 0x0008 (0x05F0 - 0x05E8)
class UWBP_Ranking_C final : public UPyWidget_Ranking
{
public:
	class UWBP_Ranking_RankRanking_C*             RankRanking;                                       // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ranking_C">();
	}
	static class UWBP_Ranking_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ranking_C>();
	}
};
static_assert(alignof(UWBP_Ranking_C) == 0x000008, "Wrong alignment on UWBP_Ranking_C");
static_assert(sizeof(UWBP_Ranking_C) == 0x0005F0, "Wrong size on UWBP_Ranking_C");
static_assert(offsetof(UWBP_Ranking_C, RankRanking) == 0x0005E8, "Member 'UWBP_Ranking_C::RankRanking' has a wrong offset!");

}

