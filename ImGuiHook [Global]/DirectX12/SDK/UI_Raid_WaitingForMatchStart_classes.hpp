#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Raid_WaitingForMatchStart

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "EFightVariant_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Raid_WaitingForMatchStart.UI_Raid_WaitingForMatchStart_C
// 0x0030 (0x02E8 - 0x02B8)
class UUI_Raid_WaitingForMatchStart_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_84;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Message;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         StartMatchCountdown;                               // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          All_Connected;                                     // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Countdown_Timer;                                   // 0x02D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           PhaseTimer;                                        // 0x02E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Raid_WaitingForMatchStart(int32 EntryPoint);
	void Destruct();
	void StartCheckTimer();
	void PeriodicallyCheckGameStatePhase();
	void Construct();
	void Second_Passed();
	void Start_Countdown(int32 Time, bool All_Players_Connected);
	void LoadLoadingScreenTexture(TSoftObjectPtr<class UObject>& TextureToLoad);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Raid_WaitingForMatchStart_C">();
	}
	static class UUI_Raid_WaitingForMatchStart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Raid_WaitingForMatchStart_C>();
	}
};
static_assert(alignof(UUI_Raid_WaitingForMatchStart_C) == 0x000008, "Wrong alignment on UUI_Raid_WaitingForMatchStart_C");
static_assert(sizeof(UUI_Raid_WaitingForMatchStart_C) == 0x0002E8, "Wrong size on UUI_Raid_WaitingForMatchStart_C");
static_assert(offsetof(UUI_Raid_WaitingForMatchStart_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_Raid_WaitingForMatchStart_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Raid_WaitingForMatchStart_C, Image_84) == 0x0002C0, "Member 'UUI_Raid_WaitingForMatchStart_C::Image_84' has a wrong offset!");
static_assert(offsetof(UUI_Raid_WaitingForMatchStart_C, Message) == 0x0002C8, "Member 'UUI_Raid_WaitingForMatchStart_C::Message' has a wrong offset!");
static_assert(offsetof(UUI_Raid_WaitingForMatchStart_C, StartMatchCountdown) == 0x0002D0, "Member 'UUI_Raid_WaitingForMatchStart_C::StartMatchCountdown' has a wrong offset!");
static_assert(offsetof(UUI_Raid_WaitingForMatchStart_C, All_Connected) == 0x0002D4, "Member 'UUI_Raid_WaitingForMatchStart_C::All_Connected' has a wrong offset!");
static_assert(offsetof(UUI_Raid_WaitingForMatchStart_C, Countdown_Timer) == 0x0002D8, "Member 'UUI_Raid_WaitingForMatchStart_C::Countdown_Timer' has a wrong offset!");
static_assert(offsetof(UUI_Raid_WaitingForMatchStart_C, PhaseTimer) == 0x0002E0, "Member 'UUI_Raid_WaitingForMatchStart_C::PhaseTimer' has a wrong offset!");

}
