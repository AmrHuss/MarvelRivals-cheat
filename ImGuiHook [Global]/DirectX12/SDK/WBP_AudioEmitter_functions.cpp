#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AudioEmitter

#include "Basic.hpp"

#include "WBP_AudioEmitter_classes.hpp"
#include "WBP_AudioEmitter_parameters.hpp"


namespace SDK
{

// Function WBP_AudioEmitter.WBP_AudioEmitter_C.ExecuteUbergraph_WBP_AudioEmitter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioEmitter_C::ExecuteUbergraph_WBP_AudioEmitter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AudioEmitter_C", "ExecuteUbergraph_WBP_AudioEmitter");

	Params::WBP_AudioEmitter_C_ExecuteUbergraph_WBP_AudioEmitter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AudioEmitter.WBP_AudioEmitter_C.GetCachedAdmin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMarvelAudioAdmin*                AudioAdmin                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioEmitter_C::GetCachedAdmin(class UMarvelAudioAdmin** AudioAdmin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AudioEmitter_C", "GetCachedAdmin");

	Params::WBP_AudioEmitter_C_GetCachedAdmin Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AudioAdmin != nullptr)
		*AudioAdmin = Parms.AudioAdmin;
}


// Function WBP_AudioEmitter.WBP_AudioEmitter_C.HasPlayingEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Has                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioEmitter_C::HasPlayingEvent(bool* Has)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AudioEmitter_C", "HasPlayingEvent");

	Params::WBP_AudioEmitter_C_HasPlayingEvent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Has != nullptr)
		*Has = Parms.Has;
}


// Function WBP_AudioEmitter.WBP_AudioEmitter_C.IsEventNameEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_AudioEmitter_C::IsEventNameEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AudioEmitter_C", "IsEventNameEnabled");

	Params::WBP_AudioEmitter_C_IsEventNameEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_AudioEmitter.WBP_AudioEmitter_C.IsThreatValueEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_AudioEmitter_C::IsThreatValueEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AudioEmitter_C", "IsThreatValueEnabled");

	Params::WBP_AudioEmitter_C_IsThreatValueEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_AudioEmitter.WBP_AudioEmitter_C.PlayEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    Event                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             InEventName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                     InAkComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioEmitter_C::PlayEvent(class UAkAudioEvent* Event, class FName InEventName, class UAkComponent* InAkComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AudioEmitter_C", "PlayEvent");

	Params::WBP_AudioEmitter_C_PlayEvent Parms{};

	Parms.Event = Event;
	Parms.InEventName = InEventName;
	Parms.InAkComp = InAkComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AudioEmitter.WBP_AudioEmitter_C.SetAkCompRtpc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                     AkComp_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioEmitter_C::SetAkCompRtpc(class UAkComponent* AkComp_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AudioEmitter_C", "SetAkCompRtpc");

	Params::WBP_AudioEmitter_C_SetAkCompRtpc Parms{};

	Parms.AkComp_0 = AkComp_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AudioEmitter.WBP_AudioEmitter_C.SetAkCompSwitch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                     AkComp_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioEmitter_C::SetAkCompSwitch(class UAkComponent* AkComp_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AudioEmitter_C", "SetAkCompSwitch");

	Params::WBP_AudioEmitter_C_SetAkCompSwitch Parms{};

	Parms.AkComp_0 = AkComp_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AudioEmitter.WBP_AudioEmitter_C.SetAkName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                     AkComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioEmitter_C::SetAkName(class UAkComponent* AkComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AudioEmitter_C", "SetAkName");

	Params::WBP_AudioEmitter_C_SetAkName Parms{};

	Parms.AkComponent = AkComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AudioEmitter.WBP_AudioEmitter_C.SetEventName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                     AkComp_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioEmitter_C::SetEventName(class UAkAudioEvent* AkEvent, class FName EventName, class UAkComponent* AkComp_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AudioEmitter_C", "SetEventName");

	Params::WBP_AudioEmitter_C_SetEventName Parms{};

	Parms.AkEvent = AkEvent;
	Parms.EventName = EventName;
	Parms.AkComp_0 = AkComp_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AudioEmitter.WBP_AudioEmitter_C.SetThreatValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Playing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioEmitter_C::SetThreatValue(bool Playing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AudioEmitter_C", "SetThreatValue");

	Params::WBP_AudioEmitter_C_SetThreatValue Parms{};

	Parms.Playing = Playing;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AudioEmitter.WBP_AudioEmitter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioEmitter_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AudioEmitter_C", "Tick");

	Params::WBP_AudioEmitter_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
