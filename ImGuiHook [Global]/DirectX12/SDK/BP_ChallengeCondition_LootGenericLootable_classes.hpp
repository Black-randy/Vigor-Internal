#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeCondition_LootGenericLootable

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_ChallengeCondition_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ChallengeCondition_LootGenericLootable.BP_ChallengeCondition_LootGenericLootable_C
// 0x0020 (0x03A0 - 0x0380)
class ABP_ChallengeCondition_LootGenericLootable_C final : public ABP_ChallengeCondition_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ChallengeCondition_LootGenericLootable_C; // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Lootable_Inventories_to_Open;                      // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Already_Accessed_Lootables;                        // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_ChallengeCondition_LootGenericLootable(int32 EntryPoint);
	void Generic_Lootable_Object_Inventory_Accessed(class ALootable* Lootable_Object);
	void ReceiveBeginPlay();
	void Get_Maximum_Progress(int32* Maximum_Progress);
	void Get_Condition_Text(class FText* Condition_Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChallengeCondition_LootGenericLootable_C">();
	}
	static class ABP_ChallengeCondition_LootGenericLootable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ChallengeCondition_LootGenericLootable_C>();
	}
};
static_assert(alignof(ABP_ChallengeCondition_LootGenericLootable_C) == 0x000008, "Wrong alignment on ABP_ChallengeCondition_LootGenericLootable_C");
static_assert(sizeof(ABP_ChallengeCondition_LootGenericLootable_C) == 0x0003A0, "Wrong size on ABP_ChallengeCondition_LootGenericLootable_C");
static_assert(offsetof(ABP_ChallengeCondition_LootGenericLootable_C, UberGraphFrame_BP_ChallengeCondition_LootGenericLootable_C) == 0x000380, "Member 'ABP_ChallengeCondition_LootGenericLootable_C::UberGraphFrame_BP_ChallengeCondition_LootGenericLootable_C' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_LootGenericLootable_C, Lootable_Inventories_to_Open) == 0x000388, "Member 'ABP_ChallengeCondition_LootGenericLootable_C::Lootable_Inventories_to_Open' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_LootGenericLootable_C, Already_Accessed_Lootables) == 0x000390, "Member 'ABP_ChallengeCondition_LootGenericLootable_C::Already_Accessed_Lootables' has a wrong offset!");

}

