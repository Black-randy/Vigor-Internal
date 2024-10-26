#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LobbyBase

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "EBooster_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_LobbyBase.UI_LobbyBase_C
// 0x00F8 (0x03D0 - 0x02D8)
class UUI_LobbyBase_C : public ULobbyBaseMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         LootActivated;                                     // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CrateActivated;                                    // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InsuranceActivated;                                // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_LobbyComponent_C*                   OhMightyLobbyComponent;                            // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsInGameMenu;                                      // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F9[0x7];                                      // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LobbyVoiceChatUIP;                                 // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          FreeInsuranceActivated;                            // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor)
	bool                                          HideLevelWeatherDuringLobby;                       // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_312[0x6];                                      // 0x0312(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EBooster, int32>                         ActivatedBoosters;                                 // 0x0318(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EBooster, int32>                         UsedLobbyTickets;                                  // 0x0368(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             TicketActivated;                                   // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          LocalPlayerReady;                                  // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void TicketActivated__DelegateSignature(const class FString& ProductSku);
	void ExecuteUbergraph_UI_LobbyBase(int32 EntryPoint);
	void SetBoosterState(EBoosterTypes Booster, int32 OrderedCount, int32 TotalActiveCount, int32 MaxCount, int32 TicketsUsed);
	void LockLobby();
	void LeaveLobby();
	void SetRemainingTime(int32 Seconds);
	void SetRemainingTimeEncounter(int32 Seconds);
	void UpdateHCs();
	void RefreshReadyUI(const TArray<int32>& ReadyIDs);
	void OnBoosterTicketActivationResponse(const struct FCloudRequestResult& RequestResult, const struct FBoosterDetails& Data);
	void ActivateBoosterTicket(const class FString& Product_Sku, const int32 Count);
	void FetchLocalUserCloudInfo();
	void BuyPersonalTicket(EBooster BoosterType);
	void ClosePersonalBoosterSubmenu();
	void OpenPersonalBoosterSubMenu();
	void GamemenuHolded();
	void GamemenuReleased();
	void GamemenuPressed();
	void OnGameMenuClosed(class UFlameWidget* FlameWidget);
	void OpenGameMenuInLobby();
	void BPSetBoosterState(EBooster Booster, int32 OrderedCount, int32 TotalActiveCount, int32 MaxCount, int32 TicketsUsed);
	void TryAgain();
	void Destruct();
	void Construct();
	void BPSet_Remaining_Time(int32 Seconds);
	void GetBoosterCost(const EBooster Booster, int32* Cost, int32* Cost_before_discount, int32* DiscountPercent);
	int32 Get_Current_Total_HC_Cost();
	void BPLock_Lobby();
	void BPLeave_Lobby();
	void BPSet_Remaining_Time_Encounter(int32 Seconds);
	void GetTotalHardCurrency(int32* TotalHC);
	void BPUpdate_HCs();
	void OpenCheatMenu();
	void IsPlayerInGroup(bool* Return_Value);
	void DebugLobbyMsg(const class FString& Message, bool IsError);
	void GetMaxBoosterCountPerPlayer(EBooster Booster, int32* MaxCount);
	void BPRefresh_Ready_UI(TArray<int32>& ReadyIDs);
	void BPGet_Activated_Amount(const EBooster Booster, int32* AmountActivated);
	void SetActivatedAmount(const EBooster Booster, int32 AmountActivated);
	void SetFeaturedPlayers();
	void SetFocusToBooster(EBooster Booster);
	void Get_Personal_Ticket_State(EBooster Booster, struct FBoosterDetails* BoosterDetail, bool* Found);
	void GetLocalPlayerCloudInfo(bool* Found, struct FUserCloudInfo* User_Cloud_Info);
	void UpdatePersonalBoosterIndicators(const struct FUserCloudInfo& UserCloudInfo);
	void CanBuyPersonalTicket(const EBooster InputPin, bool* Return);
	int32 GetActivatedAmountCPP(EBoosterTypes Booster);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_LobbyBase_C">();
	}
	static class UUI_LobbyBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_LobbyBase_C>();
	}
};
static_assert(alignof(UUI_LobbyBase_C) == 0x000008, "Wrong alignment on UUI_LobbyBase_C");
static_assert(sizeof(UUI_LobbyBase_C) == 0x0003D0, "Wrong size on UUI_LobbyBase_C");
static_assert(offsetof(UUI_LobbyBase_C, UberGraphFrame) == 0x0002D8, "Member 'UUI_LobbyBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_LobbyBase_C, LootActivated) == 0x0002E0, "Member 'UUI_LobbyBase_C::LootActivated' has a wrong offset!");
static_assert(offsetof(UUI_LobbyBase_C, CrateActivated) == 0x0002E4, "Member 'UUI_LobbyBase_C::CrateActivated' has a wrong offset!");
static_assert(offsetof(UUI_LobbyBase_C, InsuranceActivated) == 0x0002E8, "Member 'UUI_LobbyBase_C::InsuranceActivated' has a wrong offset!");
static_assert(offsetof(UUI_LobbyBase_C, OhMightyLobbyComponent) == 0x0002F0, "Member 'UUI_LobbyBase_C::OhMightyLobbyComponent' has a wrong offset!");
static_assert(offsetof(UUI_LobbyBase_C, IsInGameMenu) == 0x0002F8, "Member 'UUI_LobbyBase_C::IsInGameMenu' has a wrong offset!");
static_assert(offsetof(UUI_LobbyBase_C, LobbyVoiceChatUIP) == 0x000300, "Member 'UUI_LobbyBase_C::LobbyVoiceChatUIP' has a wrong offset!");
static_assert(offsetof(UUI_LobbyBase_C, FreeInsuranceActivated) == 0x000310, "Member 'UUI_LobbyBase_C::FreeInsuranceActivated' has a wrong offset!");
static_assert(offsetof(UUI_LobbyBase_C, HideLevelWeatherDuringLobby) == 0x000311, "Member 'UUI_LobbyBase_C::HideLevelWeatherDuringLobby' has a wrong offset!");
static_assert(offsetof(UUI_LobbyBase_C, ActivatedBoosters) == 0x000318, "Member 'UUI_LobbyBase_C::ActivatedBoosters' has a wrong offset!");
static_assert(offsetof(UUI_LobbyBase_C, UsedLobbyTickets) == 0x000368, "Member 'UUI_LobbyBase_C::UsedLobbyTickets' has a wrong offset!");
static_assert(offsetof(UUI_LobbyBase_C, TicketActivated) == 0x0003B8, "Member 'UUI_LobbyBase_C::TicketActivated' has a wrong offset!");
static_assert(offsetof(UUI_LobbyBase_C, LocalPlayerReady) == 0x0003C8, "Member 'UUI_LobbyBase_C::LocalPlayerReady' has a wrong offset!");

}

