#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_InteractiveFurniture

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Onboarding_InteractiveFurniture.UI_Onboarding_InteractiveFurniture_C
// 0x0008 (0x02C0 - 0x02B8)
class UUI_Onboarding_InteractiveFurniture_C final : public UFlameWidget
{
public:
	class UImage*                                 Image_61;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Onboarding_InteractiveFurniture_C">();
	}
	static class UUI_Onboarding_InteractiveFurniture_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Onboarding_InteractiveFurniture_C>();
	}
};
static_assert(alignof(UUI_Onboarding_InteractiveFurniture_C) == 0x000008, "Wrong alignment on UUI_Onboarding_InteractiveFurniture_C");
static_assert(sizeof(UUI_Onboarding_InteractiveFurniture_C) == 0x0002C0, "Wrong size on UUI_Onboarding_InteractiveFurniture_C");
static_assert(offsetof(UUI_Onboarding_InteractiveFurniture_C, Image_61) == 0x0002B8, "Member 'UUI_Onboarding_InteractiveFurniture_C::Image_61' has a wrong offset!");

}
