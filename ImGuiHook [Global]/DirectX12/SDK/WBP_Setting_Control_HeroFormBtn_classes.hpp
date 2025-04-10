#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Setting_Control_HeroFormBtn

#include "Basic.hpp"

#include "PyWidget_SettingBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Setting_Control_HeroFormBtn.WBP_Setting_Control_HeroFormBtn_C
// 0x0038 (0x0680 - 0x0648)
class UWBP_Setting_Control_HeroFormBtn_C final : public UPyWidget_SettingSelectHeroShape_Btn
{
public:
	class UMarvelButton*                          Btn_Hero_Select;                                   // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_HeroForm_Hover;                                // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_HeroForm_Normal;                               // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_HeroForm_Select;                               // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_HeroFormBtn_Bg;                                // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_HeroHead;                                  // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_HeroHead_Transverse_C*      WBP_HeroHead;                                      // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Setting_Control_HeroFormBtn_C">();
	}
	static class UWBP_Setting_Control_HeroFormBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Setting_Control_HeroFormBtn_C>();
	}
};
static_assert(alignof(UWBP_Setting_Control_HeroFormBtn_C) == 0x000008, "Wrong alignment on UWBP_Setting_Control_HeroFormBtn_C");
static_assert(sizeof(UWBP_Setting_Control_HeroFormBtn_C) == 0x000680, "Wrong size on UWBP_Setting_Control_HeroFormBtn_C");
static_assert(offsetof(UWBP_Setting_Control_HeroFormBtn_C, Btn_Hero_Select) == 0x000648, "Member 'UWBP_Setting_Control_HeroFormBtn_C::Btn_Hero_Select' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Control_HeroFormBtn_C, Img_HeroForm_Hover) == 0x000650, "Member 'UWBP_Setting_Control_HeroFormBtn_C::Img_HeroForm_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Control_HeroFormBtn_C, Img_HeroForm_Normal) == 0x000658, "Member 'UWBP_Setting_Control_HeroFormBtn_C::Img_HeroForm_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Control_HeroFormBtn_C, Img_HeroForm_Select) == 0x000660, "Member 'UWBP_Setting_Control_HeroFormBtn_C::Img_HeroForm_Select' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Control_HeroFormBtn_C, Img_HeroFormBtn_Bg) == 0x000668, "Member 'UWBP_Setting_Control_HeroFormBtn_C::Img_HeroFormBtn_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Control_HeroFormBtn_C, SizeBox_HeroHead) == 0x000670, "Member 'UWBP_Setting_Control_HeroFormBtn_C::SizeBox_HeroHead' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Control_HeroFormBtn_C, WBP_HeroHead) == 0x000678, "Member 'UWBP_Setting_Control_HeroFormBtn_C::WBP_HeroHead' has a wrong offset!");

}

