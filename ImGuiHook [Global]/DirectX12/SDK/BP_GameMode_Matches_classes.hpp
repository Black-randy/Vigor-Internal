#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameMode_Matches

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "E_MatchPhase_structs.hpp"
#include "BP_GameMode_classes.hpp"
#include "FlameUI_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameMode_Matches.BP_GameMode_Matches_C
// 0x0140 (0x0580 - 0x0440)
class ABP_GameMode_Matches_C : public ABP_GameMode_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GameMode_Matches_C;              // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_MatchInfoComponent_C*               BP_MatchInfoComponent;                             // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           DefaultTimerHandle;                                // 0x0450(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                         TimeBetweenMatches;                                // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RoundTime;                                         // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_GameModeComponent_Base_C*>   GameComponents;                                    // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          MatchHadAWinner;                                   // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_471[0x7];                                      // 0x0471(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanCharacter*                        Leaving_Character;                                 // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Delayed_Match_Start;                           // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_481[0x3];                                      // 0x0481(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Delayed_Match_Start_Time;                          // 0x0484(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Multiplayer_Lobby;                             // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_489[0x7];                                      // 0x0489(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerLobby_Base_C*                 Lobby;                                             // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MultiplayerLobbyTimeToLock;                        // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MultiplayerLobbyTimeToEncounter;                   // 0x049C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Lobby_Phase_Started;                               // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Lobby_Phase_Finished;                              // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Delayed_Match_Start_Phase_Started;                 // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Delayed_Match_Start_Phase_Finished;                // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Match_Has_Started;                                 // 0x04E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	E_MatchPhase                                  Match_Phase;                                       // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F1[0x7];                                      // 0x04F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             LobbyOpened;                                       // 0x04F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bSubLevelsLoaded;                                  // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_509[0x7];                                      // 0x0509(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APlayerController*>              ControllersWaitingToLogin;                         // 0x0510(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         DEV_TelemetryPeriod;                               // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_524[0x4];                                      // 0x0524(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           DEV_TelemetryTimer;                                // 0x0528(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<float, class UJsonObject*>               DEV_TelemetryData;                                 // 0x0530(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Lobby_Phase_Started__DelegateSignature();
	void Lobby_Phase_Finished__DelegateSignature(bool Lobby_Was_Used);
	void Delayed_Match_Start_Phase_Started__DelegateSignature();
	void Delayed_Match_Start_Phase_Finished__DelegateSignature(bool Delayed_Match_Start_Was_Used);
	void Match_Has_Started__DelegateSignature();
	void LobbyOpened__DelegateSignature();
	void ExecuteUbergraph_BP_GameMode_Matches(int32 EntryPoint);
	void DEV_CollectTelemetry();
	void SLM_DelayedOnPostLogin(class APlayerController* Object);
	void SubLevelsLoaded_DelayedBeginPlay(bool SLM_Load_Complete);
	void CheckForSubLevels();
	void Handle_Player_Death(class ABP_PlayerController_Matches_C* Dead_Player);
	void LobbyLocked(const struct FCloudRequestResult& RequestResult, const struct FCloudMatchCommitInfo& CloudSettings);
	void Lobby_Finished(const struct FCloudRequestResult& RequestResult, const struct FCloudMatchCommitInfo& CloudSettings);
	void Delayed_Match_Start_Countdown();
	void EndMatchForPlayer(class ABP_PlayerController_Script_C* Leaving_Player_Controller);
	void K2_OnLogout(class AController* ExitingController);
	void DefaultTimer();
	void K2_OnSetMatchState(class FName NewState);
	void K2_PostLogin(class APlayerController* NewPlayer);
	bool PlayerCanRestart(class APlayerController* Player);
	void IsWinner(class APlayerController* PlayerController, bool* IsWinner_0);
	void HandleMatchHasStarted();
	void Process_Player_Results(class APlayerController* Exiting_Controller);
	void Get_Rewards_For_Player(class APlayerController* Controller, TArray<class FString>* Rewards);
	bool ReadyToStartMatch();
	bool Should_Lobby_Be_Used();
	bool Should_Delayed_Match_Start_Be_Used();
	void Get_Match_Phase(E_MatchPhase* Match_Phase_0);
	void GetInactivePlayerStateByID(int32 Player_ID, class ABP_PlayerState_Matches_C** CorrespondingInactivePlayerState);
	bool OnPlayerDied(class AHumanCharacter* Player, class AHumanCharacter* Killer);
	class AActor* ChoosePlayerStart(class AController* Player);
	class AActor* FindPlayerStart(class AController* Player, const class FString& IncomingName);
	void Set_Player_Lonewolf_Status(class ABP_PlayerController_Matches_C* Player_Controller);
	void Save_Players_Info(class APlayerController* Player_Controller);
	void Prepare_Starts(int32* StartsFound);
	void DEV_RecordPlayerPositions(class UJsonObject** AllPlayerPositions);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameMode_Matches_C">();
	}
	static class ABP_GameMode_Matches_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GameMode_Matches_C>();
	}
};
static_assert(alignof(ABP_GameMode_Matches_C) == 0x000008, "Wrong alignment on ABP_GameMode_Matches_C");
static_assert(sizeof(ABP_GameMode_Matches_C) == 0x000580, "Wrong size on ABP_GameMode_Matches_C");
static_assert(offsetof(ABP_GameMode_Matches_C, UberGraphFrame_BP_GameMode_Matches_C) == 0x000440, "Member 'ABP_GameMode_Matches_C::UberGraphFrame_BP_GameMode_Matches_C' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, BP_MatchInfoComponent) == 0x000448, "Member 'ABP_GameMode_Matches_C::BP_MatchInfoComponent' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, DefaultTimerHandle) == 0x000450, "Member 'ABP_GameMode_Matches_C::DefaultTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, TimeBetweenMatches) == 0x000458, "Member 'ABP_GameMode_Matches_C::TimeBetweenMatches' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, RoundTime) == 0x00045C, "Member 'ABP_GameMode_Matches_C::RoundTime' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, GameComponents) == 0x000460, "Member 'ABP_GameMode_Matches_C::GameComponents' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, MatchHadAWinner) == 0x000470, "Member 'ABP_GameMode_Matches_C::MatchHadAWinner' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, Leaving_Character) == 0x000478, "Member 'ABP_GameMode_Matches_C::Leaving_Character' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, Use_Delayed_Match_Start) == 0x000480, "Member 'ABP_GameMode_Matches_C::Use_Delayed_Match_Start' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, Delayed_Match_Start_Time) == 0x000484, "Member 'ABP_GameMode_Matches_C::Delayed_Match_Start_Time' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, Use_Multiplayer_Lobby) == 0x000488, "Member 'ABP_GameMode_Matches_C::Use_Multiplayer_Lobby' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, Lobby) == 0x000490, "Member 'ABP_GameMode_Matches_C::Lobby' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, MultiplayerLobbyTimeToLock) == 0x000498, "Member 'ABP_GameMode_Matches_C::MultiplayerLobbyTimeToLock' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, MultiplayerLobbyTimeToEncounter) == 0x00049C, "Member 'ABP_GameMode_Matches_C::MultiplayerLobbyTimeToEncounter' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, Lobby_Phase_Started) == 0x0004A0, "Member 'ABP_GameMode_Matches_C::Lobby_Phase_Started' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, Lobby_Phase_Finished) == 0x0004B0, "Member 'ABP_GameMode_Matches_C::Lobby_Phase_Finished' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, Delayed_Match_Start_Phase_Started) == 0x0004C0, "Member 'ABP_GameMode_Matches_C::Delayed_Match_Start_Phase_Started' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, Delayed_Match_Start_Phase_Finished) == 0x0004D0, "Member 'ABP_GameMode_Matches_C::Delayed_Match_Start_Phase_Finished' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, Match_Has_Started) == 0x0004E0, "Member 'ABP_GameMode_Matches_C::Match_Has_Started' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, Match_Phase) == 0x0004F0, "Member 'ABP_GameMode_Matches_C::Match_Phase' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, LobbyOpened) == 0x0004F8, "Member 'ABP_GameMode_Matches_C::LobbyOpened' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, bSubLevelsLoaded) == 0x000508, "Member 'ABP_GameMode_Matches_C::bSubLevelsLoaded' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, ControllersWaitingToLogin) == 0x000510, "Member 'ABP_GameMode_Matches_C::ControllersWaitingToLogin' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, DEV_TelemetryPeriod) == 0x000520, "Member 'ABP_GameMode_Matches_C::DEV_TelemetryPeriod' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, DEV_TelemetryTimer) == 0x000528, "Member 'ABP_GameMode_Matches_C::DEV_TelemetryTimer' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Matches_C, DEV_TelemetryData) == 0x000530, "Member 'ABP_GameMode_Matches_C::DEV_TelemetryData' has a wrong offset!");

}
