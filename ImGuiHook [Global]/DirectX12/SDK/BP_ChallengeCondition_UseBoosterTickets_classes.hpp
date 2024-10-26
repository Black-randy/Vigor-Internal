#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeCondition_UseBoosterTickets

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_ChallengeCondition_Base_classes.hpp"
#include "EBooster_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ChallengeCondition_UseBoosterTickets.BP_ChallengeCondition_UseBoosterTickets_C
// 0x0088 (0x0408 - 0x0380)
class ABP_ChallengeCondition_UseBoosterTickets_C final : public ABP_ChallengeCondition_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ChallengeCondition_UseBoosterTickets_C; // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Amount_of_Boosters_to_Use;                         // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         RequiredBoosterTickets;                            // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EItemCategory, class FString>            ItemCategoriesToGamemodes;                         // 0x03A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 GamemodeGate;                                      // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         TempUsedBoostCount;                                // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ChallengeCondition_UseBoosterTickets(int32 EntryPoint);
	void ActivationWithDelay();
	void BoosterTicketUsed(EBooster Booster_Type, bool UsedTicketInsteadOfCrowns);
	void ReceiveBeginPlay();
	void Get_Maximum_Progress(int32* Maximum_Progress);
	void Get_Condition_Text(class FText* Condition_Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChallengeCondition_UseBoosterTickets_C">();
	}
	static class ABP_ChallengeCondition_UseBoosterTickets_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ChallengeCondition_UseBoosterTickets_C>();
	}
};
static_assert(alignof(ABP_ChallengeCondition_UseBoosterTickets_C) == 0x000008, "Wrong alignment on ABP_ChallengeCondition_UseBoosterTickets_C");
static_assert(sizeof(ABP_ChallengeCondition_UseBoosterTickets_C) == 0x000408, "Wrong size on ABP_ChallengeCondition_UseBoosterTickets_C");
static_assert(offsetof(ABP_ChallengeCondition_UseBoosterTickets_C, UberGraphFrame_BP_ChallengeCondition_UseBoosterTickets_C) == 0x000380, "Member 'ABP_ChallengeCondition_UseBoosterTickets_C::UberGraphFrame_BP_ChallengeCondition_UseBoosterTickets_C' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_UseBoosterTickets_C, Amount_of_Boosters_to_Use) == 0x000388, "Member 'ABP_ChallengeCondition_UseBoosterTickets_C::Amount_of_Boosters_to_Use' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_UseBoosterTickets_C, RequiredBoosterTickets) == 0x000390, "Member 'ABP_ChallengeCondition_UseBoosterTickets_C::RequiredBoosterTickets' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_UseBoosterTickets_C, ItemCategoriesToGamemodes) == 0x0003A0, "Member 'ABP_ChallengeCondition_UseBoosterTickets_C::ItemCategoriesToGamemodes' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_UseBoosterTickets_C, GamemodeGate) == 0x0003F0, "Member 'ABP_ChallengeCondition_UseBoosterTickets_C::GamemodeGate' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_UseBoosterTickets_C, TempUsedBoostCount) == 0x000400, "Member 'ABP_ChallengeCondition_UseBoosterTickets_C::TempUsedBoostCount' has a wrong offset!");

}

