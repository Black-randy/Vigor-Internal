#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GunFight_TeamIndicator

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GunFight_TeamIndicator.UI_GunFight_TeamIndicator_C
// 0x0060 (0x0318 - 0x02B8)
class UUI_GunFight_TeamIndicator_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         PlayerHolder_hBox;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GunFight_PlayerIndicator_C*         UI_GunFight_Player;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GunFight_PlayerIndicator_C*         UI_GunFight_Player_1;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GunFight_PlayerIndicator_C*         UI_GunFight_Player_2;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GunFight_PlayerIndicator_C*         UI_GunFight_Player_3;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GunFight_PlayerIndicator_C*         UI_GunFight_Player_4;                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GSC_Team_Raid_C*                    Indicating_Team;                                   // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_GunFight_PlayerIndicator_C*> PlayerIndicators;                                  // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          Is_Friendly_Team;                                  // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Update_Timer;                                      // 0x0310(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_GunFight_TeamIndicator(int32 EntryPoint);
	void Destruct();
	void Set_Team(class UBP_GSC_Team_Raid_C* Team, bool Friendly_Team);
	void Update_Indicator();
	void Fill_Player_Indicators();
	void Get_Team_Health_and_Alive_Number(TMap<int32, float>* Team_Healths, int32* Alive_Players);
	void Set_Alive_Players(const TMap<int32, float>& Player_Healths, int32 Alive_Players);
	void Sort_Healths(TArray<float>& Team_Healths, bool Sort_Descending, TArray<float>* Sorted_Healths);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GunFight_TeamIndicator_C">();
	}
	static class UUI_GunFight_TeamIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GunFight_TeamIndicator_C>();
	}
};
static_assert(alignof(UUI_GunFight_TeamIndicator_C) == 0x000008, "Wrong alignment on UUI_GunFight_TeamIndicator_C");
static_assert(sizeof(UUI_GunFight_TeamIndicator_C) == 0x000318, "Wrong size on UUI_GunFight_TeamIndicator_C");
static_assert(offsetof(UUI_GunFight_TeamIndicator_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_GunFight_TeamIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_TeamIndicator_C, PlayerHolder_hBox) == 0x0002C0, "Member 'UUI_GunFight_TeamIndicator_C::PlayerHolder_hBox' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_TeamIndicator_C, UI_GunFight_Player) == 0x0002C8, "Member 'UUI_GunFight_TeamIndicator_C::UI_GunFight_Player' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_TeamIndicator_C, UI_GunFight_Player_1) == 0x0002D0, "Member 'UUI_GunFight_TeamIndicator_C::UI_GunFight_Player_1' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_TeamIndicator_C, UI_GunFight_Player_2) == 0x0002D8, "Member 'UUI_GunFight_TeamIndicator_C::UI_GunFight_Player_2' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_TeamIndicator_C, UI_GunFight_Player_3) == 0x0002E0, "Member 'UUI_GunFight_TeamIndicator_C::UI_GunFight_Player_3' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_TeamIndicator_C, UI_GunFight_Player_4) == 0x0002E8, "Member 'UUI_GunFight_TeamIndicator_C::UI_GunFight_Player_4' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_TeamIndicator_C, Indicating_Team) == 0x0002F0, "Member 'UUI_GunFight_TeamIndicator_C::Indicating_Team' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_TeamIndicator_C, PlayerIndicators) == 0x0002F8, "Member 'UUI_GunFight_TeamIndicator_C::PlayerIndicators' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_TeamIndicator_C, Is_Friendly_Team) == 0x000308, "Member 'UUI_GunFight_TeamIndicator_C::Is_Friendly_Team' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_TeamIndicator_C, Update_Timer) == 0x000310, "Member 'UUI_GunFight_TeamIndicator_C::Update_Timer' has a wrong offset!");

}
