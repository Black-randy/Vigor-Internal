#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TitleLogic_MementoCollection

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_TitleLogic_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TitleLogic_MementoCollection.BP_TitleLogic_MementoCollection_C
// 0x0018 (0x0258 - 0x0240)
class ABP_TitleLogic_MementoCollection_C final : public ABP_TitleLogic_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_PlayerState_C*                      Player_State;                                      // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ready;                                             // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_TitleLogic_MementoCollection(int32 EntryPoint);
	void Stash_Ready(class AStash* Sender, class UStashComponent* Inventory);
	void ReceiveBeginPlay();
	void Is_Initialized(bool* Initialized);
	void Is_Rank_Owned(const struct FF_TitleRank& Rank_Info, bool* Owned);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TitleLogic_MementoCollection_C">();
	}
	static class ABP_TitleLogic_MementoCollection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TitleLogic_MementoCollection_C>();
	}
};
static_assert(alignof(ABP_TitleLogic_MementoCollection_C) == 0x000008, "Wrong alignment on ABP_TitleLogic_MementoCollection_C");
static_assert(sizeof(ABP_TitleLogic_MementoCollection_C) == 0x000258, "Wrong size on ABP_TitleLogic_MementoCollection_C");
static_assert(offsetof(ABP_TitleLogic_MementoCollection_C, UberGraphFrame) == 0x000240, "Member 'ABP_TitleLogic_MementoCollection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TitleLogic_MementoCollection_C, Player_State) == 0x000248, "Member 'ABP_TitleLogic_MementoCollection_C::Player_State' has a wrong offset!");
static_assert(offsetof(ABP_TitleLogic_MementoCollection_C, Ready) == 0x000250, "Member 'ABP_TitleLogic_MementoCollection_C::Ready' has a wrong offset!");

}
