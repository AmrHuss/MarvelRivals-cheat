#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Voice_Report_Btn

#include "Basic.hpp"

#include "PyWidget_VoiceChatPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Voice_Report_Btn.WBP_Voice_Report_Btn_C
// 0x0010 (0x0770 - 0x0760)
class UWBP_Voice_Report_Btn_C final : public UPyWidget_VoiceReportButton
{
public:
	class UScaleBox*                              ScaleBox_Icon;                                     // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Btn;                                       // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Voice_Report_Btn_C">();
	}
	static class UWBP_Voice_Report_Btn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Voice_Report_Btn_C>();
	}
};
static_assert(alignof(UWBP_Voice_Report_Btn_C) == 0x000008, "Wrong alignment on UWBP_Voice_Report_Btn_C");
static_assert(sizeof(UWBP_Voice_Report_Btn_C) == 0x000770, "Wrong size on UWBP_Voice_Report_Btn_C");
static_assert(offsetof(UWBP_Voice_Report_Btn_C, ScaleBox_Icon) == 0x000760, "Member 'UWBP_Voice_Report_Btn_C::ScaleBox_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Voice_Report_Btn_C, SizeBox_Btn) == 0x000768, "Member 'UWBP_Voice_Report_Btn_C::SizeBox_Btn' has a wrong offset!");

}
