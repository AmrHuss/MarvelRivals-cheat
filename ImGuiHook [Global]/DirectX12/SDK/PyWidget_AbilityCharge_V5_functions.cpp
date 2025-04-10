#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_AbilityCharge_V5

#include "Basic.hpp"

#include "PyWidget_AbilityCharge_V5_classes.hpp"
#include "PyWidget_AbilityCharge_V5_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_AbilityChargeSingle_v5::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityChargeSingle_v5", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_AbilityChargeSingle_v5::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityChargeSingle_v5", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.SetStyle
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWidgetStyle_AbilityCharge       Style                                                  (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWidget_AbilityChargeSingle_v5::SetStyle(const struct FWidgetStyle_AbilityCharge& Style)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityChargeSingle_v5", "SetStyle");

	Params::PyWidget_AbilityChargeSingle_v5_SetStyle Parms{};

	Parms.Style = std::move(Style);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.SetPercent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Percent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityChargeSingle_v5::SetPercent(float Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityChargeSingle_v5", "SetPercent");

	Params::PyWidget_AbilityChargeSingle_v5_SetPercent Parms{};

	Parms.Percent = Percent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.SetChargeSpeed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Speed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityChargeSingle_v5::SetChargeSpeed(float Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityChargeSingle_v5", "SetChargeSpeed");

	Params::PyWidget_AbilityChargeSingle_v5_SetChargeSpeed Parms{};

	Parms.Speed = Speed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.Consume
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_AbilityChargeSingle_v5::Consume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityChargeSingle_v5", "Consume");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.Restore
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_AbilityChargeSingle_v5::Restore()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityChargeSingle_v5", "Restore");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.MarvelSetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityChargeSingle_v5::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityChargeSingle_v5", "MarvelSetVisible");

	Params::PyWidget_AbilityChargeSingle_v5_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.MarvelSetVisibleImmediately
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInVisible                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityChargeSingle_v5::MarvelSetVisibleImmediately(bool bInVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityChargeSingle_v5", "MarvelSetVisibleImmediately");

	Params::PyWidget_AbilityChargeSingle_v5_MarvelSetVisibleImmediately Parms{};

	Parms.bInVisible = bInVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.DelaySetVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   DelayTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Invisible                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityChargeSingle_v5::DelaySetVisible(float DelayTime, bool Invisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityChargeSingle_v5", "DelaySetVisible");

	Params::PyWidget_AbilityChargeSingle_v5_DelaySetVisible Parms{};

	Parms.DelayTime = DelayTime;
	Parms.Invisible = Invisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.HideSelf
// (Native, Public, BlueprintCallable)

void UPyWidget_AbilityChargeSingle_v5::HideSelf()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityChargeSingle_v5", "HideSelf");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.ShowSelf
// (Native, Public, BlueprintCallable)

void UPyWidget_AbilityChargeSingle_v5::ShowSelf()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityChargeSingle_v5", "ShowSelf");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_CommonChargeSingle_V5.SetStyle
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWidgetStyle_AbilityCharge       Style                                                  (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWidget_CommonChargeSingle_V5::SetStyle(const struct FWidgetStyle_AbilityCharge& Style)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonChargeSingle_V5", "SetStyle");

	Params::PyWidget_CommonChargeSingle_V5_SetStyle Parms{};

	Parms.Style = std::move(Style);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// DelegateFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.OnCurSegmentChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   InCurrentValue                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_V5::OnCurSegmentChanged__DelegateSignature(int32 InCurrentValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "OnCurSegmentChanged__DelegateSignature");

	Params::PyWidget_AbilityCharge_V5_OnCurSegmentChanged__DelegateSignature Parms{};

	Parms.InCurrentValue = InCurrentValue;

	UObject::ProcessEvent(Func, &Parms);
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_AbilityCharge_V5::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.SetStyle
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWidgetStyle_AbilityCharge       Style                                                  (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWidget_AbilityCharge_V5::SetStyle(const struct FWidgetStyle_AbilityCharge& Style)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "SetStyle");

	Params::PyWidget_AbilityCharge_V5_SetStyle Parms{};

	Parms.Style = std::move(Style);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.SetSegmentMax
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   SegmentMax_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_V5::SetSegmentMax(int32 SegmentMax_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "SetSegmentMax");

	Params::PyWidget_AbilityCharge_V5_SetSegmentMax Parms{};

	Parms.SegmentMax_0 = SegmentMax_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.SetPercent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InCurrentValue                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InMaxValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_V5::SetPercent(float InCurrentValue, float InMaxValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "SetPercent");

	Params::PyWidget_AbilityCharge_V5_SetPercent Parms{};

	Parms.InCurrentValue = InCurrentValue;
	Parms.InMaxValue = InMaxValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.UpdatePercentWithDebounce
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   InCurrentValue                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InMaxValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_V5::UpdatePercentWithDebounce(float InCurrentValue, float InMaxValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "UpdatePercentWithDebounce");

	Params::PyWidget_AbilityCharge_V5_UpdatePercentWithDebounce Parms{};

	Parms.InCurrentValue = InCurrentValue;
	Parms.InMaxValue = InMaxValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.SetSpeed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InMaxValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InSpeedValue                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_V5::SetSpeed(float InMaxValue, float InSpeedValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "SetSpeed");

	Params::PyWidget_AbilityCharge_V5_SetSpeed Parms{};

	Parms.InMaxValue = InMaxValue;
	Parms.InSpeedValue = InSpeedValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.SetSegmentCur
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   SegmentCur_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_V5::SetSegmentCur(int32 SegmentCur_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "SetSegmentCur");

	Params::PyWidget_AbilityCharge_V5_SetSegmentCur Parms{};

	Parms.SegmentCur_0 = SegmentCur_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.OnChargeWidgetClassLoaded
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                          ChargeWidgetClass                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_V5::OnChargeWidgetClassLoaded(class UObject* ChargeWidgetClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "OnChargeWidgetClassLoaded");

	Params::PyWidget_AbilityCharge_V5_OnChargeWidgetClassLoaded Parms{};

	Parms.ChargeWidgetClass = ChargeWidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.CustomActivate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_AbilityCharge_V5::CustomActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "CustomActivate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.CustomDeactivate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_AbilityCharge_V5::CustomDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "CustomDeactivate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.SetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Invisible                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_V5::SetVisible(bool Invisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "SetVisible");

	Params::PyWidget_AbilityCharge_V5_SetVisible Parms{};

	Parms.Invisible = Invisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.SetVisibleImmediately
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Invisible                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_V5::SetVisibleImmediately(bool Invisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "SetVisibleImmediately");

	Params::PyWidget_AbilityCharge_V5_SetVisibleImmediately Parms{};

	Parms.Invisible = Invisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.PlayUIAudio
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   AudioID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_V5::PlayUIAudio(int32 AudioID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "PlayUIAudio");

	Params::PyWidget_AbilityCharge_V5_PlayUIAudio Parms{};

	Parms.AudioID = AudioID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.PlayUIChargeAudio
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   ChargeSingle                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ChargeMax                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_V5::PlayUIChargeAudio(int32 ChargeSingle, int32 ChargeMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "PlayUIChargeAudio");

	Params::PyWidget_AbilityCharge_V5_PlayUIChargeAudio Parms{};

	Parms.ChargeSingle = ChargeSingle;
	Parms.ChargeMax = ChargeMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.PostUIAudioCallback
// (Native, Public, BlueprintCallable)
// Parameters:
// EAkCallbackType                         CallbackType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkCallbackInfo*                  CallbackInfo                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_AbilityCharge_V5::PostUIAudioCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityCharge_V5", "PostUIAudioCallback");

	Params::PyWidget_AbilityCharge_V5_PostUIAudioCallback Parms{};

	Parms.CallbackType = CallbackType;
	Parms.CallbackInfo = CallbackInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

