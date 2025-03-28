#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mall_Details_Item

#include "Basic.hpp"

#include "PyWidget_MallDetail_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mall_Details_Item.WBP_Mall_Details_Item_C
// 0x0030 (0x0658 - 0x0628)
class UWBP_Mall_Details_Item_C final : public UPyWidget_MallDetail_Item
{
public:
	class UMarvelButton*                          Button_Price;                                      // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Hover;                                         // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Normal;                                        // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Item_V2_Light_C*            Item;                                              // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Price;                                     // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Skin_Price_C*                 Skin_Price;                                        // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mall_Details_Item_C">();
	}
	static class UWBP_Mall_Details_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mall_Details_Item_C>();
	}
};
static_assert(alignof(UWBP_Mall_Details_Item_C) == 0x000008, "Wrong alignment on UWBP_Mall_Details_Item_C");
static_assert(sizeof(UWBP_Mall_Details_Item_C) == 0x000658, "Wrong size on UWBP_Mall_Details_Item_C");
static_assert(offsetof(UWBP_Mall_Details_Item_C, Button_Price) == 0x000628, "Member 'UWBP_Mall_Details_Item_C::Button_Price' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Details_Item_C, Img_Hover) == 0x000630, "Member 'UWBP_Mall_Details_Item_C::Img_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Details_Item_C, Img_Normal) == 0x000638, "Member 'UWBP_Mall_Details_Item_C::Img_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Details_Item_C, Item) == 0x000640, "Member 'UWBP_Mall_Details_Item_C::Item' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Details_Item_C, Overlay_Price) == 0x000648, "Member 'UWBP_Mall_Details_Item_C::Overlay_Price' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Details_Item_C, Skin_Price) == 0x000650, "Member 'UWBP_Mall_Details_Item_C::Skin_Price' has a wrong offset!");

}

