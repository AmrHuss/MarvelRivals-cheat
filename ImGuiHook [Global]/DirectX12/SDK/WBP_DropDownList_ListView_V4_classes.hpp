#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DropDownList_ListView_V4

#include "Basic.hpp"

#include "PyWidget_DropDownList_ListView_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DropDownList_ListView_V4.WBP_DropDownList_ListView_V4_C
// 0x0070 (0x0690 - 0x0620)
class UWBP_DropDownList_ListView_V4_C final : public UPyWidget_DropDownList_ListView
{
public:
	class UBorder*                                Bdr_Bg;                                            // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_FullScreenButton_C*         Btn_Extended;                                      // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Main;                                  // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              ListView;                                          // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Main;                                      // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Padding_Img;                                       // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelScrollBox*                       ScrollBox_ItemList;                                // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_BG;                                        // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VerBox_ItemList;                                   // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DropDown_Item_V4_C*                WBP_DropDown_Item_V4;                              // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DropDown_Item_V4_C*                WBP_DropDown_Item_V4_1;                            // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DropDown_Item_V4_C*                WBP_DropDown_Item_V4_2;                            // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DropDown_Item_V4_C*                WBP_DropDown_Item_V4_3;                            // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DropDown_Item_V4_C*                WBP_DropDown_Item_V4_4;                            // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DropDownList_ListView_V4_C">();
	}
	static class UWBP_DropDownList_ListView_V4_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DropDownList_ListView_V4_C>();
	}
};
static_assert(alignof(UWBP_DropDownList_ListView_V4_C) == 0x000008, "Wrong alignment on UWBP_DropDownList_ListView_V4_C");
static_assert(sizeof(UWBP_DropDownList_ListView_V4_C) == 0x000690, "Wrong size on UWBP_DropDownList_ListView_V4_C");
static_assert(offsetof(UWBP_DropDownList_ListView_V4_C, Bdr_Bg) == 0x000620, "Member 'UWBP_DropDownList_ListView_V4_C::Bdr_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_DropDownList_ListView_V4_C, Btn_Extended) == 0x000628, "Member 'UWBP_DropDownList_ListView_V4_C::Btn_Extended' has a wrong offset!");
static_assert(offsetof(UWBP_DropDownList_ListView_V4_C, CanvasPanel_Main) == 0x000630, "Member 'UWBP_DropDownList_ListView_V4_C::CanvasPanel_Main' has a wrong offset!");
static_assert(offsetof(UWBP_DropDownList_ListView_V4_C, ListView) == 0x000638, "Member 'UWBP_DropDownList_ListView_V4_C::ListView' has a wrong offset!");
static_assert(offsetof(UWBP_DropDownList_ListView_V4_C, Overlay_Main) == 0x000640, "Member 'UWBP_DropDownList_ListView_V4_C::Overlay_Main' has a wrong offset!");
static_assert(offsetof(UWBP_DropDownList_ListView_V4_C, Padding_Img) == 0x000648, "Member 'UWBP_DropDownList_ListView_V4_C::Padding_Img' has a wrong offset!");
static_assert(offsetof(UWBP_DropDownList_ListView_V4_C, ScrollBox_ItemList) == 0x000650, "Member 'UWBP_DropDownList_ListView_V4_C::ScrollBox_ItemList' has a wrong offset!");
static_assert(offsetof(UWBP_DropDownList_ListView_V4_C, SizeBox_BG) == 0x000658, "Member 'UWBP_DropDownList_ListView_V4_C::SizeBox_BG' has a wrong offset!");
static_assert(offsetof(UWBP_DropDownList_ListView_V4_C, VerBox_ItemList) == 0x000660, "Member 'UWBP_DropDownList_ListView_V4_C::VerBox_ItemList' has a wrong offset!");
static_assert(offsetof(UWBP_DropDownList_ListView_V4_C, WBP_DropDown_Item_V4) == 0x000668, "Member 'UWBP_DropDownList_ListView_V4_C::WBP_DropDown_Item_V4' has a wrong offset!");
static_assert(offsetof(UWBP_DropDownList_ListView_V4_C, WBP_DropDown_Item_V4_1) == 0x000670, "Member 'UWBP_DropDownList_ListView_V4_C::WBP_DropDown_Item_V4_1' has a wrong offset!");
static_assert(offsetof(UWBP_DropDownList_ListView_V4_C, WBP_DropDown_Item_V4_2) == 0x000678, "Member 'UWBP_DropDownList_ListView_V4_C::WBP_DropDown_Item_V4_2' has a wrong offset!");
static_assert(offsetof(UWBP_DropDownList_ListView_V4_C, WBP_DropDown_Item_V4_3) == 0x000680, "Member 'UWBP_DropDownList_ListView_V4_C::WBP_DropDown_Item_V4_3' has a wrong offset!");
static_assert(offsetof(UWBP_DropDownList_ListView_V4_C, WBP_DropDown_Item_V4_4) == 0x000688, "Member 'UWBP_DropDownList_ListView_V4_C::WBP_DropDown_Item_V4_4' has a wrong offset!");

}
