#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LeaderboardSystem

#include "Basic.hpp"

#include "E_LeaderboardsStatsTypes_structs.hpp"
#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "FlameUI_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LeaderboardSystem.BP_LeaderboardSystem_C
// 0x0400 (0x0478 - 0x0078)
class UBP_LeaderboardSystem_C final : public ULeaderboardSystem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0078(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<int32>                                 RequestIDsAroundPlayer;                            // 0x0080(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             LeaderboardsDataAvailable;                         // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int32>                                 RequestIDsTopTen;                                  // 0x00A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 RequestIDsFriends;                                 // 0x00B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 WriteRequestIDs;                                   // 0x00C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_LeaderboardsStatsTypes, struct FLeaderboardData> LeaderboardsDataAroundPlayer;                      // 0x00D0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_LeaderboardsStatsTypes, struct FLeaderboardData> LeaderboardsDataTopTen;                            // 0x0120(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_LeaderboardsStatsTypes, struct FLeaderboardData> LeaderboardsDataFriends;                           // 0x0170(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_LeaderboardsStatsTypes, class FName>   LeaderboardNames;                                  // 0x01C0(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<class FName, E_LeaderboardsStatsTypes>   LeaderboardTypes;                                  // 0x0210(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                          IsLeaderboardsDataAroundPlayerLoaded;              // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLeaderboardsDataTopTenLoaded;                    // 0x0261(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLeaderboardsDataFriendsLoaded;                   // 0x0262(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_263[0x5];                                      // 0x0263(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             LeaderboardsWriteFinished;                         // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsLeaderboardsDataWritten;                         // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_279[0x7];                                      // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<E_LeaderboardsStatsTypes, bool>          LeaderboardsDataFriendsAvailable;                  // 0x0280(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_LeaderboardsStatsTypes, bool>          LeaderboardsDataTopTenAvailable;                   // 0x02D0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_LeaderboardsStatsTypes, bool>          LeaderboardsDataAroundPlayerAvailable;             // 0x0320(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AreLeaderboardsLoaded;                             // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<E_LeaderboardsStatsTypes, bool>          LeaderboardsDataFriendsLoaded;                     // 0x0378(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_LeaderboardsStatsTypes, bool>          LeaderboardsDataTopTenLoaded;                      // 0x03C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_LeaderboardsStatsTypes, bool>          LeaderboardsDataAroundPlayerLoaded;                // 0x0418(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDateTime                              TimeStampLeaderboardLoaded;                        // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          NewRequestAllowed;                                 // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void LeaderboardsDataAvailable__DelegateSignature(bool IsLeaderboardsDataLoaded);
	void LeaderboardsWriteFinished__DelegateSignature();
	void ExecuteUbergraph_BP_LeaderboardSystem(int32 EntryPoint);
	void EventFetchTopTenLeaderboard(class AHumanPlayerController* PlayerController);
	void EventFetchFriendsLeaderboards(class AHumanPlayerController* PlayerController);
	void InitLeaderboardSystem();
	void EventLeaderboardWriteFinished(bool Succeeded, int32 RequestId);
	void EventFetchPlatformLeaderboard(E_LeaderboardsStatsTypes LeaderBoardType, class AHumanPlayerController* PlayerController, ELeaderboardType BoardType);
	void EventFetchAroundPlayerLeaderboards(class AHumanPlayerController* PlayerController);
	void DeInitLeaderboardSystem();
	void EventReadBoardResponse(bool Succeeded, int32 RequestId, const struct FLeaderboardReadContext& BoardContext, const struct FLeaderboardData& LeaderboardData);
	void WriteAllLeaderboards(class AHumanPlayerController* Controller, int32 EncountersPlayed, int32 Kills, int32 AirDrops, int32 Loot, float KillsPerEncounter, float LootPerEncounter, float SurvivalRate);
	void WriteLeaderboardInt(class AHumanPlayerController* Controller, E_LeaderboardsStatsTypes LeaderBoardType, int32 Value);
	void WriteLeaderboardFloat(class AHumanPlayerController* Controller, E_LeaderboardsStatsTypes LeaderBoardType, float Value);
	void StoreLeaderboard(ELeaderboardType BoardType, E_LeaderboardsStatsTypes LeaderBoardType, const struct FLeaderboardData& LeaderboardData);
	void StoreRequestID(ELeaderboardType BoardType, int32 RequestId);
	void RemoveRequestID(ELeaderboardType BoardType, int32 RequestId, bool* WasLastID);
	void SetAvailabilityForCertainStat(ELeaderboardType LeaderBoardType, const E_LeaderboardsStatsTypes& StatType, const bool Available);
	void SetLoadedForCertainStat(ELeaderboardType LeaderBoardType, const E_LeaderboardsStatsTypes& StatType, const bool Available);
	void CheckIfMapAllLoaded(const TMap<E_LeaderboardsStatsTypes, bool>& InMap, bool* AllLoaded);
	void IsLeaderboardLoaded(E_LeaderboardsStatsTypes Stat, ELeaderboardType Type, bool* Loaded);

	void Get_Leaderboard_Data(ELeaderboardType BoardType, E_LeaderboardsStatsTypes StatType, bool* IsDataValid, struct FLeaderboardData* LeaderboardData) const;
	void GetLeaderboardName(E_LeaderboardsStatsTypes LeaderBoardType, bool* OutputValid, class FName* LeaderboardName) const;
	void GetLeaderboardType(class FName LeaderboardName, bool* OutputValid, E_LeaderboardsStatsTypes* LeaderBoardType) const;
	void IsRequestIDValid(ELeaderboardType BoardType, int32 RequestId, bool* Valid) const;
	struct FTimespan GetCacheDelay() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LeaderboardSystem_C">();
	}
	static class UBP_LeaderboardSystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LeaderboardSystem_C>();
	}
};
static_assert(alignof(UBP_LeaderboardSystem_C) == 0x000008, "Wrong alignment on UBP_LeaderboardSystem_C");
static_assert(sizeof(UBP_LeaderboardSystem_C) == 0x000478, "Wrong size on UBP_LeaderboardSystem_C");
static_assert(offsetof(UBP_LeaderboardSystem_C, UberGraphFrame) == 0x000078, "Member 'UBP_LeaderboardSystem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, RequestIDsAroundPlayer) == 0x000080, "Member 'UBP_LeaderboardSystem_C::RequestIDsAroundPlayer' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, LeaderboardsDataAvailable) == 0x000090, "Member 'UBP_LeaderboardSystem_C::LeaderboardsDataAvailable' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, RequestIDsTopTen) == 0x0000A0, "Member 'UBP_LeaderboardSystem_C::RequestIDsTopTen' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, RequestIDsFriends) == 0x0000B0, "Member 'UBP_LeaderboardSystem_C::RequestIDsFriends' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, WriteRequestIDs) == 0x0000C0, "Member 'UBP_LeaderboardSystem_C::WriteRequestIDs' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, LeaderboardsDataAroundPlayer) == 0x0000D0, "Member 'UBP_LeaderboardSystem_C::LeaderboardsDataAroundPlayer' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, LeaderboardsDataTopTen) == 0x000120, "Member 'UBP_LeaderboardSystem_C::LeaderboardsDataTopTen' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, LeaderboardsDataFriends) == 0x000170, "Member 'UBP_LeaderboardSystem_C::LeaderboardsDataFriends' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, LeaderboardNames) == 0x0001C0, "Member 'UBP_LeaderboardSystem_C::LeaderboardNames' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, LeaderboardTypes) == 0x000210, "Member 'UBP_LeaderboardSystem_C::LeaderboardTypes' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, IsLeaderboardsDataAroundPlayerLoaded) == 0x000260, "Member 'UBP_LeaderboardSystem_C::IsLeaderboardsDataAroundPlayerLoaded' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, IsLeaderboardsDataTopTenLoaded) == 0x000261, "Member 'UBP_LeaderboardSystem_C::IsLeaderboardsDataTopTenLoaded' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, IsLeaderboardsDataFriendsLoaded) == 0x000262, "Member 'UBP_LeaderboardSystem_C::IsLeaderboardsDataFriendsLoaded' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, LeaderboardsWriteFinished) == 0x000268, "Member 'UBP_LeaderboardSystem_C::LeaderboardsWriteFinished' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, IsLeaderboardsDataWritten) == 0x000278, "Member 'UBP_LeaderboardSystem_C::IsLeaderboardsDataWritten' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, LeaderboardsDataFriendsAvailable) == 0x000280, "Member 'UBP_LeaderboardSystem_C::LeaderboardsDataFriendsAvailable' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, LeaderboardsDataTopTenAvailable) == 0x0002D0, "Member 'UBP_LeaderboardSystem_C::LeaderboardsDataTopTenAvailable' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, LeaderboardsDataAroundPlayerAvailable) == 0x000320, "Member 'UBP_LeaderboardSystem_C::LeaderboardsDataAroundPlayerAvailable' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, AreLeaderboardsLoaded) == 0x000370, "Member 'UBP_LeaderboardSystem_C::AreLeaderboardsLoaded' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, LeaderboardsDataFriendsLoaded) == 0x000378, "Member 'UBP_LeaderboardSystem_C::LeaderboardsDataFriendsLoaded' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, LeaderboardsDataTopTenLoaded) == 0x0003C8, "Member 'UBP_LeaderboardSystem_C::LeaderboardsDataTopTenLoaded' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, LeaderboardsDataAroundPlayerLoaded) == 0x000418, "Member 'UBP_LeaderboardSystem_C::LeaderboardsDataAroundPlayerLoaded' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, TimeStampLeaderboardLoaded) == 0x000468, "Member 'UBP_LeaderboardSystem_C::TimeStampLeaderboardLoaded' has a wrong offset!");
static_assert(offsetof(UBP_LeaderboardSystem_C, NewRequestAllowed) == 0x000470, "Member 'UBP_LeaderboardSystem_C::NewRequestAllowed' has a wrong offset!");

}

