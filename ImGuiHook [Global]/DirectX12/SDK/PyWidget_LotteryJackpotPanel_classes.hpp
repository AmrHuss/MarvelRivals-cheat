#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_LotteryJackpotPanel

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "SlateCore_structs.hpp"
#include "PyWidget_ModuleMainPanel_classes.hpp"
#include "PyMarvelUserWidget_classes.hpp"
#include "PyWidget_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_LotteryJackpotPanel.PyWidget_LotteryJackpotPanel
// 0x0040 (0x0650 - 0x0610)
class UPyWidget_LotteryJackpotPanel : public UPyWidget_ModuleMainPanel
{
public:
	uint8                                         Pad_609[0x3];                                      // 0x0609(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TabChangeSpeed;                                    // 0x060C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSlateBrush>                    QualityIcons;                                      // 0x0610(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                   QualityColor;                                      // 0x0620(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                AppreciateTipsStyle;                               // 0x0630(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                ReturnMenuStyle;                                   // 0x0640(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void OnBecomeTop();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_LotteryJackpotPanel">();
	}
	static class UPyWidget_LotteryJackpotPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_LotteryJackpotPanel>();
	}
};
static_assert(alignof(UPyWidget_LotteryJackpotPanel) == 0x000008, "Wrong alignment on UPyWidget_LotteryJackpotPanel");
static_assert(sizeof(UPyWidget_LotteryJackpotPanel) == 0x000650, "Wrong size on UPyWidget_LotteryJackpotPanel");
static_assert(offsetof(UPyWidget_LotteryJackpotPanel, TabChangeSpeed) == 0x00060C, "Member 'UPyWidget_LotteryJackpotPanel::TabChangeSpeed' has a wrong offset!");
static_assert(offsetof(UPyWidget_LotteryJackpotPanel, QualityIcons) == 0x000610, "Member 'UPyWidget_LotteryJackpotPanel::QualityIcons' has a wrong offset!");
static_assert(offsetof(UPyWidget_LotteryJackpotPanel, QualityColor) == 0x000620, "Member 'UPyWidget_LotteryJackpotPanel::QualityColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_LotteryJackpotPanel, AppreciateTipsStyle) == 0x000630, "Member 'UPyWidget_LotteryJackpotPanel::AppreciateTipsStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_LotteryJackpotPanel, ReturnMenuStyle) == 0x000640, "Member 'UPyWidget_LotteryJackpotPanel::ReturnMenuStyle' has a wrong offset!");

// PythonClass PyWidget_LotteryJackpotPanel.PyWidget_LotteryJackpotItem_data
// 0x0008 (0x0038 - 0x0030)
class UPyWidget_LotteryJackpotItem_data final : public UObject
{
public:
	int32                                         Quality;                                           // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Weight;                                            // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_LotteryJackpotItem_data">();
	}
	static class UPyWidget_LotteryJackpotItem_data* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_LotteryJackpotItem_data>();
	}
};
static_assert(alignof(UPyWidget_LotteryJackpotItem_data) == 0x000008, "Wrong alignment on UPyWidget_LotteryJackpotItem_data");
static_assert(sizeof(UPyWidget_LotteryJackpotItem_data) == 0x000038, "Wrong size on UPyWidget_LotteryJackpotItem_data");
static_assert(offsetof(UPyWidget_LotteryJackpotItem_data, Quality) == 0x000030, "Member 'UPyWidget_LotteryJackpotItem_data::Quality' has a wrong offset!");
static_assert(offsetof(UPyWidget_LotteryJackpotItem_data, Weight) == 0x000034, "Member 'UPyWidget_LotteryJackpotItem_data::Weight' has a wrong offset!");

// PythonClass PyWidget_LotteryJackpotPanel.PyWidget_LotteryJackpotItem
// 0x0010 (0x05F8 - 0x05E8)
class UPyWidget_LotteryJackpotItem : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSlateBrush>                    QualityIcons;                                      // 0x05E8(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void OnListItemObjectSet(class UObject* ListItemObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_LotteryJackpotItem">();
	}
	static class UPyWidget_LotteryJackpotItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_LotteryJackpotItem>();
	}
};
static_assert(alignof(UPyWidget_LotteryJackpotItem) == 0x000008, "Wrong alignment on UPyWidget_LotteryJackpotItem");
static_assert(sizeof(UPyWidget_LotteryJackpotItem) == 0x0005F8, "Wrong size on UPyWidget_LotteryJackpotItem");
static_assert(offsetof(UPyWidget_LotteryJackpotItem, QualityIcons) == 0x0005E8, "Member 'UPyWidget_LotteryJackpotItem::QualityIcons' has a wrong offset!");

// PythonClass PyWidget_LotteryJackpotPanel.PyWidget_LotteryJackpotTab
// 0x0010 (0x0758 - 0x0748)
class UPyWidget_LotteryJackpotTab : public UPyWidget_Button
{
public:
	TArray<struct FSlateBrush>                    QualityIcons;                                      // 0x0748(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_LotteryJackpotTab">();
	}
	static class UPyWidget_LotteryJackpotTab* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_LotteryJackpotTab>();
	}
};
static_assert(alignof(UPyWidget_LotteryJackpotTab) == 0x000008, "Wrong alignment on UPyWidget_LotteryJackpotTab");
static_assert(sizeof(UPyWidget_LotteryJackpotTab) == 0x000758, "Wrong size on UPyWidget_LotteryJackpotTab");
static_assert(offsetof(UPyWidget_LotteryJackpotTab, QualityIcons) == 0x000748, "Member 'UPyWidget_LotteryJackpotTab::QualityIcons' has a wrong offset!");

}

