#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Clan_ClanList

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "PyWidget_ModuleMainPanel_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_Clan_ClanList.PyWidget_Clan_ClanList
// 0x0020 (0x0630 - 0x0610)
class UPyWidget_Clan_ClanList : public UPyWidget_ModuleMainPanel
{
public:
	uint8                                         Pad_609[0x7];                                      // 0x0609(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSoftObjectPath>                ImgAdvertisement;                                  // 0x0610(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                             ImgNoFilter;                                       // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             ImgFilter;                                         // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);
	class UWidget* ScrollView_ClanList_Right_Navigation(EUINavigation Navigation_0);
	class UWidget* Goto_ScrollView_ClanList_Navigation(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Clan_ClanList">();
	}
	static class UPyWidget_Clan_ClanList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Clan_ClanList>();
	}
};
static_assert(alignof(UPyWidget_Clan_ClanList) == 0x000008, "Wrong alignment on UPyWidget_Clan_ClanList");
static_assert(sizeof(UPyWidget_Clan_ClanList) == 0x000630, "Wrong size on UPyWidget_Clan_ClanList");
static_assert(offsetof(UPyWidget_Clan_ClanList, ImgAdvertisement) == 0x000610, "Member 'UPyWidget_Clan_ClanList::ImgAdvertisement' has a wrong offset!");
static_assert(offsetof(UPyWidget_Clan_ClanList, ImgNoFilter) == 0x000620, "Member 'UPyWidget_Clan_ClanList::ImgNoFilter' has a wrong offset!");
static_assert(offsetof(UPyWidget_Clan_ClanList, ImgFilter) == 0x000628, "Member 'UPyWidget_Clan_ClanList::ImgFilter' has a wrong offset!");

}

