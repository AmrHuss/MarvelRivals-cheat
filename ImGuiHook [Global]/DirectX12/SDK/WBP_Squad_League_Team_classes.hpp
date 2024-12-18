#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Squad_League_Team

#include "Basic.hpp"

#include "PyWidget_Squad_MatchPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Squad_League_Team.WBP_Squad_League_Team_C
// 0x0050 (0x0648 - 0x05F8)
class UWBP_Squad_League_Team_C final : public UPyWidget_Squad_League_Team
{
public:
	class UMarvelButton*                          Btn_Recruit;                                       // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_bg;                                            // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Progerss;                                      // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_TeamIcon;                                      // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_TeamIcon_C*                 TeamIcon;                                          // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_RoundEnd;                                     // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_TeamName;                                     // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Time;                                         // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_PromptTips1_C*              WBP_RecruitTips;                                   // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Team_ClanName_Abbreviation_C*      WBP_Team_ClanName_Abbreviation;                    // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Squad_League_Team_C">();
	}
	static class UWBP_Squad_League_Team_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Squad_League_Team_C>();
	}
};
static_assert(alignof(UWBP_Squad_League_Team_C) == 0x000008, "Wrong alignment on UWBP_Squad_League_Team_C");
static_assert(sizeof(UWBP_Squad_League_Team_C) == 0x000648, "Wrong size on UWBP_Squad_League_Team_C");
static_assert(offsetof(UWBP_Squad_League_Team_C, Btn_Recruit) == 0x0005F8, "Member 'UWBP_Squad_League_Team_C::Btn_Recruit' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_League_Team_C, Img_bg) == 0x000600, "Member 'UWBP_Squad_League_Team_C::Img_bg' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_League_Team_C, Img_Progerss) == 0x000608, "Member 'UWBP_Squad_League_Team_C::Img_Progerss' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_League_Team_C, Img_TeamIcon) == 0x000610, "Member 'UWBP_Squad_League_Team_C::Img_TeamIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_League_Team_C, TeamIcon) == 0x000618, "Member 'UWBP_Squad_League_Team_C::TeamIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_League_Team_C, Text_RoundEnd) == 0x000620, "Member 'UWBP_Squad_League_Team_C::Text_RoundEnd' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_League_Team_C, Text_TeamName) == 0x000628, "Member 'UWBP_Squad_League_Team_C::Text_TeamName' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_League_Team_C, Text_Time) == 0x000630, "Member 'UWBP_Squad_League_Team_C::Text_Time' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_League_Team_C, WBP_RecruitTips) == 0x000638, "Member 'UWBP_Squad_League_Team_C::WBP_RecruitTips' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_League_Team_C, WBP_Team_ClanName_Abbreviation) == 0x000640, "Member 'UWBP_Squad_League_Team_C::WBP_Team_ClanName_Abbreviation' has a wrong offset!");

}

