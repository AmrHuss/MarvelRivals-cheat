#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemSpray_LightBP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ItemSpray_LightBP.ItemSpray_LightBP_C
// 0x0018 (0x0488 - 0x0470)
class AItemSpray_LightBP_C final : public AActor
{
public:
	class UDirectionalLightComponent*             Rim_Light_Spray;                                   // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             Main_Light_Spray;                                  // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemSpray_LightBP_C">();
	}
	static class AItemSpray_LightBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AItemSpray_LightBP_C>();
	}
};
static_assert(alignof(AItemSpray_LightBP_C) == 0x000008, "Wrong alignment on AItemSpray_LightBP_C");
static_assert(sizeof(AItemSpray_LightBP_C) == 0x000488, "Wrong size on AItemSpray_LightBP_C");
static_assert(offsetof(AItemSpray_LightBP_C, Rim_Light_Spray) == 0x000470, "Member 'AItemSpray_LightBP_C::Rim_Light_Spray' has a wrong offset!");
static_assert(offsetof(AItemSpray_LightBP_C, Main_Light_Spray) == 0x000478, "Member 'AItemSpray_LightBP_C::Main_Light_Spray' has a wrong offset!");
static_assert(offsetof(AItemSpray_LightBP_C, Scene) == 0x000480, "Member 'AItemSpray_LightBP_C::Scene' has a wrong offset!");

}
