#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ShelterBuilder_SubTab

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ShelterBuilder_SubTab.UI_ShelterBuilder_SubTab_C
// 0x0008 (0x0320 - 0x0318)
class UUI_ShelterBuilder_SubTab_C final : public UTabControlWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_UI_ShelterBuilder_SubTab(int32 EntryPoint);
	void OnResetToDefaultState();
	void OnSelectionChanged(int32 NewIndex, int32 OldIndex);
	void Destruct();
	void Construct();

	TArray<class UTabWidget*> CreateTabs() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ShelterBuilder_SubTab_C">();
	}
	static class UUI_ShelterBuilder_SubTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ShelterBuilder_SubTab_C>();
	}
};
static_assert(alignof(UUI_ShelterBuilder_SubTab_C) == 0x000008, "Wrong alignment on UUI_ShelterBuilder_SubTab_C");
static_assert(sizeof(UUI_ShelterBuilder_SubTab_C) == 0x000320, "Wrong size on UUI_ShelterBuilder_SubTab_C");
static_assert(offsetof(UUI_ShelterBuilder_SubTab_C, UberGraphFrame) == 0x000318, "Member 'UUI_ShelterBuilder_SubTab_C::UberGraphFrame' has a wrong offset!");

}
