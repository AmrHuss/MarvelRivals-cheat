#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Weapon_RocketRaccoonPistol

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Weapon_RocketRaccoonPistol.Weapon_RocketRaccoonPistol_C
// 0x0000 (0x0C70 - 0x0C70)
class AWeapon_RocketRaccoonPistol_C final : public AShootingWeapon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Weapon_RocketRaccoonPistol_C">();
	}
	static class AWeapon_RocketRaccoonPistol_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWeapon_RocketRaccoonPistol_C>();
	}
};
static_assert(alignof(AWeapon_RocketRaccoonPistol_C) == 0x000008, "Wrong alignment on AWeapon_RocketRaccoonPistol_C");
static_assert(sizeof(AWeapon_RocketRaccoonPistol_C) == 0x000C70, "Wrong size on AWeapon_RocketRaccoonPistol_C");

}
