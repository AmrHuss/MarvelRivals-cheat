#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_Create_Panel

#include "Basic.hpp"

#include "PyWidget_League_CreatePanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_Create_Panel.WBP_League_Create_Panel_C
// 0x0010 (0x0620 - 0x0610)
class UWBP_League_Create_Panel_C final : public UPyWidget_League_CreatePanel
{
public:
	class UMarvelImage*                           MarvelImage_35;                                    // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_WeaBrowser;                                   // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Notify(const class FString& Params_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_Create_Panel_C">();
	}
	static class UWBP_League_Create_Panel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_Create_Panel_C>();
	}
};
static_assert(alignof(UWBP_League_Create_Panel_C) == 0x000008, "Wrong alignment on UWBP_League_Create_Panel_C");
static_assert(sizeof(UWBP_League_Create_Panel_C) == 0x000620, "Wrong size on UWBP_League_Create_Panel_C");
static_assert(offsetof(UWBP_League_Create_Panel_C, MarvelImage_35) == 0x000610, "Member 'UWBP_League_Create_Panel_C::MarvelImage_35' has a wrong offset!");
static_assert(offsetof(UWBP_League_Create_Panel_C, Slot_WeaBrowser) == 0x000618, "Member 'UWBP_League_Create_Panel_C::Slot_WeaBrowser' has a wrong offset!");

}

