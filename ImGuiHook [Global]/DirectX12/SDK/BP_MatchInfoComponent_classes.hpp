#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MatchInfoComponent

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MatchInfoComponent.BP_MatchInfoComponent_C
// 0x0058 (0x01C8 - 0x0170)
class UBP_MatchInfoComponent_C final : public UMatchInfoComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0170(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ABP_PlayerController_Script_C*>  Early_Players;                                     // 0x0178(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             Match_ID_Available;                                // 0x0188(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Request_Match_ID_at_Start;                         // 0x0198(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Match_ID;                                          // 0x01A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Match_Registration_Done;                           // 0x01B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Cloud_Game_Mode_Type;                              // 0x01B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Match_ID_Available__DelegateSignature(const class FString& Match_ID_0);
	void ExecuteUbergraph_BP_MatchInfoComponent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Save_Match_ID_on_Client(class ABP_PlayerController_Script_C* New_Player);
	void Save_Match_Info_for_Leaving_Player_to_Cloud(class AController* Exiting_Controller, const struct FUserMatchInfo& Match_Info);
	void Register_Match_in_Cloud();
	void Match_Registered(const struct FCloudRequestResult& RequestResult, const class FString& MatchID);
	void Get_Is_Match_Registration_Done(bool* Match_Registration_Done_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MatchInfoComponent_C">();
	}
	static class UBP_MatchInfoComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MatchInfoComponent_C>();
	}
};
static_assert(alignof(UBP_MatchInfoComponent_C) == 0x000008, "Wrong alignment on UBP_MatchInfoComponent_C");
static_assert(sizeof(UBP_MatchInfoComponent_C) == 0x0001C8, "Wrong size on UBP_MatchInfoComponent_C");
static_assert(offsetof(UBP_MatchInfoComponent_C, UberGraphFrame) == 0x000170, "Member 'UBP_MatchInfoComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_MatchInfoComponent_C, Early_Players) == 0x000178, "Member 'UBP_MatchInfoComponent_C::Early_Players' has a wrong offset!");
static_assert(offsetof(UBP_MatchInfoComponent_C, Match_ID_Available) == 0x000188, "Member 'UBP_MatchInfoComponent_C::Match_ID_Available' has a wrong offset!");
static_assert(offsetof(UBP_MatchInfoComponent_C, Request_Match_ID_at_Start) == 0x000198, "Member 'UBP_MatchInfoComponent_C::Request_Match_ID_at_Start' has a wrong offset!");
static_assert(offsetof(UBP_MatchInfoComponent_C, Match_ID) == 0x0001A0, "Member 'UBP_MatchInfoComponent_C::Match_ID' has a wrong offset!");
static_assert(offsetof(UBP_MatchInfoComponent_C, Match_Registration_Done) == 0x0001B0, "Member 'UBP_MatchInfoComponent_C::Match_Registration_Done' has a wrong offset!");
static_assert(offsetof(UBP_MatchInfoComponent_C, Cloud_Game_Mode_Type) == 0x0001B8, "Member 'UBP_MatchInfoComponent_C::Cloud_Game_Mode_Type' has a wrong offset!");

}
