#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_PageList_SegmentedToggle

#include "Basic.hpp"

#include "PyWidget_PageList_SegmentedToggle_classes.hpp"


namespace SDK
{

// PythonFunction PyWidget_PageList_SegmentedToggle.PyWidget_PageList_SegmentedToggle.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_PageList_SegmentedToggle::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_PageList_SegmentedToggle", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

