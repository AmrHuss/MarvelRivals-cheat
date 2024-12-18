#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_KnockoutStage

#include "Basic.hpp"

#include "PyWidget_League_Knockout_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_KnockoutStage.WBP_League_KnockoutStage_C
// 0x0180 (0x0768 - 0x05E8)
class UWBP_League_KnockoutStage_C final : public UPyWidget_League_Knockout
{
public:
	class UWBP_Common_Btn_Lv2_B_C*                Btn_Check_Schedule;                                // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv1_Y_C*                Btn_Join_Room;                                     // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv2_B_C*                Btn_WatchMyTeamFight;                              // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_NextGame;                                     // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_League_Time_Icon;                              // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Prepare_Time_Icon;                             // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Prompt_BlueTips;                               // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Prompt_RedTips;                                // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Vs;                                            // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Over_JoinRoom;                                     // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_BlueTeamInfo;                              // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_DirectPromotion;                           // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_GameRule;                                  // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_GamesInfo;                                 // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_League_Knockout;                           // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_League_Time;                               // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_LeagueTime;                                // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_NextElimination;                           // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Prepare_Time;                              // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_RedTeamInfo;                               // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Rule;                                      // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Team_Empty;                                // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Walkover;                                  // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelRichTextBlock*                   RichText_Rule;                                     // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Final;                                        // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_GameRule;                                     // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_GroupStage;                                   // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_League_Name;                                  // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_League_Time;                                  // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_LeagueTime;                                   // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_NextGame_Ranking01;                           // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_NextGame_Ranking02;                           // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_NextGame_RankingTo;                           // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Prepare_Time;                                 // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Team_Empty;                                   // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Walkover;                                     // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Walkover_Prompt;                              // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_ClanInfo_Team01;                              // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_ClanInfo_Team02;                              // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_LeagueInfo_List;                              // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Team_ClanName_Abbreviation_C*      WBP_ClanName_Abbreviation_Team01;                  // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Team_ClanName_Abbreviation_C*      WBP_ClanName_Abbreviation_Team02;                  // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Team_ClanName_FullName_C*          WBP_ClanName_FullName_Team01;                      // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Team_ClanName_FullName_C*          WBP_ClanName_FullName_Team02;                      // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_TeamIcon_C*                 WBP_League_BlueTeamIcon;                           // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_PromptTips_C*               WBP_League_PromptTips;                             // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_TeamIcon_C*                 WBP_League_RedTeamIcon;                            // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Empty_Light_C*              WBP_Team_Empty;                                    // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_KnockoutStage_C">();
	}
	static class UWBP_League_KnockoutStage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_KnockoutStage_C>();
	}
};
static_assert(alignof(UWBP_League_KnockoutStage_C) == 0x000008, "Wrong alignment on UWBP_League_KnockoutStage_C");
static_assert(sizeof(UWBP_League_KnockoutStage_C) == 0x000768, "Wrong size on UWBP_League_KnockoutStage_C");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Btn_Check_Schedule) == 0x0005E8, "Member 'UWBP_League_KnockoutStage_C::Btn_Check_Schedule' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Btn_Join_Room) == 0x0005F0, "Member 'UWBP_League_KnockoutStage_C::Btn_Join_Room' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Btn_WatchMyTeamFight) == 0x0005F8, "Member 'UWBP_League_KnockoutStage_C::Btn_WatchMyTeamFight' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, HBox_NextGame) == 0x000600, "Member 'UWBP_League_KnockoutStage_C::HBox_NextGame' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Img_League_Time_Icon) == 0x000608, "Member 'UWBP_League_KnockoutStage_C::Img_League_Time_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Img_Prepare_Time_Icon) == 0x000610, "Member 'UWBP_League_KnockoutStage_C::Img_Prepare_Time_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Img_Prompt_BlueTips) == 0x000618, "Member 'UWBP_League_KnockoutStage_C::Img_Prompt_BlueTips' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Img_Prompt_RedTips) == 0x000620, "Member 'UWBP_League_KnockoutStage_C::Img_Prompt_RedTips' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Img_Vs) == 0x000628, "Member 'UWBP_League_KnockoutStage_C::Img_Vs' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Over_JoinRoom) == 0x000630, "Member 'UWBP_League_KnockoutStage_C::Over_JoinRoom' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Overlay_BlueTeamInfo) == 0x000638, "Member 'UWBP_League_KnockoutStage_C::Overlay_BlueTeamInfo' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Overlay_DirectPromotion) == 0x000640, "Member 'UWBP_League_KnockoutStage_C::Overlay_DirectPromotion' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Overlay_GameRule) == 0x000648, "Member 'UWBP_League_KnockoutStage_C::Overlay_GameRule' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Overlay_GamesInfo) == 0x000650, "Member 'UWBP_League_KnockoutStage_C::Overlay_GamesInfo' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Overlay_League_Knockout) == 0x000658, "Member 'UWBP_League_KnockoutStage_C::Overlay_League_Knockout' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Overlay_League_Time) == 0x000660, "Member 'UWBP_League_KnockoutStage_C::Overlay_League_Time' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Overlay_LeagueTime) == 0x000668, "Member 'UWBP_League_KnockoutStage_C::Overlay_LeagueTime' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Overlay_NextElimination) == 0x000670, "Member 'UWBP_League_KnockoutStage_C::Overlay_NextElimination' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Overlay_Prepare_Time) == 0x000678, "Member 'UWBP_League_KnockoutStage_C::Overlay_Prepare_Time' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Overlay_RedTeamInfo) == 0x000680, "Member 'UWBP_League_KnockoutStage_C::Overlay_RedTeamInfo' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Overlay_Rule) == 0x000688, "Member 'UWBP_League_KnockoutStage_C::Overlay_Rule' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Overlay_Team_Empty) == 0x000690, "Member 'UWBP_League_KnockoutStage_C::Overlay_Team_Empty' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Overlay_Walkover) == 0x000698, "Member 'UWBP_League_KnockoutStage_C::Overlay_Walkover' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, RichText_Rule) == 0x0006A0, "Member 'UWBP_League_KnockoutStage_C::RichText_Rule' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Text_Final) == 0x0006A8, "Member 'UWBP_League_KnockoutStage_C::Text_Final' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Text_GameRule) == 0x0006B0, "Member 'UWBP_League_KnockoutStage_C::Text_GameRule' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Text_GroupStage) == 0x0006B8, "Member 'UWBP_League_KnockoutStage_C::Text_GroupStage' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Text_League_Name) == 0x0006C0, "Member 'UWBP_League_KnockoutStage_C::Text_League_Name' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Text_League_Time) == 0x0006C8, "Member 'UWBP_League_KnockoutStage_C::Text_League_Time' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Text_LeagueTime) == 0x0006D0, "Member 'UWBP_League_KnockoutStage_C::Text_LeagueTime' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Text_NextGame_Ranking01) == 0x0006D8, "Member 'UWBP_League_KnockoutStage_C::Text_NextGame_Ranking01' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Text_NextGame_Ranking02) == 0x0006E0, "Member 'UWBP_League_KnockoutStage_C::Text_NextGame_Ranking02' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Text_NextGame_RankingTo) == 0x0006E8, "Member 'UWBP_League_KnockoutStage_C::Text_NextGame_RankingTo' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Text_Prepare_Time) == 0x0006F0, "Member 'UWBP_League_KnockoutStage_C::Text_Prepare_Time' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Text_Team_Empty) == 0x0006F8, "Member 'UWBP_League_KnockoutStage_C::Text_Team_Empty' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Text_Walkover) == 0x000700, "Member 'UWBP_League_KnockoutStage_C::Text_Walkover' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, Text_Walkover_Prompt) == 0x000708, "Member 'UWBP_League_KnockoutStage_C::Text_Walkover_Prompt' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, VBox_ClanInfo_Team01) == 0x000710, "Member 'UWBP_League_KnockoutStage_C::VBox_ClanInfo_Team01' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, VBox_ClanInfo_Team02) == 0x000718, "Member 'UWBP_League_KnockoutStage_C::VBox_ClanInfo_Team02' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, VBox_LeagueInfo_List) == 0x000720, "Member 'UWBP_League_KnockoutStage_C::VBox_LeagueInfo_List' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, WBP_ClanName_Abbreviation_Team01) == 0x000728, "Member 'UWBP_League_KnockoutStage_C::WBP_ClanName_Abbreviation_Team01' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, WBP_ClanName_Abbreviation_Team02) == 0x000730, "Member 'UWBP_League_KnockoutStage_C::WBP_ClanName_Abbreviation_Team02' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, WBP_ClanName_FullName_Team01) == 0x000738, "Member 'UWBP_League_KnockoutStage_C::WBP_ClanName_FullName_Team01' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, WBP_ClanName_FullName_Team02) == 0x000740, "Member 'UWBP_League_KnockoutStage_C::WBP_ClanName_FullName_Team02' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, WBP_League_BlueTeamIcon) == 0x000748, "Member 'UWBP_League_KnockoutStage_C::WBP_League_BlueTeamIcon' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, WBP_League_PromptTips) == 0x000750, "Member 'UWBP_League_KnockoutStage_C::WBP_League_PromptTips' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, WBP_League_RedTeamIcon) == 0x000758, "Member 'UWBP_League_KnockoutStage_C::WBP_League_RedTeamIcon' has a wrong offset!");
static_assert(offsetof(UWBP_League_KnockoutStage_C, WBP_Team_Empty) == 0x000760, "Member 'UWBP_League_KnockoutStage_C::WBP_Team_Empty' has a wrong offset!");

}

