#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PuzzleCube

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "E_PuzzleCube_SelectedSide_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PuzzleCube.UI_PuzzleCube_C
// 0x06D8 (0x09B0 - 0x02D8)
class UUI_PuzzleCube_C final : public UMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_InputActionWidget_C*                ActionSolve;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        FlameTextBlock_Changefocus;                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        FlameTextBlock_Moves;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        FlameTextBlock_time;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        FlameTextBlock_Win;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_C_0;                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_C_1;                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_CFD;                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_CFL;                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_CFR;                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_CFU;                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_Close;                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_Colorblind;                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_Shuffle;                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_TurnCenter1;                // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_TurnCenter2;                // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_TurnFace1;                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_TurnFace2;                  // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputIconImage*                        UI_NavigationIconPC;                               // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_PuzzleCube_Functional_C*            TheCube;                                           // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraRightVector;                                 // 0x03A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotationSpeed;                                     // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraForwardVector;                               // 0x03B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraUpVector;                                    // 0x03BC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              StartTime;                                         // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         SolvedButtonUsedCount;                             // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ShuffleButtonUsedCount;                            // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWin;                                             // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D9[0x7];                                      // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FRotator                               DefaultCubeRotation;                               // 0x03F0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_3FC[0x4];                                      // 0x03FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   OrigPostprocess;                                   // 0x0400(0x0590)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAudioComponent*                        FocusChangeSound;                                  // 0x0990(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         KonamiState;                                       // 0x0998(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CubeSize;                                          // 0x099C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsGamepad;                                         // 0x09A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A1[0x3];                                      // 0x09A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RotationSpeedMouse;                                // 0x09A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_UI_PuzzleCube(int32 EntryPoint);
	void InputModeChanged(int32 PlayerIndex, EInputMode InputMode);
	void BndEvt__ActionSolve_K2Node_ComponentBoundEvent_3_OnActionHoldEvent__DelegateSignature();
	void BndEvt__ActionSolve_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature();
	void Destruct();
	void BndEvt__UI_GamepadActionWidget_CFL_K2Node_ComponentBoundEvent_371_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_CFD_K2Node_ComponentBoundEvent_325_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_CFU_K2Node_ComponentBoundEvent_277_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_CFR_K2Node_ComponentBoundEvent_232_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_512_OnActionHoldEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_TurnCenter2_K2Node_ComponentBoundEvent_404_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_TurnCenter1_K2Node_ComponentBoundEvent_384_OnActionPressedEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void RightStickLeftRight(float AxisValue);
	void RightStickUpDown(float AxisValue);
	void LeftStickLeftRight(float AxisValue);
	void LeftStickUpDown(float AxisValue);
	void BndEvt__UI_GamepadActionWidget_Close_K2Node_ComponentBoundEvent_212_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_TurnFace2_K2Node_ComponentBoundEvent_157_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_TurnFace1_K2Node_ComponentBoundEvent_140_OnActionPressedEvent__DelegateSignature();
	void Construct();
	void SpawnCube();
	void Rotate3DCube(const struct FRotator& DeltaRotation);
	void FindActiveFace();
	void DebugArrow(const struct FVector& A, const struct FLinearColor& LineColor, float Duration);
	void FindClosestFaceToVector(const struct FVector& A, const struct FVector& Forward, const struct FVector& Right, const struct FVector& Up, E_PuzzleCube_SelectedSide* Side1, struct FVector* NearestVector);
	void ChangeActiveFace(E_PuzzleCube_SelectedSide Dir);
	void DrawDebugArrows(float Duration);
	struct FRotator TransformRotatorToCubeSpace(const struct FRotator& InRot);
	void VisualFocusButtons();
	void UpdateMeasurement();
	void ShowWinMsg(bool Win);
	void SetCameraBlur();
	void FindFocus(E_PuzzleCube_SelectedSide* FocusedSide);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PuzzleCube_C">();
	}
	static class UUI_PuzzleCube_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PuzzleCube_C>();
	}
};
static_assert(alignof(UUI_PuzzleCube_C) == 0x000010, "Wrong alignment on UUI_PuzzleCube_C");
static_assert(sizeof(UUI_PuzzleCube_C) == 0x0009B0, "Wrong size on UUI_PuzzleCube_C");
static_assert(offsetof(UUI_PuzzleCube_C, UberGraphFrame) == 0x0002D8, "Member 'UUI_PuzzleCube_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, ActionSolve) == 0x0002E0, "Member 'UUI_PuzzleCube_C::ActionSolve' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, FlameTextBlock_Changefocus) == 0x0002E8, "Member 'UUI_PuzzleCube_C::FlameTextBlock_Changefocus' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, FlameTextBlock_Moves) == 0x0002F0, "Member 'UUI_PuzzleCube_C::FlameTextBlock_Moves' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, FlameTextBlock_time) == 0x0002F8, "Member 'UUI_PuzzleCube_C::FlameTextBlock_time' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, FlameTextBlock_Win) == 0x000300, "Member 'UUI_PuzzleCube_C::FlameTextBlock_Win' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, Image_1) == 0x000308, "Member 'UUI_PuzzleCube_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, Image_4) == 0x000310, "Member 'UUI_PuzzleCube_C::Image_4' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, Image_7) == 0x000318, "Member 'UUI_PuzzleCube_C::Image_7' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, UI_FlameSafezone) == 0x000320, "Member 'UUI_PuzzleCube_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, UI_GamepadActionWidget_C_0) == 0x000328, "Member 'UUI_PuzzleCube_C::UI_GamepadActionWidget_C_0' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, UI_GamepadActionWidget_C_1) == 0x000330, "Member 'UUI_PuzzleCube_C::UI_GamepadActionWidget_C_1' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, UI_GamepadActionWidget_CFD) == 0x000338, "Member 'UUI_PuzzleCube_C::UI_GamepadActionWidget_CFD' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, UI_GamepadActionWidget_CFL) == 0x000340, "Member 'UUI_PuzzleCube_C::UI_GamepadActionWidget_CFL' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, UI_GamepadActionWidget_CFR) == 0x000348, "Member 'UUI_PuzzleCube_C::UI_GamepadActionWidget_CFR' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, UI_GamepadActionWidget_CFU) == 0x000350, "Member 'UUI_PuzzleCube_C::UI_GamepadActionWidget_CFU' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, UI_GamepadActionWidget_Close) == 0x000358, "Member 'UUI_PuzzleCube_C::UI_GamepadActionWidget_Close' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, UI_GamepadActionWidget_Colorblind) == 0x000360, "Member 'UUI_PuzzleCube_C::UI_GamepadActionWidget_Colorblind' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, UI_GamepadActionWidget_Shuffle) == 0x000368, "Member 'UUI_PuzzleCube_C::UI_GamepadActionWidget_Shuffle' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, UI_GamepadActionWidget_TurnCenter1) == 0x000370, "Member 'UUI_PuzzleCube_C::UI_GamepadActionWidget_TurnCenter1' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, UI_GamepadActionWidget_TurnCenter2) == 0x000378, "Member 'UUI_PuzzleCube_C::UI_GamepadActionWidget_TurnCenter2' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, UI_GamepadActionWidget_TurnFace1) == 0x000380, "Member 'UUI_PuzzleCube_C::UI_GamepadActionWidget_TurnFace1' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, UI_GamepadActionWidget_TurnFace2) == 0x000388, "Member 'UUI_PuzzleCube_C::UI_GamepadActionWidget_TurnFace2' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, UI_NavigationIconPC) == 0x000390, "Member 'UUI_PuzzleCube_C::UI_NavigationIconPC' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, TheCube) == 0x000398, "Member 'UUI_PuzzleCube_C::TheCube' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, CameraRightVector) == 0x0003A0, "Member 'UUI_PuzzleCube_C::CameraRightVector' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, RotationSpeed) == 0x0003AC, "Member 'UUI_PuzzleCube_C::RotationSpeed' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, CameraForwardVector) == 0x0003B0, "Member 'UUI_PuzzleCube_C::CameraForwardVector' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, CameraUpVector) == 0x0003BC, "Member 'UUI_PuzzleCube_C::CameraUpVector' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, StartTime) == 0x0003C8, "Member 'UUI_PuzzleCube_C::StartTime' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, SolvedButtonUsedCount) == 0x0003D0, "Member 'UUI_PuzzleCube_C::SolvedButtonUsedCount' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, ShuffleButtonUsedCount) == 0x0003D4, "Member 'UUI_PuzzleCube_C::ShuffleButtonUsedCount' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, IsWin) == 0x0003D8, "Member 'UUI_PuzzleCube_C::IsWin' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, OnClose) == 0x0003E0, "Member 'UUI_PuzzleCube_C::OnClose' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, DefaultCubeRotation) == 0x0003F0, "Member 'UUI_PuzzleCube_C::DefaultCubeRotation' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, OrigPostprocess) == 0x000400, "Member 'UUI_PuzzleCube_C::OrigPostprocess' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, FocusChangeSound) == 0x000990, "Member 'UUI_PuzzleCube_C::FocusChangeSound' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, KonamiState) == 0x000998, "Member 'UUI_PuzzleCube_C::KonamiState' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, CubeSize) == 0x00099C, "Member 'UUI_PuzzleCube_C::CubeSize' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, IsGamepad) == 0x0009A0, "Member 'UUI_PuzzleCube_C::IsGamepad' has a wrong offset!");
static_assert(offsetof(UUI_PuzzleCube_C, RotationSpeedMouse) == 0x0009A4, "Member 'UUI_PuzzleCube_C::RotationSpeedMouse' has a wrong offset!");

}
