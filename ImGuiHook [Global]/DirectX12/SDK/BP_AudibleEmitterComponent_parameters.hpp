#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AudibleEmitterComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_AudibleEmitterComponent.BP_AudibleEmitterComponent_C.ExecuteUbergraph_BP_AudibleEmitterComponent
// 0x0100 (0x0100 - 0x0000)
struct BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName EventName, float EmitterTime, int32 ParticleCount)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, class FName BoneName, class UPhysicalMaterial* PhysMat)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_EventName_3;                    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_EmitterTime_3;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Location_2;                     // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Velocity_2;                     // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_EventName_2;                    // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_EmitterTime_2;                  // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ParticleCount;                  // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_EventName_1;                    // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_EmitterTime_1;                  // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ParticleTime_1;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Location_1;                     // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Velocity_1;                     // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Direction_1;                    // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_EventName;                      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_EmitterTime;                    // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ParticleTime;                   // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Location;                       // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Velocity;                       // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Direction;                      // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Normal;                         // 0x00E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_BoneName;                       // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      K2Node_CustomEvent_PhysMat;                        // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent) == 0x000008, "Wrong alignment on BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent");
static_assert(sizeof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent) == 0x000100, "Wrong size on BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, EntryPoint) == 0x000000, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_Event_EndPlayReason) == 0x000004, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CreateDelegate_OutputDelegate_3) == 0x000038, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_EventName_3) == 0x000048, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_EventName_3' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_EmitterTime_3) == 0x000050, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_EmitterTime_3' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_Location_2) == 0x000054, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_Location_2' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_Velocity_2) == 0x000060, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_Velocity_2' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_EventName_2) == 0x00006C, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_EventName_2' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_EmitterTime_2) == 0x000074, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_EmitterTime_2' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_ParticleCount) == 0x000078, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_ParticleCount' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_EventName_1) == 0x00007C, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_EventName_1' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_EmitterTime_1) == 0x000084, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_EmitterTime_1' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_ParticleTime_1) == 0x000088, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_ParticleTime_1' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_Location_1) == 0x00008C, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_Location_1' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_Velocity_1) == 0x000098, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_Velocity_1' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_Direction_1) == 0x0000A4, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_Direction_1' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_EventName) == 0x0000B0, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_EventName' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_EmitterTime) == 0x0000B8, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_EmitterTime' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_ParticleTime) == 0x0000BC, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_ParticleTime' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_Location) == 0x0000C0, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_Velocity) == 0x0000CC, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_Velocity' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_Direction) == 0x0000D8, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_Direction' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_Normal) == 0x0000E4, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_Normal' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_BoneName) == 0x0000F0, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_BoneName' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent, K2Node_CustomEvent_PhysMat) == 0x0000F8, "Member 'BP_AudibleEmitterComponent_C_ExecuteUbergraph_BP_AudibleEmitterComponent::K2Node_CustomEvent_PhysMat' has a wrong offset!");

// Function BP_AudibleEmitterComponent.BP_AudibleEmitterComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_AudibleEmitterComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudibleEmitterComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_AudibleEmitterComponent_C_ReceiveEndPlay");
static_assert(sizeof(BP_AudibleEmitterComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_AudibleEmitterComponent_C_ReceiveEndPlay");
static_assert(offsetof(BP_AudibleEmitterComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_AudibleEmitterComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_AudibleEmitterComponent.BP_AudibleEmitterComponent_C.OnParticleCollideImpl
// 0x0050 (0x0050 - 0x0000)
struct BP_AudibleEmitterComponent_C_OnParticleCollideImpl final
{
public:
	class FName                                   EventName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EmitterTime;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ParticleTime;                                      // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Velocity;                                          // 0x001C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Direction;                                         // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Normal;                                            // 0x0034(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BoneName;                                          // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      PhysMat;                                           // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudibleEmitterComponent_C_OnParticleCollideImpl) == 0x000008, "Wrong alignment on BP_AudibleEmitterComponent_C_OnParticleCollideImpl");
static_assert(sizeof(BP_AudibleEmitterComponent_C_OnParticleCollideImpl) == 0x000050, "Wrong size on BP_AudibleEmitterComponent_C_OnParticleCollideImpl");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleCollideImpl, EventName) == 0x000000, "Member 'BP_AudibleEmitterComponent_C_OnParticleCollideImpl::EventName' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleCollideImpl, EmitterTime) == 0x000008, "Member 'BP_AudibleEmitterComponent_C_OnParticleCollideImpl::EmitterTime' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleCollideImpl, ParticleTime) == 0x00000C, "Member 'BP_AudibleEmitterComponent_C_OnParticleCollideImpl::ParticleTime' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleCollideImpl, Location) == 0x000010, "Member 'BP_AudibleEmitterComponent_C_OnParticleCollideImpl::Location' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleCollideImpl, Velocity) == 0x00001C, "Member 'BP_AudibleEmitterComponent_C_OnParticleCollideImpl::Velocity' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleCollideImpl, Direction) == 0x000028, "Member 'BP_AudibleEmitterComponent_C_OnParticleCollideImpl::Direction' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleCollideImpl, Normal) == 0x000034, "Member 'BP_AudibleEmitterComponent_C_OnParticleCollideImpl::Normal' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleCollideImpl, BoneName) == 0x000040, "Member 'BP_AudibleEmitterComponent_C_OnParticleCollideImpl::BoneName' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleCollideImpl, PhysMat) == 0x000048, "Member 'BP_AudibleEmitterComponent_C_OnParticleCollideImpl::PhysMat' has a wrong offset!");

// Function BP_AudibleEmitterComponent.BP_AudibleEmitterComponent_C.OnParticleDeathImpl
// 0x0034 (0x0034 - 0x0000)
struct BP_AudibleEmitterComponent_C_OnParticleDeathImpl final
{
public:
	class FName                                   EventName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EmitterTime;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ParticleTime;                                      // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Velocity;                                          // 0x001C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Direction;                                         // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudibleEmitterComponent_C_OnParticleDeathImpl) == 0x000004, "Wrong alignment on BP_AudibleEmitterComponent_C_OnParticleDeathImpl");
static_assert(sizeof(BP_AudibleEmitterComponent_C_OnParticleDeathImpl) == 0x000034, "Wrong size on BP_AudibleEmitterComponent_C_OnParticleDeathImpl");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleDeathImpl, EventName) == 0x000000, "Member 'BP_AudibleEmitterComponent_C_OnParticleDeathImpl::EventName' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleDeathImpl, EmitterTime) == 0x000008, "Member 'BP_AudibleEmitterComponent_C_OnParticleDeathImpl::EmitterTime' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleDeathImpl, ParticleTime) == 0x00000C, "Member 'BP_AudibleEmitterComponent_C_OnParticleDeathImpl::ParticleTime' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleDeathImpl, Location) == 0x000010, "Member 'BP_AudibleEmitterComponent_C_OnParticleDeathImpl::Location' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleDeathImpl, Velocity) == 0x00001C, "Member 'BP_AudibleEmitterComponent_C_OnParticleDeathImpl::Velocity' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleDeathImpl, Direction) == 0x000028, "Member 'BP_AudibleEmitterComponent_C_OnParticleDeathImpl::Direction' has a wrong offset!");

// Function BP_AudibleEmitterComponent.BP_AudibleEmitterComponent_C.OnParticleBurstImpl
// 0x0010 (0x0010 - 0x0000)
struct BP_AudibleEmitterComponent_C_OnParticleBurstImpl final
{
public:
	class FName                                   EventName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EmitterTime;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ParticleCount;                                     // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudibleEmitterComponent_C_OnParticleBurstImpl) == 0x000004, "Wrong alignment on BP_AudibleEmitterComponent_C_OnParticleBurstImpl");
static_assert(sizeof(BP_AudibleEmitterComponent_C_OnParticleBurstImpl) == 0x000010, "Wrong size on BP_AudibleEmitterComponent_C_OnParticleBurstImpl");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleBurstImpl, EventName) == 0x000000, "Member 'BP_AudibleEmitterComponent_C_OnParticleBurstImpl::EventName' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleBurstImpl, EmitterTime) == 0x000008, "Member 'BP_AudibleEmitterComponent_C_OnParticleBurstImpl::EmitterTime' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleBurstImpl, ParticleCount) == 0x00000C, "Member 'BP_AudibleEmitterComponent_C_OnParticleBurstImpl::ParticleCount' has a wrong offset!");

// Function BP_AudibleEmitterComponent.BP_AudibleEmitterComponent_C.OnParticleSpawnImpl
// 0x0024 (0x0024 - 0x0000)
struct BP_AudibleEmitterComponent_C_OnParticleSpawnImpl final
{
public:
	class FName                                   EventName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EmitterTime;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Velocity;                                          // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudibleEmitterComponent_C_OnParticleSpawnImpl) == 0x000004, "Wrong alignment on BP_AudibleEmitterComponent_C_OnParticleSpawnImpl");
static_assert(sizeof(BP_AudibleEmitterComponent_C_OnParticleSpawnImpl) == 0x000024, "Wrong size on BP_AudibleEmitterComponent_C_OnParticleSpawnImpl");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleSpawnImpl, EventName) == 0x000000, "Member 'BP_AudibleEmitterComponent_C_OnParticleSpawnImpl::EventName' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleSpawnImpl, EmitterTime) == 0x000008, "Member 'BP_AudibleEmitterComponent_C_OnParticleSpawnImpl::EmitterTime' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleSpawnImpl, Location) == 0x00000C, "Member 'BP_AudibleEmitterComponent_C_OnParticleSpawnImpl::Location' has a wrong offset!");
static_assert(offsetof(BP_AudibleEmitterComponent_C_OnParticleSpawnImpl, Velocity) == 0x000018, "Member 'BP_AudibleEmitterComponent_C_OnParticleSpawnImpl::Velocity' has a wrong offset!");

}
