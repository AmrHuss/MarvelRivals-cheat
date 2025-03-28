#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GetHeroShow_V2

#include "Basic.hpp"

#include "PyWidget_ShowHeroSkin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GetHeroShow_V2.WBP_GetHeroShow_V2_C
// 0x0090 (0x06E8 - 0x0658)
class UWBP_GetHeroShow_V2_C final : public UPyWidget_GetHeroShowV2
{
public:
	class UWBP_Common_Btn_Lv1_Y_C*                Btn_Again;                                         // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv1_Y_C*                Btn_Equip;                                         // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv1_W_C*                Btn_Share;                                         // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_LevelReward;                                  // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Duty;                                          // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Duty_1;                                        // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ImageMaskCut_C*                    Img_Hero_Icon;                                     // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           LImage_BG;                                         // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     Lottery_Btns;                                      // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Lottery_Show_Convert_C*            Lottery_Show_Convert;                              // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Congratulations;                              // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Duty;                                         // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Duty_1;                                       // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_HeroName_C*                 Text_HeroName;                                     // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_HeroName_C*                 Text_HeroName_1;                                   // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_LevelReward;                                  // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_VX_Line_C*                  WBP_Com_VX_Line;                                   // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LevelGrowth_LevelUnit_C*           WBP_LevelUnit;                                     // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GetHeroShow_V2_C">();
	}
	static class UWBP_GetHeroShow_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GetHeroShow_V2_C>();
	}
};
static_assert(alignof(UWBP_GetHeroShow_V2_C) == 0x000008, "Wrong alignment on UWBP_GetHeroShow_V2_C");
static_assert(sizeof(UWBP_GetHeroShow_V2_C) == 0x0006E8, "Wrong size on UWBP_GetHeroShow_V2_C");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, Btn_Again) == 0x000658, "Member 'UWBP_GetHeroShow_V2_C::Btn_Again' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, Btn_Equip) == 0x000660, "Member 'UWBP_GetHeroShow_V2_C::Btn_Equip' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, Btn_Share) == 0x000668, "Member 'UWBP_GetHeroShow_V2_C::Btn_Share' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, HBox_LevelReward) == 0x000670, "Member 'UWBP_GetHeroShow_V2_C::HBox_LevelReward' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, Img_Duty) == 0x000678, "Member 'UWBP_GetHeroShow_V2_C::Img_Duty' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, Img_Duty_1) == 0x000680, "Member 'UWBP_GetHeroShow_V2_C::Img_Duty_1' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, Img_Hero_Icon) == 0x000688, "Member 'UWBP_GetHeroShow_V2_C::Img_Hero_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, LImage_BG) == 0x000690, "Member 'UWBP_GetHeroShow_V2_C::LImage_BG' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, Lottery_Btns) == 0x000698, "Member 'UWBP_GetHeroShow_V2_C::Lottery_Btns' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, Lottery_Show_Convert) == 0x0006A0, "Member 'UWBP_GetHeroShow_V2_C::Lottery_Show_Convert' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, Text_Congratulations) == 0x0006A8, "Member 'UWBP_GetHeroShow_V2_C::Text_Congratulations' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, Text_Duty) == 0x0006B0, "Member 'UWBP_GetHeroShow_V2_C::Text_Duty' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, Text_Duty_1) == 0x0006B8, "Member 'UWBP_GetHeroShow_V2_C::Text_Duty_1' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, Text_HeroName) == 0x0006C0, "Member 'UWBP_GetHeroShow_V2_C::Text_HeroName' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, Text_HeroName_1) == 0x0006C8, "Member 'UWBP_GetHeroShow_V2_C::Text_HeroName_1' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, Text_LevelReward) == 0x0006D0, "Member 'UWBP_GetHeroShow_V2_C::Text_LevelReward' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, WBP_Com_VX_Line) == 0x0006D8, "Member 'UWBP_GetHeroShow_V2_C::WBP_Com_VX_Line' has a wrong offset!");
static_assert(offsetof(UWBP_GetHeroShow_V2_C, WBP_LevelUnit) == 0x0006E0, "Member 'UWBP_GetHeroShow_V2_C::WBP_LevelUnit' has a wrong offset!");

}

