#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101183

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_101183.PyAbility_101183.OnWeaponSummonerChanged
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_101183_OnWeaponSummonerChanged final
{
public:
	class APhysicsSummoner*                       Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_101183_OnWeaponSummonerChanged) == 0x000008, "Wrong alignment on PyAbility_101183_OnWeaponSummonerChanged");
static_assert(sizeof(PyAbility_101183_OnWeaponSummonerChanged) == 0x000008, "Wrong size on PyAbility_101183_OnWeaponSummonerChanged");
static_assert(offsetof(PyAbility_101183_OnWeaponSummonerChanged, Actor) == 0x000000, "Member 'PyAbility_101183_OnWeaponSummonerChanged::Actor' has a wrong offset!");

}
