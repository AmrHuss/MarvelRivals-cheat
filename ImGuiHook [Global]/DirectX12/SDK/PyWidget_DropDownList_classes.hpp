#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_DropDownList

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "PyWidget_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_DropDownList.PyWidget_DropDownList
// 0x0E18 (0x1560 - 0x0748)
class UPyWidget_DropDownList : public UPyWidget_Button
{
public:
	TArray<class FText>                           ItemTextList;                                      // 0x0748(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                     ItemIconList;                                      // 0x0758(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<int32>                                 ItemHeroIDList;                                    // 0x0768(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                   ItemColorList;                                     // 0x0778(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                   ItemLeftColorList;                                 // 0x0788(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class FString>                         ItemCustomeTagList;                                // 0x0798(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<bool>                                  ItemEnableList;                                    // 0x07A8(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                ItemIconWidget;                                    // 0x07B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                HeroIconWidget;                                    // 0x07C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                PlatformIconWidget;                                // 0x07C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 ItemPlatformList;                                  // 0x07D0(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                Title_Padding;                                     // 0x07E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FButtonStyle                           Title_BtnStyle;                                    // 0x07F0(0x0400)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector2D                              Title_BtnSize;                                     // 0x0BF0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                Title_TexturePadding;                              // 0x0C00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                            Title_TextColor;                                   // 0x0C10(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                         Pad_C24[0xC];                                      // 0x0C24(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Arrow_Brush;                                       // 0x0C30(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FMargin                                Arrow_Padding;                                     // 0x0D00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                            Title_TipsBrush;                                   // 0x0D10(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                         Item_FadeInTime;                                   // 0x0DE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                Item_Padding;                                      // 0x0DE4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_DF4[0xC];                                      // 0x0DF4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Item_BGBrush;                                      // 0x0E00(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FButtonStyle                           Item_BtnStyle;                                     // 0x0ED0(0x0400)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector2D                              Item_BtnSize;                                      // 0x12D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                Item_BtnPadding;                                   // 0x12E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                            Item_TextDefaultColor;                             // 0x12F0(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            Item_TextSelectedColor;                            // 0x1304(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            Item_TextHoveredColor;                             // 0x1318(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                         Pad_132C[0x4];                                     // 0x132C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Item_TipsBrush;                                    // 0x1330(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                            Item_CheckBrush;                                   // 0x1400(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FMargin                                Item_ScrollPadding;                                // 0x14D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          IsExtended;                                        // 0x14E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14E1[0x3];                                     // 0x14E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DefaultItemID;                                     // 0x14E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ItemId;                                            // 0x14E8(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MinScrollItemThreshold;                            // 0x14EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IconColorAutoChange;                               // 0x14F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          MonitorScrollBox;                                  // 0x14F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsPreShowTips;                                     // 0x14F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14F3[0x5];                                     // 0x14F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   AllHeroText;                                       // 0x14F8(0x0018)(BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                             AllHeroIcon;                                       // 0x1510(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DontSetDefaultItemIDOnUpdateStyle;                 // 0x1518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1519[0x7];                                     // 0x1519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnExtendChanged;                                   // 0x1520(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnItemIDChanged;                                   // 0x1530(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnHeroIDChanged;                                   // 0x1540(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnCustomeTagChanged;                               // 0x1550(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnExtendChanged__DelegateSignature(bool IsExtended_0);
	void OnItemIDChanged__DelegateSignature(int32 ItemId_0);
	void OnHeroIDChanged__DelegateSignature(int32 HeroID);
	void OnCustomeTagChanged__DelegateSignature(const class FString& CustomeTag);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	class UWidget* OnGetMenuContent();
	bool ShouldEnableInput();
	void OnCascadingVisibleChanged(bool Visible);
	void SetIsExtend(bool IsExtended_0);
	void SetEnabled(bool Enabled);
	int32 GetItemID();
	void SetItemID(int32 ItemId_0);
	void SetItemTextList(const TArray<class FText>& ItemTextList_0);
	void SetItemIconList(const TArray<class UTexture2D*>& ItemIconList_0);
	void SetItemHeroIDList(const TArray<int32>& ItemHeroIDList_0);
	void SetItemColorList(const TArray<struct FLinearColor>& ItemColorList_0);
	void SetItemLeftColorList(const TArray<struct FLinearColor>& ItemLeftColorList_0);
	void SetItemCustomeTagList(const TArray<class FString>& ItemCustomeTagList_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_DropDownList">();
	}
	static class UPyWidget_DropDownList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_DropDownList>();
	}
};
static_assert(alignof(UPyWidget_DropDownList) == 0x000010, "Wrong alignment on UPyWidget_DropDownList");
static_assert(sizeof(UPyWidget_DropDownList) == 0x001560, "Wrong size on UPyWidget_DropDownList");
static_assert(offsetof(UPyWidget_DropDownList, ItemTextList) == 0x000748, "Member 'UPyWidget_DropDownList::ItemTextList' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, ItemIconList) == 0x000758, "Member 'UPyWidget_DropDownList::ItemIconList' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, ItemHeroIDList) == 0x000768, "Member 'UPyWidget_DropDownList::ItemHeroIDList' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, ItemColorList) == 0x000778, "Member 'UPyWidget_DropDownList::ItemColorList' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, ItemLeftColorList) == 0x000788, "Member 'UPyWidget_DropDownList::ItemLeftColorList' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, ItemCustomeTagList) == 0x000798, "Member 'UPyWidget_DropDownList::ItemCustomeTagList' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, ItemEnableList) == 0x0007A8, "Member 'UPyWidget_DropDownList::ItemEnableList' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, ItemIconWidget) == 0x0007B8, "Member 'UPyWidget_DropDownList::ItemIconWidget' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, HeroIconWidget) == 0x0007C0, "Member 'UPyWidget_DropDownList::HeroIconWidget' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, PlatformIconWidget) == 0x0007C8, "Member 'UPyWidget_DropDownList::PlatformIconWidget' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, ItemPlatformList) == 0x0007D0, "Member 'UPyWidget_DropDownList::ItemPlatformList' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Title_Padding) == 0x0007E0, "Member 'UPyWidget_DropDownList::Title_Padding' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Title_BtnStyle) == 0x0007F0, "Member 'UPyWidget_DropDownList::Title_BtnStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Title_BtnSize) == 0x000BF0, "Member 'UPyWidget_DropDownList::Title_BtnSize' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Title_TexturePadding) == 0x000C00, "Member 'UPyWidget_DropDownList::Title_TexturePadding' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Title_TextColor) == 0x000C10, "Member 'UPyWidget_DropDownList::Title_TextColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Arrow_Brush) == 0x000C30, "Member 'UPyWidget_DropDownList::Arrow_Brush' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Arrow_Padding) == 0x000D00, "Member 'UPyWidget_DropDownList::Arrow_Padding' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Title_TipsBrush) == 0x000D10, "Member 'UPyWidget_DropDownList::Title_TipsBrush' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Item_FadeInTime) == 0x000DE0, "Member 'UPyWidget_DropDownList::Item_FadeInTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Item_Padding) == 0x000DE4, "Member 'UPyWidget_DropDownList::Item_Padding' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Item_BGBrush) == 0x000E00, "Member 'UPyWidget_DropDownList::Item_BGBrush' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Item_BtnStyle) == 0x000ED0, "Member 'UPyWidget_DropDownList::Item_BtnStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Item_BtnSize) == 0x0012D0, "Member 'UPyWidget_DropDownList::Item_BtnSize' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Item_BtnPadding) == 0x0012E0, "Member 'UPyWidget_DropDownList::Item_BtnPadding' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Item_TextDefaultColor) == 0x0012F0, "Member 'UPyWidget_DropDownList::Item_TextDefaultColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Item_TextSelectedColor) == 0x001304, "Member 'UPyWidget_DropDownList::Item_TextSelectedColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Item_TextHoveredColor) == 0x001318, "Member 'UPyWidget_DropDownList::Item_TextHoveredColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Item_TipsBrush) == 0x001330, "Member 'UPyWidget_DropDownList::Item_TipsBrush' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Item_CheckBrush) == 0x001400, "Member 'UPyWidget_DropDownList::Item_CheckBrush' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, Item_ScrollPadding) == 0x0014D0, "Member 'UPyWidget_DropDownList::Item_ScrollPadding' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, IsExtended) == 0x0014E0, "Member 'UPyWidget_DropDownList::IsExtended' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, DefaultItemID) == 0x0014E4, "Member 'UPyWidget_DropDownList::DefaultItemID' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, ItemId) == 0x0014E8, "Member 'UPyWidget_DropDownList::ItemId' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, MinScrollItemThreshold) == 0x0014EC, "Member 'UPyWidget_DropDownList::MinScrollItemThreshold' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, IconColorAutoChange) == 0x0014F0, "Member 'UPyWidget_DropDownList::IconColorAutoChange' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, MonitorScrollBox) == 0x0014F1, "Member 'UPyWidget_DropDownList::MonitorScrollBox' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, IsPreShowTips) == 0x0014F2, "Member 'UPyWidget_DropDownList::IsPreShowTips' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, AllHeroText) == 0x0014F8, "Member 'UPyWidget_DropDownList::AllHeroText' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, AllHeroIcon) == 0x001510, "Member 'UPyWidget_DropDownList::AllHeroIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, DontSetDefaultItemIDOnUpdateStyle) == 0x001518, "Member 'UPyWidget_DropDownList::DontSetDefaultItemIDOnUpdateStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, OnExtendChanged) == 0x001520, "Member 'UPyWidget_DropDownList::OnExtendChanged' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, OnItemIDChanged) == 0x001530, "Member 'UPyWidget_DropDownList::OnItemIDChanged' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, OnHeroIDChanged) == 0x001540, "Member 'UPyWidget_DropDownList::OnHeroIDChanged' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList, OnCustomeTagChanged) == 0x001550, "Member 'UPyWidget_DropDownList::OnCustomeTagChanged' has a wrong offset!");

}
