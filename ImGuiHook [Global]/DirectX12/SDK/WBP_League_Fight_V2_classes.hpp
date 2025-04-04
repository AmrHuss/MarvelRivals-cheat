#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_Fight_V2

#include "Basic.hpp"

#include "PyWidget_League_Fight_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_Fight_V2.WBP_League_Fight_V2_C
// 0x01B0 (0x07E0 - 0x0630)
class UWBP_League_Fight_V2_C final : public UPyWidget_League_Fight
{
public:
	class UWidgetAnimation*                       Anim_FadeOut_Loading;                              // 0x0630(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_FadeOut_League;                               // 0x0638(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_FadeOut_Round;                                // 0x0640(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_FadeIn_Round;                                 // 0x0648(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_FadeIn_League;                                // 0x0650(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Thirdplace;                                   // 0x0658(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Runnerup;                                     // 0x0660(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Champion;                                     // 0x0668(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Eliminate;                                    // 0x0670(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Promotion;                                    // 0x0678(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Finally_Yellow;                               // 0x0680(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Finally_Blue;                                 // 0x0688(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Score_Yellow;                                 // 0x0690(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Score_Blue;                                   // 0x0698(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelCanvasPanel*                     Canva_BlueTeamInfo_Lighting_Vx;                    // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelCanvasPanel*                     Canva_RedTeamInfo_Lighting_Vx;                     // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_RoundTips_First;                              // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_RoundTips_Two;                                // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_BlueTeamInfo;                              // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Draw;                                      // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_RedTeamInfo;                               // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Round;                                     // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_LeftScore;                                 // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_RightScore;                                // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_BlueWin_Score;                                // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_BlueWin_Score_VX;                             // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Draw;                                         // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Instructions;                                 // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_RedWin_Score;                                 // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_RedWin_Score_VX;                              // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_RoundNum;                                     // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_ClanInfo_Blue;                                // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_ClanInfo_Red;                                 // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Team_ClanName_Abbreviation_C*      WBP_ClanName_Abbreviation_Blue;                    // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Team_ClanName_Abbreviation_C*      WBP_ClanName_Abbreviation_Red;                     // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Team_ClanName_FullName_C*          WBP_ClanName_FullName_Blue;                        // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Team_ClanName_FullName_C*          WBP_ClanName_FullName_Red;                         // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_TeamIcon_C*                 WBP_League_BlueTeamIcon;                           // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_TeamIcon_C*                 WBP_League_RedTeamIcon;                            // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RoundResult_Thumb_C*        WBP_League_RoundResult_Thumb;                      // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RoundResult_Thumb_C*        WBP_League_RoundResult_Thumb_1;                    // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RoundResult_Thumb_C*        WBP_League_RoundResult_Thumb_2;                    // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RoundResult_Thumb_C*        WBP_League_RoundResult_Thumb_3;                    // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RoundResult_Thumb_C*        WBP_League_RoundResult_Thumb_4;                    // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RoundResult_Thumb_C*        WBP_League_RoundResult_Thumb_5;                    // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RoundResult_Thumb_C*        WBP_League_RoundResult_Thumb_6;                    // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RoundResult_Thumb_C*        WBP_League_RoundResult_Thumb_7;                    // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RoundResult_Thumb_C*        WBP_League_RoundResult_Thumb_8;                    // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RoundResult_Thumb_C*        WBP_League_RoundResult_Thumb_9;                    // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RoundResult_Thumb_C*        WBP_League_RoundResult_Thumb_10;                   // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RoundResult_Thumb_C*        WBP_League_RoundResult_Thumb_11;                   // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RoundResult_Thumb_C*        WBP_League_RoundResult_Thumb_12;                   // 0x07C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RoundResult_Thumb_C*        WBP_League_RoundResult_Thumb_13;                   // 0x07D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RoundResult_Thumb_C*        WBP_League_RoundResult_Thumb_14;                   // 0x07D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_Fight_V2_C">();
	}
	static class UWBP_League_Fight_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_Fight_V2_C>();
	}
};
static_assert(alignof(UWBP_League_Fight_V2_C) == 0x000008, "Wrong alignment on UWBP_League_Fight_V2_C");
static_assert(sizeof(UWBP_League_Fight_V2_C) == 0x0007E0, "Wrong size on UWBP_League_Fight_V2_C");
static_assert(offsetof(UWBP_League_Fight_V2_C, Anim_FadeOut_Loading) == 0x000630, "Member 'UWBP_League_Fight_V2_C::Anim_FadeOut_Loading' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Anim_FadeOut_League) == 0x000638, "Member 'UWBP_League_Fight_V2_C::Anim_FadeOut_League' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Anim_FadeOut_Round) == 0x000640, "Member 'UWBP_League_Fight_V2_C::Anim_FadeOut_Round' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Anim_FadeIn_Round) == 0x000648, "Member 'UWBP_League_Fight_V2_C::Anim_FadeIn_Round' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Anim_FadeIn_League) == 0x000650, "Member 'UWBP_League_Fight_V2_C::Anim_FadeIn_League' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Anim_Thirdplace) == 0x000658, "Member 'UWBP_League_Fight_V2_C::Anim_Thirdplace' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Anim_Runnerup) == 0x000660, "Member 'UWBP_League_Fight_V2_C::Anim_Runnerup' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Anim_Champion) == 0x000668, "Member 'UWBP_League_Fight_V2_C::Anim_Champion' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Anim_Eliminate) == 0x000670, "Member 'UWBP_League_Fight_V2_C::Anim_Eliminate' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Anim_Promotion) == 0x000678, "Member 'UWBP_League_Fight_V2_C::Anim_Promotion' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Anim_Finally_Yellow) == 0x000680, "Member 'UWBP_League_Fight_V2_C::Anim_Finally_Yellow' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Anim_Finally_Blue) == 0x000688, "Member 'UWBP_League_Fight_V2_C::Anim_Finally_Blue' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Anim_Score_Yellow) == 0x000690, "Member 'UWBP_League_Fight_V2_C::Anim_Score_Yellow' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Anim_Score_Blue) == 0x000698, "Member 'UWBP_League_Fight_V2_C::Anim_Score_Blue' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Canva_BlueTeamInfo_Lighting_Vx) == 0x0006A0, "Member 'UWBP_League_Fight_V2_C::Canva_BlueTeamInfo_Lighting_Vx' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Canva_RedTeamInfo_Lighting_Vx) == 0x0006A8, "Member 'UWBP_League_Fight_V2_C::Canva_RedTeamInfo_Lighting_Vx' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, HBox_RoundTips_First) == 0x0006B0, "Member 'UWBP_League_Fight_V2_C::HBox_RoundTips_First' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, HBox_RoundTips_Two) == 0x0006B8, "Member 'UWBP_League_Fight_V2_C::HBox_RoundTips_Two' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Overlay_BlueTeamInfo) == 0x0006C0, "Member 'UWBP_League_Fight_V2_C::Overlay_BlueTeamInfo' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Overlay_Draw) == 0x0006C8, "Member 'UWBP_League_Fight_V2_C::Overlay_Draw' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Overlay_RedTeamInfo) == 0x0006D0, "Member 'UWBP_League_Fight_V2_C::Overlay_RedTeamInfo' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Overlay_Round) == 0x0006D8, "Member 'UWBP_League_Fight_V2_C::Overlay_Round' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, SizeBox_LeftScore) == 0x0006E0, "Member 'UWBP_League_Fight_V2_C::SizeBox_LeftScore' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, SizeBox_RightScore) == 0x0006E8, "Member 'UWBP_League_Fight_V2_C::SizeBox_RightScore' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Text_BlueWin_Score) == 0x0006F0, "Member 'UWBP_League_Fight_V2_C::Text_BlueWin_Score' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Text_BlueWin_Score_VX) == 0x0006F8, "Member 'UWBP_League_Fight_V2_C::Text_BlueWin_Score_VX' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Text_Draw) == 0x000700, "Member 'UWBP_League_Fight_V2_C::Text_Draw' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Text_Instructions) == 0x000708, "Member 'UWBP_League_Fight_V2_C::Text_Instructions' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Text_RedWin_Score) == 0x000710, "Member 'UWBP_League_Fight_V2_C::Text_RedWin_Score' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Text_RedWin_Score_VX) == 0x000718, "Member 'UWBP_League_Fight_V2_C::Text_RedWin_Score_VX' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, Text_RoundNum) == 0x000720, "Member 'UWBP_League_Fight_V2_C::Text_RoundNum' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, VBox_ClanInfo_Blue) == 0x000728, "Member 'UWBP_League_Fight_V2_C::VBox_ClanInfo_Blue' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, VBox_ClanInfo_Red) == 0x000730, "Member 'UWBP_League_Fight_V2_C::VBox_ClanInfo_Red' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_ClanName_Abbreviation_Blue) == 0x000738, "Member 'UWBP_League_Fight_V2_C::WBP_ClanName_Abbreviation_Blue' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_ClanName_Abbreviation_Red) == 0x000740, "Member 'UWBP_League_Fight_V2_C::WBP_ClanName_Abbreviation_Red' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_ClanName_FullName_Blue) == 0x000748, "Member 'UWBP_League_Fight_V2_C::WBP_ClanName_FullName_Blue' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_ClanName_FullName_Red) == 0x000750, "Member 'UWBP_League_Fight_V2_C::WBP_ClanName_FullName_Red' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_BlueTeamIcon) == 0x000758, "Member 'UWBP_League_Fight_V2_C::WBP_League_BlueTeamIcon' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RedTeamIcon) == 0x000760, "Member 'UWBP_League_Fight_V2_C::WBP_League_RedTeamIcon' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RoundResult_Thumb) == 0x000768, "Member 'UWBP_League_Fight_V2_C::WBP_League_RoundResult_Thumb' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RoundResult_Thumb_1) == 0x000770, "Member 'UWBP_League_Fight_V2_C::WBP_League_RoundResult_Thumb_1' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RoundResult_Thumb_2) == 0x000778, "Member 'UWBP_League_Fight_V2_C::WBP_League_RoundResult_Thumb_2' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RoundResult_Thumb_3) == 0x000780, "Member 'UWBP_League_Fight_V2_C::WBP_League_RoundResult_Thumb_3' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RoundResult_Thumb_4) == 0x000788, "Member 'UWBP_League_Fight_V2_C::WBP_League_RoundResult_Thumb_4' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RoundResult_Thumb_5) == 0x000790, "Member 'UWBP_League_Fight_V2_C::WBP_League_RoundResult_Thumb_5' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RoundResult_Thumb_6) == 0x000798, "Member 'UWBP_League_Fight_V2_C::WBP_League_RoundResult_Thumb_6' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RoundResult_Thumb_7) == 0x0007A0, "Member 'UWBP_League_Fight_V2_C::WBP_League_RoundResult_Thumb_7' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RoundResult_Thumb_8) == 0x0007A8, "Member 'UWBP_League_Fight_V2_C::WBP_League_RoundResult_Thumb_8' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RoundResult_Thumb_9) == 0x0007B0, "Member 'UWBP_League_Fight_V2_C::WBP_League_RoundResult_Thumb_9' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RoundResult_Thumb_10) == 0x0007B8, "Member 'UWBP_League_Fight_V2_C::WBP_League_RoundResult_Thumb_10' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RoundResult_Thumb_11) == 0x0007C0, "Member 'UWBP_League_Fight_V2_C::WBP_League_RoundResult_Thumb_11' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RoundResult_Thumb_12) == 0x0007C8, "Member 'UWBP_League_Fight_V2_C::WBP_League_RoundResult_Thumb_12' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RoundResult_Thumb_13) == 0x0007D0, "Member 'UWBP_League_Fight_V2_C::WBP_League_RoundResult_Thumb_13' has a wrong offset!");
static_assert(offsetof(UWBP_League_Fight_V2_C, WBP_League_RoundResult_Thumb_14) == 0x0007D8, "Member 'UWBP_League_Fight_V2_C::WBP_League_RoundResult_Thumb_14' has a wrong offset!");

}

