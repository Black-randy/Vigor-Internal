#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SRChallenge_HUD

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SRChallenge_HUD.UI_SRChallenge_HUD_C
// 0x0050 (0x0308 - 0x02B8)
class UUI_SRChallenge_HUD_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Enlarge;                                           // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             ChallengeTimerText;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CurrentTargetsHit;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        FlameTextBlock_Description;                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_38;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_39;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RequiredTargetstoHit;                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_SRChallenge_HUD(int32 EntryPoint);
	void UpdateChallengeTime(float Time);
	void UpdateTargetsHit(int32 Score);
	void SetRequiredTargetsToHit(int32 RequiredTargets);
	void SetDescription(const class FText& Description);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SRChallenge_HUD_C">();
	}
	static class UUI_SRChallenge_HUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SRChallenge_HUD_C>();
	}
};
static_assert(alignof(UUI_SRChallenge_HUD_C) == 0x000008, "Wrong alignment on UUI_SRChallenge_HUD_C");
static_assert(sizeof(UUI_SRChallenge_HUD_C) == 0x000308, "Wrong size on UUI_SRChallenge_HUD_C");
static_assert(offsetof(UUI_SRChallenge_HUD_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_SRChallenge_HUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_HUD_C, Enlarge) == 0x0002C0, "Member 'UUI_SRChallenge_HUD_C::Enlarge' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_HUD_C, ChallengeTimerText) == 0x0002C8, "Member 'UUI_SRChallenge_HUD_C::ChallengeTimerText' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_HUD_C, CurrentTargetsHit) == 0x0002D0, "Member 'UUI_SRChallenge_HUD_C::CurrentTargetsHit' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_HUD_C, FlameTextBlock_Description) == 0x0002D8, "Member 'UUI_SRChallenge_HUD_C::FlameTextBlock_Description' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_HUD_C, Image_0) == 0x0002E0, "Member 'UUI_SRChallenge_HUD_C::Image_0' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_HUD_C, Image_38) == 0x0002E8, "Member 'UUI_SRChallenge_HUD_C::Image_38' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_HUD_C, Image_39) == 0x0002F0, "Member 'UUI_SRChallenge_HUD_C::Image_39' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_HUD_C, RequiredTargetstoHit) == 0x0002F8, "Member 'UUI_SRChallenge_HUD_C::RequiredTargetstoHit' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_HUD_C, UI_FlameSafezone) == 0x000300, "Member 'UUI_SRChallenge_HUD_C::UI_FlameSafezone' has a wrong offset!");

}
