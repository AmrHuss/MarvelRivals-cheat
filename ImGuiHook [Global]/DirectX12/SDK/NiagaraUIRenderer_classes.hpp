#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraUIRenderer

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "UMG_classes.hpp"
#include "Niagara_classes.hpp"


namespace SDK
{

// Class NiagaraUIRenderer.NiagaraSystemWidget
// 0x0098 (0x0250 - 0x01B8)
class UNiagaraSystemWidget final : public UWidget
{
public:
	class UNiagaraSystem*                         NiagaraSystemReference;                            // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                 // 0x01C0(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                          bIsActiveSystem;                                   // 0x0210(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDeactivateImmediate;                              // 0x0211(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TickWhenPaused;                                    // 0x0212(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          FakeDepthScale;                                    // 0x0213(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FakeDepthScaleDistance;                            // 0x0214(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowDebugSystemInWorld;                            // 0x0218(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DisableWarnings;                                   // 0x0219(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21A[0x6];                                      // 0x021A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                OverrideNiagaraWorld;                              // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_228[0x10];                                     // 0x0228(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class ANiagaraUIActor*                        NiagaraActor;                                      // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraUIComponent*                    NiagaraComponent;                                  // 0x0240(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_248[0x8];                                      // 0x0248(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UNiagaraUIComponent* GetNiagaraComponent();
	void OnComponentActivate(class UActorComponent* Component, bool bReset);
	void OnComponentDeactivate(class UActorComponent* Component);
	void OnNiagaraSystemFinished(class UNiagaraComponent* Component);
	void SetIsActiveSystem(bool bInIsActiveSystem);
	void UpdateNiagaraSystemReference(class UNiagaraSystem* NewNiagaraSystem);
	void UpdateTickWhenPaused(bool NewTickWhenPaused);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraSystemWidget">();
	}
	static class UNiagaraSystemWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraSystemWidget>();
	}
};
static_assert(alignof(UNiagaraSystemWidget) == 0x000008, "Wrong alignment on UNiagaraSystemWidget");
static_assert(sizeof(UNiagaraSystemWidget) == 0x000250, "Wrong size on UNiagaraSystemWidget");
static_assert(offsetof(UNiagaraSystemWidget, NiagaraSystemReference) == 0x0001B8, "Member 'UNiagaraSystemWidget::NiagaraSystemReference' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, MaterialRemapList) == 0x0001C0, "Member 'UNiagaraSystemWidget::MaterialRemapList' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, bIsActiveSystem) == 0x000210, "Member 'UNiagaraSystemWidget::bIsActiveSystem' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, bDeactivateImmediate) == 0x000211, "Member 'UNiagaraSystemWidget::bDeactivateImmediate' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, TickWhenPaused) == 0x000212, "Member 'UNiagaraSystemWidget::TickWhenPaused' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, FakeDepthScale) == 0x000213, "Member 'UNiagaraSystemWidget::FakeDepthScale' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, FakeDepthScaleDistance) == 0x000214, "Member 'UNiagaraSystemWidget::FakeDepthScaleDistance' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, ShowDebugSystemInWorld) == 0x000218, "Member 'UNiagaraSystemWidget::ShowDebugSystemInWorld' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, DisableWarnings) == 0x000219, "Member 'UNiagaraSystemWidget::DisableWarnings' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, OverrideNiagaraWorld) == 0x000220, "Member 'UNiagaraSystemWidget::OverrideNiagaraWorld' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, NiagaraActor) == 0x000238, "Member 'UNiagaraSystemWidget::NiagaraActor' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, NiagaraComponent) == 0x000240, "Member 'UNiagaraSystemWidget::NiagaraComponent' has a wrong offset!");

// Class NiagaraUIRenderer.NiagaraUIActor
// 0x0000 (0x0470 - 0x0470)
class ANiagaraUIActor final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraUIActor">();
	}
	static class ANiagaraUIActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANiagaraUIActor>();
	}
};
static_assert(alignof(ANiagaraUIActor) == 0x000008, "Wrong alignment on ANiagaraUIActor");
static_assert(sizeof(ANiagaraUIActor) == 0x000470, "Wrong size on ANiagaraUIActor");

// Class NiagaraUIRenderer.NiagaraUIComponent
// 0x0000 (0x0B60 - 0x0B60)
class UNiagaraUIComponent final : public UNiagaraComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraUIComponent">();
	}
	static class UNiagaraUIComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraUIComponent>();
	}
};
static_assert(alignof(UNiagaraUIComponent) == 0x000010, "Wrong alignment on UNiagaraUIComponent");
static_assert(sizeof(UNiagaraUIComponent) == 0x000B60, "Wrong size on UNiagaraUIComponent");

}
