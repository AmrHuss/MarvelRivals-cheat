#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_BondRelationShip

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Common_BondRelationShip.PyWidget_Common_BondRelationShip
// 0x0010 (0x05F8 - 0x05E8)
class UPyWidget_Common_BondRelationShip final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          AkEvent_OnMouseButtonDown;                         // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           RequestInputAciton;                                // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Common_BondRelationShip">();
	}
	static class UPyWidget_Common_BondRelationShip* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Common_BondRelationShip>();
	}
};
static_assert(alignof(UPyWidget_Common_BondRelationShip) == 0x000008, "Wrong alignment on UPyWidget_Common_BondRelationShip");
static_assert(sizeof(UPyWidget_Common_BondRelationShip) == 0x0005F8, "Wrong size on UPyWidget_Common_BondRelationShip");
static_assert(offsetof(UPyWidget_Common_BondRelationShip, AkEvent_OnMouseButtonDown) == 0x0005E8, "Member 'UPyWidget_Common_BondRelationShip::AkEvent_OnMouseButtonDown' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_BondRelationShip, RequestInputAciton) == 0x0005F0, "Member 'UPyWidget_Common_BondRelationShip::RequestInputAciton' has a wrong offset!");

}
