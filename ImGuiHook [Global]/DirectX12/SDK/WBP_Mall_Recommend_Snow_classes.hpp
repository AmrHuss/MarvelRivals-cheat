#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mall_Recommend_Snow

#include "Basic.hpp"

#include "PyWidget_Mall_FullScreenMask_Snow_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mall_Recommend_Snow.WBP_Mall_Recommend_Snow_C
// 0x0018 (0x0600 - 0x05E8)
class UWBP_Mall_Recommend_Snow_C final : public UPyWidget_Mall_FullScreenMask_Snow
{
public:
	class UNiagaraSystemWidget*                   NiagaraSystem_Snow_1;                              // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NiagaraSystem_Snow_2;                              // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelCanvasPanel*                     Panel_NS;                                          // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mall_Recommend_Snow_C">();
	}
	static class UWBP_Mall_Recommend_Snow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mall_Recommend_Snow_C>();
	}
};
static_assert(alignof(UWBP_Mall_Recommend_Snow_C) == 0x000008, "Wrong alignment on UWBP_Mall_Recommend_Snow_C");
static_assert(sizeof(UWBP_Mall_Recommend_Snow_C) == 0x000600, "Wrong size on UWBP_Mall_Recommend_Snow_C");
static_assert(offsetof(UWBP_Mall_Recommend_Snow_C, NiagaraSystem_Snow_1) == 0x0005E8, "Member 'UWBP_Mall_Recommend_Snow_C::NiagaraSystem_Snow_1' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Snow_C, NiagaraSystem_Snow_2) == 0x0005F0, "Member 'UWBP_Mall_Recommend_Snow_C::NiagaraSystem_Snow_2' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Snow_C, Panel_NS) == 0x0005F8, "Member 'UWBP_Mall_Recommend_Snow_C::Panel_NS' has a wrong offset!");

}

