#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TruckLootable_Base

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "S_Van_Colours_structs.hpp"
#include "E_Car_Extension_structs.hpp"
#include "BP_Lootable_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TruckLootable_Base.BP_TruckLootable_Base_C
// 0x0368 (0x0710 - 0x03A8)
class ABP_TruckLootable_Base_C : public ABP_Lootable_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_TruckLootable_Base_C;            // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   GlassBack_SM;                                      // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   GlassFront_SM;                                     // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ADM_BuriedCache_PolaroidSpawnPoint_C* BuriedCache_PolaroidSpawnPoint;                    // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel6;                                            // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel5;                                            // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel4;                                            // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel3;                                            // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel2;                                            // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel1;                                            // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Extension;                                         // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        RainAudio;                                         // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Hull;                                              // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        RootTruck;                                         // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Trunk;                                             // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Suspension_Lerp_7E627C9C41376AFC1FB641A73623836E;  // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Suspension__Direction_7E627C9C41376AFC1FB641A73623836E; // 0x0424(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_425[0x3];                                      // 0x0425(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Suspension;                                        // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, class UStaticMesh*>               Wheels_1;                                          // 0x0430(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, class UStaticMesh*>               Wheels_2;                                          // 0x0480(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Colour;                                            // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4[0x4];                                      // 0x04D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, struct FS_Van_Colours>            Colours;                                           // 0x04D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         WheelType_1;                                       // 0x0528(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WheelType_2;                                       // 0x052C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  IsWheelEmpty;                                      // 0x0530(0x0010)(Edit, BlueprintVisible, Net, ExposeOnSpawn)
	TMap<E_Car_Extension, struct FSoftObjectPath> BodyMesh;                                          // 0x0540(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_Car_Extension                               Versions;                                          // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_591[0x3];                                      // 0x0591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumOfFrontWheels;                                  // 0x0594(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumOfBackWheels;                                   // 0x0598(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59C[0x4];                                      // 0x059C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  IsFrontWheel;                                      // 0x05A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>           Wheels;                                            // 0x05B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FTransform                             DefaultHullTransform;                              // 0x05C0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         NumOfWheels_minusOne;                              // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F4[0xC];                                      // 0x05F4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             PrevHullTransform;                                 // 0x0600(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             NewHullTransform;                                  // 0x0630(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Door_Rotation;                                     // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SteeringRotation;                                  // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      BaseColour;                                        // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      LineColour;                                        // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      Advertisement;                                     // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DecalLocation;                                     // 0x0680(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DecalScale;                                        // 0x068C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WheelSizeDiffFront;                                // 0x0698(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WheelSizeDiffBack;                                 // 0x069C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            RainAudioParameterCurve;                           // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreRain;                                        // 0x06A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A9[0x7];                                      // 0x06A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        DefaultLocations;                                  // 0x06B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_Car_Extension, struct FSoftObjectPath> ObstacleAssets;                                    // 0x06C0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void DamageWheels(struct FTransform* NewHullTransform_0);
	void SetWheels();
	void SetColours();
	void SetMeches();
	void UserConstructionScript();
	void Suspension__FinishedFunc();
	void Suspension__UpdateFunc();
	void SetHeavyRain(bool HeavyRain);
	void AdjustWindDirection(const struct FVector& CurrentWindDirection);
	void AdjustWindIntensity(float CurrentWindIntensity);
	void ReceivePointDamage(float Damage, const class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void DamagePneuMulticast(const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent);
	void AdjustRainIntensity(float CurrentRainAmount, float CurrentWetnessAmount);
	void AdjustWeather(float CurrentRainAmount, float CurrentWindIntensity, const struct FVector& CurrentWindDirection, float CurrentWetnessAmount);
	void ExecuteUbergraph_BP_TruckLootable_Base(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TruckLootable_Base_C">();
	}
	static class ABP_TruckLootable_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TruckLootable_Base_C>();
	}
};
static_assert(alignof(ABP_TruckLootable_Base_C) == 0x000010, "Wrong alignment on ABP_TruckLootable_Base_C");
static_assert(sizeof(ABP_TruckLootable_Base_C) == 0x000710, "Wrong size on ABP_TruckLootable_Base_C");
static_assert(offsetof(ABP_TruckLootable_Base_C, UberGraphFrame_BP_TruckLootable_Base_C) == 0x0003A8, "Member 'ABP_TruckLootable_Base_C::UberGraphFrame_BP_TruckLootable_Base_C' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, GlassBack_SM) == 0x0003B0, "Member 'ABP_TruckLootable_Base_C::GlassBack_SM' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, GlassFront_SM) == 0x0003B8, "Member 'ABP_TruckLootable_Base_C::GlassFront_SM' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, BuriedCache_PolaroidSpawnPoint) == 0x0003C0, "Member 'ABP_TruckLootable_Base_C::BuriedCache_PolaroidSpawnPoint' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Wheel6) == 0x0003C8, "Member 'ABP_TruckLootable_Base_C::Wheel6' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Wheel5) == 0x0003D0, "Member 'ABP_TruckLootable_Base_C::Wheel5' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Wheel4) == 0x0003D8, "Member 'ABP_TruckLootable_Base_C::Wheel4' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Wheel3) == 0x0003E0, "Member 'ABP_TruckLootable_Base_C::Wheel3' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Wheel2) == 0x0003E8, "Member 'ABP_TruckLootable_Base_C::Wheel2' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Wheel1) == 0x0003F0, "Member 'ABP_TruckLootable_Base_C::Wheel1' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Extension) == 0x0003F8, "Member 'ABP_TruckLootable_Base_C::Extension' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, RainAudio) == 0x000400, "Member 'ABP_TruckLootable_Base_C::RainAudio' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Hull) == 0x000408, "Member 'ABP_TruckLootable_Base_C::Hull' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, RootTruck) == 0x000410, "Member 'ABP_TruckLootable_Base_C::RootTruck' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Trunk) == 0x000418, "Member 'ABP_TruckLootable_Base_C::Trunk' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Suspension_Lerp_7E627C9C41376AFC1FB641A73623836E) == 0x000420, "Member 'ABP_TruckLootable_Base_C::Suspension_Lerp_7E627C9C41376AFC1FB641A73623836E' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Suspension__Direction_7E627C9C41376AFC1FB641A73623836E) == 0x000424, "Member 'ABP_TruckLootable_Base_C::Suspension__Direction_7E627C9C41376AFC1FB641A73623836E' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Suspension) == 0x000428, "Member 'ABP_TruckLootable_Base_C::Suspension' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Wheels_1) == 0x000430, "Member 'ABP_TruckLootable_Base_C::Wheels_1' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Wheels_2) == 0x000480, "Member 'ABP_TruckLootable_Base_C::Wheels_2' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Colour) == 0x0004D0, "Member 'ABP_TruckLootable_Base_C::Colour' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Colours) == 0x0004D8, "Member 'ABP_TruckLootable_Base_C::Colours' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, WheelType_1) == 0x000528, "Member 'ABP_TruckLootable_Base_C::WheelType_1' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, WheelType_2) == 0x00052C, "Member 'ABP_TruckLootable_Base_C::WheelType_2' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, IsWheelEmpty) == 0x000530, "Member 'ABP_TruckLootable_Base_C::IsWheelEmpty' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, BodyMesh) == 0x000540, "Member 'ABP_TruckLootable_Base_C::BodyMesh' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Versions) == 0x000590, "Member 'ABP_TruckLootable_Base_C::Versions' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, NumOfFrontWheels) == 0x000594, "Member 'ABP_TruckLootable_Base_C::NumOfFrontWheels' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, NumOfBackWheels) == 0x000598, "Member 'ABP_TruckLootable_Base_C::NumOfBackWheels' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, IsFrontWheel) == 0x0005A0, "Member 'ABP_TruckLootable_Base_C::IsFrontWheel' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Wheels) == 0x0005B0, "Member 'ABP_TruckLootable_Base_C::Wheels' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, DefaultHullTransform) == 0x0005C0, "Member 'ABP_TruckLootable_Base_C::DefaultHullTransform' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, NumOfWheels_minusOne) == 0x0005F0, "Member 'ABP_TruckLootable_Base_C::NumOfWheels_minusOne' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, PrevHullTransform) == 0x000600, "Member 'ABP_TruckLootable_Base_C::PrevHullTransform' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, NewHullTransform) == 0x000630, "Member 'ABP_TruckLootable_Base_C::NewHullTransform' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Door_Rotation) == 0x000660, "Member 'ABP_TruckLootable_Base_C::Door_Rotation' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, SteeringRotation) == 0x000664, "Member 'ABP_TruckLootable_Base_C::SteeringRotation' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, BaseColour) == 0x000668, "Member 'ABP_TruckLootable_Base_C::BaseColour' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, LineColour) == 0x000670, "Member 'ABP_TruckLootable_Base_C::LineColour' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, Advertisement) == 0x000678, "Member 'ABP_TruckLootable_Base_C::Advertisement' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, DecalLocation) == 0x000680, "Member 'ABP_TruckLootable_Base_C::DecalLocation' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, DecalScale) == 0x00068C, "Member 'ABP_TruckLootable_Base_C::DecalScale' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, WheelSizeDiffFront) == 0x000698, "Member 'ABP_TruckLootable_Base_C::WheelSizeDiffFront' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, WheelSizeDiffBack) == 0x00069C, "Member 'ABP_TruckLootable_Base_C::WheelSizeDiffBack' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, RainAudioParameterCurve) == 0x0006A0, "Member 'ABP_TruckLootable_Base_C::RainAudioParameterCurve' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, IgnoreRain) == 0x0006A8, "Member 'ABP_TruckLootable_Base_C::IgnoreRain' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, DefaultLocations) == 0x0006B0, "Member 'ABP_TruckLootable_Base_C::DefaultLocations' has a wrong offset!");
static_assert(offsetof(ABP_TruckLootable_Base_C, ObstacleAssets) == 0x0006C0, "Member 'ABP_TruckLootable_Base_C::ObstacleAssets' has a wrong offset!");

}
