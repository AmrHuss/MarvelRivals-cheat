#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_SignUpTag

#include "Basic.hpp"

#include "PyWidget_League_SignUpConfirm_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_SignUpTag.WBP_League_SignUpTag_C
// 0x0030 (0x0630 - 0x0600)
class UWBP_League_SignUpTag_C final : public UPyWidget_League_SignUpTag
{
public:
	class UMarvelImage*                           Img_Icon;                                          // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Icon2;                                         // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_DanIcon;                                   // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Regions;                                      // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Rank_DanIcon_Small2_C*             WBP_DanIcon;                                       // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Com_Platform_HList_C*              WBP_Platform_HList;                                // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_SignUpTag_C">();
	}
	static class UWBP_League_SignUpTag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_SignUpTag_C>();
	}
};
static_assert(alignof(UWBP_League_SignUpTag_C) == 0x000008, "Wrong alignment on UWBP_League_SignUpTag_C");
static_assert(sizeof(UWBP_League_SignUpTag_C) == 0x000630, "Wrong size on UWBP_League_SignUpTag_C");
static_assert(offsetof(UWBP_League_SignUpTag_C, Img_Icon) == 0x000600, "Member 'UWBP_League_SignUpTag_C::Img_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_League_SignUpTag_C, Img_Icon2) == 0x000608, "Member 'UWBP_League_SignUpTag_C::Img_Icon2' has a wrong offset!");
static_assert(offsetof(UWBP_League_SignUpTag_C, SizeBox_DanIcon) == 0x000610, "Member 'UWBP_League_SignUpTag_C::SizeBox_DanIcon' has a wrong offset!");
static_assert(offsetof(UWBP_League_SignUpTag_C, Text_Regions) == 0x000618, "Member 'UWBP_League_SignUpTag_C::Text_Regions' has a wrong offset!");
static_assert(offsetof(UWBP_League_SignUpTag_C, WBP_DanIcon) == 0x000620, "Member 'UWBP_League_SignUpTag_C::WBP_DanIcon' has a wrong offset!");
static_assert(offsetof(UWBP_League_SignUpTag_C, WBP_Platform_HList) == 0x000628, "Member 'UWBP_League_SignUpTag_C::WBP_Platform_HList' has a wrong offset!");

}

