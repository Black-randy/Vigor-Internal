#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GunFight_ScorePopUp

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "Struct_GunFightStatistics_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GunFight_ScorePopUp.UI_GunFight_ScorePopUp_C
// 0x0078 (0x0330 - 0x02B8)
class UUI_GunFight_ScorePopUp_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewScoreFade;                                      // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             NewScore_Text;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Score_Last_Time;                                   // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_GunFightStatistics             StatisicsLastTime;                                 // 0x02D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_PlayerState_GunFight_C*             PlayerState;                                       // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_GunFight_ScorePopUp(int32 EntryPoint);
	void Update_Statistics();
	void Construct();
	void Destruct();
	void Fade_In_New_Score(int32 New_Score);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GunFight_ScorePopUp_C">();
	}
	static class UUI_GunFight_ScorePopUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GunFight_ScorePopUp_C>();
	}
};
static_assert(alignof(UUI_GunFight_ScorePopUp_C) == 0x000008, "Wrong alignment on UUI_GunFight_ScorePopUp_C");
static_assert(sizeof(UUI_GunFight_ScorePopUp_C) == 0x000330, "Wrong size on UUI_GunFight_ScorePopUp_C");
static_assert(offsetof(UUI_GunFight_ScorePopUp_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_GunFight_ScorePopUp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_ScorePopUp_C, NewScoreFade) == 0x0002C0, "Member 'UUI_GunFight_ScorePopUp_C::NewScoreFade' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_ScorePopUp_C, NewScore_Text) == 0x0002C8, "Member 'UUI_GunFight_ScorePopUp_C::NewScore_Text' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_ScorePopUp_C, Score_Last_Time) == 0x0002D0, "Member 'UUI_GunFight_ScorePopUp_C::Score_Last_Time' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_ScorePopUp_C, StatisicsLastTime) == 0x0002D8, "Member 'UUI_GunFight_ScorePopUp_C::StatisicsLastTime' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_ScorePopUp_C, PlayerState) == 0x000328, "Member 'UUI_GunFight_ScorePopUp_C::PlayerState' has a wrong offset!");

}
