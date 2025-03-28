#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Training_Setting_SelectHeroBtn

#include "Basic.hpp"

#include "PyWidget_Train_Setting_SelectHero_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Training_Setting_SelectHeroBtn.WBP_Training_Setting_SelectHeroBtn_C
// 0x0040 (0x06A8 - 0x0668)
class UWBP_Training_Setting_SelectHeroBtn_C final : public UPyWidget_Train_Setting_SelectHero
{
public:
	class UMarvelImage*                           Img_Change;                                        // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_HeroHeadBg;                                    // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Tips;                                          // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         MarvelOverlay;                                     // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_SwitchHero;                                // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Hero_Name;                                    // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelButton*                          WBP_Common_Btn_Lv3;                                // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_HeroHead_Spuare_C*          WBP_Common_HeroHead_Spuare;                        // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Training_Setting_SelectHeroBtn_C">();
	}
	static class UWBP_Training_Setting_SelectHeroBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Training_Setting_SelectHeroBtn_C>();
	}
};
static_assert(alignof(UWBP_Training_Setting_SelectHeroBtn_C) == 0x000008, "Wrong alignment on UWBP_Training_Setting_SelectHeroBtn_C");
static_assert(sizeof(UWBP_Training_Setting_SelectHeroBtn_C) == 0x0006A8, "Wrong size on UWBP_Training_Setting_SelectHeroBtn_C");
static_assert(offsetof(UWBP_Training_Setting_SelectHeroBtn_C, Img_Change) == 0x000668, "Member 'UWBP_Training_Setting_SelectHeroBtn_C::Img_Change' has a wrong offset!");
static_assert(offsetof(UWBP_Training_Setting_SelectHeroBtn_C, Img_HeroHeadBg) == 0x000670, "Member 'UWBP_Training_Setting_SelectHeroBtn_C::Img_HeroHeadBg' has a wrong offset!");
static_assert(offsetof(UWBP_Training_Setting_SelectHeroBtn_C, Img_Tips) == 0x000678, "Member 'UWBP_Training_Setting_SelectHeroBtn_C::Img_Tips' has a wrong offset!");
static_assert(offsetof(UWBP_Training_Setting_SelectHeroBtn_C, MarvelOverlay) == 0x000680, "Member 'UWBP_Training_Setting_SelectHeroBtn_C::MarvelOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_Training_Setting_SelectHeroBtn_C, SizeBox_SwitchHero) == 0x000688, "Member 'UWBP_Training_Setting_SelectHeroBtn_C::SizeBox_SwitchHero' has a wrong offset!");
static_assert(offsetof(UWBP_Training_Setting_SelectHeroBtn_C, Text_Hero_Name) == 0x000690, "Member 'UWBP_Training_Setting_SelectHeroBtn_C::Text_Hero_Name' has a wrong offset!");
static_assert(offsetof(UWBP_Training_Setting_SelectHeroBtn_C, WBP_Common_Btn_Lv3) == 0x000698, "Member 'UWBP_Training_Setting_SelectHeroBtn_C::WBP_Common_Btn_Lv3' has a wrong offset!");
static_assert(offsetof(UWBP_Training_Setting_SelectHeroBtn_C, WBP_Common_HeroHead_Spuare) == 0x0006A0, "Member 'UWBP_Training_Setting_SelectHeroBtn_C::WBP_Common_HeroHead_Spuare' has a wrong offset!");

}

