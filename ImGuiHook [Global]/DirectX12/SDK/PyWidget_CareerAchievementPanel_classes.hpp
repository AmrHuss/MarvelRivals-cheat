#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_CareerAchievementPanel

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "PyWidget_Common_Button_classes.hpp"
#include "PyMarvelUserWidget_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_CareerAchievementPanel.PyWidget_CareerAchievement_ItemData
// 0x0000 (0x0030 - 0x0030)
class UPyWidget_CareerAchievement_ItemData final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CareerAchievement_ItemData">();
	}
	static class UPyWidget_CareerAchievement_ItemData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CareerAchievement_ItemData>();
	}
};
static_assert(alignof(UPyWidget_CareerAchievement_ItemData) == 0x000008, "Wrong alignment on UPyWidget_CareerAchievement_ItemData");
static_assert(sizeof(UPyWidget_CareerAchievement_ItemData) == 0x000030, "Wrong size on UPyWidget_CareerAchievement_ItemData");

// PythonClass PyWidget_CareerAchievementPanel.PyWidget_CareerAchievementTopRewardBtn
// 0x0010 (0x08F0 - 0x08E0)
class UPyWidget_CareerAchievementTopRewardBtn final : public UPyWidget_CommonButton_Lv1
{
public:
	class UMarvelOverlay*                         Overlay_Btn;                                       // 0x08D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_Refresh_Loop;                                 // 0x08E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CareerAchievementTopRewardBtn">();
	}
	static class UPyWidget_CareerAchievementTopRewardBtn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CareerAchievementTopRewardBtn>();
	}
};
static_assert(alignof(UPyWidget_CareerAchievementTopRewardBtn) == 0x000010, "Wrong alignment on UPyWidget_CareerAchievementTopRewardBtn");
static_assert(sizeof(UPyWidget_CareerAchievementTopRewardBtn) == 0x0008F0, "Wrong size on UPyWidget_CareerAchievementTopRewardBtn");
static_assert(offsetof(UPyWidget_CareerAchievementTopRewardBtn, Overlay_Btn) == 0x0008D8, "Member 'UPyWidget_CareerAchievementTopRewardBtn::Overlay_Btn' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementTopRewardBtn, Anim_Refresh_Loop) == 0x0008E0, "Member 'UPyWidget_CareerAchievementTopRewardBtn::Anim_Refresh_Loop' has a wrong offset!");

// PythonClass PyWidget_CareerAchievementPanel.PyWidget_CareerAchievementNaviBtn
// 0x0038 (0x0620 - 0x05E8)
class UPyWidget_CareerAchievementNaviBtn : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarvelTextBlock*                       Text_BtnName;                                      // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelImage*                           Img_AchivemenIcon;                                 // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color_IconSelect;                                  // 0x05F8(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color_IconNormal;                                  // 0x0608(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelOverlay*                         Overlay_BtnContent;                                // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CareerAchievementNaviBtn">();
	}
	static class UPyWidget_CareerAchievementNaviBtn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CareerAchievementNaviBtn>();
	}
};
static_assert(alignof(UPyWidget_CareerAchievementNaviBtn) == 0x000008, "Wrong alignment on UPyWidget_CareerAchievementNaviBtn");
static_assert(sizeof(UPyWidget_CareerAchievementNaviBtn) == 0x000620, "Wrong size on UPyWidget_CareerAchievementNaviBtn");
static_assert(offsetof(UPyWidget_CareerAchievementNaviBtn, Text_BtnName) == 0x0005E8, "Member 'UPyWidget_CareerAchievementNaviBtn::Text_BtnName' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementNaviBtn, Img_AchivemenIcon) == 0x0005F0, "Member 'UPyWidget_CareerAchievementNaviBtn::Img_AchivemenIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementNaviBtn, Color_IconSelect) == 0x0005F8, "Member 'UPyWidget_CareerAchievementNaviBtn::Color_IconSelect' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementNaviBtn, Color_IconNormal) == 0x000608, "Member 'UPyWidget_CareerAchievementNaviBtn::Color_IconNormal' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementNaviBtn, Overlay_BtnContent) == 0x000618, "Member 'UPyWidget_CareerAchievementNaviBtn::Overlay_BtnContent' has a wrong offset!");

// PythonClass PyWidget_CareerAchievementPanel.PyWidget_CareerAchievementPanel
// 0x0070 (0x0658 - 0x05E8)
class UPyWidget_CareerAchievementPanel final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProgressBar*                           Bar_AchievementBar;                                // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProgressBar*                           Bar_AchievementBar_Add;                            // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProgressBar*                           Bar_AchievementBar_RealTime;                       // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlider*                                Slider_Achievement;                                // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelListView*                        ListView_UnitList;                                 // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelVerticalBox*                     VBox_NaviBtn_List;                                 // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                               SizeBox_UnitList;                                  // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_Toggle;                                       // 0x0620(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_Bar;                                          // 0x0628(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_Bar_Exp;                                      // 0x0630(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_Bar_Exp_Opacity;                              // 0x0638(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_Career_Fade_In;                               // 0x0640(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           NavUpAction;                                       // 0x0648(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           NavDownAction;                                     // 0x0650(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	class UWidget* OnListViewNavigationLeft(EUINavigation Navigation_0);
	class UWidget* OnBtnReceiveAllNavigationLeft(EUINavigation Navigation_0);
	class UWidget* OnBtnReceiveAllNavigationTop(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CareerAchievementPanel">();
	}
	static class UPyWidget_CareerAchievementPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CareerAchievementPanel>();
	}
};
static_assert(alignof(UPyWidget_CareerAchievementPanel) == 0x000008, "Wrong alignment on UPyWidget_CareerAchievementPanel");
static_assert(sizeof(UPyWidget_CareerAchievementPanel) == 0x000658, "Wrong size on UPyWidget_CareerAchievementPanel");
static_assert(offsetof(UPyWidget_CareerAchievementPanel, Bar_AchievementBar) == 0x0005E8, "Member 'UPyWidget_CareerAchievementPanel::Bar_AchievementBar' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementPanel, Bar_AchievementBar_Add) == 0x0005F0, "Member 'UPyWidget_CareerAchievementPanel::Bar_AchievementBar_Add' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementPanel, Bar_AchievementBar_RealTime) == 0x0005F8, "Member 'UPyWidget_CareerAchievementPanel::Bar_AchievementBar_RealTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementPanel, Slider_Achievement) == 0x000600, "Member 'UPyWidget_CareerAchievementPanel::Slider_Achievement' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementPanel, ListView_UnitList) == 0x000608, "Member 'UPyWidget_CareerAchievementPanel::ListView_UnitList' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementPanel, VBox_NaviBtn_List) == 0x000610, "Member 'UPyWidget_CareerAchievementPanel::VBox_NaviBtn_List' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementPanel, SizeBox_UnitList) == 0x000618, "Member 'UPyWidget_CareerAchievementPanel::SizeBox_UnitList' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementPanel, Anim_Toggle) == 0x000620, "Member 'UPyWidget_CareerAchievementPanel::Anim_Toggle' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementPanel, Anim_Bar) == 0x000628, "Member 'UPyWidget_CareerAchievementPanel::Anim_Bar' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementPanel, Anim_Bar_Exp) == 0x000630, "Member 'UPyWidget_CareerAchievementPanel::Anim_Bar_Exp' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementPanel, Anim_Bar_Exp_Opacity) == 0x000638, "Member 'UPyWidget_CareerAchievementPanel::Anim_Bar_Exp_Opacity' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementPanel, Anim_Career_Fade_In) == 0x000640, "Member 'UPyWidget_CareerAchievementPanel::Anim_Career_Fade_In' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementPanel, NavUpAction) == 0x000648, "Member 'UPyWidget_CareerAchievementPanel::NavUpAction' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementPanel, NavDownAction) == 0x000650, "Member 'UPyWidget_CareerAchievementPanel::NavDownAction' has a wrong offset!");

// PythonClass PyWidget_CareerAchievementPanel.PyWidget_CareerAchievementUnit
// 0x0090 (0x0970 - 0x08E0)
class UPyWidget_CareerAchievementUnit final : public UPyWidget_CommonButton_Lv1
{
public:
	class UMarvelImage*                           Img_Achivement_Icon;                               // 0x08D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Achivemen_Title;                              // 0x08E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Achivemen_Description;                        // 0x08E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelHorizontalBox*                   HBox_Completion;                                   // 0x08F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Completion_time;                              // 0x08F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelHorizontalBox*                   HBox_Num;                                          // 0x0900(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Num_Cur;                                      // 0x0908(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Num_Max;                                      // 0x0910(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelImage*                           Img_Obtained_Icon;                                 // 0x0918(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelOverlay*                         Overlay_Rewards;                                   // 0x0920(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelImage*                           Img_Rewards_Icon;                                  // 0x0928(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Rewards_Num;                                  // 0x0930(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_Flow;                                         // 0x0938(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelOverlay*                         Overlay_Unit;                                      // 0x0940(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_Rewards;                                      // 0x0948(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPyWidget_CareerAchievement_ItemData*   ItemObject;                                        // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnAchievementBtnClicked;                           // 0x0958(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnAchievementBtnClicked__DelegateSignature(class UObject* ItemObject_0);
	void OnInitialized();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void SetAchievementData(class UObject* ItemObject_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CareerAchievementUnit">();
	}
	static class UPyWidget_CareerAchievementUnit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CareerAchievementUnit>();
	}
};
static_assert(alignof(UPyWidget_CareerAchievementUnit) == 0x000010, "Wrong alignment on UPyWidget_CareerAchievementUnit");
static_assert(sizeof(UPyWidget_CareerAchievementUnit) == 0x000970, "Wrong size on UPyWidget_CareerAchievementUnit");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, Img_Achivement_Icon) == 0x0008D8, "Member 'UPyWidget_CareerAchievementUnit::Img_Achivement_Icon' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, Text_Achivemen_Title) == 0x0008E0, "Member 'UPyWidget_CareerAchievementUnit::Text_Achivemen_Title' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, Text_Achivemen_Description) == 0x0008E8, "Member 'UPyWidget_CareerAchievementUnit::Text_Achivemen_Description' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, HBox_Completion) == 0x0008F0, "Member 'UPyWidget_CareerAchievementUnit::HBox_Completion' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, Text_Completion_time) == 0x0008F8, "Member 'UPyWidget_CareerAchievementUnit::Text_Completion_time' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, HBox_Num) == 0x000900, "Member 'UPyWidget_CareerAchievementUnit::HBox_Num' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, Text_Num_Cur) == 0x000908, "Member 'UPyWidget_CareerAchievementUnit::Text_Num_Cur' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, Text_Num_Max) == 0x000910, "Member 'UPyWidget_CareerAchievementUnit::Text_Num_Max' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, Img_Obtained_Icon) == 0x000918, "Member 'UPyWidget_CareerAchievementUnit::Img_Obtained_Icon' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, Overlay_Rewards) == 0x000920, "Member 'UPyWidget_CareerAchievementUnit::Overlay_Rewards' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, Img_Rewards_Icon) == 0x000928, "Member 'UPyWidget_CareerAchievementUnit::Img_Rewards_Icon' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, Text_Rewards_Num) == 0x000930, "Member 'UPyWidget_CareerAchievementUnit::Text_Rewards_Num' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, Anim_Flow) == 0x000938, "Member 'UPyWidget_CareerAchievementUnit::Anim_Flow' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, Overlay_Unit) == 0x000940, "Member 'UPyWidget_CareerAchievementUnit::Overlay_Unit' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, Anim_Rewards) == 0x000948, "Member 'UPyWidget_CareerAchievementUnit::Anim_Rewards' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, ItemObject) == 0x000950, "Member 'UPyWidget_CareerAchievementUnit::ItemObject' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementUnit, OnAchievementBtnClicked) == 0x000958, "Member 'UPyWidget_CareerAchievementUnit::OnAchievementBtnClicked' has a wrong offset!");

// PythonClass PyWidget_CareerAchievementPanel.PyWidget_CareerAchievementTopUnit
// 0x0070 (0x0658 - 0x05E8)
class UPyWidget_CareerAchievementTopUnit final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarvelTextBlock*                       Text_Name;                                         // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelImage*                           Img_line_1;                                        // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelHorizontalBox*                   HBox_Num;                                          // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Num_Cur;                                      // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Num_Max;                                      // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelOverlay*                         Overlay_PointNum;                                  // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_Rewards;                                      // 0x0618(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Num_Interval_Time;                                 // 0x0620(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Num_Total_Time;                                    // 0x0624(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Text_Cur_Point;                                    // 0x0628(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   Text_Max_Point;                                    // 0x0640(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	class UWidget* OnTopUnitNavigationDown(EUINavigation Navigation_0);
	class UWidget* OnTopUnitNavigationLeft(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CareerAchievementTopUnit">();
	}
	static class UPyWidget_CareerAchievementTopUnit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CareerAchievementTopUnit>();
	}
};
static_assert(alignof(UPyWidget_CareerAchievementTopUnit) == 0x000008, "Wrong alignment on UPyWidget_CareerAchievementTopUnit");
static_assert(sizeof(UPyWidget_CareerAchievementTopUnit) == 0x000658, "Wrong size on UPyWidget_CareerAchievementTopUnit");
static_assert(offsetof(UPyWidget_CareerAchievementTopUnit, Text_Name) == 0x0005E8, "Member 'UPyWidget_CareerAchievementTopUnit::Text_Name' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementTopUnit, Img_line_1) == 0x0005F0, "Member 'UPyWidget_CareerAchievementTopUnit::Img_line_1' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementTopUnit, HBox_Num) == 0x0005F8, "Member 'UPyWidget_CareerAchievementTopUnit::HBox_Num' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementTopUnit, Text_Num_Cur) == 0x000600, "Member 'UPyWidget_CareerAchievementTopUnit::Text_Num_Cur' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementTopUnit, Text_Num_Max) == 0x000608, "Member 'UPyWidget_CareerAchievementTopUnit::Text_Num_Max' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementTopUnit, Overlay_PointNum) == 0x000610, "Member 'UPyWidget_CareerAchievementTopUnit::Overlay_PointNum' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementTopUnit, Anim_Rewards) == 0x000618, "Member 'UPyWidget_CareerAchievementTopUnit::Anim_Rewards' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementTopUnit, Num_Interval_Time) == 0x000620, "Member 'UPyWidget_CareerAchievementTopUnit::Num_Interval_Time' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementTopUnit, Num_Total_Time) == 0x000624, "Member 'UPyWidget_CareerAchievementTopUnit::Num_Total_Time' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementTopUnit, Text_Cur_Point) == 0x000628, "Member 'UPyWidget_CareerAchievementTopUnit::Text_Cur_Point' has a wrong offset!");
static_assert(offsetof(UPyWidget_CareerAchievementTopUnit, Text_Max_Point) == 0x000640, "Member 'UPyWidget_CareerAchievementTopUnit::Text_Max_Point' has a wrong offset!");

}

