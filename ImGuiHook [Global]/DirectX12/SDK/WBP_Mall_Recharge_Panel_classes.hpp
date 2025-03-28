#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mall_Recharge_Panel

#include "Basic.hpp"

#include "PyWidget_MallRecharge_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mall_Recharge_Panel.WBP_Mall_Recharge_Panel_C
// 0x0040 (0x0650 - 0x0610)
class UWBP_Mall_Recharge_Panel_C final : public UPyWidget_MallRecharge
{
public:
	class UWBP_Common_RightTop_Currency_C*        Common_RightTop_Currency;                          // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Black;                                         // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Recharge_Item01_C*            WBP_Mall_Recharge_Item01;                          // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Recharge_Item01_C*            WBP_Mall_Recharge_Item02;                          // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Recharge_Item02_C*            WBP_Mall_Recharge_Item03;                          // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Recharge_Item02_C*            WBP_Mall_Recharge_Item04;                          // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Recharge_Item02_C*            WBP_Mall_Recharge_Item05;                          // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mall_Recharge_Panel_C">();
	}
	static class UWBP_Mall_Recharge_Panel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mall_Recharge_Panel_C>();
	}
};
static_assert(alignof(UWBP_Mall_Recharge_Panel_C) == 0x000008, "Wrong alignment on UWBP_Mall_Recharge_Panel_C");
static_assert(sizeof(UWBP_Mall_Recharge_Panel_C) == 0x000650, "Wrong size on UWBP_Mall_Recharge_Panel_C");
static_assert(offsetof(UWBP_Mall_Recharge_Panel_C, Common_RightTop_Currency) == 0x000610, "Member 'UWBP_Mall_Recharge_Panel_C::Common_RightTop_Currency' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recharge_Panel_C, Img_Black) == 0x000618, "Member 'UWBP_Mall_Recharge_Panel_C::Img_Black' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recharge_Panel_C, RetainerBox_0) == 0x000620, "Member 'UWBP_Mall_Recharge_Panel_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recharge_Panel_C, WBP_Mall_Recharge_Item01) == 0x000628, "Member 'UWBP_Mall_Recharge_Panel_C::WBP_Mall_Recharge_Item01' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recharge_Panel_C, WBP_Mall_Recharge_Item02) == 0x000630, "Member 'UWBP_Mall_Recharge_Panel_C::WBP_Mall_Recharge_Item02' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recharge_Panel_C, WBP_Mall_Recharge_Item03) == 0x000638, "Member 'UWBP_Mall_Recharge_Panel_C::WBP_Mall_Recharge_Item03' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recharge_Panel_C, WBP_Mall_Recharge_Item04) == 0x000640, "Member 'UWBP_Mall_Recharge_Panel_C::WBP_Mall_Recharge_Item04' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recharge_Panel_C, WBP_Mall_Recharge_Item05) == 0x000648, "Member 'UWBP_Mall_Recharge_Panel_C::WBP_Mall_Recharge_Item05' has a wrong offset!");

}

