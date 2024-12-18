#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InvitePopup_Press

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InvitePopup_Press.WBP_InvitePopup_Press_C
// 0x0020 (0x03D8 - 0x03B8)
class UWBP_InvitePopup_Press_C final : public UUserWidget
{
public:
	class UMarvelImage*                           Img_bg;                                            // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_KeyWidget_C*                KeyWidgetBP;                                       // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Info;                                         // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Tips;                                         // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InvitePopup_Press_C">();
	}
	static class UWBP_InvitePopup_Press_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InvitePopup_Press_C>();
	}
};
static_assert(alignof(UWBP_InvitePopup_Press_C) == 0x000008, "Wrong alignment on UWBP_InvitePopup_Press_C");
static_assert(sizeof(UWBP_InvitePopup_Press_C) == 0x0003D8, "Wrong size on UWBP_InvitePopup_Press_C");
static_assert(offsetof(UWBP_InvitePopup_Press_C, Img_bg) == 0x0003B8, "Member 'UWBP_InvitePopup_Press_C::Img_bg' has a wrong offset!");
static_assert(offsetof(UWBP_InvitePopup_Press_C, KeyWidgetBP) == 0x0003C0, "Member 'UWBP_InvitePopup_Press_C::KeyWidgetBP' has a wrong offset!");
static_assert(offsetof(UWBP_InvitePopup_Press_C, Text_Info) == 0x0003C8, "Member 'UWBP_InvitePopup_Press_C::Text_Info' has a wrong offset!");
static_assert(offsetof(UWBP_InvitePopup_Press_C, Text_Tips) == 0x0003D0, "Member 'UWBP_InvitePopup_Press_C::Text_Tips' has a wrong offset!");

}

