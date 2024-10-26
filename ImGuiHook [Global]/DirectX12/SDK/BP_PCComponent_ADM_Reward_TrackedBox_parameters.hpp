#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PCComponent_ADM_Reward_TrackedBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_CustomMapMarker_Optimized_structs.hpp"
#include "S_CustomMapMarker_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PCComponent_ADM_Reward_TrackedBox.BP_PCComponent_ADM_Reward_TrackedBox_C.ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox
// 0x00F0 (0x00F0 - 0x0000)
struct BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_AirDropModular_C*  CallFunc_Get_Player_Controller_Player_Controller;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Ping_Duration;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Ping_Location;                  // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Carried;                        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetNewRandomUnusedMapMarkerTag_UnusedTag; // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_CustomMapMarker                     K2Node_CustomEvent_Marker_Settings;                // 0x0030(0x0050)(HasGetValueTypeHash)
	class UTexture*                               Temp_object_Variable;                              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               K2Node_Select_Default;                             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_CustomMapMarker                     K2Node_MakeStruct_S_CustomMapMarker;               // 0x0098(0x0050)(HasGetValueTypeHash)
	float                                         CallFunc_GetRealTimeSeconds_ReturnValue;           // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox) == 0x000008, "Wrong alignment on BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox");
static_assert(sizeof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox) == 0x0000F0, "Wrong size on BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox, EntryPoint) == 0x000000, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox, Temp_bool_Variable) == 0x000004, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox, CallFunc_Get_Player_Controller_Player_Controller) == 0x000008, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox::CallFunc_Get_Player_Controller_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox, K2Node_CustomEvent_Ping_Duration) == 0x000010, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox::K2Node_CustomEvent_Ping_Duration' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox, K2Node_CustomEvent_Ping_Location) == 0x000014, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox::K2Node_CustomEvent_Ping_Location' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox, K2Node_CustomEvent_Carried) == 0x000020, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox::K2Node_CustomEvent_Carried' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox, CallFunc_GetNewRandomUnusedMapMarkerTag_UnusedTag) == 0x000024, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox::CallFunc_GetNewRandomUnusedMapMarkerTag_UnusedTag' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox, K2Node_CustomEvent_Marker_Settings) == 0x000030, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox::K2Node_CustomEvent_Marker_Settings' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox, Temp_object_Variable) == 0x000080, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox, K2Node_Select_Default) == 0x000088, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox, CallFunc_IsDedicatedServer_ReturnValue) == 0x000090, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox, K2Node_MakeStruct_S_CustomMapMarker) == 0x000098, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox::K2Node_MakeStruct_S_CustomMapMarker' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox, CallFunc_GetRealTimeSeconds_ReturnValue) == 0x0000E8, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox::CallFunc_GetRealTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000EC, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_ExecuteUbergraph_BP_PCComponent_ADM_Reward_TrackedBox::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_PCComponent_ADM_Reward_TrackedBox.BP_PCComponent_ADM_Reward_TrackedBox_C.Save Marker Settings on Client
// 0x0050 (0x0050 - 0x0000)
struct BP_PCComponent_ADM_Reward_TrackedBox_C_Save_Marker_Settings_on_Client final
{
public:
	struct FS_CustomMapMarker                     Marker_Settings_0;                                 // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PCComponent_ADM_Reward_TrackedBox_C_Save_Marker_Settings_on_Client) == 0x000008, "Wrong alignment on BP_PCComponent_ADM_Reward_TrackedBox_C_Save_Marker_Settings_on_Client");
static_assert(sizeof(BP_PCComponent_ADM_Reward_TrackedBox_C_Save_Marker_Settings_on_Client) == 0x000050, "Wrong size on BP_PCComponent_ADM_Reward_TrackedBox_C_Save_Marker_Settings_on_Client");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Save_Marker_Settings_on_Client, Marker_Settings_0) == 0x000000, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Save_Marker_Settings_on_Client::Marker_Settings_0' has a wrong offset!");

// Function BP_PCComponent_ADM_Reward_TrackedBox.BP_PCComponent_ADM_Reward_TrackedBox_C.Ping Objective Location
// 0x0014 (0x0014 - 0x0000)
struct BP_PCComponent_ADM_Reward_TrackedBox_C_Ping_Objective_Location final
{
public:
	float                                         Ping_Duration;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Ping_Location;                                     // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Carried;                                           // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PCComponent_ADM_Reward_TrackedBox_C_Ping_Objective_Location) == 0x000004, "Wrong alignment on BP_PCComponent_ADM_Reward_TrackedBox_C_Ping_Objective_Location");
static_assert(sizeof(BP_PCComponent_ADM_Reward_TrackedBox_C_Ping_Objective_Location) == 0x000014, "Wrong size on BP_PCComponent_ADM_Reward_TrackedBox_C_Ping_Objective_Location");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Ping_Objective_Location, Ping_Duration) == 0x000000, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Ping_Objective_Location::Ping_Duration' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Ping_Objective_Location, Ping_Location) == 0x000004, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Ping_Objective_Location::Ping_Location' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Ping_Objective_Location, Carried) == 0x000010, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Ping_Objective_Location::Carried' has a wrong offset!");

// Function BP_PCComponent_ADM_Reward_TrackedBox.BP_PCComponent_ADM_Reward_TrackedBox_C.Add Marker
// 0x00B8 (0x00B8 - 0x0000)
struct BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker final
{
public:
	class FName                                   Marker_Name;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Marker_Duration;                                   // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_CustomMapMarker                     Marker_Type;                                       // 0x0010(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class ABP_PlayerController_AirDropModular_C*  CallFunc_Get_Player_Controller_Player_Controller;  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_CustomMapMarker_Optimized           CallFunc_EncodeMapMarker_Map_Marker_Optimized;     // 0x0070(0x0038)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker) == 0x000008, "Wrong alignment on BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker");
static_assert(sizeof(BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker) == 0x0000B8, "Wrong size on BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker, Marker_Name) == 0x000000, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker::Marker_Name' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker, Marker_Duration) == 0x000008, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker::Marker_Duration' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker, Marker_Type) == 0x000010, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker::Marker_Type' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker, CallFunc_Get_Player_Controller_Player_Controller) == 0x000060, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker::CallFunc_Get_Player_Controller_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker, CallFunc_Array_Add_ReturnValue) == 0x000068, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker, CallFunc_EncodeMapMarker_Map_Marker_Optimized) == 0x000070, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker::CallFunc_EncodeMapMarker_Map_Marker_Optimized' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker, CallFunc_Array_Add_ReturnValue_1) == 0x0000A8, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker, CallFunc_Array_Add_ReturnValue_2) == 0x0000AC, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker, CallFunc_Array_Add_ReturnValue_3) == 0x0000B0, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Add_Marker::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");

// Function BP_PCComponent_ADM_Reward_TrackedBox.BP_PCComponent_ADM_Reward_TrackedBox_C.Remove Marker
// 0x0018 (0x0018 - 0x0000)
struct BP_PCComponent_ADM_Reward_TrackedBox_C_Remove_Marker final
{
public:
	class FName                                   Marker_Name;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Marker_Index;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_AirDropModular_C*  CallFunc_Get_Player_Controller_Player_Controller;  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PCComponent_ADM_Reward_TrackedBox_C_Remove_Marker) == 0x000008, "Wrong alignment on BP_PCComponent_ADM_Reward_TrackedBox_C_Remove_Marker");
static_assert(sizeof(BP_PCComponent_ADM_Reward_TrackedBox_C_Remove_Marker) == 0x000018, "Wrong size on BP_PCComponent_ADM_Reward_TrackedBox_C_Remove_Marker");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Remove_Marker, Marker_Name) == 0x000000, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Remove_Marker::Marker_Name' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Remove_Marker, Marker_Index) == 0x000008, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Remove_Marker::Marker_Index' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Remove_Marker, CallFunc_Get_Player_Controller_Player_Controller) == 0x000010, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Remove_Marker::CallFunc_Get_Player_Controller_Player_Controller' has a wrong offset!");

// Function BP_PCComponent_ADM_Reward_TrackedBox.BP_PCComponent_ADM_Reward_TrackedBox_C.Refresh Markers
// 0x00E8 (0x00E8 - 0x0000)
struct BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers final
{
public:
	float                                         Current_Timestamp;                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRealTimeSeconds_ReturnValue;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_AirDropModular_C*  CallFunc_Get_Player_Controller_Player_Controller;  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_CustomMapMarker                     K2Node_MakeStruct_S_CustomMapMarker;               // 0x0060(0x0050)(HasGetValueTypeHash)
	struct FS_CustomMapMarker_Optimized           CallFunc_EncodeMapMarker_Map_Marker_Optimized;     // 0x00B0(0x0038)(HasGetValueTypeHash)
};
static_assert(alignof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers) == 0x000008, "Wrong alignment on BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers");
static_assert(sizeof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers) == 0x0000E8, "Wrong size on BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, Current_Timestamp) == 0x000000, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::Current_Timestamp' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000004, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, CallFunc_GetRealTimeSeconds_ReturnValue) == 0x000008, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::CallFunc_GetRealTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, CallFunc_Subtract_IntInt_ReturnValue) == 0x000030, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000034, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, CallFunc_Max_ReturnValue) == 0x000038, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00003C, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, Temp_int_Array_Index_Variable) == 0x000040, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, CallFunc_Array_Get_Item) == 0x000044, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x00004C, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000050, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, CallFunc_Get_Player_Controller_Player_Controller) == 0x000058, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::CallFunc_Get_Player_Controller_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, K2Node_MakeStruct_S_CustomMapMarker) == 0x000060, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::K2Node_MakeStruct_S_CustomMapMarker' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers, CallFunc_EncodeMapMarker_Map_Marker_Optimized) == 0x0000B0, "Member 'BP_PCComponent_ADM_Reward_TrackedBox_C_Refresh_Markers::CallFunc_EncodeMapMarker_Map_Marker_Optimized' has a wrong offset!");

}

