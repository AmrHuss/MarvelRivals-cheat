#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Common_RightTop_Currency

#include "Basic.hpp"

#include "PyWidget_MallRecharge_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Common_RightTop_Currency.WBP_Common_RightTop_Currency_C
// 0x0018 (0x0600 - 0x05E8)
class UWBP_Common_RightTop_Currency_C final : public UPyWidget_MallRecharge_RightTop
{
public:
	class UMarvelImage*                           Img_Right_Bg_1;                                    // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Price_C*                      WBP_Mall_Price_01;                                 // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Price_C*                      WBP_Mall_Price_02;                                 // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Common_RightTop_Currency_C">();
	}
	static class UWBP_Common_RightTop_Currency_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Common_RightTop_Currency_C>();
	}
};
static_assert(alignof(UWBP_Common_RightTop_Currency_C) == 0x000008, "Wrong alignment on UWBP_Common_RightTop_Currency_C");
static_assert(sizeof(UWBP_Common_RightTop_Currency_C) == 0x000600, "Wrong size on UWBP_Common_RightTop_Currency_C");
static_assert(offsetof(UWBP_Common_RightTop_Currency_C, Img_Right_Bg_1) == 0x0005E8, "Member 'UWBP_Common_RightTop_Currency_C::Img_Right_Bg_1' has a wrong offset!");
static_assert(offsetof(UWBP_Common_RightTop_Currency_C, WBP_Mall_Price_01) == 0x0005F0, "Member 'UWBP_Common_RightTop_Currency_C::WBP_Mall_Price_01' has a wrong offset!");
static_assert(offsetof(UWBP_Common_RightTop_Currency_C, WBP_Mall_Price_02) == 0x0005F8, "Member 'UWBP_Common_RightTop_Currency_C::WBP_Mall_Price_02' has a wrong offset!");

}
