#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Friends_ItemList

#include "Basic.hpp"

#include "WBP_Friends_ItemList_classes.hpp"
#include "WBP_Friends_ItemList_parameters.hpp"


namespace SDK
{

// Function WBP_Friends_ItemList.WBP_Friends_ItemList_C.ExecuteUbergraph_WBP_Friends_ItemList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Friends_ItemList_C::ExecuteUbergraph_WBP_Friends_ItemList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Friends_ItemList_C", "ExecuteUbergraph_WBP_Friends_ItemList");

	Params::WBP_Friends_ItemList_C_ExecuteUbergraph_WBP_Friends_ItemList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Friends_ItemList.WBP_Friends_ItemList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Friends_ItemList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Friends_ItemList_C", "PreConstruct");

	Params::WBP_Friends_ItemList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
