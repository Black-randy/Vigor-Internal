#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PremiumPackWeapon

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PremiumPackWeapon.BP_PremiumPackWeapon_C.UserConstructionScript
// 0x0020 (0x0020 - 0x0000)
struct BP_PremiumPackWeapon_C_UserConstructionScript final
{
public:
	class AWeapon*                                CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          K2Node_DynamicCast_AsSkeletal_Mesh;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PremiumPackWeapon_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_PremiumPackWeapon_C_UserConstructionScript");
static_assert(sizeof(BP_PremiumPackWeapon_C_UserConstructionScript) == 0x000020, "Wrong size on BP_PremiumPackWeapon_C_UserConstructionScript");
static_assert(offsetof(BP_PremiumPackWeapon_C_UserConstructionScript, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000000, "Member 'BP_PremiumPackWeapon_C_UserConstructionScript::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_UserConstructionScript, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000008, "Member 'BP_PremiumPackWeapon_C_UserConstructionScript::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_UserConstructionScript, K2Node_DynamicCast_AsSkeletal_Mesh) == 0x000010, "Member 'BP_PremiumPackWeapon_C_UserConstructionScript::K2Node_DynamicCast_AsSkeletal_Mesh' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_UserConstructionScript, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PremiumPackWeapon_C_UserConstructionScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PremiumPackWeapon.BP_PremiumPackWeapon_C.ApplySkin
// 0x0048 (0x0048 - 0x0000)
struct BP_PremiumPackWeapon_C_ApplySkin final
{
public:
	class UClass*                                 WeaponSkinToApply;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AWeaponSkin*                            CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCanRenderExtraGeometryStatic_ReturnValue; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ApplySkinExtraGeometry_ReturnValue;       // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B[0x1];                                       // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWeapon*                                CallFunc_GetClassDefaultObject_ReturnValue_1;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClearWeaponSkinVisual_ReturnValue;        // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ApplyWeaponSkinVisual_ReturnValue;        // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PremiumPackWeapon_C_ApplySkin) == 0x000008, "Wrong alignment on BP_PremiumPackWeapon_C_ApplySkin");
static_assert(sizeof(BP_PremiumPackWeapon_C_ApplySkin) == 0x000048, "Wrong size on BP_PremiumPackWeapon_C_ApplySkin");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplySkin, WeaponSkinToApply) == 0x000000, "Member 'BP_PremiumPackWeapon_C_ApplySkin::WeaponSkinToApply' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplySkin, CallFunc_IsValidClass_ReturnValue) == 0x000008, "Member 'BP_PremiumPackWeapon_C_ApplySkin::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplySkin, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000010, "Member 'BP_PremiumPackWeapon_C_ApplySkin::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplySkin, CallFunc_GetCanRenderExtraGeometryStatic_ReturnValue) == 0x000018, "Member 'BP_PremiumPackWeapon_C_ApplySkin::CallFunc_GetCanRenderExtraGeometryStatic_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplySkin, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000019, "Member 'BP_PremiumPackWeapon_C_ApplySkin::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplySkin, CallFunc_ApplySkinExtraGeometry_ReturnValue) == 0x00001A, "Member 'BP_PremiumPackWeapon_C_ApplySkin::CallFunc_ApplySkinExtraGeometry_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplySkin, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_PremiumPackWeapon_C_ApplySkin::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplySkin, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_PremiumPackWeapon_C_ApplySkin::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplySkin, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_PremiumPackWeapon_C_ApplySkin::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplySkin, CallFunc_GetClassDefaultObject_ReturnValue_1) == 0x000028, "Member 'BP_PremiumPackWeapon_C_ApplySkin::CallFunc_GetClassDefaultObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplySkin, CallFunc_GetMaterials_ReturnValue) == 0x000030, "Member 'BP_PremiumPackWeapon_C_ApplySkin::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplySkin, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_PremiumPackWeapon_C_ApplySkin::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplySkin, CallFunc_ClearWeaponSkinVisual_ReturnValue) == 0x000044, "Member 'BP_PremiumPackWeapon_C_ApplySkin::CallFunc_ClearWeaponSkinVisual_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplySkin, CallFunc_Less_IntInt_ReturnValue) == 0x000045, "Member 'BP_PremiumPackWeapon_C_ApplySkin::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplySkin, CallFunc_ApplyWeaponSkinVisual_ReturnValue) == 0x000046, "Member 'BP_PremiumPackWeapon_C_ApplySkin::CallFunc_ApplyWeaponSkinVisual_ReturnValue' has a wrong offset!");

// Function BP_PremiumPackWeapon.BP_PremiumPackWeapon_C.ApplyAnimation
// 0x0001 (0x0001 - 0x0000)
struct BP_PremiumPackWeapon_C_ApplyAnimation final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PremiumPackWeapon_C_ApplyAnimation) == 0x000001, "Wrong alignment on BP_PremiumPackWeapon_C_ApplyAnimation");
static_assert(sizeof(BP_PremiumPackWeapon_C_ApplyAnimation) == 0x000001, "Wrong size on BP_PremiumPackWeapon_C_ApplyAnimation");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplyAnimation, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_PremiumPackWeapon_C_ApplyAnimation::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PremiumPackWeapon.BP_PremiumPackWeapon_C.ApplyTemporarySkin
// 0x0008 (0x0008 - 0x0000)
struct BP_PremiumPackWeapon_C_ApplyTemporarySkin final
{
public:
	class UClass*                                 WeaponSkinToApply;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PremiumPackWeapon_C_ApplyTemporarySkin) == 0x000008, "Wrong alignment on BP_PremiumPackWeapon_C_ApplyTemporarySkin");
static_assert(sizeof(BP_PremiumPackWeapon_C_ApplyTemporarySkin) == 0x000008, "Wrong size on BP_PremiumPackWeapon_C_ApplyTemporarySkin");
static_assert(offsetof(BP_PremiumPackWeapon_C_ApplyTemporarySkin, WeaponSkinToApply) == 0x000000, "Member 'BP_PremiumPackWeapon_C_ApplyTemporarySkin::WeaponSkinToApply' has a wrong offset!");

}
