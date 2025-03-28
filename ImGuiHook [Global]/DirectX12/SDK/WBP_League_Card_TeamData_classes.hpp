#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_Card_TeamData

#include "Basic.hpp"

#include "PyWidget_LeagueMainItems_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_Card_TeamData.WBP_League_Card_TeamData_C
// 0x0020 (0x0620 - 0x0600)
class UWBP_League_Card_TeamData_C final : public UPyWidget_LeagueMain_PreliminaryCard
{
public:
	class UMarvelOverlay*                         Overlay_MyTeamData;                                // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_MatchFinished;                                // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Points;                                       // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_TeamHead_C*                 WBP_TeamHead;                                      // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_Card_TeamData_C">();
	}
	static class UWBP_League_Card_TeamData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_Card_TeamData_C>();
	}
};
static_assert(alignof(UWBP_League_Card_TeamData_C) == 0x000008, "Wrong alignment on UWBP_League_Card_TeamData_C");
static_assert(sizeof(UWBP_League_Card_TeamData_C) == 0x000620, "Wrong size on UWBP_League_Card_TeamData_C");
static_assert(offsetof(UWBP_League_Card_TeamData_C, Overlay_MyTeamData) == 0x000600, "Member 'UWBP_League_Card_TeamData_C::Overlay_MyTeamData' has a wrong offset!");
static_assert(offsetof(UWBP_League_Card_TeamData_C, Text_MatchFinished) == 0x000608, "Member 'UWBP_League_Card_TeamData_C::Text_MatchFinished' has a wrong offset!");
static_assert(offsetof(UWBP_League_Card_TeamData_C, Text_Points) == 0x000610, "Member 'UWBP_League_Card_TeamData_C::Text_Points' has a wrong offset!");
static_assert(offsetof(UWBP_League_Card_TeamData_C, WBP_TeamHead) == 0x000618, "Member 'UWBP_League_Card_TeamData_C::WBP_TeamHead' has a wrong offset!");

}

