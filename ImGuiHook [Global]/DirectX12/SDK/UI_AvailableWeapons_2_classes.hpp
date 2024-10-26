#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_AvailableWeapons_2

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_AvailableWeapons_2.UI_AvailableWeapons_2_C
// 0x0028 (0x02E0 - 0x02B8)
class UUI_AvailableWeapons_2_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                      UniformGridPanel_0;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomizableItemProvider*              ItemProvider;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Level;                                             // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Scale;                                             // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         ColCount;                                          // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_AvailableWeapons_2(int32 EntryPoint);
	void UpdateUI(int32 Level_0);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	class AStash* GetStash();
	void AddSlot(class UClass* Item);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_AvailableWeapons_2_C">();
	}
	static class UUI_AvailableWeapons_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_AvailableWeapons_2_C>();
	}
};
static_assert(alignof(UUI_AvailableWeapons_2_C) == 0x000008, "Wrong alignment on UUI_AvailableWeapons_2_C");
static_assert(sizeof(UUI_AvailableWeapons_2_C) == 0x0002E0, "Wrong size on UUI_AvailableWeapons_2_C");
static_assert(offsetof(UUI_AvailableWeapons_2_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_AvailableWeapons_2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_AvailableWeapons_2_C, UniformGridPanel_0) == 0x0002C0, "Member 'UUI_AvailableWeapons_2_C::UniformGridPanel_0' has a wrong offset!");
static_assert(offsetof(UUI_AvailableWeapons_2_C, ItemProvider) == 0x0002C8, "Member 'UUI_AvailableWeapons_2_C::ItemProvider' has a wrong offset!");
static_assert(offsetof(UUI_AvailableWeapons_2_C, Level) == 0x0002D0, "Member 'UUI_AvailableWeapons_2_C::Level' has a wrong offset!");
static_assert(offsetof(UUI_AvailableWeapons_2_C, Scale) == 0x0002D4, "Member 'UUI_AvailableWeapons_2_C::Scale' has a wrong offset!");
static_assert(offsetof(UUI_AvailableWeapons_2_C, ColCount) == 0x0002D8, "Member 'UUI_AvailableWeapons_2_C::ColCount' has a wrong offset!");

}

