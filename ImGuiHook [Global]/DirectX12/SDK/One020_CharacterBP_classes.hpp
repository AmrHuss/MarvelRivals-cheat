#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: One020_CharacterBP

#include "Basic.hpp"

#include "PyMantisCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass 1020_CharacterBP.1020_CharacterBP_C
// 0x0000 (0x17F0 - 0x17F0)
class AOne020_CharacterBP_C final : public APyMantisCharacter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"1020_CharacterBP_C">();
	}
	static class AOne020_CharacterBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AOne020_CharacterBP_C>();
	}
};
static_assert(alignof(AOne020_CharacterBP_C) == 0x000010, "Wrong alignment on AOne020_CharacterBP_C");
static_assert(sizeof(AOne020_CharacterBP_C) == 0x0017F0, "Wrong size on AOne020_CharacterBP_C");

}
