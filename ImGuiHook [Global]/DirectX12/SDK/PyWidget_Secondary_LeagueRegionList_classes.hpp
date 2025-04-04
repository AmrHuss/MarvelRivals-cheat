#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Secondary_LeagueRegionList

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_Secondary_LeagueRegionList.PyWidget_Secondary_LeagueRegionList
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_Secondary_LeagueRegionList final : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Secondary_LeagueRegionList">();
	}
	static class UPyWidget_Secondary_LeagueRegionList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Secondary_LeagueRegionList>();
	}
};
static_assert(alignof(UPyWidget_Secondary_LeagueRegionList) == 0x000008, "Wrong alignment on UPyWidget_Secondary_LeagueRegionList");
static_assert(sizeof(UPyWidget_Secondary_LeagueRegionList) == 0x0005E8, "Wrong size on UPyWidget_Secondary_LeagueRegionList");

// PythonClass PyWidget_Secondary_LeagueRegionList.PyWidget_LeagueRegionEntry
// 0x00A0 (0x0688 - 0x05E8)
class UPyWidget_LeagueRegionEntry : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Color_Green_Bg;                                    // 0x05E4(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color_Red_Bg;                                      // 0x05F4(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color_Yellow_Bg;                                   // 0x0604(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color_Blue_Bg;                                     // 0x0614(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            Color_Green_Text;                                  // 0x0624(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            Color_Red_Text;                                    // 0x0638(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            Color_Yellow_Text;                                 // 0x064C(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            Color_Blue_Text;                                   // 0x0660(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                         Pad_674[0x4];                                      // 0x0674(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             GotoOtherLeague;                                   // 0x0678(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void GotoOtherLeague__DelegateSignature();
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_LeagueRegionEntry">();
	}
	static class UPyWidget_LeagueRegionEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_LeagueRegionEntry>();
	}
};
static_assert(alignof(UPyWidget_LeagueRegionEntry) == 0x000008, "Wrong alignment on UPyWidget_LeagueRegionEntry");
static_assert(sizeof(UPyWidget_LeagueRegionEntry) == 0x000688, "Wrong size on UPyWidget_LeagueRegionEntry");
static_assert(offsetof(UPyWidget_LeagueRegionEntry, Color_Green_Bg) == 0x0005E4, "Member 'UPyWidget_LeagueRegionEntry::Color_Green_Bg' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueRegionEntry, Color_Red_Bg) == 0x0005F4, "Member 'UPyWidget_LeagueRegionEntry::Color_Red_Bg' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueRegionEntry, Color_Yellow_Bg) == 0x000604, "Member 'UPyWidget_LeagueRegionEntry::Color_Yellow_Bg' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueRegionEntry, Color_Blue_Bg) == 0x000614, "Member 'UPyWidget_LeagueRegionEntry::Color_Blue_Bg' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueRegionEntry, Color_Green_Text) == 0x000624, "Member 'UPyWidget_LeagueRegionEntry::Color_Green_Text' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueRegionEntry, Color_Red_Text) == 0x000638, "Member 'UPyWidget_LeagueRegionEntry::Color_Red_Text' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueRegionEntry, Color_Yellow_Text) == 0x00064C, "Member 'UPyWidget_LeagueRegionEntry::Color_Yellow_Text' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueRegionEntry, Color_Blue_Text) == 0x000660, "Member 'UPyWidget_LeagueRegionEntry::Color_Blue_Text' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueRegionEntry, GotoOtherLeague) == 0x000678, "Member 'UPyWidget_LeagueRegionEntry::GotoOtherLeague' has a wrong offset!");

}

