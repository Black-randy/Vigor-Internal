#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Raid_MatchProgress

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Raid_MatchProgress.UI_Raid_MatchProgress_C
// 0x0070 (0x0328 - 0x02B8)
class UUI_Raid_MatchProgress_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 AttackerArrow;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AttackerBackground_Image;                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AttackerSideName_Text;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AttackerWonRounds_Text;                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DefenderArrow;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DefenderBackground_Image;                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DefenderSideName_Text;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DefendersWonRounds_Text;                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RoundTime_Text;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           Coutdown_Handle;                                   // 0x0310(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   AttackerSideName;                                  // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DefenderSideName;                                  // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Raid_MatchProgress(int32 EntryPoint);
	void Construct();
	void Set_Round_Timer(int32 Round_Time);
	void Update_Win_Rounds(int32 Attacker_Won_Rounds, int32 Defender_Won_Rounds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Raid_MatchProgress_C">();
	}
	static class UUI_Raid_MatchProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Raid_MatchProgress_C>();
	}
};
static_assert(alignof(UUI_Raid_MatchProgress_C) == 0x000008, "Wrong alignment on UUI_Raid_MatchProgress_C");
static_assert(sizeof(UUI_Raid_MatchProgress_C) == 0x000328, "Wrong size on UUI_Raid_MatchProgress_C");
static_assert(offsetof(UUI_Raid_MatchProgress_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_Raid_MatchProgress_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Raid_MatchProgress_C, AttackerArrow) == 0x0002C0, "Member 'UUI_Raid_MatchProgress_C::AttackerArrow' has a wrong offset!");
static_assert(offsetof(UUI_Raid_MatchProgress_C, AttackerBackground_Image) == 0x0002C8, "Member 'UUI_Raid_MatchProgress_C::AttackerBackground_Image' has a wrong offset!");
static_assert(offsetof(UUI_Raid_MatchProgress_C, AttackerSideName_Text) == 0x0002D0, "Member 'UUI_Raid_MatchProgress_C::AttackerSideName_Text' has a wrong offset!");
static_assert(offsetof(UUI_Raid_MatchProgress_C, AttackerWonRounds_Text) == 0x0002D8, "Member 'UUI_Raid_MatchProgress_C::AttackerWonRounds_Text' has a wrong offset!");
static_assert(offsetof(UUI_Raid_MatchProgress_C, DefenderArrow) == 0x0002E0, "Member 'UUI_Raid_MatchProgress_C::DefenderArrow' has a wrong offset!");
static_assert(offsetof(UUI_Raid_MatchProgress_C, DefenderBackground_Image) == 0x0002E8, "Member 'UUI_Raid_MatchProgress_C::DefenderBackground_Image' has a wrong offset!");
static_assert(offsetof(UUI_Raid_MatchProgress_C, DefenderSideName_Text) == 0x0002F0, "Member 'UUI_Raid_MatchProgress_C::DefenderSideName_Text' has a wrong offset!");
static_assert(offsetof(UUI_Raid_MatchProgress_C, DefendersWonRounds_Text) == 0x0002F8, "Member 'UUI_Raid_MatchProgress_C::DefendersWonRounds_Text' has a wrong offset!");
static_assert(offsetof(UUI_Raid_MatchProgress_C, RoundTime_Text) == 0x000300, "Member 'UUI_Raid_MatchProgress_C::RoundTime_Text' has a wrong offset!");
static_assert(offsetof(UUI_Raid_MatchProgress_C, UI_FlameSafezone) == 0x000308, "Member 'UUI_Raid_MatchProgress_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_Raid_MatchProgress_C, Coutdown_Handle) == 0x000310, "Member 'UUI_Raid_MatchProgress_C::Coutdown_Handle' has a wrong offset!");
static_assert(offsetof(UUI_Raid_MatchProgress_C, AttackerSideName) == 0x000318, "Member 'UUI_Raid_MatchProgress_C::AttackerSideName' has a wrong offset!");
static_assert(offsetof(UUI_Raid_MatchProgress_C, DefenderSideName) == 0x000320, "Member 'UUI_Raid_MatchProgress_C::DefenderSideName' has a wrong offset!");

}
