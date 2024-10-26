#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Options_AudioPC

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Options_AudioPC.UI_Options_AudioPC_C
// 0x0058 (0x0370 - 0x0318)
class UUI_Options_AudioPC_C final : public UOptionsMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_InputActionWidget_C*                ActionClose;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ActionDefault;                                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ButtonPromptBox;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_OptionsElement_Slider_C*            EffectsVolumeSlider;                               // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_OptionsElement_Checkbox_C*          EncounterMusicCheckbox;                            // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_OptionsElement_Slider_C*            MasterVolumeSlider;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_OptionsElement_Slider_C*            MusicVolumeSlider;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             Options;                                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_OptionsElement_Slider_C*            RadioVoiceVolumeSlider;                            // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_ShelterUI_C*                        ShelterUI;                                         // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Options_AudioPC(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ActionDefault_K2Node_ComponentBoundEvent_2_OnClickedEvent__DelegateSignature();
	void BndEvt__EncounterMusicCheckbox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Destruct();
	void BndEvt__ActionClose_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void Construct();
	void InitShelterUI();

	TArray<class UPanelWidget*> GetAllPanelWidgets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Options_AudioPC_C">();
	}
	static class UUI_Options_AudioPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Options_AudioPC_C>();
	}
};
static_assert(alignof(UUI_Options_AudioPC_C) == 0x000008, "Wrong alignment on UUI_Options_AudioPC_C");
static_assert(sizeof(UUI_Options_AudioPC_C) == 0x000370, "Wrong size on UUI_Options_AudioPC_C");
static_assert(offsetof(UUI_Options_AudioPC_C, UberGraphFrame) == 0x000318, "Member 'UUI_Options_AudioPC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Options_AudioPC_C, ActionClose) == 0x000320, "Member 'UUI_Options_AudioPC_C::ActionClose' has a wrong offset!");
static_assert(offsetof(UUI_Options_AudioPC_C, ActionDefault) == 0x000328, "Member 'UUI_Options_AudioPC_C::ActionDefault' has a wrong offset!");
static_assert(offsetof(UUI_Options_AudioPC_C, ButtonPromptBox) == 0x000330, "Member 'UUI_Options_AudioPC_C::ButtonPromptBox' has a wrong offset!");
static_assert(offsetof(UUI_Options_AudioPC_C, EffectsVolumeSlider) == 0x000338, "Member 'UUI_Options_AudioPC_C::EffectsVolumeSlider' has a wrong offset!");
static_assert(offsetof(UUI_Options_AudioPC_C, EncounterMusicCheckbox) == 0x000340, "Member 'UUI_Options_AudioPC_C::EncounterMusicCheckbox' has a wrong offset!");
static_assert(offsetof(UUI_Options_AudioPC_C, MasterVolumeSlider) == 0x000348, "Member 'UUI_Options_AudioPC_C::MasterVolumeSlider' has a wrong offset!");
static_assert(offsetof(UUI_Options_AudioPC_C, MusicVolumeSlider) == 0x000350, "Member 'UUI_Options_AudioPC_C::MusicVolumeSlider' has a wrong offset!");
static_assert(offsetof(UUI_Options_AudioPC_C, Options) == 0x000358, "Member 'UUI_Options_AudioPC_C::Options' has a wrong offset!");
static_assert(offsetof(UUI_Options_AudioPC_C, RadioVoiceVolumeSlider) == 0x000360, "Member 'UUI_Options_AudioPC_C::RadioVoiceVolumeSlider' has a wrong offset!");
static_assert(offsetof(UUI_Options_AudioPC_C, ShelterUI) == 0x000368, "Member 'UUI_Options_AudioPC_C::ShelterUI' has a wrong offset!");

}

