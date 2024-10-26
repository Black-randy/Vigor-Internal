#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrackedResource_SaveGame

#include "Basic.hpp"

#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function BP_TrackedResource_SaveGame.BP_TrackedResource_SaveGame_C.FillNeededResources
// 0x0050 (0x0050 - 0x0000)
struct BP_TrackedResource_SaveGame_C_FillNeededResources final
{
public:
	class AHumanPlayerController*                 HumanPlayerController;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStash*                                 CallFunc_GetStash_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FShelterResourceInfo>           CallFunc_GetRequirementsForUpgrade_ReturnValue;    // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FShelterResourceInfo                   CallFunc_Array_Get_Item;                           // 0x0038(0x0010)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TrackedResource_SaveGame_C_FillNeededResources) == 0x000008, "Wrong alignment on BP_TrackedResource_SaveGame_C_FillNeededResources");
static_assert(sizeof(BP_TrackedResource_SaveGame_C_FillNeededResources) == 0x000050, "Wrong size on BP_TrackedResource_SaveGame_C_FillNeededResources");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillNeededResources, HumanPlayerController) == 0x000000, "Member 'BP_TrackedResource_SaveGame_C_FillNeededResources::HumanPlayerController' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillNeededResources, CallFunc_GetStash_ReturnValue) == 0x000008, "Member 'BP_TrackedResource_SaveGame_C_FillNeededResources::CallFunc_GetStash_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillNeededResources, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_TrackedResource_SaveGame_C_FillNeededResources::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillNeededResources, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_TrackedResource_SaveGame_C_FillNeededResources::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillNeededResources, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_TrackedResource_SaveGame_C_FillNeededResources::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillNeededResources, CallFunc_GetRequirementsForUpgrade_ReturnValue) == 0x000020, "Member 'BP_TrackedResource_SaveGame_C_FillNeededResources::CallFunc_GetRequirementsForUpgrade_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillNeededResources, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_TrackedResource_SaveGame_C_FillNeededResources::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillNeededResources, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_TrackedResource_SaveGame_C_FillNeededResources::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillNeededResources, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'BP_TrackedResource_SaveGame_C_FillNeededResources::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_TrackedResource_SaveGame.BP_TrackedResource_SaveGame_C.FillOwnedResources
// 0x0048 (0x0048 - 0x0000)
struct BP_TrackedResource_SaveGame_C_FillOwnedResources final
{
public:
	class AHumanPlayerController*                 HumanPlayerController;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStash*                                 CallFunc_GetStash_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         CallFunc_Map_Keys_Keys;                            // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCountOfShelterResource_ReturnValue;    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TrackedResource_SaveGame_C_FillOwnedResources) == 0x000008, "Wrong alignment on BP_TrackedResource_SaveGame_C_FillOwnedResources");
static_assert(sizeof(BP_TrackedResource_SaveGame_C_FillOwnedResources) == 0x000048, "Wrong size on BP_TrackedResource_SaveGame_C_FillOwnedResources");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillOwnedResources, HumanPlayerController) == 0x000000, "Member 'BP_TrackedResource_SaveGame_C_FillOwnedResources::HumanPlayerController' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillOwnedResources, CallFunc_GetStash_ReturnValue) == 0x000008, "Member 'BP_TrackedResource_SaveGame_C_FillOwnedResources::CallFunc_GetStash_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillOwnedResources, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_TrackedResource_SaveGame_C_FillOwnedResources::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillOwnedResources, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_TrackedResource_SaveGame_C_FillOwnedResources::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillOwnedResources, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_TrackedResource_SaveGame_C_FillOwnedResources::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillOwnedResources, CallFunc_Map_Keys_Keys) == 0x000020, "Member 'BP_TrackedResource_SaveGame_C_FillOwnedResources::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillOwnedResources, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_TrackedResource_SaveGame_C_FillOwnedResources::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillOwnedResources, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_TrackedResource_SaveGame_C_FillOwnedResources::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillOwnedResources, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BP_TrackedResource_SaveGame_C_FillOwnedResources::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillOwnedResources, CallFunc_GetCountOfShelterResource_ReturnValue) == 0x000044, "Member 'BP_TrackedResource_SaveGame_C_FillOwnedResources::CallFunc_GetCountOfShelterResource_ReturnValue' has a wrong offset!");

// Function BP_TrackedResource_SaveGame.BP_TrackedResource_SaveGame_C.FillData
// 0x0010 (0x0010 - 0x0000)
struct BP_TrackedResource_SaveGame_C_FillData final
{
public:
	class UClass*                                 ShelterSlot_0;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 HumanPlayerController;                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TrackedResource_SaveGame_C_FillData) == 0x000008, "Wrong alignment on BP_TrackedResource_SaveGame_C_FillData");
static_assert(sizeof(BP_TrackedResource_SaveGame_C_FillData) == 0x000010, "Wrong size on BP_TrackedResource_SaveGame_C_FillData");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillData, ShelterSlot_0) == 0x000000, "Member 'BP_TrackedResource_SaveGame_C_FillData::ShelterSlot_0' has a wrong offset!");
static_assert(offsetof(BP_TrackedResource_SaveGame_C_FillData, HumanPlayerController) == 0x000008, "Member 'BP_TrackedResource_SaveGame_C_FillData::HumanPlayerController' has a wrong offset!");

}

