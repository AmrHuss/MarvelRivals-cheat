#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_League_KnockoutSchedule_Faction

#include "Basic.hpp"

#include "Marvel_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_League_KnockoutSchedule_Faction.LeagueKnockoutSchedule_Faction_ListItemObject
// 0x0000 (0x0030 - 0x0030)
class ULeagueKnockoutSchedule_Faction_ListItemObject final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LeagueKnockoutSchedule_Faction_ListItemObject">();
	}
	static class ULeagueKnockoutSchedule_Faction_ListItemObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeagueKnockoutSchedule_Faction_ListItemObject>();
	}
};
static_assert(alignof(ULeagueKnockoutSchedule_Faction_ListItemObject) == 0x000008, "Wrong alignment on ULeagueKnockoutSchedule_Faction_ListItemObject");
static_assert(sizeof(ULeagueKnockoutSchedule_Faction_ListItemObject) == 0x000030, "Wrong size on ULeagueKnockoutSchedule_Faction_ListItemObject");

// PythonClass PyWidget_League_KnockoutSchedule_Faction.PyWidget_League_KnockoutSchedule_Faction
// 0x0078 (0x0620 - 0x05A8)
class UPyWidget_League_KnockoutSchedule_Faction : public UWidget_ListEntry
{
public:
	struct FSlateColor                            TextColor_Normal;                                  // 0x05A8(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            TextColor_Fail;                                    // 0x05BC(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            TextColor_My_Normal;                               // 0x05D0(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            TextColor_My_Fail;                                 // 0x05E4(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                           ImgColor_NumBg_Normal;                             // 0x05F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ImgColor_NumBg_Lose;                               // 0x0608(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                Slot_Cup_BP;                                       // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void OnListItemObjectSet(class UObject* ListItemObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_League_KnockoutSchedule_Faction">();
	}
	static class UPyWidget_League_KnockoutSchedule_Faction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_League_KnockoutSchedule_Faction>();
	}
};
static_assert(alignof(UPyWidget_League_KnockoutSchedule_Faction) == 0x000008, "Wrong alignment on UPyWidget_League_KnockoutSchedule_Faction");
static_assert(sizeof(UPyWidget_League_KnockoutSchedule_Faction) == 0x000620, "Wrong size on UPyWidget_League_KnockoutSchedule_Faction");
static_assert(offsetof(UPyWidget_League_KnockoutSchedule_Faction, TextColor_Normal) == 0x0005A8, "Member 'UPyWidget_League_KnockoutSchedule_Faction::TextColor_Normal' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_KnockoutSchedule_Faction, TextColor_Fail) == 0x0005BC, "Member 'UPyWidget_League_KnockoutSchedule_Faction::TextColor_Fail' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_KnockoutSchedule_Faction, TextColor_My_Normal) == 0x0005D0, "Member 'UPyWidget_League_KnockoutSchedule_Faction::TextColor_My_Normal' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_KnockoutSchedule_Faction, TextColor_My_Fail) == 0x0005E4, "Member 'UPyWidget_League_KnockoutSchedule_Faction::TextColor_My_Fail' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_KnockoutSchedule_Faction, ImgColor_NumBg_Normal) == 0x0005F8, "Member 'UPyWidget_League_KnockoutSchedule_Faction::ImgColor_NumBg_Normal' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_KnockoutSchedule_Faction, ImgColor_NumBg_Lose) == 0x000608, "Member 'UPyWidget_League_KnockoutSchedule_Faction::ImgColor_NumBg_Lose' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_KnockoutSchedule_Faction, Slot_Cup_BP) == 0x000618, "Member 'UPyWidget_League_KnockoutSchedule_Faction::Slot_Cup_BP' has a wrong offset!");

}
