#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Privilege_Switcher

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Privilege_Switcher.WBP_Privilege_Switcher_C
// 0x0010 (0x03C8 - 0x03B8)
class UWBP_Privilege_Switcher_C final : public UUserWidget
{
public:
	class UMarvelButton*                          Btn_Main;                                          // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Switch_V3_C*                WBP_Common_Switch_V3;                              // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Privilege_Switcher_C">();
	}
	static class UWBP_Privilege_Switcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Privilege_Switcher_C>();
	}
};
static_assert(alignof(UWBP_Privilege_Switcher_C) == 0x000008, "Wrong alignment on UWBP_Privilege_Switcher_C");
static_assert(sizeof(UWBP_Privilege_Switcher_C) == 0x0003C8, "Wrong size on UWBP_Privilege_Switcher_C");
static_assert(offsetof(UWBP_Privilege_Switcher_C, Btn_Main) == 0x0003B8, "Member 'UWBP_Privilege_Switcher_C::Btn_Main' has a wrong offset!");
static_assert(offsetof(UWBP_Privilege_Switcher_C, WBP_Common_Switch_V3) == 0x0003C0, "Member 'UWBP_Privilege_Switcher_C::WBP_Common_Switch_V3' has a wrong offset!");

}
