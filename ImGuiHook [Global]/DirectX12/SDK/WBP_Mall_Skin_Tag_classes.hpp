#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mall_Skin_Tag

#include "Basic.hpp"

#include "PyWidget_Mall_Bundle_Tag_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mall_Skin_Tag.WBP_Mall_Skin_Tag_C
// 0x0010 (0x05F8 - 0x05E8)
class UWBP_Mall_Skin_Tag_C final : public UPyWidget_Mall_Bundle_Tag
{
public:
	class UWBP_Mall_Text_Tag_C*                   WBP_Mall_Text_Tag;                                 // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Time_Tag_C*                   WBP_Mall_Time_Tag;                                 // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mall_Skin_Tag_C">();
	}
	static class UWBP_Mall_Skin_Tag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mall_Skin_Tag_C>();
	}
};
static_assert(alignof(UWBP_Mall_Skin_Tag_C) == 0x000008, "Wrong alignment on UWBP_Mall_Skin_Tag_C");
static_assert(sizeof(UWBP_Mall_Skin_Tag_C) == 0x0005F8, "Wrong size on UWBP_Mall_Skin_Tag_C");
static_assert(offsetof(UWBP_Mall_Skin_Tag_C, WBP_Mall_Text_Tag) == 0x0005E8, "Member 'UWBP_Mall_Skin_Tag_C::WBP_Mall_Text_Tag' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Skin_Tag_C, WBP_Mall_Time_Tag) == 0x0005F0, "Member 'UWBP_Mall_Skin_Tag_C::WBP_Mall_Time_Tag' has a wrong offset!");

}
