#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Leaderboards_Line

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Leaderboards_Line.UI_Leaderboards_Line_C
// 0x0008 (0x02C0 - 0x02B8)
class UUI_Leaderboards_Line_C final : public UFlameWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Leaderboards_Line_C">();
	}
	static class UUI_Leaderboards_Line_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Leaderboards_Line_C>();
	}
};
static_assert(alignof(UUI_Leaderboards_Line_C) == 0x000008, "Wrong alignment on UUI_Leaderboards_Line_C");
static_assert(sizeof(UUI_Leaderboards_Line_C) == 0x0002C0, "Wrong size on UUI_Leaderboards_Line_C");
static_assert(offsetof(UUI_Leaderboards_Line_C, Image_0) == 0x0002B8, "Member 'UUI_Leaderboards_Line_C::Image_0' has a wrong offset!");

}

