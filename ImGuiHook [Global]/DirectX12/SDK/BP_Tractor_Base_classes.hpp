#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tractor_Base

#include "Basic.hpp"

#include "E_Tractor_Type_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "S_Tractor_Colours_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Tractor_Base.BP_Tractor_Base_C
// 0x0310 (0x0530 - 0x0220)
class ABP_Tractor_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Tractor_01_Glass09_SM;                          // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Tractor_01_Glass05_SM;                          // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Tractor_01_Glass06_SM;                          // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Tractor_01_Glass07_SM;                          // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Tractor_01_Glass01_SM;                          // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Tractor_01_Glass04_SM;                          // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Tractor_01_Glass03_SM;                          // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Tractor_01_Glass02_SM;                          // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Tractor_01_Glass08_SM;                          // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        RainAudio;                                         // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Base;                                              // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Trunk;                                             // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cabin;                                             // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel4;                                            // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel3;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel2;                                            // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel1;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Suspension_Lerp_FD848AFA43C25A048E14F498349C1645;  // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Suspension__Direction_FD848AFA43C25A048E14F498349C1645; // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B5[0x3];                                      // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Suspension;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, class UStaticMesh*>               Wheels_1;                                          // 0x02C0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, class UStaticMesh*>               Wheels_2;                                          // 0x0310(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Colour;                                            // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WheelType_1;                                       // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WheelType_2;                                       // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C[0x4];                                      // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  IsWheelEmpty;                                      // 0x0370(0x0010)(Edit, BlueprintVisible, Net, ExposeOnSpawn)
	int32                                         NumOfFrontWheels;                                  // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumOfBackWheels;                                   // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        DefaultLocations;                                  // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  IsFrontWheel;                                      // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>           Wheels;                                            // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	uint8                                         Pad_3B8[0x8];                                      // 0x03B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             DefaultHullTransform;                              // 0x03C0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         NumOfWheels_minusOne;                              // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4[0xC];                                      // 0x03F4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             PrevHullTransform;                                 // 0x0400(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             NewHullTransform;                                  // 0x0430(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TMap<int32, struct FS_Tractor_Colours>        Colours;                                           // 0x0460(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         SteeringRotation;                                  // 0x04B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Tractor_Type                                Versions;                                          // 0x04B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B5[0x3];                                      // 0x04B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<E_Tractor_Type, class UStaticMesh*>      BodyMesh;                                          // 0x04B8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UStaticMeshComponent*                   Extension;                                         // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Body;                                              // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DrawDistanceMultiplier;                            // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ToggleDrawDistanceDebug;                           // 0x051C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IgnoreRain;                                        // 0x051D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51E[0x2];                                      // 0x051E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            RainAudioParameterCurve;                           // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Set_Meshes();
	void DamageWheels(struct FTransform* NewHullTransform_0);
	void SetWheels();
	void SetColours();
	void UserConstructionScript();
	void Suspension__FinishedFunc();
	void Suspension__UpdateFunc();
	void SetHeavyRain(bool HeavyRain);
	void ReceivePointDamage(float Damage, const class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void AdjustWindDirection(const struct FVector& CurrentWindDirection);
	void AdjustWindIntensity(float CurrentWindIntensity);
	void DamagePneuMulticast(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void AdjustRainIntensity(float CurrentRainAmount, float CurrentWetnessAmount);
	void AdjustWeather(float CurrentRainAmount, float CurrentWindIntensity, const struct FVector& CurrentWindDirection, float CurrentWetnessAmount);
	void ExecuteUbergraph_BP_Tractor_Base(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Tractor_Base_C">();
	}
	static class ABP_Tractor_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Tractor_Base_C>();
	}
};
static_assert(alignof(ABP_Tractor_Base_C) == 0x000010, "Wrong alignment on ABP_Tractor_Base_C");
static_assert(sizeof(ABP_Tractor_Base_C) == 0x000530, "Wrong size on ABP_Tractor_Base_C");
static_assert(offsetof(ABP_Tractor_Base_C, UberGraphFrame) == 0x000220, "Member 'ABP_Tractor_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, SM_Tractor_01_Glass09_SM) == 0x000228, "Member 'ABP_Tractor_Base_C::SM_Tractor_01_Glass09_SM' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, SM_Tractor_01_Glass05_SM) == 0x000230, "Member 'ABP_Tractor_Base_C::SM_Tractor_01_Glass05_SM' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, SM_Tractor_01_Glass06_SM) == 0x000238, "Member 'ABP_Tractor_Base_C::SM_Tractor_01_Glass06_SM' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, SM_Tractor_01_Glass07_SM) == 0x000240, "Member 'ABP_Tractor_Base_C::SM_Tractor_01_Glass07_SM' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, SM_Tractor_01_Glass01_SM) == 0x000248, "Member 'ABP_Tractor_Base_C::SM_Tractor_01_Glass01_SM' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, SM_Tractor_01_Glass04_SM) == 0x000250, "Member 'ABP_Tractor_Base_C::SM_Tractor_01_Glass04_SM' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, SM_Tractor_01_Glass03_SM) == 0x000258, "Member 'ABP_Tractor_Base_C::SM_Tractor_01_Glass03_SM' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, SM_Tractor_01_Glass02_SM) == 0x000260, "Member 'ABP_Tractor_Base_C::SM_Tractor_01_Glass02_SM' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, SM_Tractor_01_Glass08_SM) == 0x000268, "Member 'ABP_Tractor_Base_C::SM_Tractor_01_Glass08_SM' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, RainAudio) == 0x000270, "Member 'ABP_Tractor_Base_C::RainAudio' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Base) == 0x000278, "Member 'ABP_Tractor_Base_C::Base' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Trunk) == 0x000280, "Member 'ABP_Tractor_Base_C::Trunk' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Cabin) == 0x000288, "Member 'ABP_Tractor_Base_C::Cabin' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Wheel4) == 0x000290, "Member 'ABP_Tractor_Base_C::Wheel4' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Wheel3) == 0x000298, "Member 'ABP_Tractor_Base_C::Wheel3' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Wheel2) == 0x0002A0, "Member 'ABP_Tractor_Base_C::Wheel2' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Wheel1) == 0x0002A8, "Member 'ABP_Tractor_Base_C::Wheel1' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Suspension_Lerp_FD848AFA43C25A048E14F498349C1645) == 0x0002B0, "Member 'ABP_Tractor_Base_C::Suspension_Lerp_FD848AFA43C25A048E14F498349C1645' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Suspension__Direction_FD848AFA43C25A048E14F498349C1645) == 0x0002B4, "Member 'ABP_Tractor_Base_C::Suspension__Direction_FD848AFA43C25A048E14F498349C1645' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Suspension) == 0x0002B8, "Member 'ABP_Tractor_Base_C::Suspension' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Wheels_1) == 0x0002C0, "Member 'ABP_Tractor_Base_C::Wheels_1' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Wheels_2) == 0x000310, "Member 'ABP_Tractor_Base_C::Wheels_2' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Colour) == 0x000360, "Member 'ABP_Tractor_Base_C::Colour' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, WheelType_1) == 0x000364, "Member 'ABP_Tractor_Base_C::WheelType_1' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, WheelType_2) == 0x000368, "Member 'ABP_Tractor_Base_C::WheelType_2' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, IsWheelEmpty) == 0x000370, "Member 'ABP_Tractor_Base_C::IsWheelEmpty' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, NumOfFrontWheels) == 0x000380, "Member 'ABP_Tractor_Base_C::NumOfFrontWheels' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, NumOfBackWheels) == 0x000384, "Member 'ABP_Tractor_Base_C::NumOfBackWheels' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, DefaultLocations) == 0x000388, "Member 'ABP_Tractor_Base_C::DefaultLocations' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, IsFrontWheel) == 0x000398, "Member 'ABP_Tractor_Base_C::IsFrontWheel' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Wheels) == 0x0003A8, "Member 'ABP_Tractor_Base_C::Wheels' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, DefaultHullTransform) == 0x0003C0, "Member 'ABP_Tractor_Base_C::DefaultHullTransform' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, NumOfWheels_minusOne) == 0x0003F0, "Member 'ABP_Tractor_Base_C::NumOfWheels_minusOne' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, PrevHullTransform) == 0x000400, "Member 'ABP_Tractor_Base_C::PrevHullTransform' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, NewHullTransform) == 0x000430, "Member 'ABP_Tractor_Base_C::NewHullTransform' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Colours) == 0x000460, "Member 'ABP_Tractor_Base_C::Colours' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, SteeringRotation) == 0x0004B0, "Member 'ABP_Tractor_Base_C::SteeringRotation' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Versions) == 0x0004B4, "Member 'ABP_Tractor_Base_C::Versions' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, BodyMesh) == 0x0004B8, "Member 'ABP_Tractor_Base_C::BodyMesh' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Extension) == 0x000508, "Member 'ABP_Tractor_Base_C::Extension' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, Body) == 0x000510, "Member 'ABP_Tractor_Base_C::Body' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, DrawDistanceMultiplier) == 0x000518, "Member 'ABP_Tractor_Base_C::DrawDistanceMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, ToggleDrawDistanceDebug) == 0x00051C, "Member 'ABP_Tractor_Base_C::ToggleDrawDistanceDebug' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, IgnoreRain) == 0x00051D, "Member 'ABP_Tractor_Base_C::IgnoreRain' has a wrong offset!");
static_assert(offsetof(ABP_Tractor_Base_C, RainAudioParameterCurve) == 0x000520, "Member 'ABP_Tractor_Base_C::RainAudioParameterCurve' has a wrong offset!");

}
