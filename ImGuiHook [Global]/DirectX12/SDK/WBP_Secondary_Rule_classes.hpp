#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Secondary_Rule

#include "Basic.hpp"

#include "PyWidget_Secondary_Rule_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Secondary_Rule.WBP_Secondary_Rule_C
// 0x0020 (0x0610 - 0x05F0)
class UWBP_Secondary_Rule_C final : public UPyWidget_Secondary_Rule
{
public:
	class UMarvelButton*                          Btn_Focus;                                         // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_bg;                                            // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Rule;                                      // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelRichTextBlock*                   Tex_Conent;                                        // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Secondary_Rule_C">();
	}
	static class UWBP_Secondary_Rule_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Secondary_Rule_C>();
	}
};
static_assert(alignof(UWBP_Secondary_Rule_C) == 0x000008, "Wrong alignment on UWBP_Secondary_Rule_C");
static_assert(sizeof(UWBP_Secondary_Rule_C) == 0x000610, "Wrong size on UWBP_Secondary_Rule_C");
static_assert(offsetof(UWBP_Secondary_Rule_C, Btn_Focus) == 0x0005F0, "Member 'UWBP_Secondary_Rule_C::Btn_Focus' has a wrong offset!");
static_assert(offsetof(UWBP_Secondary_Rule_C, Img_bg) == 0x0005F8, "Member 'UWBP_Secondary_Rule_C::Img_bg' has a wrong offset!");
static_assert(offsetof(UWBP_Secondary_Rule_C, SizeBox_Rule) == 0x000600, "Member 'UWBP_Secondary_Rule_C::SizeBox_Rule' has a wrong offset!");
static_assert(offsetof(UWBP_Secondary_Rule_C, Tex_Conent) == 0x000608, "Member 'UWBP_Secondary_Rule_C::Tex_Conent' has a wrong offset!");

}
