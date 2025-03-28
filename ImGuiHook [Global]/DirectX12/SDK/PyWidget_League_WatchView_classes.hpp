#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_League_WatchView

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "PyWidget_ModuleMainPanel_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_League_WatchView.PyWidget_League_WatchView_Item
// 0x0008 (0x05B0 - 0x05A8)
class UPyWidget_League_WatchView_Item : public UWidget_ListEntry
{
public:
	class UTexture2D*                             BtnWatchIcon;                                      // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	class UWidget* OnNav_Left(EUINavigation Navigation_0);
	class UWidget* OnNav_Mid(EUINavigation Navigation_0);
	class UWidget* OnNav_Right(EUINavigation Navigation_0);
	void OnListItemObjectSet(class UObject* Item);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_League_WatchView_Item">();
	}
	static class UPyWidget_League_WatchView_Item* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_League_WatchView_Item>();
	}
};
static_assert(alignof(UPyWidget_League_WatchView_Item) == 0x000008, "Wrong alignment on UPyWidget_League_WatchView_Item");
static_assert(sizeof(UPyWidget_League_WatchView_Item) == 0x0005B0, "Wrong size on UPyWidget_League_WatchView_Item");
static_assert(offsetof(UPyWidget_League_WatchView_Item, BtnWatchIcon) == 0x0005A8, "Member 'UPyWidget_League_WatchView_Item::BtnWatchIcon' has a wrong offset!");

// PythonClass PyWidget_League_WatchView.League_WatchView_ItemData
// 0x0000 (0x0030 - 0x0030)
class ULeague_WatchView_ItemData final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"League_WatchView_ItemData">();
	}
	static class ULeague_WatchView_ItemData* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeague_WatchView_ItemData>();
	}
};
static_assert(alignof(ULeague_WatchView_ItemData) == 0x000008, "Wrong alignment on ULeague_WatchView_ItemData");
static_assert(sizeof(ULeague_WatchView_ItemData) == 0x000030, "Wrong size on ULeague_WatchView_ItemData");

// PythonClass PyWidget_League_WatchView.PyWidget_League_WatchView
// 0x0020 (0x0630 - 0x0610)
class UPyWidget_League_WatchView : public UPyWidget_ModuleMainPanel
{
public:
	uint8                                         Pad_609[0x7];                                      // 0x0609(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuideTipsStyle>                ShowResultGuideTipsStyle;                          // 0x0610(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                HideResultGuideTipsStyle;                          // 0x0620(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_League_WatchView">();
	}
	static class UPyWidget_League_WatchView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_League_WatchView>();
	}
};
static_assert(alignof(UPyWidget_League_WatchView) == 0x000008, "Wrong alignment on UPyWidget_League_WatchView");
static_assert(sizeof(UPyWidget_League_WatchView) == 0x000630, "Wrong size on UPyWidget_League_WatchView");
static_assert(offsetof(UPyWidget_League_WatchView, ShowResultGuideTipsStyle) == 0x000610, "Member 'UPyWidget_League_WatchView::ShowResultGuideTipsStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_WatchView, HideResultGuideTipsStyle) == 0x000620, "Member 'UPyWidget_League_WatchView::HideResultGuideTipsStyle' has a wrong offset!");

}

