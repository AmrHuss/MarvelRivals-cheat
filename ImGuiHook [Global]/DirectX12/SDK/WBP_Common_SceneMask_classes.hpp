#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Common_SceneMask

#include "Basic.hpp"

#include "PyWidget_Common_SceneMask_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Common_SceneMask.WBP_Common_SceneMask_C
// 0x0008 (0x05B0 - 0x05A8)
class UWBP_Common_SceneMask_C final : public UPyWidget_Common_SceneMask
{
public:
	class UMarvelImage*                           MarvelImage_SceneMask;                             // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Common_SceneMask_C">();
	}
	static class UWBP_Common_SceneMask_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Common_SceneMask_C>();
	}
};
static_assert(alignof(UWBP_Common_SceneMask_C) == 0x000008, "Wrong alignment on UWBP_Common_SceneMask_C");
static_assert(sizeof(UWBP_Common_SceneMask_C) == 0x0005B0, "Wrong size on UWBP_Common_SceneMask_C");
static_assert(offsetof(UWBP_Common_SceneMask_C, MarvelImage_SceneMask) == 0x0005A8, "Member 'UWBP_Common_SceneMask_C::MarvelImage_SceneMask' has a wrong offset!");

}
