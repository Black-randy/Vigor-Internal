#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_SmartSpline_Segment

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct s_SmartSpline_Segment.s_SmartSpline_Segment
// 0x0030 (0x0030 - 0x0000)
struct FS_SmartSpline_Segment final
{
public:
	struct FVector                                SegmentOffset_13_C7E405C44CC265AF5DA866AE8933FC77; // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            SplineMesh_3_DE60E420433DB73DB89002BAB451830C;     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            StartCupMesh_5_4E5D365B4989708C55CA0DAEAFA5B8A1;   // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            EndCupMesh_7_30D6DDAC45070036EF77D09B1ADE2312;     // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            ExtraPointMesh_9_FDD667A14E9835C69240A1A73E966E46; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_SmartSpline_Segment) == 0x000008, "Wrong alignment on FS_SmartSpline_Segment");
static_assert(sizeof(FS_SmartSpline_Segment) == 0x000030, "Wrong size on FS_SmartSpline_Segment");
static_assert(offsetof(FS_SmartSpline_Segment, SegmentOffset_13_C7E405C44CC265AF5DA866AE8933FC77) == 0x000000, "Member 'FS_SmartSpline_Segment::SegmentOffset_13_C7E405C44CC265AF5DA866AE8933FC77' has a wrong offset!");
static_assert(offsetof(FS_SmartSpline_Segment, SplineMesh_3_DE60E420433DB73DB89002BAB451830C) == 0x000010, "Member 'FS_SmartSpline_Segment::SplineMesh_3_DE60E420433DB73DB89002BAB451830C' has a wrong offset!");
static_assert(offsetof(FS_SmartSpline_Segment, StartCupMesh_5_4E5D365B4989708C55CA0DAEAFA5B8A1) == 0x000018, "Member 'FS_SmartSpline_Segment::StartCupMesh_5_4E5D365B4989708C55CA0DAEAFA5B8A1' has a wrong offset!");
static_assert(offsetof(FS_SmartSpline_Segment, EndCupMesh_7_30D6DDAC45070036EF77D09B1ADE2312) == 0x000020, "Member 'FS_SmartSpline_Segment::EndCupMesh_7_30D6DDAC45070036EF77D09B1ADE2312' has a wrong offset!");
static_assert(offsetof(FS_SmartSpline_Segment, ExtraPointMesh_9_FDD667A14E9835C69240A1A73E966E46) == 0x000028, "Member 'FS_SmartSpline_Segment::ExtraPointMesh_9_FDD667A14E9835C69240A1A73E966E46' has a wrong offset!");

}
