#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Elevator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Elevator.BP_Elevator_C
// 0x0208 (0x0428 - 0x0220)
class ABP_Elevator_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                       BackDoorMovementSplineHorizontal_new;              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CharacterBlockCeilingWall_03;                      // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CharacterBlockCeilingWall_02;                      // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CharacterBlockCeilingWall_01;                      // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CharacterBlockCeilingWall_00;                      // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CharacterBlockBackWall;                            // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CharacterBlockFrontWall;                           // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CharacterBlockRightWall;                           // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CharacterBlockLeftWall;                            // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Engine;                                            // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        RopeSound;                                         // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CameraBlockRightWall;                              // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CameraBlockLeftWall;                               // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CameraBlockCeiling_04;                             // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CameraBlockCeiling_03;                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CameraBlockCeiling_02;                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CameraBlockCeiling_01;                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_DoorBarricade_01_G1;                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_DoorBarricade_01_G;                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight1;                                       // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Lamp;                                              // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_DoorBarricade_01_A;                             // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_DoorBarricade_01_E1;                            // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_DoorBarricade_01_D;                             // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_DoorBarricade_01_E;                             // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       FrontDoorMovementSplineHorizontal;                 // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BackTrackBelt;                                     // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FrontTrackBelt;                                    // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        HardStopSound;                                     // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CameraMovementBlockBackBackDoor;                   // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CameraMovementBlockFrontDoor;                      // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTweenManagerComponent*                 TweenManager;                                      // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Lift_Cage_BackDoor;                             // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Lift_Cage_FrontDoor;                            // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          NoJumpTriggerVolume;                               // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          LowerCrushCollision;                               // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ElevatorFloor;                                     // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractionItemComponent_C*         BP_InteractionItemComponent;                       // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaX;                                            // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxElevatorSpeed;                                  // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_ElevatorFloorPosition_C*>    FloorLevels;                                       // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                          ElevatorMoving;                                    // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_389[0x3];                                      // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentFloor;                                      // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PreviousFloor;                                     // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ElevatorError;                                     // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Elevator_Caller_C*>          LevelCallers;                                      // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class UUI_Elevator_C*                         ElevatorUI;                                        // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ElevatorInteractionLocked;                         // 0x03B0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B1[0x3];                                      // 0x03B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MovementStartPoint;                                // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MovementEndPoint;                                  // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bGoingUp;                                          // 0x03BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BD[0x3];                                      // 0x03BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             DoorClosed;                                        // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bFrontDoorClosed;                                  // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bBackDoorClosed;                                   // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D2[0x6];                                      // 0x03D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ElevatorArrived;                                   // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bInitialized;                                      // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTrapDoorClosed;                                   // 0x03E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EA[0x6];                                      // 0x03EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       FrontWheels;                                       // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       BackWheels;                                        // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         DoorOpenSpeed;                                     // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_414[0x4];                                      // 0x0414(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             DoorOpened;                                        // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void DoorClosed__DelegateSignature();
	void ElevatorArrived__DelegateSignature();
	void DoorOpened__DelegateSignature();
	void ExecuteUbergraph_BP_Elevator(int32 EntryPoint);
	void HardStopSoundEvent(class UTweenVector* Tween);
	void DoorSoundEffect_01();
	void PlayDoorSoundEffects(bool bFrontDoors);
	void DoorSoundEffect_02();
	void BindElevatorStartAfterDoorClose();
	void ElevatorTweenEnded(class UTweenVector* Tween);
	void BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_6_Interaction_Start_On_Client__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void MoveElevatorByTween();
	void ElevatorArrivedEvent();
	void BackDoor_Closed(class UTweenFloat* Tween);
	void FrontDoor_Closed(class UTweenFloat* Tween);
	void CheckIfBothDoorClosed();
	void StartTheElevator();
	void OpenExitDoor();
	void CloseDoors();
	void ElevatorBoxTriggered(bool bJumpEnabled, class ABP_Character_Script_C* Character);
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Move_The_Elevator_On_Client(int32 Floor);
	void Move_The_Elevator(int32 Floor);
	void Go_To_Floor(int32 Floor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SetDesiredFloor(int32 Floor);
	void Hide_Floor_Level_Meshes();
	void Register_Level_Callers();
	void Set_Elevator_Controllers_Active(bool Active);
	void Interact();
	void Hide_UI();
	void Show_UI();
	void Get_Distance_Between_Floors(float* Distance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Elevator_C">();
	}
	static class ABP_Elevator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Elevator_C>();
	}
};
static_assert(alignof(ABP_Elevator_C) == 0x000008, "Wrong alignment on ABP_Elevator_C");
static_assert(sizeof(ABP_Elevator_C) == 0x000428, "Wrong size on ABP_Elevator_C");
static_assert(offsetof(ABP_Elevator_C, UberGraphFrame) == 0x000220, "Member 'ABP_Elevator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, BackDoorMovementSplineHorizontal_new) == 0x000228, "Member 'ABP_Elevator_C::BackDoorMovementSplineHorizontal_new' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CharacterBlockCeilingWall_03) == 0x000230, "Member 'ABP_Elevator_C::CharacterBlockCeilingWall_03' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CharacterBlockCeilingWall_02) == 0x000238, "Member 'ABP_Elevator_C::CharacterBlockCeilingWall_02' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CharacterBlockCeilingWall_01) == 0x000240, "Member 'ABP_Elevator_C::CharacterBlockCeilingWall_01' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CharacterBlockCeilingWall_00) == 0x000248, "Member 'ABP_Elevator_C::CharacterBlockCeilingWall_00' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CharacterBlockBackWall) == 0x000250, "Member 'ABP_Elevator_C::CharacterBlockBackWall' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CharacterBlockFrontWall) == 0x000258, "Member 'ABP_Elevator_C::CharacterBlockFrontWall' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CharacterBlockRightWall) == 0x000260, "Member 'ABP_Elevator_C::CharacterBlockRightWall' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CharacterBlockLeftWall) == 0x000268, "Member 'ABP_Elevator_C::CharacterBlockLeftWall' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, Engine) == 0x000270, "Member 'ABP_Elevator_C::Engine' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, RopeSound) == 0x000278, "Member 'ABP_Elevator_C::RopeSound' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CameraBlockRightWall) == 0x000280, "Member 'ABP_Elevator_C::CameraBlockRightWall' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CameraBlockLeftWall) == 0x000288, "Member 'ABP_Elevator_C::CameraBlockLeftWall' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CameraBlockCeiling_04) == 0x000290, "Member 'ABP_Elevator_C::CameraBlockCeiling_04' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CameraBlockCeiling_03) == 0x000298, "Member 'ABP_Elevator_C::CameraBlockCeiling_03' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CameraBlockCeiling_02) == 0x0002A0, "Member 'ABP_Elevator_C::CameraBlockCeiling_02' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CameraBlockCeiling_01) == 0x0002A8, "Member 'ABP_Elevator_C::CameraBlockCeiling_01' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, SM_DoorBarricade_01_G1) == 0x0002B0, "Member 'ABP_Elevator_C::SM_DoorBarricade_01_G1' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, SM_DoorBarricade_01_G) == 0x0002B8, "Member 'ABP_Elevator_C::SM_DoorBarricade_01_G' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, PointLight1) == 0x0002C0, "Member 'ABP_Elevator_C::PointLight1' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, PointLight) == 0x0002C8, "Member 'ABP_Elevator_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, SpotLight) == 0x0002D0, "Member 'ABP_Elevator_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, Lamp) == 0x0002D8, "Member 'ABP_Elevator_C::Lamp' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, SM_DoorBarricade_01_A) == 0x0002E0, "Member 'ABP_Elevator_C::SM_DoorBarricade_01_A' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, SM_DoorBarricade_01_E1) == 0x0002E8, "Member 'ABP_Elevator_C::SM_DoorBarricade_01_E1' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, SM_DoorBarricade_01_D) == 0x0002F0, "Member 'ABP_Elevator_C::SM_DoorBarricade_01_D' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, SM_DoorBarricade_01_E) == 0x0002F8, "Member 'ABP_Elevator_C::SM_DoorBarricade_01_E' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, FrontDoorMovementSplineHorizontal) == 0x000300, "Member 'ABP_Elevator_C::FrontDoorMovementSplineHorizontal' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, BackTrackBelt) == 0x000308, "Member 'ABP_Elevator_C::BackTrackBelt' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, FrontTrackBelt) == 0x000310, "Member 'ABP_Elevator_C::FrontTrackBelt' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, HardStopSound) == 0x000318, "Member 'ABP_Elevator_C::HardStopSound' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CameraMovementBlockBackBackDoor) == 0x000320, "Member 'ABP_Elevator_C::CameraMovementBlockBackBackDoor' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CameraMovementBlockFrontDoor) == 0x000328, "Member 'ABP_Elevator_C::CameraMovementBlockFrontDoor' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, TweenManager) == 0x000330, "Member 'ABP_Elevator_C::TweenManager' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, SM_Lift_Cage_BackDoor) == 0x000338, "Member 'ABP_Elevator_C::SM_Lift_Cage_BackDoor' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, SM_Lift_Cage_FrontDoor) == 0x000340, "Member 'ABP_Elevator_C::SM_Lift_Cage_FrontDoor' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, NoJumpTriggerVolume) == 0x000348, "Member 'ABP_Elevator_C::NoJumpTriggerVolume' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, LowerCrushCollision) == 0x000350, "Member 'ABP_Elevator_C::LowerCrushCollision' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, ElevatorFloor) == 0x000358, "Member 'ABP_Elevator_C::ElevatorFloor' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, Scene) == 0x000360, "Member 'ABP_Elevator_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, BP_InteractionItemComponent) == 0x000368, "Member 'ABP_Elevator_C::BP_InteractionItemComponent' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, DeltaX) == 0x000370, "Member 'ABP_Elevator_C::DeltaX' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, MaxElevatorSpeed) == 0x000374, "Member 'ABP_Elevator_C::MaxElevatorSpeed' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, FloorLevels) == 0x000378, "Member 'ABP_Elevator_C::FloorLevels' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, ElevatorMoving) == 0x000388, "Member 'ABP_Elevator_C::ElevatorMoving' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, CurrentFloor) == 0x00038C, "Member 'ABP_Elevator_C::CurrentFloor' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, PreviousFloor) == 0x000390, "Member 'ABP_Elevator_C::PreviousFloor' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, ElevatorError) == 0x000394, "Member 'ABP_Elevator_C::ElevatorError' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, LevelCallers) == 0x000398, "Member 'ABP_Elevator_C::LevelCallers' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, ElevatorUI) == 0x0003A8, "Member 'ABP_Elevator_C::ElevatorUI' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, ElevatorInteractionLocked) == 0x0003B0, "Member 'ABP_Elevator_C::ElevatorInteractionLocked' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, MovementStartPoint) == 0x0003B4, "Member 'ABP_Elevator_C::MovementStartPoint' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, MovementEndPoint) == 0x0003B8, "Member 'ABP_Elevator_C::MovementEndPoint' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, bGoingUp) == 0x0003BC, "Member 'ABP_Elevator_C::bGoingUp' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, DoorClosed) == 0x0003C0, "Member 'ABP_Elevator_C::DoorClosed' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, bFrontDoorClosed) == 0x0003D0, "Member 'ABP_Elevator_C::bFrontDoorClosed' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, bBackDoorClosed) == 0x0003D1, "Member 'ABP_Elevator_C::bBackDoorClosed' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, ElevatorArrived) == 0x0003D8, "Member 'ABP_Elevator_C::ElevatorArrived' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, bInitialized) == 0x0003E8, "Member 'ABP_Elevator_C::bInitialized' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, bTrapDoorClosed) == 0x0003E9, "Member 'ABP_Elevator_C::bTrapDoorClosed' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, FrontWheels) == 0x0003F0, "Member 'ABP_Elevator_C::FrontWheels' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, BackWheels) == 0x000400, "Member 'ABP_Elevator_C::BackWheels' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, DoorOpenSpeed) == 0x000410, "Member 'ABP_Elevator_C::DoorOpenSpeed' has a wrong offset!");
static_assert(offsetof(ABP_Elevator_C, DoorOpened) == 0x000418, "Member 'ABP_Elevator_C::DoorOpened' has a wrong offset!");

}
