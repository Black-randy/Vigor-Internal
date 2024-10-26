#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_DetailsPanel_ResourcesButton

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_DetailsPanel_ResourcesButton.UI_DetailsPanel_ResourcesButton_C
// 0x0048 (0x0300 - 0x02B8)
class UUI_DetailsPanel_ResourcesButton_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Amount;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Resource;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotBackground;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                 ResourceType;                                      // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         CountNeeded;                                       // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature(class UObject* Sender);
	void ExecuteUbergraph_UI_DetailsPanel_ResourcesButton(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void UpdateResourceCount();
	void UpdateResourceName();
	void UpdateResourceIcon();
	void UpdateUI();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_DetailsPanel_ResourcesButton_C">();
	}
	static class UUI_DetailsPanel_ResourcesButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_DetailsPanel_ResourcesButton_C>();
	}
};
static_assert(alignof(UUI_DetailsPanel_ResourcesButton_C) == 0x000008, "Wrong alignment on UUI_DetailsPanel_ResourcesButton_C");
static_assert(sizeof(UUI_DetailsPanel_ResourcesButton_C) == 0x000300, "Wrong size on UUI_DetailsPanel_ResourcesButton_C");
static_assert(offsetof(UUI_DetailsPanel_ResourcesButton_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_DetailsPanel_ResourcesButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_ResourcesButton_C, Amount) == 0x0002C0, "Member 'UUI_DetailsPanel_ResourcesButton_C::Amount' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_ResourcesButton_C, Icon) == 0x0002C8, "Member 'UUI_DetailsPanel_ResourcesButton_C::Icon' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_ResourcesButton_C, Resource) == 0x0002D0, "Member 'UUI_DetailsPanel_ResourcesButton_C::Resource' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_ResourcesButton_C, SlotBackground) == 0x0002D8, "Member 'UUI_DetailsPanel_ResourcesButton_C::SlotBackground' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_ResourcesButton_C, OnClicked) == 0x0002E0, "Member 'UUI_DetailsPanel_ResourcesButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_ResourcesButton_C, ResourceType) == 0x0002F0, "Member 'UUI_DetailsPanel_ResourcesButton_C::ResourceType' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_ResourcesButton_C, CountNeeded) == 0x0002F8, "Member 'UUI_DetailsPanel_ResourcesButton_C::CountNeeded' has a wrong offset!");

}

