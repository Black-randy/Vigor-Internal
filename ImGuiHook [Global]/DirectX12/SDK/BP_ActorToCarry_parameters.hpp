#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActorToCarry

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function BP_ActorToCarry.BP_ActorToCarry_C.ExecuteUbergraph_BP_ActorToCarry
// 0x0198 (0x0198 - 0x0000)
struct BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInteractionItemComponent*              K2Node_ComponentBoundEvent_Sender;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_Interacting_Actor;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerCharacter*                  K2Node_DynamicCast_AsHuman_Player_Character;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USelectionWheelComponent*               CallFunc_GetSelectionWheelComponent_ReturnValue;   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SelectionWheelComponent_C*          K2Node_DynamicCast_AsBP_Selection_Wheel_Component; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43[0x5];                                       // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Character_C*                        K2Node_CustomEvent_DyingCharacter;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_DamageAmount;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDamageType                                   K2Node_CustomEvent_DamageType;                     // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanCharacter*                        K2Node_CustomEvent_InstigatingCharacter;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_CustomEvent_InstigatingItem;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_CustomEvent_HitResult;                      // 0x0068(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F5[0x3];                                       // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_115[0x3];                                      // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0118(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x011C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0120(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_125[0x3];                                      // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0128(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0138(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UInteractionItemComponent*              K2Node_ComponentBoundEvent_Sender_1;               // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_Interacting_Actor_1;    // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanCharacter*                        K2Node_DynamicCast_AsHuman_Character;              // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_Script_C*          K2Node_DynamicCast_AsBP_Player_Controller_Script;  // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0180(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0195(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry) == 0x000008, "Wrong alignment on BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry");
static_assert(sizeof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry) == 0x000198, "Wrong size on BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, EntryPoint) == 0x000000, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_ComponentBoundEvent_Sender) == 0x000008, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_ComponentBoundEvent_Interacting_Actor) == 0x000010, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_ComponentBoundEvent_Interacting_Actor' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, Temp_int_Variable) == 0x000018, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_DynamicCast_AsHuman_Player_Character) == 0x000020, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_DynamicCast_AsHuman_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, CallFunc_GetSelectionWheelComponent_ReturnValue) == 0x000030, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::CallFunc_GetSelectionWheelComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_DynamicCast_AsBP_Selection_Wheel_Component) == 0x000038, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_DynamicCast_AsBP_Selection_Wheel_Component' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, Temp_bool_Has_Been_Initd_Variable) == 0x000042, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_CustomEvent_DyingCharacter) == 0x000048, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_CustomEvent_DyingCharacter' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_CustomEvent_DamageAmount) == 0x000050, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_CustomEvent_DamageAmount' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_CustomEvent_DamageType) == 0x000054, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_CustomEvent_DamageType' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_CustomEvent_InstigatingCharacter) == 0x000058, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_CustomEvent_InstigatingCharacter' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_CustomEvent_InstigatingItem) == 0x000060, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_CustomEvent_InstigatingItem' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_CustomEvent_HitResult) == 0x000068, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_CustomEvent_HitResult' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, CallFunc_IsValid_ReturnValue_1) == 0x0000F4, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000F8, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_ComponentBoundEvent_OtherActor) == 0x000100, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_ComponentBoundEvent_OtherComp) == 0x000108, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000110, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, Temp_bool_IsClosed_Variable) == 0x000114, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, Temp_int_Variable_1) == 0x000118, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, Temp_int_Variable_2) == 0x00011C, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, Temp_int_Variable_3) == 0x000120, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000124, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_CreateDelegate_OutputDelegate) == 0x000128, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000138, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_ComponentBoundEvent_Sender_1) == 0x000140, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_ComponentBoundEvent_Interacting_Actor_1) == 0x000148, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_ComponentBoundEvent_Interacting_Actor_1' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, CallFunc_IsValid_ReturnValue_2) == 0x000150, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_DynamicCast_AsHuman_Character) == 0x000158, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_DynamicCast_AsHuman_Character' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_DynamicCast_bSuccess_2) == 0x000160, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, CallFunc_GetController_ReturnValue) == 0x000168, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_DynamicCast_AsBP_Player_Controller_Script) == 0x000170, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_DynamicCast_AsBP_Player_Controller_Script' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, K2Node_DynamicCast_bSuccess_3) == 0x000178, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000180, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, CallFunc_Array_Length_ReturnValue) == 0x000190, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, CallFunc_Greater_IntInt_ReturnValue) == 0x000194, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry, CallFunc_Not_PreBool_ReturnValue) == 0x000195, "Member 'BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_ActorToCarry.BP_ActorToCarry_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_4_Interaction Start On Client__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_4_Interaction_Start_On_Client__DelegateSignature final
{
public:
	class UInteractionItemComponent*              Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Interacting_Actor;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_4_Interaction_Start_On_Client__DelegateSignature) == 0x000008, "Wrong alignment on BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_4_Interaction_Start_On_Client__DelegateSignature");
static_assert(sizeof(BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_4_Interaction_Start_On_Client__DelegateSignature) == 0x000010, "Wrong size on BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_4_Interaction_Start_On_Client__DelegateSignature");
static_assert(offsetof(BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_4_Interaction_Start_On_Client__DelegateSignature, Sender) == 0x000000, "Member 'BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_4_Interaction_Start_On_Client__DelegateSignature::Sender' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_4_Interaction_Start_On_Client__DelegateSignature, Interacting_Actor) == 0x000008, "Member 'BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_4_Interaction_Start_On_Client__DelegateSignature::Interacting_Actor' has a wrong offset!");

// Function BP_ActorToCarry.BP_ActorToCarry_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction Start on Server__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature final
{
public:
	class UInteractionItemComponent*              Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Interacting_Actor;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature) == 0x000008, "Wrong alignment on BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature");
static_assert(sizeof(BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature) == 0x000010, "Wrong size on BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature");
static_assert(offsetof(BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature, Sender) == 0x000000, "Member 'BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature::Sender' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature, Interacting_Actor) == 0x000008, "Member 'BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature::Interacting_Actor' has a wrong offset!");

// Function BP_ActorToCarry.BP_ActorToCarry_C.BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_ActorToCarry_C_BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActorToCarry_C_BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_ActorToCarry_C_BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_ActorToCarry_C_BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_ActorToCarry_C_BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_ActorToCarry_C_BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_ActorToCarry_C_BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_ActorToCarry_C_BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_ActorToCarry_C_BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_ActorToCarry_C_BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_ActorToCarry.BP_ActorToCarry_C.OnCarrierDied
// 0x00B0 (0x00B0 - 0x0000)
struct BP_ActorToCarry_C_OnCarrierDied final
{
public:
	class ABP_Character_C*                        DyingCharacter;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DamageAmount;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDamageType                                   DamageType;                                        // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanCharacter*                        InstigatingCharacter;                              // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 InstigatingItem;                                   // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitResult;                                         // 0x0020(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ActorToCarry_C_OnCarrierDied) == 0x000008, "Wrong alignment on BP_ActorToCarry_C_OnCarrierDied");
static_assert(sizeof(BP_ActorToCarry_C_OnCarrierDied) == 0x0000B0, "Wrong size on BP_ActorToCarry_C_OnCarrierDied");
static_assert(offsetof(BP_ActorToCarry_C_OnCarrierDied, DyingCharacter) == 0x000000, "Member 'BP_ActorToCarry_C_OnCarrierDied::DyingCharacter' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_OnCarrierDied, DamageAmount) == 0x000008, "Member 'BP_ActorToCarry_C_OnCarrierDied::DamageAmount' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_OnCarrierDied, DamageType) == 0x00000C, "Member 'BP_ActorToCarry_C_OnCarrierDied::DamageType' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_OnCarrierDied, InstigatingCharacter) == 0x000010, "Member 'BP_ActorToCarry_C_OnCarrierDied::InstigatingCharacter' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_OnCarrierDied, InstigatingItem) == 0x000018, "Member 'BP_ActorToCarry_C_OnCarrierDied::InstigatingItem' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_OnCarrierDied, HitResult) == 0x000020, "Member 'BP_ActorToCarry_C_OnCarrierDied::HitResult' has a wrong offset!");

// Function BP_ActorToCarry.BP_ActorToCarry_C.GrabCargoServer
// 0x0028 (0x0028 - 0x0000)
struct BP_ActorToCarry_C_GrabCargoServer final
{
public:
	class ABP_Character_C*                        Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACustomizationGestureVariant*           Hack;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class ABP_Character_C* DyingCharacter, float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, class UClass* InstigatingItem, struct FHitResult& HitResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_ActorToCarry_C_GrabCargoServer) == 0x000008, "Wrong alignment on BP_ActorToCarry_C_GrabCargoServer");
static_assert(sizeof(BP_ActorToCarry_C_GrabCargoServer) == 0x000028, "Wrong size on BP_ActorToCarry_C_GrabCargoServer");
static_assert(offsetof(BP_ActorToCarry_C_GrabCargoServer, Character) == 0x000000, "Member 'BP_ActorToCarry_C_GrabCargoServer::Character' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_GrabCargoServer, Hack) == 0x000008, "Member 'BP_ActorToCarry_C_GrabCargoServer::Hack' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_GrabCargoServer, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000010, "Member 'BP_ActorToCarry_C_GrabCargoServer::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_GrabCargoServer, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_ActorToCarry_C_GrabCargoServer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_ActorToCarry.BP_ActorToCarry_C.DropCargo
// 0x0150 (0x0150 - 0x0000)
struct BP_ActorToCarry_C_DropCargo final
{
public:
	struct FTransform                             HandleWorldTransform;                              // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class ABP_Character_C* DyingCharacter, float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, class UClass* InstigatingItem, struct FHitResult& HitResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0080(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x00B4(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActorToCarry_C_DropCargo) == 0x000010, "Wrong alignment on BP_ActorToCarry_C_DropCargo");
static_assert(sizeof(BP_ActorToCarry_C_DropCargo) == 0x000150, "Wrong size on BP_ActorToCarry_C_DropCargo");
static_assert(offsetof(BP_ActorToCarry_C_DropCargo, HandleWorldTransform) == 0x000000, "Member 'BP_ActorToCarry_C_DropCargo::HandleWorldTransform' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_DropCargo, CallFunc_BreakTransform_Location) == 0x000030, "Member 'BP_ActorToCarry_C_DropCargo::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_DropCargo, CallFunc_BreakTransform_Rotation) == 0x00003C, "Member 'BP_ActorToCarry_C_DropCargo::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_DropCargo, CallFunc_BreakTransform_Scale) == 0x000048, "Member 'BP_ActorToCarry_C_DropCargo::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_DropCargo, CallFunc_BreakRotator_Roll) == 0x000054, "Member 'BP_ActorToCarry_C_DropCargo::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_DropCargo, CallFunc_BreakRotator_Pitch) == 0x000058, "Member 'BP_ActorToCarry_C_DropCargo::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_DropCargo, CallFunc_BreakRotator_Yaw) == 0x00005C, "Member 'BP_ActorToCarry_C_DropCargo::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_DropCargo, K2Node_CreateDelegate_OutputDelegate) == 0x000060, "Member 'BP_ActorToCarry_C_DropCargo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_DropCargo, CallFunc_MakeRotator_ReturnValue) == 0x000070, "Member 'BP_ActorToCarry_C_DropCargo::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_DropCargo, CallFunc_MakeTransform_ReturnValue) == 0x000080, "Member 'BP_ActorToCarry_C_DropCargo::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_DropCargo, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'BP_ActorToCarry_C_DropCargo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_DropCargo, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x0000B4, "Member 'BP_ActorToCarry_C_DropCargo::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ActorToCarry_C_DropCargo, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000140, "Member 'BP_ActorToCarry_C_DropCargo::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

}
