#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeCondition_SingleEncounterUseEachConsumable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ChallengeCondition_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ChallengeCondition_SingleEncounterUseEachConsumable.BP_ChallengeCondition_SingleEncounterUseEachConsumable_C
// 0x0058 (0x03D8 - 0x0380)
class ABP_ChallengeCondition_SingleEncounterUseEachConsumable_C final : public ABP_ChallengeCondition_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ChallengeCondition_SingleEncounterUseEachConsumable_C; // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class UClass*, bool>                     RequiredItems;                                     // 0x0388(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_ChallengeCondition_SingleEncounterUseEachConsumable(int32 EntryPoint);
	void OnMatchFinished();
	void OnConsumableUsed(class UClass* UsedConsumable, class APlayerState* User);
	void ReceiveBeginPlay();
	void Get_Maximum_Progress(int32* Maximum_Progress);
	void EvaluateCondition(bool* ConditionCompleted);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChallengeCondition_SingleEncounterUseEachConsumable_C">();
	}
	static class ABP_ChallengeCondition_SingleEncounterUseEachConsumable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ChallengeCondition_SingleEncounterUseEachConsumable_C>();
	}
};
static_assert(alignof(ABP_ChallengeCondition_SingleEncounterUseEachConsumable_C) == 0x000008, "Wrong alignment on ABP_ChallengeCondition_SingleEncounterUseEachConsumable_C");
static_assert(sizeof(ABP_ChallengeCondition_SingleEncounterUseEachConsumable_C) == 0x0003D8, "Wrong size on ABP_ChallengeCondition_SingleEncounterUseEachConsumable_C");
static_assert(offsetof(ABP_ChallengeCondition_SingleEncounterUseEachConsumable_C, UberGraphFrame_BP_ChallengeCondition_SingleEncounterUseEachConsumable_C) == 0x000380, "Member 'ABP_ChallengeCondition_SingleEncounterUseEachConsumable_C::UberGraphFrame_BP_ChallengeCondition_SingleEncounterUseEachConsumable_C' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_SingleEncounterUseEachConsumable_C, RequiredItems) == 0x000388, "Member 'ABP_ChallengeCondition_SingleEncounterUseEachConsumable_C::RequiredItems' has a wrong offset!");

}

