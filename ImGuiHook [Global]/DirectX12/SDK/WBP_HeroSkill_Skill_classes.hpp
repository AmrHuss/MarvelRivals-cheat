#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HeroSkill_Skill

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "PyWidget_LobbyHero_classes.hpp"
#include "Marvel_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HeroSkill_Skill.WBP_HeroSkill_Skill_C
// 0x0020 (0x07A0 - 0x0780)
class UWBP_HeroSkill_Skill_C final : public UPyWidget_Skill_Button
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0780(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlipbookImage*                         Flipbook_Flash;                                    // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Icon;                                          // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsClicked;                                         // 0x0798(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_HeroSkill_Skill(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetAbilityData(const class FText& Name_0, const class FText& Desc, TSoftObjectPtr<class UTexture2D> Icon, EAbilityInputBinds InptuAction);
	void SetIsClicked(bool IsClicked_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HeroSkill_Skill_C">();
	}
	static class UWBP_HeroSkill_Skill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HeroSkill_Skill_C>();
	}
};
static_assert(alignof(UWBP_HeroSkill_Skill_C) == 0x000008, "Wrong alignment on UWBP_HeroSkill_Skill_C");
static_assert(sizeof(UWBP_HeroSkill_Skill_C) == 0x0007A0, "Wrong size on UWBP_HeroSkill_Skill_C");
static_assert(offsetof(UWBP_HeroSkill_Skill_C, UberGraphFrame) == 0x000780, "Member 'UWBP_HeroSkill_Skill_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSkill_Skill_C, Flipbook_Flash) == 0x000788, "Member 'UWBP_HeroSkill_Skill_C::Flipbook_Flash' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSkill_Skill_C, Img_Icon) == 0x000790, "Member 'UWBP_HeroSkill_Skill_C::Img_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSkill_Skill_C, IsClicked) == 0x000798, "Member 'UWBP_HeroSkill_Skill_C::IsClicked' has a wrong offset!");

}

