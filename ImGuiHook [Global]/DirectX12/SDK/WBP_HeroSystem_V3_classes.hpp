#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HeroSystem_V3

#include "Basic.hpp"

#include "Python_enums_structs.hpp"
#include "PyWidget_HeroSystem_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HeroSystem_V3.WBP_HeroSystem_V3_C
// 0x00B0 (0x07A8 - 0x06F8)
class UWBP_HeroSystem_V3_C final : public UPyWidget_HeroSystem
{
public:
	class UWidgetAnimation*                       Anim_Appreciate;                                   // 0x06F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonItemPanel_C*                 CommonItemPanel;                                   // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroSystem_CustomPanel_C*          Custom_Corona;                                     // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Hero;                                        // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_HeroList;                                    // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_NavigationBar_LV2_C*        NavigationBar;                                     // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Content;                                   // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_HalfDebug;                                 // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_StandDebug;                                // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Chat;                                     // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_HeroList;                                  // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Chat_C*                     WBP_Common_Chat;                                   // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<EHeroSystemTab, TSubclassOf<class UUserWidget>> SubWidgetClasses_0;                                // 0x0758(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HeroSystem_V3_C">();
	}
	static class UWBP_HeroSystem_V3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HeroSystem_V3_C>();
	}
};
static_assert(alignof(UWBP_HeroSystem_V3_C) == 0x000008, "Wrong alignment on UWBP_HeroSystem_V3_C");
static_assert(sizeof(UWBP_HeroSystem_V3_C) == 0x0007A8, "Wrong size on UWBP_HeroSystem_V3_C");
static_assert(offsetof(UWBP_HeroSystem_V3_C, Anim_Appreciate) == 0x0006F8, "Member 'UWBP_HeroSystem_V3_C::Anim_Appreciate' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_V3_C, CommonItemPanel) == 0x000700, "Member 'UWBP_HeroSystem_V3_C::CommonItemPanel' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_V3_C, Custom_Corona) == 0x000708, "Member 'UWBP_HeroSystem_V3_C::Custom_Corona' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_V3_C, Image_Hero) == 0x000710, "Member 'UWBP_HeroSystem_V3_C::Image_Hero' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_V3_C, Image_HeroList) == 0x000718, "Member 'UWBP_HeroSystem_V3_C::Image_HeroList' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_V3_C, NavigationBar) == 0x000720, "Member 'UWBP_HeroSystem_V3_C::NavigationBar' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_V3_C, Overlay_Content) == 0x000728, "Member 'UWBP_HeroSystem_V3_C::Overlay_Content' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_V3_C, Overlay_HalfDebug) == 0x000730, "Member 'UWBP_HeroSystem_V3_C::Overlay_HalfDebug' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_V3_C, Overlay_StandDebug) == 0x000738, "Member 'UWBP_HeroSystem_V3_C::Overlay_StandDebug' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_V3_C, ScaleBox_Chat) == 0x000740, "Member 'UWBP_HeroSystem_V3_C::ScaleBox_Chat' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_V3_C, SizeBox_HeroList) == 0x000748, "Member 'UWBP_HeroSystem_V3_C::SizeBox_HeroList' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_V3_C, WBP_Common_Chat) == 0x000750, "Member 'UWBP_HeroSystem_V3_C::WBP_Common_Chat' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_V3_C, SubWidgetClasses_0) == 0x000758, "Member 'UWBP_HeroSystem_V3_C::SubWidgetClasses_0' has a wrong offset!");

}
