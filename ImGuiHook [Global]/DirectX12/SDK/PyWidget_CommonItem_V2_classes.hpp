#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_CommonItem_V2

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Marvel_structs.hpp"
#include "SlateCore_structs.hpp"
#include "PyWidget_Common_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_CommonItem_V2.PyWidget_CommonItem_ItemData
// 0x0018 (0x0048 - 0x0030)
class UPyWidget_CommonItem_ItemData : public UObject
{
public:
	class FString                                 ItemId;                                            // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ItemNum;                                           // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EItemType                                     ItemType;                                          // 0x0044(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWidgetFocusType                              ItemFocusType;                                     // 0x0045(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CommonItem_ItemData">();
	}
	static class UPyWidget_CommonItem_ItemData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CommonItem_ItemData>();
	}
};
static_assert(alignof(UPyWidget_CommonItem_ItemData) == 0x000008, "Wrong alignment on UPyWidget_CommonItem_ItemData");
static_assert(sizeof(UPyWidget_CommonItem_ItemData) == 0x000048, "Wrong size on UPyWidget_CommonItem_ItemData");
static_assert(offsetof(UPyWidget_CommonItem_ItemData, ItemId) == 0x000030, "Member 'UPyWidget_CommonItem_ItemData::ItemId' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem_ItemData, ItemNum) == 0x000040, "Member 'UPyWidget_CommonItem_ItemData::ItemNum' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem_ItemData, ItemType) == 0x000044, "Member 'UPyWidget_CommonItem_ItemData::ItemType' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem_ItemData, ItemFocusType) == 0x000045, "Member 'UPyWidget_CommonItem_ItemData::ItemFocusType' has a wrong offset!");

// PythonClass PyWidget_CommonItem_V2.PyWidget_CommonItem
// 0x0080 (0x0960 - 0x08E0)
class UPyWidget_CommonItem : public UPyWidget_BaseCommonButton
{
public:
	class FString                                 ItemId;                                            // 0x08D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EItemType                                     ItemType;                                          // 0x08E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8E9[0x3];                                      // 0x08E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemNum;                                           // 0x08EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   ItemName;                                          // 0x08F0(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	EItemQualityType                              ItemQuality;                                       // 0x0908(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsSelected;                                        // 0x0909(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsNameVisible;                                     // 0x090A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsEmpty;                                           // 0x090B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsExpire;                                          // 0x090C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsGot;                                             // 0x090D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsShowRed;                                         // 0x090E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsLocked;                                          // 0x090F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsEquipped;                                        // 0x0910(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_911[0x7];                                      // 0x0911(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              ItemSize;                                          // 0x0918(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsOverlayVisible;                                  // 0x0928(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsNeedClick;                                       // 0x0929(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsNeedTips;                                        // 0x092A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_92B[0x5];                                      // 0x092B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarvelImage*                           Img_Item_Icon;                                     // 0x0930(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            ItemGainColor;                                     // 0x0938(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_94C[0x4];                                      // 0x094C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnItemClicked;                                     // 0x0950(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void Construct();
	void OnInitialized();
	void OnItemClicked__DelegateSignature(const class FString& ItemId_0, EItemType ItemType_0);
	void SetIsNameVisible(bool IsNameVisible_0);
	void SetItemName(const class FText& ItemName_0);
	void OnItemSelectionChanged(bool bIsSelected);
	void SetIsHover(bool IsHover_0);
	void SetConvertNum(int32 ConvertNum, const class FString& CurrencyId, bool Small);
	void SetItemData(const class FString& ItemId_0, EItemType ItemType_0, int32 ItemNum_0, int32 Multiple, bool Small);
	void SetItemObject(class UObject* ItemObject);
	void Destruct();
	void SetItemIcon(class UTexture2D* Img_Icon, TSoftObjectPtr<class UTexture2D> Image_Icon_Soft);
	void SetItemIconQuality(EItemQualityType ItemQuality_0);
	void SetItemNum(int32 ItemNum_0, int32 Multiple);
	void SetIsNumVisible(bool IsNumVisible);
	void SetIsEmpty(bool IsEmpty_0);
	void SetIsNeedClick(bool IsNeedClick_0);
	void SetIsNeedTips(bool IsNeedTips_0);
	void SetIsSelected(bool IsSelected_0);
	void SetIsSelectedImmediately(bool IsSelected_0);
	void SetIsGot(bool IsGot_0);
	void SetIsExpire(bool IsExpire_0);
	void SetIsShowRed(bool IsShowRed_0);
	void SetIsActivity(bool IsActivity);
	void SetIsLocked(bool IsLocked_0);
	void SetIsEquipped(bool IsEquipped_0);
	void SetItemSize(const struct FVector2D& ItemSize_0);
	void SetIsOverlay(bool IsOverlay);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void SetIsNewReddotType(bool IsNewReddotType);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CommonItem">();
	}
	static class UPyWidget_CommonItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CommonItem>();
	}
};
static_assert(alignof(UPyWidget_CommonItem) == 0x000010, "Wrong alignment on UPyWidget_CommonItem");
static_assert(sizeof(UPyWidget_CommonItem) == 0x000960, "Wrong size on UPyWidget_CommonItem");
static_assert(offsetof(UPyWidget_CommonItem, ItemId) == 0x0008D8, "Member 'UPyWidget_CommonItem::ItemId' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, ItemType) == 0x0008E8, "Member 'UPyWidget_CommonItem::ItemType' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, ItemNum) == 0x0008EC, "Member 'UPyWidget_CommonItem::ItemNum' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, ItemName) == 0x0008F0, "Member 'UPyWidget_CommonItem::ItemName' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, ItemQuality) == 0x000908, "Member 'UPyWidget_CommonItem::ItemQuality' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, IsSelected) == 0x000909, "Member 'UPyWidget_CommonItem::IsSelected' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, IsNameVisible) == 0x00090A, "Member 'UPyWidget_CommonItem::IsNameVisible' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, IsEmpty) == 0x00090B, "Member 'UPyWidget_CommonItem::IsEmpty' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, IsExpire) == 0x00090C, "Member 'UPyWidget_CommonItem::IsExpire' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, IsGot) == 0x00090D, "Member 'UPyWidget_CommonItem::IsGot' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, IsShowRed) == 0x00090E, "Member 'UPyWidget_CommonItem::IsShowRed' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, IsLocked) == 0x00090F, "Member 'UPyWidget_CommonItem::IsLocked' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, IsEquipped) == 0x000910, "Member 'UPyWidget_CommonItem::IsEquipped' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, ItemSize) == 0x000918, "Member 'UPyWidget_CommonItem::ItemSize' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, IsOverlayVisible) == 0x000928, "Member 'UPyWidget_CommonItem::IsOverlayVisible' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, IsNeedClick) == 0x000929, "Member 'UPyWidget_CommonItem::IsNeedClick' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, IsNeedTips) == 0x00092A, "Member 'UPyWidget_CommonItem::IsNeedTips' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, Img_Item_Icon) == 0x000930, "Member 'UPyWidget_CommonItem::Img_Item_Icon' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, ItemGainColor) == 0x000938, "Member 'UPyWidget_CommonItem::ItemGainColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonItem, OnItemClicked) == 0x000950, "Member 'UPyWidget_CommonItem::OnItemClicked' has a wrong offset!");

}

