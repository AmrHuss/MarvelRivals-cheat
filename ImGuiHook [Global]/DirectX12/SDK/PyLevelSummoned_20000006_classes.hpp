#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLevelSummoned_20000006

#include "Basic.hpp"

#include "Marvel_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "MarvelLevel_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// PythonClass PyLevelSummoned_20000006.PyLevelSummoned_20000006
// 0x0060 (0x0880 - 0x0820)
class APyLevelSummoned_20000006 : public AMarvelLevelSummonedBase
{
public:
	class UAkAudioEvent*                          DeathAudio;                                        // 0x0820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpawnGapTime;                                      // 0x0828(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_82C[0x4];                                      // 0x082C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                GrowthScale;                                       // 0x0830(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GrowthTime;                                        // 0x0848(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SubSummonedID;                                     // 0x084C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InitVelocity;                                      // 0x0850(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinMaterialValue;                                  // 0x0868(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxMaterialValue;                                  // 0x086C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HealthMaterialValue;                               // 0x0870(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DeathMaterialValue;                                // 0x0874(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DeathMaterialTime;                                 // 0x0878(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnDeath(class AController* InSource, class AActor* InSourceAvatar, const struct FAttributeModifierHandle& ParameterHandle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyLevelSummoned_20000006">();
	}
	static class APyLevelSummoned_20000006* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyLevelSummoned_20000006>();
	}
};
static_assert(alignof(APyLevelSummoned_20000006) == 0x000010, "Wrong alignment on APyLevelSummoned_20000006");
static_assert(sizeof(APyLevelSummoned_20000006) == 0x000880, "Wrong size on APyLevelSummoned_20000006");
static_assert(offsetof(APyLevelSummoned_20000006, DeathAudio) == 0x000820, "Member 'APyLevelSummoned_20000006::DeathAudio' has a wrong offset!");
static_assert(offsetof(APyLevelSummoned_20000006, SpawnGapTime) == 0x000828, "Member 'APyLevelSummoned_20000006::SpawnGapTime' has a wrong offset!");
static_assert(offsetof(APyLevelSummoned_20000006, GrowthScale) == 0x000830, "Member 'APyLevelSummoned_20000006::GrowthScale' has a wrong offset!");
static_assert(offsetof(APyLevelSummoned_20000006, GrowthTime) == 0x000848, "Member 'APyLevelSummoned_20000006::GrowthTime' has a wrong offset!");
static_assert(offsetof(APyLevelSummoned_20000006, SubSummonedID) == 0x00084C, "Member 'APyLevelSummoned_20000006::SubSummonedID' has a wrong offset!");
static_assert(offsetof(APyLevelSummoned_20000006, InitVelocity) == 0x000850, "Member 'APyLevelSummoned_20000006::InitVelocity' has a wrong offset!");
static_assert(offsetof(APyLevelSummoned_20000006, MinMaterialValue) == 0x000868, "Member 'APyLevelSummoned_20000006::MinMaterialValue' has a wrong offset!");
static_assert(offsetof(APyLevelSummoned_20000006, MaxMaterialValue) == 0x00086C, "Member 'APyLevelSummoned_20000006::MaxMaterialValue' has a wrong offset!");
static_assert(offsetof(APyLevelSummoned_20000006, HealthMaterialValue) == 0x000870, "Member 'APyLevelSummoned_20000006::HealthMaterialValue' has a wrong offset!");
static_assert(offsetof(APyLevelSummoned_20000006, DeathMaterialValue) == 0x000874, "Member 'APyLevelSummoned_20000006::DeathMaterialValue' has a wrong offset!");
static_assert(offsetof(APyLevelSummoned_20000006, DeathMaterialTime) == 0x000878, "Member 'APyLevelSummoned_20000006::DeathMaterialTime' has a wrong offset!");

// PythonClass PyLevelSummoned_20000006.PySummonedComp_20000006
// 0x0000 (0x0C90 - 0x0C90)
class UPySummonedComp_20000006 final : public ULevelSummonedComponent
{
public:
	void ReceiveBeginPlay();
	void OnSpawnItem(class AActor* Item);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySummonedComp_20000006">();
	}
	static class UPySummonedComp_20000006* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPySummonedComp_20000006>();
	}
};
static_assert(alignof(UPySummonedComp_20000006) == 0x000010, "Wrong alignment on UPySummonedComp_20000006");
static_assert(sizeof(UPySummonedComp_20000006) == 0x000C90, "Wrong size on UPySummonedComp_20000006");

// PythonClass PyLevelSummoned_20000006.PySummonedComp_20000006_Explore
// 0x0010 (0x0CA0 - 0x0C90)
class UPySummonedComp_20000006_Explore final : public ULevelSummonedComponent
{
public:
	int32                                         MinYaw;                                            // 0x0C90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxYaw;                                            // 0x0C94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SpawnCount;                                        // 0x0C98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySummonedComp_20000006_Explore">();
	}
	static class UPySummonedComp_20000006_Explore* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPySummonedComp_20000006_Explore>();
	}
};
static_assert(alignof(UPySummonedComp_20000006_Explore) == 0x000010, "Wrong alignment on UPySummonedComp_20000006_Explore");
static_assert(sizeof(UPySummonedComp_20000006_Explore) == 0x000CA0, "Wrong size on UPySummonedComp_20000006_Explore");
static_assert(offsetof(UPySummonedComp_20000006_Explore, MinYaw) == 0x000C90, "Member 'UPySummonedComp_20000006_Explore::MinYaw' has a wrong offset!");
static_assert(offsetof(UPySummonedComp_20000006_Explore, MaxYaw) == 0x000C94, "Member 'UPySummonedComp_20000006_Explore::MaxYaw' has a wrong offset!");
static_assert(offsetof(UPySummonedComp_20000006_Explore, SpawnCount) == 0x000C98, "Member 'UPySummonedComp_20000006_Explore::SpawnCount' has a wrong offset!");

// PythonClass PyLevelSummoned_20000006.PySummonedComp_20000006_Sub
// 0x0020 (0x0CB0 - 0x0C90)
class UPySummonedComp_20000006_Sub : public ULevelSummonedComponent
{
public:
	struct FVector                                Velocity;                                          // 0x0C90(0x0018)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveBeginPlay();
	void K2_OnEndAgentTask();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySummonedComp_20000006_Sub">();
	}
	static class UPySummonedComp_20000006_Sub* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPySummonedComp_20000006_Sub>();
	}
};
static_assert(alignof(UPySummonedComp_20000006_Sub) == 0x000010, "Wrong alignment on UPySummonedComp_20000006_Sub");
static_assert(sizeof(UPySummonedComp_20000006_Sub) == 0x000CB0, "Wrong size on UPySummonedComp_20000006_Sub");
static_assert(offsetof(UPySummonedComp_20000006_Sub, Velocity) == 0x000C90, "Member 'UPySummonedComp_20000006_Sub::Velocity' has a wrong offset!");

// PythonClass PyLevelSummoned_20000006.PyOverlapHandlerComponent_20000015
// 0x0010 (0x0C38 - 0x0C28)
class UPyOverlapHandlerComponent_20000015 final : public UOverlapHandlerComponent
{
public:
	int32                                         SpawnScope;                                        // 0x0C28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C2C[0x4];                                      // 0x0C2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         ExploreEffect;                                     // 0x0C30(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyOverlapHandlerComponent_20000015">();
	}
	static class UPyOverlapHandlerComponent_20000015* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyOverlapHandlerComponent_20000015>();
	}
};
static_assert(alignof(UPyOverlapHandlerComponent_20000015) == 0x000008, "Wrong alignment on UPyOverlapHandlerComponent_20000015");
static_assert(sizeof(UPyOverlapHandlerComponent_20000015) == 0x000C38, "Wrong size on UPyOverlapHandlerComponent_20000015");
static_assert(offsetof(UPyOverlapHandlerComponent_20000015, SpawnScope) == 0x000C28, "Member 'UPyOverlapHandlerComponent_20000015::SpawnScope' has a wrong offset!");
static_assert(offsetof(UPyOverlapHandlerComponent_20000015, ExploreEffect) == 0x000C30, "Member 'UPyOverlapHandlerComponent_20000015::ExploreEffect' has a wrong offset!");

// PythonClass PyLevelSummoned_20000006.PyLevelRandomEgg
// 0x0058 (0x04C8 - 0x0470)
class APyLevelRandomEgg final : public AActor
{
public:
	TMap<int32, float>                            SpawnRandomDic;                                    // 0x0470(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         SpawnGapTime;                                      // 0x04C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveBeginPlay();
	void OnSpawnItem(class AActor* Item);
	void OnSummonedDeath(class AActor* InSourceAvatar, class AActor* InTargetAvatar, const struct FAttributeModifierHandle& ParameterHandle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyLevelRandomEgg">();
	}
	static class APyLevelRandomEgg* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyLevelRandomEgg>();
	}
};
static_assert(alignof(APyLevelRandomEgg) == 0x000008, "Wrong alignment on APyLevelRandomEgg");
static_assert(sizeof(APyLevelRandomEgg) == 0x0004C8, "Wrong size on APyLevelRandomEgg");
static_assert(offsetof(APyLevelRandomEgg, SpawnRandomDic) == 0x000470, "Member 'APyLevelRandomEgg::SpawnRandomDic' has a wrong offset!");
static_assert(offsetof(APyLevelRandomEgg, SpawnGapTime) == 0x0004C0, "Member 'APyLevelRandomEgg::SpawnGapTime' has a wrong offset!");

// PythonClass PyLevelSummoned_20000006.PyCue_Summoner_Loop_20000006
// 0x0000 (0x0E30 - 0x0E30)
class APyCue_Summoner_Loop_20000006 final : public AMarvelCueNotify_Summoned
{
public:
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnSummonedDeath(class AActor* InSourceAvatar, class AActor* InTargetAvatar, const struct FAttributeModifierHandle& ParameterHandle);
	void OnTargetAttrChanged(class AActor* SourceActor, const struct FAttributeModifierHandle& Parameter);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Summoner_Loop_20000006">();
	}
	static class APyCue_Summoner_Loop_20000006* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Summoner_Loop_20000006>();
	}
};
static_assert(alignof(APyCue_Summoner_Loop_20000006) == 0x000008, "Wrong alignment on APyCue_Summoner_Loop_20000006");
static_assert(sizeof(APyCue_Summoner_Loop_20000006) == 0x000E30, "Wrong size on APyCue_Summoner_Loop_20000006");

}

