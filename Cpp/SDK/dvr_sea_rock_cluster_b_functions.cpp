﻿// Name: SoT, Version: 2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function dvr_sea_rock_cluster_b.dvr_sea_rock_cluster_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Advr_sea_rock_cluster_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function dvr_sea_rock_cluster_b.dvr_sea_rock_cluster_b_C.UserConstructionScript");

	Advr_sea_rock_cluster_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
