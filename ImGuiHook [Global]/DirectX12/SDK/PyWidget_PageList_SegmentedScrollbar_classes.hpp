#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_PageList_SegmentedScrollbar

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_PageList_SegmentedScrollbar.PyWidget_PageList_SegmentedScrollbar
// 0x0038 (0x0620 - 0x05E8)
class UPyWidget_PageList_SegmentedScrollbar : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Height_Of_Scrollbar;                               // 0x05E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxHeight_Of_SingleToggle;                         // 0x05E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinHeight_Of_SingleToggle;                         // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                ToggleWidget;                                      // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 EventName_OnMouseScrolled;                         // 0x05F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Preview_PageCount;                                 // 0x0608(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          NeedPreview;                                       // 0x060C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_60D[0x3];                                      // 0x060D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuideTipsStyle>                GuideActions;                                      // 0x0610(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_PageList_SegmentedScrollbar">();
	}
	static class UPyWidget_PageList_SegmentedScrollbar* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_PageList_SegmentedScrollbar>();
	}
};
static_assert(alignof(UPyWidget_PageList_SegmentedScrollbar) == 0x000008, "Wrong alignment on UPyWidget_PageList_SegmentedScrollbar");
static_assert(sizeof(UPyWidget_PageList_SegmentedScrollbar) == 0x000620, "Wrong size on UPyWidget_PageList_SegmentedScrollbar");
static_assert(offsetof(UPyWidget_PageList_SegmentedScrollbar, Height_Of_Scrollbar) == 0x0005E4, "Member 'UPyWidget_PageList_SegmentedScrollbar::Height_Of_Scrollbar' has a wrong offset!");
static_assert(offsetof(UPyWidget_PageList_SegmentedScrollbar, MaxHeight_Of_SingleToggle) == 0x0005E8, "Member 'UPyWidget_PageList_SegmentedScrollbar::MaxHeight_Of_SingleToggle' has a wrong offset!");
static_assert(offsetof(UPyWidget_PageList_SegmentedScrollbar, MinHeight_Of_SingleToggle) == 0x0005EC, "Member 'UPyWidget_PageList_SegmentedScrollbar::MinHeight_Of_SingleToggle' has a wrong offset!");
static_assert(offsetof(UPyWidget_PageList_SegmentedScrollbar, ToggleWidget) == 0x0005F0, "Member 'UPyWidget_PageList_SegmentedScrollbar::ToggleWidget' has a wrong offset!");
static_assert(offsetof(UPyWidget_PageList_SegmentedScrollbar, EventName_OnMouseScrolled) == 0x0005F8, "Member 'UPyWidget_PageList_SegmentedScrollbar::EventName_OnMouseScrolled' has a wrong offset!");
static_assert(offsetof(UPyWidget_PageList_SegmentedScrollbar, Preview_PageCount) == 0x000608, "Member 'UPyWidget_PageList_SegmentedScrollbar::Preview_PageCount' has a wrong offset!");
static_assert(offsetof(UPyWidget_PageList_SegmentedScrollbar, NeedPreview) == 0x00060C, "Member 'UPyWidget_PageList_SegmentedScrollbar::NeedPreview' has a wrong offset!");
static_assert(offsetof(UPyWidget_PageList_SegmentedScrollbar, GuideActions) == 0x000610, "Member 'UPyWidget_PageList_SegmentedScrollbar::GuideActions' has a wrong offset!");

}
