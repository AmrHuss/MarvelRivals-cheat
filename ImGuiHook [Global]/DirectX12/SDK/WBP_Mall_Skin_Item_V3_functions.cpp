#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mall_Skin_Item_V3

#include "Basic.hpp"

#include "WBP_Mall_Skin_Item_V3_classes.hpp"
#include "WBP_Mall_Skin_Item_V3_parameters.hpp"


namespace SDK
{

// Function WBP_Mall_Skin_Item_V3.WBP_Mall_Skin_Item_V3_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_Mall_Skin_Item_V3_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Mall_Skin_Item_V3_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Mall_Skin_Item_V3.WBP_Mall_Skin_Item_V3_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Mall_Skin_Item_V3_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Mall_Skin_Item_V3_C", "BP_OnItemExpansionChanged");

	Params::WBP_Mall_Skin_Item_V3_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Mall_Skin_Item_V3.WBP_Mall_Skin_Item_V3_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Mall_Skin_Item_V3_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Mall_Skin_Item_V3_C", "BP_OnItemSelectionChanged");

	Params::WBP_Mall_Skin_Item_V3_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Mall_Skin_Item_V3.WBP_Mall_Skin_Item_V3_C.ExecuteUbergraph_WBP_Mall_Skin_Item_V3
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Mall_Skin_Item_V3_C::ExecuteUbergraph_WBP_Mall_Skin_Item_V3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Mall_Skin_Item_V3_C", "ExecuteUbergraph_WBP_Mall_Skin_Item_V3");

	Params::WBP_Mall_Skin_Item_V3_C_ExecuteUbergraph_WBP_Mall_Skin_Item_V3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Mall_Skin_Item_V3.WBP_Mall_Skin_Item_V3_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Mall_Skin_Item_V3_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Mall_Skin_Item_V3_C", "OnListItemObjectSet");

	Params::WBP_Mall_Skin_Item_V3_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

}
