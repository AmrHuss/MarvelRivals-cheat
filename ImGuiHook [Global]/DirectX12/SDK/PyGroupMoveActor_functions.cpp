#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyGroupMoveActor

#include "Basic.hpp"

#include "PyGroupMoveActor_classes.hpp"
#include "PyGroupMoveActor_parameters.hpp"


namespace SDK
{

// DelegateFunction PyGroupMoveActor.PyGroupMoveActor.DispatcherCountdownStep__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void APyGroupMoveActor::DispatcherCountdownStep__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyGroupMoveActor", "DispatcherCountdownStep__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// DelegateFunction PyGroupMoveActor.PyGroupMoveActor.DispatcherStartDelayWait__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                                   Delay_time                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyGroupMoveActor::DispatcherStartDelayWait__DelegateSignature(float Delay_time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyGroupMoveActor", "DispatcherStartDelayWait__DelegateSignature");

	Params::PyGroupMoveActor_DispatcherStartDelayWait__DelegateSignature Parms{};

	Parms.Delay_time = Delay_time;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyGroupMoveActor.PyGroupMoveActor.SpeedForward__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                                   Degree                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyGroupMoveActor::SpeedForward__DelegateSignature(float Degree)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyGroupMoveActor", "SpeedForward__DelegateSignature");

	Params::PyGroupMoveActor_SpeedForward__DelegateSignature Parms{};

	Parms.Degree = Degree;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyGroupMoveActor.PyGroupMoveActor.SpeedBackToForward__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                                   Degree                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyGroupMoveActor::SpeedBackToForward__DelegateSignature(float Degree)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyGroupMoveActor", "SpeedBackToForward__DelegateSignature");

	Params::PyGroupMoveActor_SpeedBackToForward__DelegateSignature Parms{};

	Parms.Degree = Degree;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyGroupMoveActor.PyGroupMoveActor.SpeedBack__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                                   Degree                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyGroupMoveActor::SpeedBack__DelegateSignature(float Degree)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyGroupMoveActor", "SpeedBack__DelegateSignature");

	Params::PyGroupMoveActor_SpeedBack__DelegateSignature Parms{};

	Parms.Degree = Degree;

	UObject::ProcessEvent(Func, &Parms);
}


// PythonFunction PyGroupMoveActor.PyGroupMoveActor.PostRewindForReplay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyGroupMoveActor::PostRewindForReplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyGroupMoveActor", "PostRewindForReplay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyGroupMoveActor.PyGroupMoveActor.PyAttachTrace
// (Native, Public, BlueprintCallable)

void APyGroupMoveActor::PyAttachTrace()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyGroupMoveActor", "PyAttachTrace");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyGroupMoveActor.PyGroupMoveActor.ReceiveBeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyGroupMoveActor::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyGroupMoveActor", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyGroupMoveActor.PyGroupMoveActor.GetRestTime
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float APyGroupMoveActor::GetRestTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyGroupMoveActor", "GetRestTime");

	Params::PyGroupMoveActor_GetRestTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
