#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Home_Activity_TaskPbar

#include "Basic.hpp"

#include "PyWidget_HomeEntrance_Activity_Item_Task_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Home_Activity_TaskPbar.WBP_Home_Activity_TaskPbar_C
// 0x0008 (0x05F0 - 0x05E8)
class UWBP_Home_Activity_TaskPbar_C final : public UPyWidget_HomeEntrance_Activity_Item_Widget_Task_Item_Progress
{
public:
	class UProgressBar*                           Progress_Task;                                     // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Home_Activity_TaskPbar_C">();
	}
	static class UWBP_Home_Activity_TaskPbar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Home_Activity_TaskPbar_C>();
	}
};
static_assert(alignof(UWBP_Home_Activity_TaskPbar_C) == 0x000008, "Wrong alignment on UWBP_Home_Activity_TaskPbar_C");
static_assert(sizeof(UWBP_Home_Activity_TaskPbar_C) == 0x0005F0, "Wrong size on UWBP_Home_Activity_TaskPbar_C");
static_assert(offsetof(UWBP_Home_Activity_TaskPbar_C, Progress_Task) == 0x0005E8, "Member 'UWBP_Home_Activity_TaskPbar_C::Progress_Task' has a wrong offset!");

}
