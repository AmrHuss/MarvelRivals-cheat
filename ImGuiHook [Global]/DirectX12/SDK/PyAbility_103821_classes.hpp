#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103821

#include "Basic.hpp"

#include "Marvel_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// PythonClass PyAbility_103821.PyAbility_103821
// 0x0000 (0x2558 - 0x2558)
class UPyAbility_103821 : public UAbility_108
{
public:
	void BeginPlay();
	void EndPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103821">();
	}
	static class UPyAbility_103821* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103821>();
	}
};
static_assert(alignof(UPyAbility_103821) == 0x000008, "Wrong alignment on UPyAbility_103821");
static_assert(sizeof(UPyAbility_103821) == 0x002558, "Wrong size on UPyAbility_103821");

// PythonClass PyAbility_103821.PyUIController_103821
// 0x0018 (0x0C70 - 0x0C58)
class UPyUIController_103821 final : public UUIC_Ability
{
public:
	struct FGameplayTag                           UltraAbilityTag;                                   // 0x0C58(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           ShiftAbilityTag;                                   // 0x0C64(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetAbility(int32 InAbilityId, class UGameplayAbility* InAbility);
	void OnDestruct();
	void OnTagUpdate(const struct FGameplayTag& Tag, bool Exist);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_103821">();
	}
	static class UPyUIController_103821* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_103821>();
	}
};
static_assert(alignof(UPyUIController_103821) == 0x000008, "Wrong alignment on UPyUIController_103821");
static_assert(sizeof(UPyUIController_103821) == 0x000C70, "Wrong size on UPyUIController_103821");
static_assert(offsetof(UPyUIController_103821, UltraAbilityTag) == 0x000C58, "Member 'UPyUIController_103821::UltraAbilityTag' has a wrong offset!");
static_assert(offsetof(UPyUIController_103821, ShiftAbilityTag) == 0x000C64, "Member 'UPyUIController_103821::ShiftAbilityTag' has a wrong offset!");

}
