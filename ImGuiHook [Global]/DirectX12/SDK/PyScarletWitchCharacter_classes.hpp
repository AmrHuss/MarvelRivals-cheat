#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyScarletWitchCharacter

#include "Basic.hpp"

#include "Hero_1038_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// PythonClass PyScarletWitchCharacter.PyScarletWitchChildActor
// 0x0018 (0x0B30 - 0x0B18)
class APyScarletWitchChildActor final : public AScarletWitchChildActor
{
public:
	float                                         ReticleOpacityWhenForbidAttack;                    // 0x0B18(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B1C[0x4];                                      // 0x0B1C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   FadeAbilityTags;                                   // 0x0B20(0x0010)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	void OnGenericGameplayTagUpdate(const struct FGameplayTag& InTag, int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyScarletWitchChildActor">();
	}
	static class APyScarletWitchChildActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyScarletWitchChildActor>();
	}
};
static_assert(alignof(APyScarletWitchChildActor) == 0x000008, "Wrong alignment on APyScarletWitchChildActor");
static_assert(sizeof(APyScarletWitchChildActor) == 0x000B30, "Wrong size on APyScarletWitchChildActor");
static_assert(offsetof(APyScarletWitchChildActor, ReticleOpacityWhenForbidAttack) == 0x000B18, "Member 'APyScarletWitchChildActor::ReticleOpacityWhenForbidAttack' has a wrong offset!");
static_assert(offsetof(APyScarletWitchChildActor, FadeAbilityTags) == 0x000B20, "Member 'APyScarletWitchChildActor::FadeAbilityTags' has a wrong offset!");

// PythonClass PyScarletWitchCharacter.PyScarletWitchCharacter
// 0x0000 (0x17C0 - 0x17C0)
class APyScarletWitchCharacter : public AScarletWitchCharacter
{
public:
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason Reason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyScarletWitchCharacter">();
	}
	static class APyScarletWitchCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyScarletWitchCharacter>();
	}
};
static_assert(alignof(APyScarletWitchCharacter) == 0x000010, "Wrong alignment on APyScarletWitchCharacter");
static_assert(sizeof(APyScarletWitchCharacter) == 0x0017C0, "Wrong size on APyScarletWitchCharacter");

}

