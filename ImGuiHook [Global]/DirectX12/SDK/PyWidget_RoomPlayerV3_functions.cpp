#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_RoomPlayerV3

#include "Basic.hpp"

#include "PyWidget_RoomPlayerV3_classes.hpp"
#include "PyWidget_RoomPlayerV3_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_RoomPlayerV4::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.PreConstruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "PreConstruct");

	Params::PyWidget_RoomPlayerV4_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_RoomPlayerV4::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_RoomPlayerV4::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.ClearPlayerData
// (Native, Public, BlueprintCallable)

void UPyWidget_RoomPlayerV4::ClearPlayerData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "ClearPlayerData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.SetAIData
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   HeroID_0                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AILevel_0                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::SetAIData(int32 HeroID_0, int32 AILevel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "SetAIData");

	Params::PyWidget_RoomPlayerV4_SetAIData Parms{};

	Parms.HeroID_0 = HeroID_0;
	Parms.AILevel_0 = AILevel_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.RefreshBtnVisible
// (Native, Public, BlueprintCallable)

void UPyWidget_RoomPlayerV4::RefreshBtnVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "RefreshBtnVisible");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.SetIsOwner
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOwner_0                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::SetIsOwner(bool IsOwner_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "SetIsOwner");

	Params::PyWidget_RoomPlayerV4_SetIsOwner Parms{};

	Parms.IsOwner_0 = IsOwner_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.SetIsSelfOwner
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelfOwner_0                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::SetIsSelfOwner(bool IsSelfOwner_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "SetIsSelfOwner");

	Params::PyWidget_RoomPlayerV4_SetIsSelfOwner Parms{};

	Parms.IsSelfOwner_0 = IsSelfOwner_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.SetIsLocalPlayer
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsLocalPlayer_0                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::SetIsLocalPlayer(bool IsLocalPlayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "SetIsLocalPlayer");

	Params::PyWidget_RoomPlayerV4_SetIsLocalPlayer Parms{};

	Parms.IsLocalPlayer_0 = IsLocalPlayer_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.SetIsEmpty
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEmpty_0                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::SetIsEmpty(bool IsEmpty_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "SetIsEmpty");

	Params::PyWidget_RoomPlayerV4_SetIsEmpty Parms{};

	Parms.IsEmpty_0 = IsEmpty_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.SetIsInvitating
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsInvitating_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::SetIsInvitating(bool IsInvitating_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "SetIsInvitating");

	Params::PyWidget_RoomPlayerV4_SetIsInvitating Parms{};

	Parms.IsInvitating_0 = IsInvitating_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.SetIsAI
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAI_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::SetIsAI(bool IsAI_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "SetIsAI");

	Params::PyWidget_RoomPlayerV4_SetIsAI Parms{};

	Parms.IsAI_0 = IsAI_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.SetIsAttacker
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsAttacker_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::SetIsAttacker(bool IsAttacker_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "SetIsAttacker");

	Params::PyWidget_RoomPlayerV4_SetIsAttacker Parms{};

	Parms.IsAttacker_0 = IsAttacker_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.SetIsLeagueAttacker
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsAttacker_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::SetIsLeagueAttacker(bool IsAttacker_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "SetIsLeagueAttacker");

	Params::PyWidget_RoomPlayerV4_SetIsLeagueAttacker Parms{};

	Parms.IsAttacker_0 = IsAttacker_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.SetIsWaitExchg
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsWaitExchg_0                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::SetIsWaitExchg(bool IsWaitExchg_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "SetIsWaitExchg");

	Params::PyWidget_RoomPlayerV4_SetIsWaitExchg Parms{};

	Parms.IsWaitExchg_0 = IsWaitExchg_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.SetIsLimitExchg
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsLimitExchg_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::SetIsLimitExchg(bool IsLimitExchg_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "SetIsLimitExchg");

	Params::PyWidget_RoomPlayerV4_SetIsLimitExchg Parms{};

	Parms.IsLimitExchg_0 = IsLimitExchg_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.SetIsClickExchg
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsClickExchg_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::SetIsClickExchg(bool IsClickExchg_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "SetIsClickExchg");

	Params::PyWidget_RoomPlayerV4_SetIsClickExchg Parms{};

	Parms.IsClickExchg_0 = IsClickExchg_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.SetIsGame
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGame_0                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::SetIsGame(bool IsGame_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "SetIsGame");

	Params::PyWidget_RoomPlayerV4_SetIsGame Parms{};

	Parms.IsGame_0 = IsGame_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.SetIsExchg
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsExchg_0                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::SetIsExchg(bool IsExchg_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "SetIsExchg");

	Params::PyWidget_RoomPlayerV4_SetIsExchg Parms{};

	Parms.IsExchg_0 = IsExchg_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.UpdateExchgVisible
// (Native, Public, BlueprintCallable)

void UPyWidget_RoomPlayerV4::UpdateExchgVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "UpdateExchgVisible");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.GetHeroSerial
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   HeroID_0                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UPyWidget_RoomPlayerV4::GetHeroSerial(int32 HeroID_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "GetHeroSerial");

	Params::PyWidget_RoomPlayerV4_GetHeroSerial Parms{};

	Parms.HeroID_0 = HeroID_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.GetHeroID
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   HeroSerial_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UPyWidget_RoomPlayerV4::GetHeroID(int32 HeroSerial_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "GetHeroID");

	Params::PyWidget_RoomPlayerV4_GetHeroID Parms{};

	Parms.HeroSerial_0 = HeroSerial_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// DelegateFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.OnAIClicked__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*                      Btn                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::OnAIClicked__DelegateSignature(class UUserWidget* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "OnAIClicked__DelegateSignature");

	Params::PyWidget_RoomPlayerV4_OnAIClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.OnAIChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   UID_0                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   HeroID_0                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AILevel_0                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::OnAIChange__DelegateSignature(int32 UID_0, int32 HeroID_0, int32 AILevel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "OnAIChange__DelegateSignature");

	Params::PyWidget_RoomPlayerV4_OnAIChange__DelegateSignature Parms{};

	Parms.UID_0 = UID_0;
	Parms.HeroID_0 = HeroID_0;
	Parms.AILevel_0 = AILevel_0;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.OnDeleteClicked__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*                      Btn                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::OnDeleteClicked__DelegateSignature(class UUserWidget* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "OnDeleteClicked__DelegateSignature");

	Params::PyWidget_RoomPlayerV4_OnDeleteClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.OnExchangeClicked__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*                      Btn                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::OnExchangeClicked__DelegateSignature(class UUserWidget* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "OnExchangeClicked__DelegateSignature");

	Params::PyWidget_RoomPlayerV4_OnExchangeClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.OnCancelExchangeClicked__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*                      Btn                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::OnCancelExchangeClicked__DelegateSignature(class UUserWidget* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "OnCancelExchangeClicked__DelegateSignature");

	Params::PyWidget_RoomPlayerV4_OnCancelExchangeClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4.OnOwnerExchangeClicked__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*                      Btn                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsClick                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPlayerV4::OnOwnerExchangeClicked__DelegateSignature(class UUserWidget* Btn, bool IsClick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPlayerV4", "OnOwnerExchangeClicked__DelegateSignature");

	Params::PyWidget_RoomPlayerV4_OnOwnerExchangeClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;
	Parms.IsClick = IsClick;

	UObject::ProcessEvent(Func, &Parms);
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomSpectatorPlayerV4.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_RoomSpectatorPlayerV4::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomSpectatorPlayerV4", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomSpectatorPlayerV4.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_RoomSpectatorPlayerV4::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomSpectatorPlayerV4", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomSpectatorPlayerV4.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_RoomSpectatorPlayerV4::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomSpectatorPlayerV4", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomSpectatorPlayerV4.SetIsAttacker
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsAttacker_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomSpectatorPlayerV4::SetIsAttacker(bool IsAttacker_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomSpectatorPlayerV4", "SetIsAttacker");

	Params::PyWidget_RoomSpectatorPlayerV4_SetIsAttacker Parms{};

	Parms.IsAttacker_0 = IsAttacker_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomSpectatorPlayerV4.SetIsOwner
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOwner_0                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomSpectatorPlayerV4::SetIsOwner(bool IsOwner_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomSpectatorPlayerV4", "SetIsOwner");

	Params::PyWidget_RoomSpectatorPlayerV4_SetIsOwner Parms{};

	Parms.IsOwner_0 = IsOwner_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomSpectatorPlayerV4.SetIsSelfOwner
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelfOwner_0                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomSpectatorPlayerV4::SetIsSelfOwner(bool IsSelfOwner_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomSpectatorPlayerV4", "SetIsSelfOwner");

	Params::PyWidget_RoomSpectatorPlayerV4_SetIsSelfOwner Parms{};

	Parms.IsSelfOwner_0 = IsSelfOwner_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomSpectatorPlayerV4.SetIsEmpty
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEmpty_0                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomSpectatorPlayerV4::SetIsEmpty(bool IsEmpty_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomSpectatorPlayerV4", "SetIsEmpty");

	Params::PyWidget_RoomSpectatorPlayerV4_SetIsEmpty Parms{};

	Parms.IsEmpty_0 = IsEmpty_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomSpectatorPlayerV4.SetIsInvitating
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsInvitating_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomSpectatorPlayerV4::SetIsInvitating(bool IsInvitating_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomSpectatorPlayerV4", "SetIsInvitating");

	Params::PyWidget_RoomSpectatorPlayerV4_SetIsInvitating Parms{};

	Parms.IsInvitating_0 = IsInvitating_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomSpectatorPlayerV4.SetIsAI
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAI_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomSpectatorPlayerV4::SetIsAI(bool IsAI_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomSpectatorPlayerV4", "SetIsAI");

	Params::PyWidget_RoomSpectatorPlayerV4_SetIsAI Parms{};

	Parms.IsAI_0 = IsAI_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomSpectatorPlayerV4.SetIsGame
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGame_0                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomSpectatorPlayerV4::SetIsGame(bool IsGame_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomSpectatorPlayerV4", "SetIsGame");

	Params::PyWidget_RoomSpectatorPlayerV4_SetIsGame Parms{};

	Parms.IsGame_0 = IsGame_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPlayerV3.PyWidget_RoomSpectatorPlayerV4.SetIsLocalPlayer
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsLocalPlayer_0                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomSpectatorPlayerV4::SetIsLocalPlayer(bool IsLocalPlayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomSpectatorPlayerV4", "SetIsLocalPlayer");

	Params::PyWidget_RoomSpectatorPlayerV4_SetIsLocalPlayer Parms{};

	Parms.IsLocalPlayer_0 = IsLocalPlayer_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
