#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HeroSkill_Skill

#include "Basic.hpp"

#include "WBP_HeroSkill_Skill_classes.hpp"
#include "WBP_HeroSkill_Skill_parameters.hpp"


namespace SDK
{

// Function WBP_HeroSkill_Skill.WBP_HeroSkill_Skill_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_HeroSkill_Skill_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HeroSkill_Skill_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HeroSkill_Skill.WBP_HeroSkill_Skill_C.ExecuteUbergraph_WBP_HeroSkill_Skill
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HeroSkill_Skill_C::ExecuteUbergraph_WBP_HeroSkill_Skill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HeroSkill_Skill_C", "ExecuteUbergraph_WBP_HeroSkill_Skill");

	Params::WBP_HeroSkill_Skill_C_ExecuteUbergraph_WBP_HeroSkill_Skill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HeroSkill_Skill.WBP_HeroSkill_Skill_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HeroSkill_Skill_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HeroSkill_Skill_C", "PreConstruct");

	Params::WBP_HeroSkill_Skill_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HeroSkill_Skill.WBP_HeroSkill_Skill_C.SetAbilityData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Desc                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// TSoftObjectPtr<class UTexture2D>        Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
// EAbilityInputBinds                      InptuAction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HeroSkill_Skill_C::SetAbilityData(const class FText& Name_0, const class FText& Desc, TSoftObjectPtr<class UTexture2D> Icon, EAbilityInputBinds InptuAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HeroSkill_Skill_C", "SetAbilityData");

	Params::WBP_HeroSkill_Skill_C_SetAbilityData Parms{};

	Parms.Name_0 = std::move(Name_0);
	Parms.Desc = std::move(Desc);
	Parms.Icon = Icon;
	Parms.InptuAction = InptuAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HeroSkill_Skill.WBP_HeroSkill_Skill_C.SetIsClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsClicked_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HeroSkill_Skill_C::SetIsClicked(bool IsClicked_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HeroSkill_Skill_C", "SetIsClicked");

	Params::WBP_HeroSkill_Skill_C_SetIsClicked Parms{};

	Parms.IsClicked_0 = IsClicked_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

