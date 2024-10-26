#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameMode_TVTDeathmatch

#include "Basic.hpp"

#include "Struct_TVTDeathmatch_Items_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "Struct_TVTDeathmatchStatistics_structs.hpp"
#include "BP_GameMode_Teams_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameMode_TVTDeathmatch.BP_GameMode_TVTDeathmatch_C
// 0x01F8 (0x06D0 - 0x04D8)
class ABP_GameMode_TVTDeathmatch_C final : public ABP_GameMode_Teams_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GameMode_TVTDeathmatch_C;        // 0x04D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_MatchInfoComponent_C*               BP_MatchInfoComponent;                             // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Round_Time;                                        // 0x04E8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Respawn_Time_On_Death;                             // 0x04EC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Match_In_Progress;                                 // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F1[0x3];                                      // 0x04F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Kill_Win_Threshold;                                // 0x04F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Match_Max_Time_Timer_Handle;                       // 0x04F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         SpawnProtectionDistance;                           // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Waiting_for_Match_Start;                           // 0x0504(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_505[0x3];                                      // 0x0505(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FWeaponDescriptor>              Player_Initial_Weapons;                            // 0x0508(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, Deprecated)
	TArray<struct FStruct_TVTDeathmatch_Items>    Player_Initial_Items;                              // 0x0518(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, Deprecated)
	TArray<class ABP_TVTDeathmatch_Box_SpawnPoint_C*> Lootbox_Spawn_Points;                              // 0x0528(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         Last_Man_Standing_Time;                            // 0x0538(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53C[0x4];                                      // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Last_Man_Standing_Timer;                           // 0x0540(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Last_Man_Standing_Started;                         // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_549[0x7];                                      // 0x0549(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_PlayerController_TVTDeathmatch_C*> Players_To_Register_When_Match_ID_Available;       // 0x0550(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         Expected_Player_Results_Sent_Count;                // 0x0560(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Player_Results_Sending_Started;                    // 0x0564(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DEBUG_PRINT_TO_SCREEN;                             // 0x0565(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_566[0x2];                                      // 0x0566(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FStruct_TVTDeathmatchStatistics> Disconnected_Player_Stats;                         // 0x0568(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_PlayerController_TVTDeathmatch_C*> PlayersToForceRespawn;                             // 0x0578(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_PlayerController_TVTDeathmatch_C*> DelayedPlayersToConnect;                           // 0x0588(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_PlayerLobby_Base_C*                 Lobby;                                             // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RewardBoosterCount;                                // 0x05A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A4[0x4];                                      // 0x05A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_TVTDeathmatch_Box_C*>        LootBoxes;                                         // 0x05A8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         Amount_of_lootboxes_to_spawn;                      // 0x05B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BC[0x4];                                      // 0x05BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GameState_TVTDeathmatch_C*          Shootout_Game_State;                               // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class ABP_PlayerController_C*, class FName> PlayersRewardTiers;                                // 0x05C8(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          DEBUG_RespawnPrintOuts;                            // 0x0618(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bNewRespawnActive;                                 // 0x0619(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61A[0x6];                                      // 0x061A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStart*                           TempPlayerStart;                                   // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Cheat_ShouldOverrideLoadout;                       // 0x0628(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_629[0x7];                                      // 0x0629(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class AController*, class UClass*>       Cheat_ControllerToWeaponOverride;                  // 0x0630(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         Spawn_SafenessTarget;                              // 0x0680(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_684[0x4];                                      // 0x0684(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer_CheatRespawnCheck;                           // 0x0688(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        SpawnBlockerLocations;                             // 0x0690(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          CloudLoadoutsReceived;                             // 0x06A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A1[0x7];                                      // 0x06A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCloudLoadout                          InitialLoadouts;                                   // 0x06A8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_GameMode_TVTDeathmatch(int32 EntryPoint);
	void InitStartSpot(class AActor* StartSpot, class AController* NewPlayer);
	void Countdown_for_respawn_lootbox_finished(ECloudMatchLootboxType Box_Type);
	void OnSpectatorHasNobodyToSpectate(class AHumanPlayerController* Player);
	void Lobby_Finished(const struct FCloudRequestResult& RequestResult, const struct FCloudMatchCommitInfo& CloudSettings);
	void SubLevelsReturned(bool SLM_Load_Complete);
	void Player_Died(class ABP_Character_TVTDeathmatch_C* Victim, EDamageType Damage_Type, class AHumanCharacter* Killer, class UClass* Instigating_Item, bool Is_Headshot);
	void Lootbox_looted(class AActor* Looting_character, const class ABP_TVTDeathmatch_Box_C*& Looted_Lootbox, const TArray<class AWeapon*>& Looted_weapons);
	void K2_OnLogout(class AController* ExitingController);
	void K2_PostLogin(class APlayerController* NewPlayer);
	void Respawn_Player(class ABP_PlayerController_Teams_C* Player_Controller);
	void Start_Match();
	void Player_Connected(class ABP_PlayerController_TVTDeathmatch_C* Player_Controller);
	void Match_Initialization();
	void Match_Finish();
	void Switch_To_Match_Cleanup();
	void Cheat_ResetRoundTime();
	void Round_Cleanup();
	void Round_intialize_loot();
	void Delayed_Force_Respawn();
	void Round_Finish();
	void Last_Man_Standing_Respawn_All_Dead();
	void Last_Man_Standing_Start();
	void Second_On_Server_Passed();
	void Round_Start();
	void Round_In_Progress();
	void Round_Ended_By_Time();
	void ReRequestForMatchLoadouts();
	void RequestCloudLoadoutsAgain();
	void GetMatchLoadoutsFinished_Event_0(const struct FCloudRequestResult& RequestResult, const struct FCloudMatchLoadouts& Loadouts);
	void TryRequestingForCloudLoadouts();
	void Players_Result_Sent_To_Cloud(const struct FCloudRequestResult& RequestResult, class AHumanPlayerController* Player, const struct FUserMatchReward& Reward);
	void Match_ID_Available(const class FString& Match_ID);
	void Player_Cloud_Id_available(const class FString& Userid);
	void Register_Player_Match_ID(class ABP_PlayerController_TVTDeathmatch_C* Player_Controller);
	void All_Player_Results_Sent();
	void Match_Unregistered_From_Cloud(const struct FCloudRequestResult& RequestResult);
	void Match_Registered_To_Cloud(const struct FCloudRequestResult& RequestResult, const class FString& MatchID);
	void User_Registered_To_Cloud(const struct FCloudRequestResult& RequestResult, class AHumanPlayerController* Player);
	void Cheat_ReFetchCloudLoadouts();
	void Cheat_SetKillWinThreshold(int32 KillWinThreshold);
	void Cheat_StopPeriodicRespawnCheck();
	void Cheat_RespawnCheck_Event();
	void Cheat_StartPeriodicRespawnCheck();
	void Cheat_SetSafenessTarget(float Target);
	void Cheat_ForceOneWeaponLoadout_ToEveryone(bool Enabled, class UClass* Weapon);
	void Cheat_ForceOneWeaponLoadout(bool Enabled, class UClass* Weapon, class AController* Controller);
	void Cheat_SetEnableNewRespawn(bool Enabled);
	void Cheat_RespawnVisualDEBUG(bool Enable);
	void CheatSkipPhase();
	void Get_Available_Player_Start(class APlayerStart** Player_Start);
	void Spawn_All_Players();
	void Player_Died_Update_Statistic(class ABP_Character_TVTDeathmatch_C* Victim, class AHumanCharacter* Killer, EDamageType Damage_Type, bool Is_Headshot, bool* Killer_Is_Winner_or_Last_Man_Standing);
	void Replicate_Players_Kill_Feed(class AHumanCharacter* Victim, EDamageType Damage_Type, class AHumanCharacter* Killer, class UClass* Instigating_Item, bool Is_Headshot);
	bool ReadyToStartMatch();
	void ArePlayersNearbyPlayerStart(class APlayerStart* PlayerStart, bool* PlayersNearby);
	void GetLonelyPlayerStart(TArray<class APlayerStart*>& AvailableStarts, class APlayerStart** LonelyPlayerStart);
	void Notify_Player_Statistics_Changed();
	void Find_Box_Spawn_Points_On_Map(TArray<class ABP_TVTDeathmatch_Box_SpawnPoint_C*>* Output_Get);
	void Spawn_lootboxes();
	void Process_Single_Player_Result(class ABP_PlayerState_TVTDeathmatch_C* Player_State, const TMap<int32, int32>& Player_ID_Places, bool End_Of_Match);
	void Evaluate_Score(struct FStruct_TVTDeathmatchStatistics& Statistic, struct FStruct_TVTDeathmatchStatistics* New_Statistic);
	void Player_Healed_Update_Statistic(class ABP_PlayerState_TVTDeathmatch_C* PlayerState, float Healed_Amount);
	void Player_Looted_Box_Update_Statistic(class AActor* Looting_character, ECloudMatchLootboxType Box_Type);
	void Process_All_Player_Results_on_Match_End();
	void Get_Score_Value_From_Table(class FName Score_Type, int32* Score);
	void Add_Disconnected_Player_Statistic(const struct FStruct_TVTDeathmatchStatistics& Statistic);
	void IsWarmup(bool* IsWarmup_0);
	bool PlayerCanRestart(class APlayerController* Player);
	bool OnPlayerDied(class AHumanCharacter* Player, class AHumanCharacter* Killer);
	class AActor* FindPlayerStart(class AController* Player, const class FString& IncomingName);
	void Respawn_Dead_Players();
	void Spawn_lootbox(class ABP_TVTDeathmatch_Box_SpawnPoint_C* Linked_lootbox_spawn_point, const struct FCloudMatchLootbox& LootboxDefinition);
	void Get_random_unused_lootbox_location(class ABP_TVTDeathmatch_Box_SpawnPoint_C** Selected_location);
	void Get_lootboxes_to_spawn(TMap<ECloudMatchLootboxType, struct FF_Shootout_Lootbox_Loot>* Lootboxes_to_spawn);
	void GetPlayerTierOfReward(const class ABP_PlayerController_C*& Player, class FName* Tier);
	bool ShouldStartMatchBP();
	void Get_Safer_Player_Start(class ABP_PlayerController_TVTDeathmatch_C* PlayerController, class APlayerStart** PlayerStart);
	void GetSpawnSpotBasedOnPseudoSafenes(class ABP_PlayerController_TVTDeathmatch_C* PlayerController, TArray<struct FVector>& SpawnBlockers, class APlayerStart** PlayerStart);
	void GetRespawnClosestToTheSafenessTarget(const TMap<class APlayerStart*, float>& StartsToSafeness, class APlayerStart** PlayerStart, float* Target);
	void Apply_Cloud_Loadouts(const struct FCloudMatchLoadouts& Loadouts, bool* _LoadoutsReceived);
	void Get_Semi_Random_Unused_Lootbox_Location(ECloudMatchLootboxType BoxType, class ABP_TVTDeathmatch_Box_SpawnPoint_C** Selected_location);
	void Cheat_HalveRemainingTime();
	void Cheat_StartLastManEarly();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameMode_TVTDeathmatch_C">();
	}
	static class ABP_GameMode_TVTDeathmatch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GameMode_TVTDeathmatch_C>();
	}
};
static_assert(alignof(ABP_GameMode_TVTDeathmatch_C) == 0x000008, "Wrong alignment on ABP_GameMode_TVTDeathmatch_C");
static_assert(sizeof(ABP_GameMode_TVTDeathmatch_C) == 0x0006D0, "Wrong size on ABP_GameMode_TVTDeathmatch_C");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, UberGraphFrame_BP_GameMode_TVTDeathmatch_C) == 0x0004D8, "Member 'ABP_GameMode_TVTDeathmatch_C::UberGraphFrame_BP_GameMode_TVTDeathmatch_C' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, BP_MatchInfoComponent) == 0x0004E0, "Member 'ABP_GameMode_TVTDeathmatch_C::BP_MatchInfoComponent' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Round_Time) == 0x0004E8, "Member 'ABP_GameMode_TVTDeathmatch_C::Round_Time' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Respawn_Time_On_Death) == 0x0004EC, "Member 'ABP_GameMode_TVTDeathmatch_C::Respawn_Time_On_Death' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Match_In_Progress) == 0x0004F0, "Member 'ABP_GameMode_TVTDeathmatch_C::Match_In_Progress' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Kill_Win_Threshold) == 0x0004F4, "Member 'ABP_GameMode_TVTDeathmatch_C::Kill_Win_Threshold' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Match_Max_Time_Timer_Handle) == 0x0004F8, "Member 'ABP_GameMode_TVTDeathmatch_C::Match_Max_Time_Timer_Handle' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, SpawnProtectionDistance) == 0x000500, "Member 'ABP_GameMode_TVTDeathmatch_C::SpawnProtectionDistance' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Waiting_for_Match_Start) == 0x000504, "Member 'ABP_GameMode_TVTDeathmatch_C::Waiting_for_Match_Start' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Player_Initial_Weapons) == 0x000508, "Member 'ABP_GameMode_TVTDeathmatch_C::Player_Initial_Weapons' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Player_Initial_Items) == 0x000518, "Member 'ABP_GameMode_TVTDeathmatch_C::Player_Initial_Items' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Lootbox_Spawn_Points) == 0x000528, "Member 'ABP_GameMode_TVTDeathmatch_C::Lootbox_Spawn_Points' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Last_Man_Standing_Time) == 0x000538, "Member 'ABP_GameMode_TVTDeathmatch_C::Last_Man_Standing_Time' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Last_Man_Standing_Timer) == 0x000540, "Member 'ABP_GameMode_TVTDeathmatch_C::Last_Man_Standing_Timer' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Last_Man_Standing_Started) == 0x000548, "Member 'ABP_GameMode_TVTDeathmatch_C::Last_Man_Standing_Started' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Players_To_Register_When_Match_ID_Available) == 0x000550, "Member 'ABP_GameMode_TVTDeathmatch_C::Players_To_Register_When_Match_ID_Available' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Expected_Player_Results_Sent_Count) == 0x000560, "Member 'ABP_GameMode_TVTDeathmatch_C::Expected_Player_Results_Sent_Count' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Player_Results_Sending_Started) == 0x000564, "Member 'ABP_GameMode_TVTDeathmatch_C::Player_Results_Sending_Started' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, DEBUG_PRINT_TO_SCREEN) == 0x000565, "Member 'ABP_GameMode_TVTDeathmatch_C::DEBUG_PRINT_TO_SCREEN' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Disconnected_Player_Stats) == 0x000568, "Member 'ABP_GameMode_TVTDeathmatch_C::Disconnected_Player_Stats' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, PlayersToForceRespawn) == 0x000578, "Member 'ABP_GameMode_TVTDeathmatch_C::PlayersToForceRespawn' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, DelayedPlayersToConnect) == 0x000588, "Member 'ABP_GameMode_TVTDeathmatch_C::DelayedPlayersToConnect' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Lobby) == 0x000598, "Member 'ABP_GameMode_TVTDeathmatch_C::Lobby' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, RewardBoosterCount) == 0x0005A0, "Member 'ABP_GameMode_TVTDeathmatch_C::RewardBoosterCount' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, LootBoxes) == 0x0005A8, "Member 'ABP_GameMode_TVTDeathmatch_C::LootBoxes' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Amount_of_lootboxes_to_spawn) == 0x0005B8, "Member 'ABP_GameMode_TVTDeathmatch_C::Amount_of_lootboxes_to_spawn' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Shootout_Game_State) == 0x0005C0, "Member 'ABP_GameMode_TVTDeathmatch_C::Shootout_Game_State' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, PlayersRewardTiers) == 0x0005C8, "Member 'ABP_GameMode_TVTDeathmatch_C::PlayersRewardTiers' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, DEBUG_RespawnPrintOuts) == 0x000618, "Member 'ABP_GameMode_TVTDeathmatch_C::DEBUG_RespawnPrintOuts' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, bNewRespawnActive) == 0x000619, "Member 'ABP_GameMode_TVTDeathmatch_C::bNewRespawnActive' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, TempPlayerStart) == 0x000620, "Member 'ABP_GameMode_TVTDeathmatch_C::TempPlayerStart' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Cheat_ShouldOverrideLoadout) == 0x000628, "Member 'ABP_GameMode_TVTDeathmatch_C::Cheat_ShouldOverrideLoadout' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Cheat_ControllerToWeaponOverride) == 0x000630, "Member 'ABP_GameMode_TVTDeathmatch_C::Cheat_ControllerToWeaponOverride' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Spawn_SafenessTarget) == 0x000680, "Member 'ABP_GameMode_TVTDeathmatch_C::Spawn_SafenessTarget' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, Timer_CheatRespawnCheck) == 0x000688, "Member 'ABP_GameMode_TVTDeathmatch_C::Timer_CheatRespawnCheck' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, SpawnBlockerLocations) == 0x000690, "Member 'ABP_GameMode_TVTDeathmatch_C::SpawnBlockerLocations' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, CloudLoadoutsReceived) == 0x0006A0, "Member 'ABP_GameMode_TVTDeathmatch_C::CloudLoadoutsReceived' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TVTDeathmatch_C, InitialLoadouts) == 0x0006A8, "Member 'ABP_GameMode_TVTDeathmatch_C::InitialLoadouts' has a wrong offset!");

}

