#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HeroSystem_Skill_V4

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyWidget_HeroSystem_Skill_classes.hpp"
#include "Marvel_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HeroSystem_Skill_V4.WBP_HeroSystem_Skill_V4_C
// 0x0098 (0x0758 - 0x06C0)
class UWBP_HeroSystem_Skill_V4_C final : public UPyWidget_HeroSystem_Skill
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMarvelImage*                           Img_Skill_ListBg;                                  // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Skin_LeftTopBg;                                // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Triangle_Vx;                                   // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Skill;                                   // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroShapeMenu_C*                   ShapeMenu;                                         // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_BgAngle_V2_C*               WBP_Common_BgAngle_V2;                             // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroSystem_Skill_Banner_C*         WBP_HeroSystem_Skill_Banner;                       // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroSystem_Skill_ListItem_V4_C*    WBP_HeroSystem_Skill_ListItem_V4;                  // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroSystem_SkillDetails_V5_C*      WBP_SkillDetails;                                  // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         HeroID;                                            // 0x0710(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SapeTabID;                                         // 0x0714(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMarvelImage*>                   StarList;                                          // 0x0718(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_Hero_Unit_C*>               HeroShapeList;                                     // 0x0728(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUserWidget*>                    HeroSkillList;                                     // 0x0738(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        VideoVolume;                                       // 0x0748(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VideoHaveSound;                                    // 0x0750(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddShapeItem(int32 HeroID_0, int32 SpapeID);
	void AddSkillToBox(int32 Index_0, const struct FUIAbilityInfo& AbilityInfo, class UPanelWidget* Box, bool IsWeapon);
	void ExecuteUbergraph_WBP_HeroSystem_Skill_V4(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HeroSystem_Skill_V4_C">();
	}
	static class UWBP_HeroSystem_Skill_V4_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HeroSystem_Skill_V4_C>();
	}
};
static_assert(alignof(UWBP_HeroSystem_Skill_V4_C) == 0x000008, "Wrong alignment on UWBP_HeroSystem_Skill_V4_C");
static_assert(sizeof(UWBP_HeroSystem_Skill_V4_C) == 0x000758, "Wrong size on UWBP_HeroSystem_Skill_V4_C");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, UberGraphFrame) == 0x0006C0, "Member 'UWBP_HeroSystem_Skill_V4_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, Img_Skill_ListBg) == 0x0006C8, "Member 'UWBP_HeroSystem_Skill_V4_C::Img_Skill_ListBg' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, Img_Skin_LeftTopBg) == 0x0006D0, "Member 'UWBP_HeroSystem_Skill_V4_C::Img_Skin_LeftTopBg' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, Img_Triangle_Vx) == 0x0006D8, "Member 'UWBP_HeroSystem_Skill_V4_C::Img_Triangle_Vx' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, ScrollBox_Skill) == 0x0006E0, "Member 'UWBP_HeroSystem_Skill_V4_C::ScrollBox_Skill' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, ShapeMenu) == 0x0006E8, "Member 'UWBP_HeroSystem_Skill_V4_C::ShapeMenu' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, WBP_Common_BgAngle_V2) == 0x0006F0, "Member 'UWBP_HeroSystem_Skill_V4_C::WBP_Common_BgAngle_V2' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, WBP_HeroSystem_Skill_Banner) == 0x0006F8, "Member 'UWBP_HeroSystem_Skill_V4_C::WBP_HeroSystem_Skill_Banner' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, WBP_HeroSystem_Skill_ListItem_V4) == 0x000700, "Member 'UWBP_HeroSystem_Skill_V4_C::WBP_HeroSystem_Skill_ListItem_V4' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, WBP_SkillDetails) == 0x000708, "Member 'UWBP_HeroSystem_Skill_V4_C::WBP_SkillDetails' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, HeroID) == 0x000710, "Member 'UWBP_HeroSystem_Skill_V4_C::HeroID' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, SapeTabID) == 0x000714, "Member 'UWBP_HeroSystem_Skill_V4_C::SapeTabID' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, StarList) == 0x000718, "Member 'UWBP_HeroSystem_Skill_V4_C::StarList' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, HeroShapeList) == 0x000728, "Member 'UWBP_HeroSystem_Skill_V4_C::HeroShapeList' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, HeroSkillList) == 0x000738, "Member 'UWBP_HeroSystem_Skill_V4_C::HeroSkillList' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, VideoVolume) == 0x000748, "Member 'UWBP_HeroSystem_Skill_V4_C::VideoVolume' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_Skill_V4_C, VideoHaveSound) == 0x000750, "Member 'UWBP_HeroSystem_Skill_V4_C::VideoHaveSound' has a wrong offset!");

}

