#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_MailUnit

#include "Basic.hpp"

#include "Marvel_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_MailUnit.PyMailDataItem
// 0x0008 (0x0038 - 0x0030)
class UPyMailDataItem final : public UObject
{
public:
	bool                                          IsSelected;                                        // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetIsSelected(bool IsSelected_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyMailDataItem">();
	}
	static class UPyMailDataItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyMailDataItem>();
	}
};
static_assert(alignof(UPyMailDataItem) == 0x000008, "Wrong alignment on UPyMailDataItem");
static_assert(sizeof(UPyMailDataItem) == 0x000038, "Wrong size on UPyMailDataItem");
static_assert(offsetof(UPyMailDataItem, IsSelected) == 0x000030, "Member 'UPyMailDataItem::IsSelected' has a wrong offset!");

// PythonClass PyWidget_MailUnit.PyWidget_MailUnit
// 0x0078 (0x0620 - 0x05A8)
class UPyWidget_MailUnit : public UWidget_ListEntry
{
public:
	float                                         MailReadOpacity;                                   // 0x05A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5AC[0x4];                                      // 0x05AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             ImgMailClose;                                      // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             ImgMailOpen;                                       // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             ImgGiftClose;                                      // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             ImgGiftOpen;                                       // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnitFadeInSpeed;                                   // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           UnSelectedColor;                                   // 0x05D4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SelectedColor;                                     // 0x05E4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            SelectedTextColor;                                 // 0x05F4(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            UnSelectedTextColor;                               // 0x0608(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	void SetPlayTime(float Time);
	void OnInitialized();
	void Construct();
	void Destruct();
	void Refresh();
	void MarvelSetVisible(bool bTmpVisible);
	void SetAnimationStart(float Time);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemSelectionChanged(bool IsSelected);
	void SetCurItemSelected(bool Selected);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_MailUnit">();
	}
	static class UPyWidget_MailUnit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_MailUnit>();
	}
};
static_assert(alignof(UPyWidget_MailUnit) == 0x000008, "Wrong alignment on UPyWidget_MailUnit");
static_assert(sizeof(UPyWidget_MailUnit) == 0x000620, "Wrong size on UPyWidget_MailUnit");
static_assert(offsetof(UPyWidget_MailUnit, MailReadOpacity) == 0x0005A8, "Member 'UPyWidget_MailUnit::MailReadOpacity' has a wrong offset!");
static_assert(offsetof(UPyWidget_MailUnit, ImgMailClose) == 0x0005B0, "Member 'UPyWidget_MailUnit::ImgMailClose' has a wrong offset!");
static_assert(offsetof(UPyWidget_MailUnit, ImgMailOpen) == 0x0005B8, "Member 'UPyWidget_MailUnit::ImgMailOpen' has a wrong offset!");
static_assert(offsetof(UPyWidget_MailUnit, ImgGiftClose) == 0x0005C0, "Member 'UPyWidget_MailUnit::ImgGiftClose' has a wrong offset!");
static_assert(offsetof(UPyWidget_MailUnit, ImgGiftOpen) == 0x0005C8, "Member 'UPyWidget_MailUnit::ImgGiftOpen' has a wrong offset!");
static_assert(offsetof(UPyWidget_MailUnit, UnitFadeInSpeed) == 0x0005D0, "Member 'UPyWidget_MailUnit::UnitFadeInSpeed' has a wrong offset!");
static_assert(offsetof(UPyWidget_MailUnit, UnSelectedColor) == 0x0005D4, "Member 'UPyWidget_MailUnit::UnSelectedColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_MailUnit, SelectedColor) == 0x0005E4, "Member 'UPyWidget_MailUnit::SelectedColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_MailUnit, SelectedTextColor) == 0x0005F4, "Member 'UPyWidget_MailUnit::SelectedTextColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_MailUnit, UnSelectedTextColor) == 0x000608, "Member 'UPyWidget_MailUnit::UnSelectedTextColor' has a wrong offset!");

}
