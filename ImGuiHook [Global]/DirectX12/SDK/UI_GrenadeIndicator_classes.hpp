#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GrenadeIndicator

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GrenadeIndicator.UI_GrenadeIndicator_C
// 0x0090 (0x0348 - 0x02B8)
class UUI_GrenadeIndicator_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimFadeOut;                                       // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Indicator;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IndicatorFlash;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IndicatorFrag;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               IndicatorOverlay;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IndicatorPumpkin;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IndicatorRadioactiveGrenade;                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IndicatorSmokeGrenade;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AGrenade*                               Grenade;                                           // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         MinOpacity;                                        // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer_Handle;                                      // 0x0318(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         BlinkingSpeed;                                     // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TickTime;                                          // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Indicator_Colour;                                  // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftClassPtr<class UClass>>           GrenadeTypesWithoutIndication;                     // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_UI_GrenadeIndicator(int32 EntryPoint);
	void Destruct();
	void SetVisibilityForOwner();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateGrenadeIndicator();
	void UpdateVisibility(float Distance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GrenadeIndicator_C">();
	}
	static class UUI_GrenadeIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GrenadeIndicator_C>();
	}
};
static_assert(alignof(UUI_GrenadeIndicator_C) == 0x000008, "Wrong alignment on UUI_GrenadeIndicator_C");
static_assert(sizeof(UUI_GrenadeIndicator_C) == 0x000348, "Wrong size on UUI_GrenadeIndicator_C");
static_assert(offsetof(UUI_GrenadeIndicator_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_GrenadeIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, AnimFadeOut) == 0x0002C0, "Member 'UUI_GrenadeIndicator_C::AnimFadeOut' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, Arrow) == 0x0002C8, "Member 'UUI_GrenadeIndicator_C::Arrow' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, Indicator) == 0x0002D0, "Member 'UUI_GrenadeIndicator_C::Indicator' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, IndicatorFlash) == 0x0002D8, "Member 'UUI_GrenadeIndicator_C::IndicatorFlash' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, IndicatorFrag) == 0x0002E0, "Member 'UUI_GrenadeIndicator_C::IndicatorFrag' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, IndicatorOverlay) == 0x0002E8, "Member 'UUI_GrenadeIndicator_C::IndicatorOverlay' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, IndicatorPumpkin) == 0x0002F0, "Member 'UUI_GrenadeIndicator_C::IndicatorPumpkin' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, IndicatorRadioactiveGrenade) == 0x0002F8, "Member 'UUI_GrenadeIndicator_C::IndicatorRadioactiveGrenade' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, IndicatorSmokeGrenade) == 0x000300, "Member 'UUI_GrenadeIndicator_C::IndicatorSmokeGrenade' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, Grenade) == 0x000308, "Member 'UUI_GrenadeIndicator_C::Grenade' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, MinOpacity) == 0x000310, "Member 'UUI_GrenadeIndicator_C::MinOpacity' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, Timer_Handle) == 0x000318, "Member 'UUI_GrenadeIndicator_C::Timer_Handle' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, BlinkingSpeed) == 0x000320, "Member 'UUI_GrenadeIndicator_C::BlinkingSpeed' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, TickTime) == 0x000324, "Member 'UUI_GrenadeIndicator_C::TickTime' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, Indicator_Colour) == 0x000328, "Member 'UUI_GrenadeIndicator_C::Indicator_Colour' has a wrong offset!");
static_assert(offsetof(UUI_GrenadeIndicator_C, GrenadeTypesWithoutIndication) == 0x000338, "Member 'UUI_GrenadeIndicator_C::GrenadeTypesWithoutIndication' has a wrong offset!");

}
