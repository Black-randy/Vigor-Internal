#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BackgroundLobby

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "LoadingScreen_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_BackgroundLobby.UI_BackgroundLobby_C
// 0x0090 (0x0348 - 0x02B8)
class UUI_BackgroundLobby_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_386;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_LoadingScreen;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_MissingScreen;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLoadingScreenDataRow                  NewVar_0;                                          // 0x02E0(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_UI_BackgroundLobby(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BackgroundLobby_C">();
	}
	static class UUI_BackgroundLobby_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BackgroundLobby_C>();
	}
};
static_assert(alignof(UUI_BackgroundLobby_C) == 0x000008, "Wrong alignment on UUI_BackgroundLobby_C");
static_assert(sizeof(UUI_BackgroundLobby_C) == 0x000348, "Wrong size on UUI_BackgroundLobby_C");
static_assert(offsetof(UUI_BackgroundLobby_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_BackgroundLobby_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_BackgroundLobby_C, Image_386) == 0x0002C0, "Member 'UUI_BackgroundLobby_C::Image_386' has a wrong offset!");
static_assert(offsetof(UUI_BackgroundLobby_C, Image_Background) == 0x0002C8, "Member 'UUI_BackgroundLobby_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UUI_BackgroundLobby_C, Overlay_LoadingScreen) == 0x0002D0, "Member 'UUI_BackgroundLobby_C::Overlay_LoadingScreen' has a wrong offset!");
static_assert(offsetof(UUI_BackgroundLobby_C, Overlay_MissingScreen) == 0x0002D8, "Member 'UUI_BackgroundLobby_C::Overlay_MissingScreen' has a wrong offset!");
static_assert(offsetof(UUI_BackgroundLobby_C, NewVar_0) == 0x0002E0, "Member 'UUI_BackgroundLobby_C::NewVar_0' has a wrong offset!");

}
