#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ComList_Lv2

#include "Basic.hpp"

#include "PyWidget_Common_ListButton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ComList_Lv2.WBP_ComList_Lv2_C
// 0x0080 (0x09F0 - 0x0970)
class UWBP_ComList_Lv2_C final : public UPyWidget_CommonVXButtonV3
{
public:
	class UWidgetAnimation*                       Anim_SetSelect;                                    // 0x0970(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Select;                                       // 0x0978(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Item_Hover;                                    // 0x0980(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_GrayOut;                                   // 0x0988(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Hover;                                     // 0x0990(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Hover_GrayOut;                             // 0x0998(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Normal_GrayOut;                            // 0x09A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Ordinary;                                  // 0x09A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Select;                                    // 0x09B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Select_GrayOut;                            // 0x09B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Item;                                      // 0x09C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_SelectHead;                                // 0x09C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_SelectHead_GrayOut;                        // 0x09D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_ListContent;                                  // 0x09D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_ListSelectHead;                               // 0x09E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ComList_Lv2_C">();
	}
	static class UWBP_ComList_Lv2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ComList_Lv2_C>();
	}
};
static_assert(alignof(UWBP_ComList_Lv2_C) == 0x000010, "Wrong alignment on UWBP_ComList_Lv2_C");
static_assert(sizeof(UWBP_ComList_Lv2_C) == 0x0009F0, "Wrong size on UWBP_ComList_Lv2_C");
static_assert(offsetof(UWBP_ComList_Lv2_C, Anim_SetSelect) == 0x000970, "Member 'UWBP_ComList_Lv2_C::Anim_SetSelect' has a wrong offset!");
static_assert(offsetof(UWBP_ComList_Lv2_C, Anim_Select) == 0x000978, "Member 'UWBP_ComList_Lv2_C::Anim_Select' has a wrong offset!");
static_assert(offsetof(UWBP_ComList_Lv2_C, Img_Item_Hover) == 0x000980, "Member 'UWBP_ComList_Lv2_C::Img_Item_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_ComList_Lv2_C, Overlay_GrayOut) == 0x000988, "Member 'UWBP_ComList_Lv2_C::Overlay_GrayOut' has a wrong offset!");
static_assert(offsetof(UWBP_ComList_Lv2_C, Overlay_Hover) == 0x000990, "Member 'UWBP_ComList_Lv2_C::Overlay_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_ComList_Lv2_C, Overlay_Hover_GrayOut) == 0x000998, "Member 'UWBP_ComList_Lv2_C::Overlay_Hover_GrayOut' has a wrong offset!");
static_assert(offsetof(UWBP_ComList_Lv2_C, Overlay_Normal_GrayOut) == 0x0009A0, "Member 'UWBP_ComList_Lv2_C::Overlay_Normal_GrayOut' has a wrong offset!");
static_assert(offsetof(UWBP_ComList_Lv2_C, Overlay_Ordinary) == 0x0009A8, "Member 'UWBP_ComList_Lv2_C::Overlay_Ordinary' has a wrong offset!");
static_assert(offsetof(UWBP_ComList_Lv2_C, Overlay_Select) == 0x0009B0, "Member 'UWBP_ComList_Lv2_C::Overlay_Select' has a wrong offset!");
static_assert(offsetof(UWBP_ComList_Lv2_C, Overlay_Select_GrayOut) == 0x0009B8, "Member 'UWBP_ComList_Lv2_C::Overlay_Select_GrayOut' has a wrong offset!");
static_assert(offsetof(UWBP_ComList_Lv2_C, SizeBox_Item) == 0x0009C0, "Member 'UWBP_ComList_Lv2_C::SizeBox_Item' has a wrong offset!");
static_assert(offsetof(UWBP_ComList_Lv2_C, SizeBox_SelectHead) == 0x0009C8, "Member 'UWBP_ComList_Lv2_C::SizeBox_SelectHead' has a wrong offset!");
static_assert(offsetof(UWBP_ComList_Lv2_C, SizeBox_SelectHead_GrayOut) == 0x0009D0, "Member 'UWBP_ComList_Lv2_C::SizeBox_SelectHead_GrayOut' has a wrong offset!");
static_assert(offsetof(UWBP_ComList_Lv2_C, Slot_ListContent) == 0x0009D8, "Member 'UWBP_ComList_Lv2_C::Slot_ListContent' has a wrong offset!");
static_assert(offsetof(UWBP_ComList_Lv2_C, Slot_ListSelectHead) == 0x0009E0, "Member 'UWBP_ComList_Lv2_C::Slot_ListSelectHead' has a wrong offset!");

}
