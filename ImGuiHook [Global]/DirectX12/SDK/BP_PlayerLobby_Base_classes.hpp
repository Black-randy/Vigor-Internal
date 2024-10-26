#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerLobby_Base

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "FLobbyStartedInfo_structs.hpp"
#include "FBoosterSet_structs.hpp"
#include "EBooster_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLobby_Base.BP_PlayerLobby_Base_C
// 0x0118 (0x0348 - 0x0230)
class ABP_PlayerLobby_Base_C : public APlayerLobby
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         TimeToLock;                                        // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UBP_LobbyComponent_C*, struct FFBoosterSet> LobbyComponentsBoosters;                           // 0x0248(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UMatchInfoComponent*                    MatchInfo;                                         // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnLobbyEnd;                                        // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         TimeToEncounter;                                   // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeoutTime_WaitingForClientResponses;             // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCloudUserLobbyInfo>            ConfirmedLobbyLocksFromClients;                    // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFLobbyStartedInfo                     LobbyStarted;                                      // 0x02C8(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnLobbyCommited;                                   // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         TimeoutTime_WaitingForCloudResponse;               // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F4[0x4];                                      // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 LobbyUIClass;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   LobbyLevelName;                                    // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          CheckReadyStates;                                  // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LobbyLockedByPlayersReady;                         // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_30A[0x6];                                      // 0x030A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         PlayersReady;                                      // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UBP_LobbyComponent_C*>           ReadyPlayers;                                      // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         TimeUntilCheckMaxPlayers;                          // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_334[0x4];                                      // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorMessage;                                      // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void OnLobbyEnd__DelegateSignature(const struct FCloudRequestResult& RequestResult, const struct FCloudMatchCommitInfo& CloudSettings);
	void OnLobbyCommited__DelegateSignature(const struct FCloudRequestResult& RequestResult, const struct FCloudMatchCommitInfo& CloudSettings);
	void ExecuteUbergraph_BP_PlayerLobby_Base(int32 EntryPoint);
	void CommitSettings();
	void OnPlayerStateFirstSync(class AHumanPlayerController* HumanController, class AHumanPlayerState* HumanPlayerState);
	void ReceiveBeginPlay();
	void RegisterPlayerToLobby(class AHumanPlayerController* Player);
	void StartLobbyClient();
	void OnMatchSettingCommited(const struct FCloudRequestResult& RequestResult, const struct FCloudMatchCommitInfo& CloudSettings);
	void LockLobbyTimeOut();
	void OneSecondTimerEncounter();
	void AckLockLobbyServer(class UBP_LobbyComponent_C* Instigator_0);
	void UpdateBoosterVisualLevel(EBooster Booster, int32 Level);
	void StartLobby();
	void OnMainLobbyTimer();
	void AddBooster(EBooster Booster, class UBP_LobbyComponent_C* Instigator_0, bool TicketUsedInsteadOfCrowns);
	void RemoveBooster(EBooster Booster, class UBP_LobbyComponent_C* Instigator_0);
	void UpdateBoosterState(EBooster Booster);
	void LeaveLobby(class UBP_LobbyComponent_C* Instigator_0);
	void AckLockLobby(class UBP_LobbyComponent_C* Instigator_0);
	void Lock_Lobby_in_BP();
	void FinalizeBoostersToClients(TArray<struct FCloudUserLobbyInfo>& Players, const TMap<EBooster, int32>& BoostersCount);
	void OnRep_LobbyStarted();
	void DebugLobbyMsg(const class FString& Message, bool IsError);
	void Count__BoosterArray_(TArray<EBooster>& Array, EBooster Item, int32* Count);
	void RemoveOne__BoosterArray_(TArray<EBooster>& Array, EBooster Item, int32* RemovedIndex);
	int32 MaxBoosterCount(EBooster Booster);
	bool AreAllPlayersReady();
	void RegisterUserToMatch(class AHumanPlayerController* Player, int32* RequestId);
	void BPSetReady(class UBP_LobbyComponent_C* Instigator_0);
	void CountAllBoosters(const struct FCloudMatchCommitInfo& CloudMatchCommitInfo, TArray<struct FCloudUserLobbyInfo>* Players, TMap<EBooster, int32>* BoostersCount);
	bool Check_Count_With_Match_Making(int32 ReadyPlayers_0);

	void GetPlayersReady(TArray<class FString>* PlayersReady_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLobby_Base_C">();
	}
	static class ABP_PlayerLobby_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerLobby_Base_C>();
	}
};
static_assert(alignof(ABP_PlayerLobby_Base_C) == 0x000008, "Wrong alignment on ABP_PlayerLobby_Base_C");
static_assert(sizeof(ABP_PlayerLobby_Base_C) == 0x000348, "Wrong size on ABP_PlayerLobby_Base_C");
static_assert(offsetof(ABP_PlayerLobby_Base_C, UberGraphFrame) == 0x000230, "Member 'ABP_PlayerLobby_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_PlayerLobby_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, TimeToLock) == 0x000240, "Member 'ABP_PlayerLobby_Base_C::TimeToLock' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, LobbyComponentsBoosters) == 0x000248, "Member 'ABP_PlayerLobby_Base_C::LobbyComponentsBoosters' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, MatchInfo) == 0x000298, "Member 'ABP_PlayerLobby_Base_C::MatchInfo' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, OnLobbyEnd) == 0x0002A0, "Member 'ABP_PlayerLobby_Base_C::OnLobbyEnd' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, TimeToEncounter) == 0x0002B0, "Member 'ABP_PlayerLobby_Base_C::TimeToEncounter' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, TimeoutTime_WaitingForClientResponses) == 0x0002B4, "Member 'ABP_PlayerLobby_Base_C::TimeoutTime_WaitingForClientResponses' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, ConfirmedLobbyLocksFromClients) == 0x0002B8, "Member 'ABP_PlayerLobby_Base_C::ConfirmedLobbyLocksFromClients' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, LobbyStarted) == 0x0002C8, "Member 'ABP_PlayerLobby_Base_C::LobbyStarted' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, OnLobbyCommited) == 0x0002E0, "Member 'ABP_PlayerLobby_Base_C::OnLobbyCommited' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, TimeoutTime_WaitingForCloudResponse) == 0x0002F0, "Member 'ABP_PlayerLobby_Base_C::TimeoutTime_WaitingForCloudResponse' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, LobbyUIClass) == 0x0002F8, "Member 'ABP_PlayerLobby_Base_C::LobbyUIClass' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, LobbyLevelName) == 0x000300, "Member 'ABP_PlayerLobby_Base_C::LobbyLevelName' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, CheckReadyStates) == 0x000308, "Member 'ABP_PlayerLobby_Base_C::CheckReadyStates' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, LobbyLockedByPlayersReady) == 0x000309, "Member 'ABP_PlayerLobby_Base_C::LobbyLockedByPlayersReady' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, PlayersReady) == 0x000310, "Member 'ABP_PlayerLobby_Base_C::PlayersReady' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, ReadyPlayers) == 0x000320, "Member 'ABP_PlayerLobby_Base_C::ReadyPlayers' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, TimeUntilCheckMaxPlayers) == 0x000330, "Member 'ABP_PlayerLobby_Base_C::TimeUntilCheckMaxPlayers' has a wrong offset!");
static_assert(offsetof(ABP_PlayerLobby_Base_C, ErrorMessage) == 0x000338, "Member 'ABP_PlayerLobby_Base_C::ErrorMessage' has a wrong offset!");

}

