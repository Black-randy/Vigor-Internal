#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InputActionWidgetExtended

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_InputActionWidgetExtended.UI_InputActionWidgetExtended_C
// 0x0008 (0x0460 - 0x0458)
class UUI_InputActionWidgetExtended_C final : public UInputActionWidgetExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0458(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_UI_InputActionWidgetExtended(int32 EntryPoint);
	void InputModeChanged(int32 PlayerIndex, EInputMode InputMode);
	void IconChanged();
	void Construct();
	void SetWindowsIcon();
	void SetHovered(bool IsHovered_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_InputActionWidgetExtended_C">();
	}
	static class UUI_InputActionWidgetExtended_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_InputActionWidgetExtended_C>();
	}
};
static_assert(alignof(UUI_InputActionWidgetExtended_C) == 0x000008, "Wrong alignment on UUI_InputActionWidgetExtended_C");
static_assert(sizeof(UUI_InputActionWidgetExtended_C) == 0x000460, "Wrong size on UUI_InputActionWidgetExtended_C");
static_assert(offsetof(UUI_InputActionWidgetExtended_C, UberGraphFrame) == 0x000458, "Member 'UUI_InputActionWidgetExtended_C::UberGraphFrame' has a wrong offset!");

}

