#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyBlackWidowCharacter

#include "Basic.hpp"

#include "PyBlackWidowCharacter_classes.hpp"


namespace SDK
{

// DelegateFunction PyBlackWidowCharacter.PyBlackWidowCharacter.OnNeedTryPullBullet__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void APyBlackWidowCharacter::OnNeedTryPullBullet__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBlackWidowCharacter", "OnNeedTryPullBullet__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// PythonFunction PyBlackWidowCharacter.PyBlackWidowCharacter.ReceiveBeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyBlackWidowCharacter::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBlackWidowCharacter", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyBlackWidowCharacter.PyBlackWidowCharacter.OnRep_ReplicateCapsuleRadiusScale
// (Native, Public, BlueprintCallable)

void APyBlackWidowCharacter::OnRep_ReplicateCapsuleRadiusScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBlackWidowCharacter", "OnRep_ReplicateCapsuleRadiusScale");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

