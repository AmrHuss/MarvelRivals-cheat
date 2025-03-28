#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mall_Skin_PriceSmall

#include "Basic.hpp"

#include "PyWidget_MallPrice_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mall_Skin_PriceSmall.WBP_Mall_Skin_PriceSmall_C
// 0x0020 (0x0830 - 0x0810)
class UWBP_Mall_Skin_PriceSmall_C final : public UPyWidget_MallPrice
{
public:
	class UMarvelImage*                           Img_Old_Price;                                     // 0x0808(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Price_Icon;                                    // 0x0810(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Old_Price;                                 // 0x0818(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Old_Price;                                    // 0x0820(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Price_Number;                                 // 0x0828(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mall_Skin_PriceSmall_C">();
	}
	static class UWBP_Mall_Skin_PriceSmall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mall_Skin_PriceSmall_C>();
	}
};
static_assert(alignof(UWBP_Mall_Skin_PriceSmall_C) == 0x000010, "Wrong alignment on UWBP_Mall_Skin_PriceSmall_C");
static_assert(sizeof(UWBP_Mall_Skin_PriceSmall_C) == 0x000830, "Wrong size on UWBP_Mall_Skin_PriceSmall_C");
static_assert(offsetof(UWBP_Mall_Skin_PriceSmall_C, Img_Old_Price) == 0x000808, "Member 'UWBP_Mall_Skin_PriceSmall_C::Img_Old_Price' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Skin_PriceSmall_C, Img_Price_Icon) == 0x000810, "Member 'UWBP_Mall_Skin_PriceSmall_C::Img_Price_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Skin_PriceSmall_C, Overlay_Old_Price) == 0x000818, "Member 'UWBP_Mall_Skin_PriceSmall_C::Overlay_Old_Price' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Skin_PriceSmall_C, Text_Old_Price) == 0x000820, "Member 'UWBP_Mall_Skin_PriceSmall_C::Text_Old_Price' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Skin_PriceSmall_C, Text_Price_Number) == 0x000828, "Member 'UWBP_Mall_Skin_PriceSmall_C::Text_Price_Number' has a wrong offset!");

}

