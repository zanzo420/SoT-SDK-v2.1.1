﻿#pragma once

// Name: SoT, Version: 2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnRep_CurrentWatercraft
struct UItemProxyWatercraftTrackerComponent_OnRep_CurrentWatercraft_Params
{
	class AActor*                                      PreviousWatercraft;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnCurrentWatercraftDestroyed
struct UItemProxyWatercraftTrackerComponent_OnCurrentWatercraftDestroyed_Params
{
	class AActor*                                      DestroyedWatercraft;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Watercrafts.Watercraft.OnRigidBodyWake
struct AWatercraft_OnRigidBodyWake_Params
{
	struct FName                                       InBoneName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Watercrafts.Watercraft.OnRigidBodySleep
struct AWatercraft_OnRigidBodySleep_Params
{
	struct FName                                       InBoneName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables
struct ARowboat_SetAlwaysEnabledInteractables_Params
{
	TArray<class UChildActorComponent*>                InAlwaysEnabledInteractables;                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function Watercrafts.Rowboat.OnRep_IsSinking
struct ARowboat_OnRep_IsSinking_Params
{
};

// Function Watercrafts.RowingCompositeInputHandler.OnUseRightOar
struct URowingCompositeInputHandler_OnUseRightOar_Params
{
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Watercrafts.RowingCompositeInputHandler.OnUseLeftOar
struct URowingCompositeInputHandler_OnUseLeftOar_Params
{
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Watercrafts.RowingCompositeInputHandler.OnStopUseRightOar
struct URowingCompositeInputHandler_OnStopUseRightOar_Params
{
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Watercrafts.RowingCompositeInputHandler.OnStopUseLeftOar
struct URowingCompositeInputHandler_OnStopUseLeftOar_Params
{
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Watercrafts.RowingCompositeInputHandler.OnBrakeRightOar
struct URowingCompositeInputHandler_OnBrakeRightOar_Params
{
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Watercrafts.RowingCompositeInputHandler.OnBrakeLeftOar
struct URowingCompositeInputHandler_OnBrakeLeftOar_Params
{
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft
struct UWatercraftBlueprintFunctionLibrary_SpawnWatercraft_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      WatercraftClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AWatercraft*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Watercrafts.WatercraftTrackerComponent.OnWatercraftDestroyed
struct UWatercraftTrackerComponent_OnWatercraftDestroyed_Params
{
	class AActor*                                      WatercraftActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
