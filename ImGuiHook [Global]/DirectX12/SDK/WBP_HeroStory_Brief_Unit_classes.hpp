#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HeroStory_Brief_Unit

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HeroStory_Brief_Unit.WBP_HeroStory_Brief_Unit_C
// 0x0018 (0x03D0 - 0x03B8)
class UWBP_HeroStory_Brief_Unit_C final : public UUserWidget
{
public:
	class UMarvelRichTextBlock*                   Text_Content;                                      // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Vertical_Space;                                    // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        Wrap_Text_at_Preview;                              // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HeroStory_Brief_Unit_C">();
	}
	static class UWBP_HeroStory_Brief_Unit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HeroStory_Brief_Unit_C>();
	}
};
static_assert(alignof(UWBP_HeroStory_Brief_Unit_C) == 0x000008, "Wrong alignment on UWBP_HeroStory_Brief_Unit_C");
static_assert(sizeof(UWBP_HeroStory_Brief_Unit_C) == 0x0003D0, "Wrong size on UWBP_HeroStory_Brief_Unit_C");
static_assert(offsetof(UWBP_HeroStory_Brief_Unit_C, Text_Content) == 0x0003B8, "Member 'UWBP_HeroStory_Brief_Unit_C::Text_Content' has a wrong offset!");
static_assert(offsetof(UWBP_HeroStory_Brief_Unit_C, Vertical_Space) == 0x0003C0, "Member 'UWBP_HeroStory_Brief_Unit_C::Vertical_Space' has a wrong offset!");
static_assert(offsetof(UWBP_HeroStory_Brief_Unit_C, Wrap_Text_at_Preview) == 0x0003C8, "Member 'UWBP_HeroStory_Brief_Unit_C::Wrap_Text_at_Preview' has a wrong offset!");

}
