#pragma once

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

// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.AnimNotify_ExitedFire
struct UBP_Anim_Blunderbuss_C_AnimNotify_ExitedFire_Params
{
};

// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.OnOneShotUseTriggered
struct UBP_Anim_Blunderbuss_C_OnOneShotUseTriggered_Params
{
	class UClass*                                      InputID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FWieldableItemActionVisuals                 ActionVisuals;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.OnUseStarted
struct UBP_Anim_Blunderbuss_C_OnUseStarted_Params
{
	class UClass*                                      InputID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FWieldableItemActionVisuals                 ActionVisuals;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.BlueprintInitializeAnimation
struct UBP_Anim_Blunderbuss_C_BlueprintInitializeAnimation_Params
{
};

// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.ReloadEventDelegate
struct UBP_Anim_Blunderbuss_C_ReloadEventDelegate_Params
{
	struct FEventProjectileWeaponReload                Event;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.BlueprintUninitializeAnimation
struct UBP_Anim_Blunderbuss_C_BlueprintUninitializeAnimation_Params
{
};

// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.AnimNotify_ResetReload
struct UBP_Anim_Blunderbuss_C_AnimNotify_ResetReload_Params
{
};

// Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.ExecuteUbergraph_BP_Anim_Blunderbuss
struct UBP_Anim_Blunderbuss_C_ExecuteUbergraph_BP_Anim_Blunderbuss_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
