#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Team_HisoryCardUnit

#include "Basic.hpp"

#include "WBP_Team_HisoryCardUnit_classes.hpp"
#include "WBP_Team_HisoryCardUnit_parameters.hpp"


namespace SDK
{

// Function WBP_Team_HisoryCardUnit.WBP_Team_HisoryCardUnit_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_Team_HisoryCardUnit_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Team_HisoryCardUnit_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Team_HisoryCardUnit.WBP_Team_HisoryCardUnit_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Team_HisoryCardUnit_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Team_HisoryCardUnit_C", "BP_OnItemExpansionChanged");

	Params::WBP_Team_HisoryCardUnit_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Team_HisoryCardUnit.WBP_Team_HisoryCardUnit_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Team_HisoryCardUnit_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Team_HisoryCardUnit_C", "BP_OnItemSelectionChanged");

	Params::WBP_Team_HisoryCardUnit_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Team_HisoryCardUnit.WBP_Team_HisoryCardUnit_C.ExecuteUbergraph_WBP_Team_HisoryCardUnit
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Team_HisoryCardUnit_C::ExecuteUbergraph_WBP_Team_HisoryCardUnit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Team_HisoryCardUnit_C", "ExecuteUbergraph_WBP_Team_HisoryCardUnit");

	Params::WBP_Team_HisoryCardUnit_C_ExecuteUbergraph_WBP_Team_HisoryCardUnit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Team_HisoryCardUnit.WBP_Team_HisoryCardUnit_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Team_HisoryCardUnit_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Team_HisoryCardUnit_C", "OnListItemObjectSet");

	Params::WBP_Team_HisoryCardUnit_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

}

