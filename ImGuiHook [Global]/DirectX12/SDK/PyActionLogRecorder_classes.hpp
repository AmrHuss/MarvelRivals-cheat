#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyActionLogRecorder

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyActionLogRecorder.PyActionLogRecorder
// 0x0000 (0x0040 - 0x0040)
class UPyActionLogRecorder final : public UActionLogRecorder
{
public:
	void OnInitialize();
	void OnShutdown();
	void OnRecordActorDeath(struct FActionLogDeathExtraInfo* DeathExtraInfo, struct FActionLogBattleContext* BattleContext, const struct FAttributeModifierHandle& ParameterHandle);
	void OnRecordHeroSwitchOut(struct FActionLogHeroUseRecord* HeroUseRecord);
	void OnRecordUnitUseInfo(class UPyObjectWrapper* AbilityUseInfo);
	void OnRecordAbilityUseInfo(class UPyObjectWrapper* AbilityUseInfo);
	void OnRecordActorDamages(const struct FActionLogDamageMerge& LogStruct);
	void OnRecordActorDamage(const struct FActionLogBattleContext& BattleContext, const struct FAttributeModifierHandle& ParameterHandle);
	void OnRecordActorHeals(EActionLogHealType HealType, const struct FActionLogDamageMerge& LogStruct);
	void OnRecordActorHeal(EActionLogHealType HealType, bool IsNearDeathHeal, struct FActionLogBattleContext* BattleContext, const struct FAttributeModifierHandle& ParameterHandle);
	void OnRecordBuffInfoCVer(class UPyObjectWrapper* Buff);
	void OnRecordBuffInfo(struct FActionLogBuffRecord* BuffRecord);
	void OnRecordHeroSculptIDChange(struct FActionLogHeroSculptIDChangeRecord* ChangeRecord);
	void OnRecordEnergyChangedCVer(class UPyObjectWrapper* EnergyChangeRecord);
	void OnRecordEnergyChanged(struct FActionLogEnergyChangeRecord* EnergyChangeRecord);
	void OnRecordSummonedInfo(struct FActionLogSummonedRecord* SummonedRecord);
	void OnRecordCompetitionInfo(struct FActionLogCompetitionRecord* CompetitionRecord);
	void OnRecordUltimateRelease(struct FActionLogUltimateRelease* ReleaseRecord);
	void OnRecordAbilityExtraNormal(const struct FAbilityExtraBaseInfo& BaseInfo, const class FString& ExtraKey, float ExtraValue);
	void OnRecordAbilityExtraHitRate(const struct FAbilityExtraBaseInfo& BaseInfo, const class FString& ExtraKey, const struct FAbilityExtraHitRate& ExtraHitRate);
	void OnRecordFirstEnterBattle(struct FActionLogFirstEnterBattle* FirstEnterBattle);
	void OnRecordHealPackRefreshInfo(const class FString& HealPackName);
	void OnRecordLevelTriggerInfo(struct FActionLogLevelTriggerInfo* LevelTriggerInfo);
	void OnRecordDestructionDamage(struct FActionLogDestructionDamage* DestructionDamage, const struct FDestructionExtraInfo& ExtraInfo);
	void OnRecordChaosDamages(const struct FActionLogChaosLogInfos& ChaosInfos);
	void OnRecordChaosDamage(const struct FActionLogChaosLogInfo& ChaosInfo);
	void OnRecordChaosBreaks(const struct FActionLogChaosLogInfos& ChaosInfos);
	void OnRecordChaosBreak(const struct FActionLogChaosLogInfo& ChaosInfo);
	void OnRecordChaosRecover(const struct FActionLogChaosLogInfo& ChaosInfo);
	void OnRecordChaosCollapse(const struct FActionLogChaosLogInfo& ChaosInfo);
	void OnRecordChaosEndPlay(const struct FActionLogChaosLogInfo& ChaosInfo);
	void OnRecordTeamComposition(const struct FActionLogTeamComposition& TeamComposition);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyActionLogRecorder">();
	}
	static class UPyActionLogRecorder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyActionLogRecorder>();
	}
};
static_assert(alignof(UPyActionLogRecorder) == 0x000008, "Wrong alignment on UPyActionLogRecorder");
static_assert(sizeof(UPyActionLogRecorder) == 0x000040, "Wrong size on UPyActionLogRecorder");

}
