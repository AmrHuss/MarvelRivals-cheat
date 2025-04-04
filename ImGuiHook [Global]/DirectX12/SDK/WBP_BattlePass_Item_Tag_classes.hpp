#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BattlePass_Item_Tag

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BattlePass_Item_Tag.WBP_BattlePass_Item_Tag_C
// 0x0028 (0x03E0 - 0x03B8)
class UWBP_BattlePass_Item_Tag_C final : public UUserWidget
{
public:
	class UMarvelImage*                           Img_Lock_Icon;                                     // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_GroupNumber;                               // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Label;                                     // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_GroupNumber;                                  // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Label;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BattlePass_Item_Tag_C">();
	}
	static class UWBP_BattlePass_Item_Tag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BattlePass_Item_Tag_C>();
	}
};
static_assert(alignof(UWBP_BattlePass_Item_Tag_C) == 0x000008, "Wrong alignment on UWBP_BattlePass_Item_Tag_C");
static_assert(sizeof(UWBP_BattlePass_Item_Tag_C) == 0x0003E0, "Wrong size on UWBP_BattlePass_Item_Tag_C");
static_assert(offsetof(UWBP_BattlePass_Item_Tag_C, Img_Lock_Icon) == 0x0003B8, "Member 'UWBP_BattlePass_Item_Tag_C::Img_Lock_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Item_Tag_C, Overlay_GroupNumber) == 0x0003C0, "Member 'UWBP_BattlePass_Item_Tag_C::Overlay_GroupNumber' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Item_Tag_C, Overlay_Label) == 0x0003C8, "Member 'UWBP_BattlePass_Item_Tag_C::Overlay_Label' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Item_Tag_C, Text_GroupNumber) == 0x0003D0, "Member 'UWBP_BattlePass_Item_Tag_C::Text_GroupNumber' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Item_Tag_C, Text_Label) == 0x0003D8, "Member 'UWBP_BattlePass_Item_Tag_C::Text_Label' has a wrong offset!");

}

