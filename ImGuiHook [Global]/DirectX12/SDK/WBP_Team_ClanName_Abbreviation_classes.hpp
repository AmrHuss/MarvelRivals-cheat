#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Team_ClanName_Abbreviation

#include "Basic.hpp"

#include "PyWidget_Clan_CommonClanName_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Team_ClanName_Abbreviation.WBP_Team_ClanName_Abbreviation_C
// 0x0010 (0x0680 - 0x0670)
class UWBP_Team_ClanName_Abbreviation_C final : public UPyWidget_CommonClanMiniName
{
public:
	class UCommonLazyImage*                       Img_ClanIcon;                                      // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_ClanName_Abbreviation;                        // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Team_ClanName_Abbreviation_C">();
	}
	static class UWBP_Team_ClanName_Abbreviation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Team_ClanName_Abbreviation_C>();
	}
};
static_assert(alignof(UWBP_Team_ClanName_Abbreviation_C) == 0x000008, "Wrong alignment on UWBP_Team_ClanName_Abbreviation_C");
static_assert(sizeof(UWBP_Team_ClanName_Abbreviation_C) == 0x000680, "Wrong size on UWBP_Team_ClanName_Abbreviation_C");
static_assert(offsetof(UWBP_Team_ClanName_Abbreviation_C, Img_ClanIcon) == 0x000670, "Member 'UWBP_Team_ClanName_Abbreviation_C::Img_ClanIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Team_ClanName_Abbreviation_C, Text_ClanName_Abbreviation) == 0x000678, "Member 'UWBP_Team_ClanName_Abbreviation_C::Text_ClanName_Abbreviation' has a wrong offset!");

}
