#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_RoomSelectMapV2

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "PyWidget_ModuleMainPanel_classes.hpp"
#include "PyWidget_Common_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_RoomSelectMapV2.PyWidget_RoomSelectMapV2
// 0x0090 (0x06A0 - 0x0610)
class UPyWidget_RoomSelectMapV2 : public UPyWidget_ModuleMainPanel
{
public:
	uint8                                         Pad_609[0x7];                                      // 0x0609(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UUserWidget>                MapItem;                                           // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                PageCuttingItem;                                   // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                SelectMapColumnClass;                              // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PageMapItemNum;                                    // 0x0628(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                Mode_Item_Padding_Normal_Left;                     // 0x062C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                Mode_Item_Padding_Normal_Mid;                      // 0x063C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                Mode_Item_Padding_Normal_Right;                    // 0x064C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                Mode_Item_Padding_Hover_Left;                      // 0x065C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                Mode_Item_Padding_Hover_Mid;                       // 0x066C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                Mode_Item_Padding_Hover_Right;                     // 0x067C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         HoveredRenderValue;                                // 0x068C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BG_FadeIn_Delay_Time;                              // 0x0690(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Items_FadeIn_Time;                                 // 0x0694(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableWheelChangePage;                             // 0x0698(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);
	class UWidget* WrapBox_Map_List_Up_Navigation(EUINavigation Navigation_0);
	class UWidget* WrapBox_Map_List_Down_Navigation(EUINavigation Navigation_0);
	class UWidget* WrapBox_Map_List_Left_Or_Right_Navigation(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_RoomSelectMapV2">();
	}
	static class UPyWidget_RoomSelectMapV2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_RoomSelectMapV2>();
	}
};
static_assert(alignof(UPyWidget_RoomSelectMapV2) == 0x000008, "Wrong alignment on UPyWidget_RoomSelectMapV2");
static_assert(sizeof(UPyWidget_RoomSelectMapV2) == 0x0006A0, "Wrong size on UPyWidget_RoomSelectMapV2");
static_assert(offsetof(UPyWidget_RoomSelectMapV2, MapItem) == 0x000610, "Member 'UPyWidget_RoomSelectMapV2::MapItem' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomSelectMapV2, PageCuttingItem) == 0x000618, "Member 'UPyWidget_RoomSelectMapV2::PageCuttingItem' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomSelectMapV2, SelectMapColumnClass) == 0x000620, "Member 'UPyWidget_RoomSelectMapV2::SelectMapColumnClass' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomSelectMapV2, PageMapItemNum) == 0x000628, "Member 'UPyWidget_RoomSelectMapV2::PageMapItemNum' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomSelectMapV2, Mode_Item_Padding_Normal_Left) == 0x00062C, "Member 'UPyWidget_RoomSelectMapV2::Mode_Item_Padding_Normal_Left' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomSelectMapV2, Mode_Item_Padding_Normal_Mid) == 0x00063C, "Member 'UPyWidget_RoomSelectMapV2::Mode_Item_Padding_Normal_Mid' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomSelectMapV2, Mode_Item_Padding_Normal_Right) == 0x00064C, "Member 'UPyWidget_RoomSelectMapV2::Mode_Item_Padding_Normal_Right' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomSelectMapV2, Mode_Item_Padding_Hover_Left) == 0x00065C, "Member 'UPyWidget_RoomSelectMapV2::Mode_Item_Padding_Hover_Left' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomSelectMapV2, Mode_Item_Padding_Hover_Mid) == 0x00066C, "Member 'UPyWidget_RoomSelectMapV2::Mode_Item_Padding_Hover_Mid' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomSelectMapV2, Mode_Item_Padding_Hover_Right) == 0x00067C, "Member 'UPyWidget_RoomSelectMapV2::Mode_Item_Padding_Hover_Right' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomSelectMapV2, HoveredRenderValue) == 0x00068C, "Member 'UPyWidget_RoomSelectMapV2::HoveredRenderValue' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomSelectMapV2, BG_FadeIn_Delay_Time) == 0x000690, "Member 'UPyWidget_RoomSelectMapV2::BG_FadeIn_Delay_Time' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomSelectMapV2, Items_FadeIn_Time) == 0x000694, "Member 'UPyWidget_RoomSelectMapV2::Items_FadeIn_Time' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomSelectMapV2, EnableWheelChangePage) == 0x000698, "Member 'UPyWidget_RoomSelectMapV2::EnableWheelChangePage' has a wrong offset!");

// PythonClass PyWidget_RoomSelectMapV2.PyWidget_RoomSelectMapUnitV2
// 0x0000 (0x08E0 - 0x08E0)
#pragma pack(push, 0x1)
class alignas(0x10) UPyWidget_RoomSelectMapUnitV2 : public UPyWidget_BaseCommonButton
{
public:
	void OnInitialized();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetIsHover(bool IsHover_0);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_RoomSelectMapUnitV2">();
	}
	static class UPyWidget_RoomSelectMapUnitV2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_RoomSelectMapUnitV2>();
	}
};
#pragma pack(pop)
static_assert(alignof(UPyWidget_RoomSelectMapUnitV2) == 0x000010, "Wrong alignment on UPyWidget_RoomSelectMapUnitV2");
static_assert(sizeof(UPyWidget_RoomSelectMapUnitV2) == 0x0008E0, "Wrong size on UPyWidget_RoomSelectMapUnitV2");

}
