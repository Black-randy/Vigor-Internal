#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerController_Teams

#include "Basic.hpp"

#include "BP_PlayerController_Script_classes.hpp"
#include "Flame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerController_Teams.BP_PlayerController_Teams_C
// 0x0098 (0x0D98 - 0x0D00)
class ABP_PlayerController_Teams_C : public ABP_PlayerController_Script_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PlayerController_Teams_C;        // 0x0D00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_LobbyComponent_C*                   BP_LobbyComponent;                                 // 0x0D08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_UserInfoComponent_C*                BP_UserInfoComponent;                              // 0x0D10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLoadoutInfo                           Starting_Loadout;                                  // 0x0D18(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Match_XP_Reward;                                   // 0x0D40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D44[0x4];                                      // 0x0D44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UClass*, int32>                    MatchRewards;                                      // 0x0D48(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_PlayerController_Teams(int32 EntryPoint);
	void Possessed(class ABP_Character_C* Possessed_Character);
	void PossessedServer(class ABP_Character_C* Possessed_Character);
	void Died();
	void Side_Joined(class FName Side);
	void Team_Left(class UBP_GSC_Team_C* Team);
	void Team_Joined(class UBP_GSC_Team_C* Team);
	void ShowRewardPopUpDelayed();
	void ShowRewardPopUp(class UUI_WinnerScreen_Base_C* WinnerScreenWidget);
	void StoreRewardInfo(class FName BattlepassReward, const struct FUserMatchReward& Rewards);
	void Server_RewardsReceived();
	void Client_CheckForReceivedRewards(const TMap<class UClass*, int32>& MatchRewards_0, int32 Match_XP_Reward_0);
	void Server_CheckClientForReceivedRewards();
	void StoreRewardInfoWithCheck(class FName BattlepassReward, const struct FUserMatchReward& Rewards);
	void Show_Reward_PopUp(class FName BattlePass_Reward, const struct FUserMatchReward& Reward);
	void GetXPReward(class FName BPReward, int32* _XP);
	void Get_Cloud_Reward(const struct FUserMatchReward& Reward, TMap<class UClass*, int32>* Item_Reward);
	void Try_Send_Spawned_Anylitics();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void Is_Player_Ready_for_Analytics(bool* Is_Client_Ready);

	EGameScenario GetGameScenario() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerController_Teams_C">();
	}
	static class ABP_PlayerController_Teams_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerController_Teams_C>();
	}
};
static_assert(alignof(ABP_PlayerController_Teams_C) == 0x000008, "Wrong alignment on ABP_PlayerController_Teams_C");
static_assert(sizeof(ABP_PlayerController_Teams_C) == 0x000D98, "Wrong size on ABP_PlayerController_Teams_C");
static_assert(offsetof(ABP_PlayerController_Teams_C, UberGraphFrame_BP_PlayerController_Teams_C) == 0x000D00, "Member 'ABP_PlayerController_Teams_C::UberGraphFrame_BP_PlayerController_Teams_C' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_Teams_C, BP_LobbyComponent) == 0x000D08, "Member 'ABP_PlayerController_Teams_C::BP_LobbyComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_Teams_C, BP_UserInfoComponent) == 0x000D10, "Member 'ABP_PlayerController_Teams_C::BP_UserInfoComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_Teams_C, Starting_Loadout) == 0x000D18, "Member 'ABP_PlayerController_Teams_C::Starting_Loadout' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_Teams_C, Match_XP_Reward) == 0x000D40, "Member 'ABP_PlayerController_Teams_C::Match_XP_Reward' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_Teams_C, MatchRewards) == 0x000D48, "Member 'ABP_PlayerController_Teams_C::MatchRewards' has a wrong offset!");

}

