#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OnlineChallengesComponent

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_OnlineChallengesComponent.BP_OnlineChallengesComponent_C
// 0x0018 (0x0138 - 0x0120)
class UBP_OnlineChallengesComponent_C final : public UOnlineChallengesComponent
{
public:
	TArray<class FString>                         Operations_Log;                                    // 0x0120(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         RetryRequestTimeout;                               // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChallengesLoaded;                                  // 0x0134(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	int32 Assign_Challenge(int32 SlotId, const class FName ChallengeName);
	int32 Set_Challenge_Progress(const class FString& Slot_Category, int32 SlotId, const class FName ChallengeName, int32 Progress);
	int32 Claim_Challenge_Rewards(const class FString& Slot_Category, int32 SlotId, const class FName ChallengeName);
	int32 Cancel_Challenge(const class FString& Slot_Category, int32 SlotId, const class FName& ChallengeName);
	int32 Get_Challenge_Slots();
	int32 Get_Challenge_Stats();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OnlineChallengesComponent_C">();
	}
	static class UBP_OnlineChallengesComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_OnlineChallengesComponent_C>();
	}
};
static_assert(alignof(UBP_OnlineChallengesComponent_C) == 0x000008, "Wrong alignment on UBP_OnlineChallengesComponent_C");
static_assert(sizeof(UBP_OnlineChallengesComponent_C) == 0x000138, "Wrong size on UBP_OnlineChallengesComponent_C");
static_assert(offsetof(UBP_OnlineChallengesComponent_C, Operations_Log) == 0x000120, "Member 'UBP_OnlineChallengesComponent_C::Operations_Log' has a wrong offset!");
static_assert(offsetof(UBP_OnlineChallengesComponent_C, RetryRequestTimeout) == 0x000130, "Member 'UBP_OnlineChallengesComponent_C::RetryRequestTimeout' has a wrong offset!");
static_assert(offsetof(UBP_OnlineChallengesComponent_C, ChallengesLoaded) == 0x000134, "Member 'UBP_OnlineChallengesComponent_C::ChallengesLoaded' has a wrong offset!");

}
