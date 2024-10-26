#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_TriggerParticleEffect

#include "Basic.hpp"


namespace SDK::Params
{

// Function AN_TriggerParticleEffect.AN_TriggerParticleEffect_C.Received_Notify
// 0x0060 (0x0060 - 0x0000)
struct AN_TriggerParticleEffect_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UActorComponent*>                CallFunc_GetComponentsByInterface_ReturnValue;     // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UActorComponent*                        CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBI_AnimActions_C>     K2Node_DynamicCast_AsBI_Anim_Actions;              // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AN_TriggerParticleEffect_C_Received_Notify) == 0x000008, "Wrong alignment on AN_TriggerParticleEffect_C_Received_Notify");
static_assert(sizeof(AN_TriggerParticleEffect_C_Received_Notify) == 0x000060, "Wrong size on AN_TriggerParticleEffect_C_Received_Notify");
static_assert(offsetof(AN_TriggerParticleEffect_C_Received_Notify, MeshComp) == 0x000000, "Member 'AN_TriggerParticleEffect_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AN_TriggerParticleEffect_C_Received_Notify, Animation) == 0x000008, "Member 'AN_TriggerParticleEffect_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AN_TriggerParticleEffect_C_Received_Notify, ReturnValue) == 0x000010, "Member 'AN_TriggerParticleEffect_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_TriggerParticleEffect_C_Received_Notify, Temp_int_Variable) == 0x000014, "Member 'AN_TriggerParticleEffect_C_Received_Notify::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AN_TriggerParticleEffect_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AN_TriggerParticleEffect_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_TriggerParticleEffect_C_Received_Notify, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'AN_TriggerParticleEffect_C_Received_Notify::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_TriggerParticleEffect_C_Received_Notify, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'AN_TriggerParticleEffect_C_Received_Notify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_TriggerParticleEffect_C_Received_Notify, CallFunc_GetComponentsByInterface_ReturnValue) == 0x000028, "Member 'AN_TriggerParticleEffect_C_Received_Notify::CallFunc_GetComponentsByInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_TriggerParticleEffect_C_Received_Notify, CallFunc_Array_Get_Item) == 0x000038, "Member 'AN_TriggerParticleEffect_C_Received_Notify::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AN_TriggerParticleEffect_C_Received_Notify, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'AN_TriggerParticleEffect_C_Received_Notify::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_TriggerParticleEffect_C_Received_Notify, K2Node_DynamicCast_AsBI_Anim_Actions) == 0x000048, "Member 'AN_TriggerParticleEffect_C_Received_Notify::K2Node_DynamicCast_AsBI_Anim_Actions' has a wrong offset!");
static_assert(offsetof(AN_TriggerParticleEffect_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'AN_TriggerParticleEffect_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AN_TriggerParticleEffect_C_Received_Notify, CallFunc_Less_IntInt_ReturnValue) == 0x000059, "Member 'AN_TriggerParticleEffect_C_Received_Notify::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

