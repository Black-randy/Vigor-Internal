#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_FlameTextWidget

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_FlameTextWidget.UI_FlameTextWidget_C
// 0x0008 (0x02C0 - 0x02B8)
class UUI_FlameTextWidget_C final : public UFlameWidget
{
public:
	class UFlameTextBlock*                        FlameText;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetText(const class FText& InText);
	void SetSize(int32 Size);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_FlameTextWidget_C">();
	}
	static class UUI_FlameTextWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_FlameTextWidget_C>();
	}
};
static_assert(alignof(UUI_FlameTextWidget_C) == 0x000008, "Wrong alignment on UUI_FlameTextWidget_C");
static_assert(sizeof(UUI_FlameTextWidget_C) == 0x0002C0, "Wrong size on UUI_FlameTextWidget_C");
static_assert(offsetof(UUI_FlameTextWidget_C, FlameText) == 0x0002B8, "Member 'UUI_FlameTextWidget_C::FlameText' has a wrong offset!");

}
