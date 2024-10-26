#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_Armory_ToolData

#include "Basic.hpp"

#include "E_Armory_ElementSizes_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_Armory_ToolData.S_Armory_ToolData
// 0x00F0 (0x00F0 - 0x0000)
struct FS_Armory_ToolData final
{
public:
	TSoftClassPtr<class UClass>                   Consumable_C_48_B94A36524CADD841F1821CB9207E76BD;  // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             Consumable_Mesh_47_F1C2C8F74D6EAED7688608B56CFC0758; // 0x0028(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInstance>       Consumable_Decal_51_EB80357E413EDAE1DEB329947DEE6AC2; // 0x0050(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	E_Armory_ElementSizes                         ConsumableSize_12_3FDE592E4B6CDA48D0D7F790DA865ADB; // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Armory_ElementSizes                         DecalSize_14_31B0EB4E4508CCDCA15340BD2B1F3076;     // 0x0079(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x2];                                       // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Decal_LidOffset_18_3349F20D4324500BDC5517BFBBE5EF50; // 0x007C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Decal_Rotation_43_B3D4BB28458ACB34BFB14BA9878EF10A; // 0x0088(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                Consumable_ContainerOffset_20_44E430B040B425BFA7A02DB6C7A70269; // 0x0094(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Consumable_Rotation_23_92D406D842D6B399E7CCA28E5242E1D0; // 0x00A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   Consumable_Socket_46_038A044E49FD36F03D14788AC9447CCA; // 0x00AC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class UStaticMesh>>     Blueprint_Mesh_50_96AB24134B7E3261116B25B7E7820125; // 0x00B8(0x0010)(Edit, BlueprintVisible)
	struct FVector                                Blueprint_LidOffset_31_47F5133E4C7BF9E8E216718EC9A5283A; // 0x00C8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Blueprint_Rotation_38_89E2D80047F9EA4F9F20AF8F9ECB3526; // 0x00D4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                Blueprint_Scale_40_913486E34CC6E7A22FD3FD8796FE1529; // 0x00E0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_Armory_ToolData) == 0x000008, "Wrong alignment on FS_Armory_ToolData");
static_assert(sizeof(FS_Armory_ToolData) == 0x0000F0, "Wrong size on FS_Armory_ToolData");
static_assert(offsetof(FS_Armory_ToolData, Consumable_C_48_B94A36524CADD841F1821CB9207E76BD) == 0x000000, "Member 'FS_Armory_ToolData::Consumable_C_48_B94A36524CADD841F1821CB9207E76BD' has a wrong offset!");
static_assert(offsetof(FS_Armory_ToolData, Consumable_Mesh_47_F1C2C8F74D6EAED7688608B56CFC0758) == 0x000028, "Member 'FS_Armory_ToolData::Consumable_Mesh_47_F1C2C8F74D6EAED7688608B56CFC0758' has a wrong offset!");
static_assert(offsetof(FS_Armory_ToolData, Consumable_Decal_51_EB80357E413EDAE1DEB329947DEE6AC2) == 0x000050, "Member 'FS_Armory_ToolData::Consumable_Decal_51_EB80357E413EDAE1DEB329947DEE6AC2' has a wrong offset!");
static_assert(offsetof(FS_Armory_ToolData, ConsumableSize_12_3FDE592E4B6CDA48D0D7F790DA865ADB) == 0x000078, "Member 'FS_Armory_ToolData::ConsumableSize_12_3FDE592E4B6CDA48D0D7F790DA865ADB' has a wrong offset!");
static_assert(offsetof(FS_Armory_ToolData, DecalSize_14_31B0EB4E4508CCDCA15340BD2B1F3076) == 0x000079, "Member 'FS_Armory_ToolData::DecalSize_14_31B0EB4E4508CCDCA15340BD2B1F3076' has a wrong offset!");
static_assert(offsetof(FS_Armory_ToolData, Decal_LidOffset_18_3349F20D4324500BDC5517BFBBE5EF50) == 0x00007C, "Member 'FS_Armory_ToolData::Decal_LidOffset_18_3349F20D4324500BDC5517BFBBE5EF50' has a wrong offset!");
static_assert(offsetof(FS_Armory_ToolData, Decal_Rotation_43_B3D4BB28458ACB34BFB14BA9878EF10A) == 0x000088, "Member 'FS_Armory_ToolData::Decal_Rotation_43_B3D4BB28458ACB34BFB14BA9878EF10A' has a wrong offset!");
static_assert(offsetof(FS_Armory_ToolData, Consumable_ContainerOffset_20_44E430B040B425BFA7A02DB6C7A70269) == 0x000094, "Member 'FS_Armory_ToolData::Consumable_ContainerOffset_20_44E430B040B425BFA7A02DB6C7A70269' has a wrong offset!");
static_assert(offsetof(FS_Armory_ToolData, Consumable_Rotation_23_92D406D842D6B399E7CCA28E5242E1D0) == 0x0000A0, "Member 'FS_Armory_ToolData::Consumable_Rotation_23_92D406D842D6B399E7CCA28E5242E1D0' has a wrong offset!");
static_assert(offsetof(FS_Armory_ToolData, Consumable_Socket_46_038A044E49FD36F03D14788AC9447CCA) == 0x0000AC, "Member 'FS_Armory_ToolData::Consumable_Socket_46_038A044E49FD36F03D14788AC9447CCA' has a wrong offset!");
static_assert(offsetof(FS_Armory_ToolData, Blueprint_Mesh_50_96AB24134B7E3261116B25B7E7820125) == 0x0000B8, "Member 'FS_Armory_ToolData::Blueprint_Mesh_50_96AB24134B7E3261116B25B7E7820125' has a wrong offset!");
static_assert(offsetof(FS_Armory_ToolData, Blueprint_LidOffset_31_47F5133E4C7BF9E8E216718EC9A5283A) == 0x0000C8, "Member 'FS_Armory_ToolData::Blueprint_LidOffset_31_47F5133E4C7BF9E8E216718EC9A5283A' has a wrong offset!");
static_assert(offsetof(FS_Armory_ToolData, Blueprint_Rotation_38_89E2D80047F9EA4F9F20AF8F9ECB3526) == 0x0000D4, "Member 'FS_Armory_ToolData::Blueprint_Rotation_38_89E2D80047F9EA4F9F20AF8F9ECB3526' has a wrong offset!");
static_assert(offsetof(FS_Armory_ToolData, Blueprint_Scale_40_913486E34CC6E7A22FD3FD8796FE1529) == 0x0000E0, "Member 'FS_Armory_ToolData::Blueprint_Scale_40_913486E34CC6E7A22FD3FD8796FE1529' has a wrong offset!");

}

