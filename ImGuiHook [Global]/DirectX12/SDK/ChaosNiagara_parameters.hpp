#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosNiagara

#include "Basic.hpp"

#include "ChaosNiagara_structs.hpp"


namespace SDK::Params
{

// Function ChaosNiagara.ChaosNiagaraFunctionLibrary.GetChaosEffectComponent
// 0x0020 (0x0020 - 0x0000)
struct ChaosNiagaraFunctionLibrary_GetChaosEffectComponent final
{
public:
	class UGeometryCollectionComponent*           GeometryCollectionComponent;                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                         InSystem;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseParentScale;                                   // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      ReturnValue;                                       // 0x0018(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosNiagaraFunctionLibrary_GetChaosEffectComponent) == 0x000008, "Wrong alignment on ChaosNiagaraFunctionLibrary_GetChaosEffectComponent");
static_assert(sizeof(ChaosNiagaraFunctionLibrary_GetChaosEffectComponent) == 0x000020, "Wrong size on ChaosNiagaraFunctionLibrary_GetChaosEffectComponent");
static_assert(offsetof(ChaosNiagaraFunctionLibrary_GetChaosEffectComponent, GeometryCollectionComponent) == 0x000000, "Member 'ChaosNiagaraFunctionLibrary_GetChaosEffectComponent::GeometryCollectionComponent' has a wrong offset!");
static_assert(offsetof(ChaosNiagaraFunctionLibrary_GetChaosEffectComponent, InSystem) == 0x000008, "Member 'ChaosNiagaraFunctionLibrary_GetChaosEffectComponent::InSystem' has a wrong offset!");
static_assert(offsetof(ChaosNiagaraFunctionLibrary_GetChaosEffectComponent, bUseParentScale) == 0x000010, "Member 'ChaosNiagaraFunctionLibrary_GetChaosEffectComponent::bUseParentScale' has a wrong offset!");
static_assert(offsetof(ChaosNiagaraFunctionLibrary_GetChaosEffectComponent, ReturnValue) == 0x000018, "Member 'ChaosNiagaraFunctionLibrary_GetChaosEffectComponent::ReturnValue' has a wrong offset!");

// Function ChaosNiagara.ChaosNiagaraFunctionLibrary.GetNormalCombineEffectComponent
// 0x0020 (0x0020 - 0x0000)
struct ChaosNiagaraFunctionLibrary_GetNormalCombineEffectComponent final
{
public:
	class USceneComponent*                        SceneComponent;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                         InSystem;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseParentScale;                                   // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      ReturnValue;                                       // 0x0018(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosNiagaraFunctionLibrary_GetNormalCombineEffectComponent) == 0x000008, "Wrong alignment on ChaosNiagaraFunctionLibrary_GetNormalCombineEffectComponent");
static_assert(sizeof(ChaosNiagaraFunctionLibrary_GetNormalCombineEffectComponent) == 0x000020, "Wrong size on ChaosNiagaraFunctionLibrary_GetNormalCombineEffectComponent");
static_assert(offsetof(ChaosNiagaraFunctionLibrary_GetNormalCombineEffectComponent, SceneComponent) == 0x000000, "Member 'ChaosNiagaraFunctionLibrary_GetNormalCombineEffectComponent::SceneComponent' has a wrong offset!");
static_assert(offsetof(ChaosNiagaraFunctionLibrary_GetNormalCombineEffectComponent, InSystem) == 0x000008, "Member 'ChaosNiagaraFunctionLibrary_GetNormalCombineEffectComponent::InSystem' has a wrong offset!");
static_assert(offsetof(ChaosNiagaraFunctionLibrary_GetNormalCombineEffectComponent, bUseParentScale) == 0x000010, "Member 'ChaosNiagaraFunctionLibrary_GetNormalCombineEffectComponent::bUseParentScale' has a wrong offset!");
static_assert(offsetof(ChaosNiagaraFunctionLibrary_GetNormalCombineEffectComponent, ReturnValue) == 0x000018, "Member 'ChaosNiagaraFunctionLibrary_GetNormalCombineEffectComponent::ReturnValue' has a wrong offset!");

// Function ChaosNiagara.ChaosNiagaraFunctionLibrary.InitDefaultToEventData
// 0x00D8 (0x00D8 - 0x0000)
struct ChaosNiagaraFunctionLibrary_InitDefaultToEventData final
{
public:
	struct FChaosEffectEventData                  EventData;                                         // 0x0000(0x00D8)(Parm, OutParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosNiagaraFunctionLibrary_InitDefaultToEventData) == 0x000008, "Wrong alignment on ChaosNiagaraFunctionLibrary_InitDefaultToEventData");
static_assert(sizeof(ChaosNiagaraFunctionLibrary_InitDefaultToEventData) == 0x0000D8, "Wrong size on ChaosNiagaraFunctionLibrary_InitDefaultToEventData");
static_assert(offsetof(ChaosNiagaraFunctionLibrary_InitDefaultToEventData, EventData) == 0x000000, "Member 'ChaosNiagaraFunctionLibrary_InitDefaultToEventData::EventData' has a wrong offset!");

// Function ChaosNiagara.ChaosNiagaraFunctionLibrary.PySendSpawnEventToNiagara
// 0x00E0 (0x00E0 - 0x0000)
struct ChaosNiagaraFunctionLibrary_PySendSpawnEventToNiagara final
{
public:
	class UNiagaraComponent*                      TargetComponent;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosEffectEventData                  InInstanceData;                                    // 0x0008(0x00D8)(Parm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosNiagaraFunctionLibrary_PySendSpawnEventToNiagara) == 0x000008, "Wrong alignment on ChaosNiagaraFunctionLibrary_PySendSpawnEventToNiagara");
static_assert(sizeof(ChaosNiagaraFunctionLibrary_PySendSpawnEventToNiagara) == 0x0000E0, "Wrong size on ChaosNiagaraFunctionLibrary_PySendSpawnEventToNiagara");
static_assert(offsetof(ChaosNiagaraFunctionLibrary_PySendSpawnEventToNiagara, TargetComponent) == 0x000000, "Member 'ChaosNiagaraFunctionLibrary_PySendSpawnEventToNiagara::TargetComponent' has a wrong offset!");
static_assert(offsetof(ChaosNiagaraFunctionLibrary_PySendSpawnEventToNiagara, InInstanceData) == 0x000008, "Member 'ChaosNiagaraFunctionLibrary_PySendSpawnEventToNiagara::InInstanceData' has a wrong offset!");

// Function ChaosNiagara.ChaosNiagaraFunctionLibrary.SendSpawnEventToNiagara
// 0x00E0 (0x00E0 - 0x0000)
struct ChaosNiagaraFunctionLibrary_SendSpawnEventToNiagara final
{
public:
	class UNiagaraComponent*                      TargetComponent;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosEffectEventData                  InInstanceData;                                    // 0x0008(0x00D8)(Parm, OutParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosNiagaraFunctionLibrary_SendSpawnEventToNiagara) == 0x000008, "Wrong alignment on ChaosNiagaraFunctionLibrary_SendSpawnEventToNiagara");
static_assert(sizeof(ChaosNiagaraFunctionLibrary_SendSpawnEventToNiagara) == 0x0000E0, "Wrong size on ChaosNiagaraFunctionLibrary_SendSpawnEventToNiagara");
static_assert(offsetof(ChaosNiagaraFunctionLibrary_SendSpawnEventToNiagara, TargetComponent) == 0x000000, "Member 'ChaosNiagaraFunctionLibrary_SendSpawnEventToNiagara::TargetComponent' has a wrong offset!");
static_assert(offsetof(ChaosNiagaraFunctionLibrary_SendSpawnEventToNiagara, InInstanceData) == 0x000008, "Member 'ChaosNiagaraFunctionLibrary_SendSpawnEventToNiagara::InInstanceData' has a wrong offset!");

// Function ChaosNiagara.NiagaraDataInterfaceChaosEffect.ReceiveChaosEvents
// 0x00D8 (0x00D8 - 0x0000)
struct NiagaraDataInterfaceChaosEffect_ReceiveChaosEvents final
{
public:
	struct FChaosEffectEventData                  InDatas;                                           // 0x0000(0x00D8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraDataInterfaceChaosEffect_ReceiveChaosEvents) == 0x000008, "Wrong alignment on NiagaraDataInterfaceChaosEffect_ReceiveChaosEvents");
static_assert(sizeof(NiagaraDataInterfaceChaosEffect_ReceiveChaosEvents) == 0x0000D8, "Wrong size on NiagaraDataInterfaceChaosEffect_ReceiveChaosEvents");
static_assert(offsetof(NiagaraDataInterfaceChaosEffect_ReceiveChaosEvents, InDatas) == 0x000000, "Member 'NiagaraDataInterfaceChaosEffect_ReceiveChaosEvents::InDatas' has a wrong offset!");

}
