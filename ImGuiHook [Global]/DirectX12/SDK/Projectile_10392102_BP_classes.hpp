#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Projectile_10392102_BP

#include "Basic.hpp"

#include "PyAbility_103921_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Projectile_10392102_BP.Projectile_10392102_BP_C
// 0x0000 (0x2FC0 - 0x2FC0)
class AProjectile_10392102_BP_C final : public APyProjectile_10392102
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Projectile_10392102_BP_C">();
	}
	static class AProjectile_10392102_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProjectile_10392102_BP_C>();
	}
};
static_assert(alignof(AProjectile_10392102_BP_C) == 0x000010, "Wrong alignment on AProjectile_10392102_BP_C");
static_assert(sizeof(AProjectile_10392102_BP_C) == 0x002FC0, "Wrong size on AProjectile_10392102_BP_C");

}

