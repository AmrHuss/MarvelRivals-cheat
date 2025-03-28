#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_HeroSystem_Info

#include "Basic.hpp"

#include "PyWidget_ModuleMainPanel_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_HeroSystem_Info.PyWidget_HeroSystem_Info
// 0x0038 (0x0648 - 0x0610)
class UPyWidget_HeroSystem_Info : public UPyWidget_ModuleMainPanel
{
public:
	uint8                                         Pad_609[0x3];                                      // 0x0609(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SwitchShapeTime;                                   // 0x060C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SwitchShapeCountdown;                              // 0x0610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_614[0x4];                                      // 0x0614(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Role_Unknown;                                      // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Role_Tank;                                         // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Role_Damage;                                       // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Role_Support;                                      // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSwitchShape;                                     // 0x0638(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnSwitchShape__DelegateSignature(int32 ShapeID);
	void OnInitialized();
	void Construct();
	void Destruct();
	void OnReceiveAnyInputInThisFrame();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_HeroSystem_Info">();
	}
	static class UPyWidget_HeroSystem_Info* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_HeroSystem_Info>();
	}
};
static_assert(alignof(UPyWidget_HeroSystem_Info) == 0x000008, "Wrong alignment on UPyWidget_HeroSystem_Info");
static_assert(sizeof(UPyWidget_HeroSystem_Info) == 0x000648, "Wrong size on UPyWidget_HeroSystem_Info");
static_assert(offsetof(UPyWidget_HeroSystem_Info, SwitchShapeTime) == 0x00060C, "Member 'UPyWidget_HeroSystem_Info::SwitchShapeTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_Info, SwitchShapeCountdown) == 0x000610, "Member 'UPyWidget_HeroSystem_Info::SwitchShapeCountdown' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_Info, Role_Unknown) == 0x000618, "Member 'UPyWidget_HeroSystem_Info::Role_Unknown' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_Info, Role_Tank) == 0x000620, "Member 'UPyWidget_HeroSystem_Info::Role_Tank' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_Info, Role_Damage) == 0x000628, "Member 'UPyWidget_HeroSystem_Info::Role_Damage' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_Info, Role_Support) == 0x000630, "Member 'UPyWidget_HeroSystem_Info::Role_Support' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_Info, OnSwitchShape) == 0x000638, "Member 'UPyWidget_HeroSystem_Info::OnSwitchShape' has a wrong offset!");

}

