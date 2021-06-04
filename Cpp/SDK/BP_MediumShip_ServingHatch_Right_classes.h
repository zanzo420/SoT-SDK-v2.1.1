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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C
// 0x0018 (FullSize[0x05C8] - InheritedSize[0x05B0])
class ABP_MediumShip_ServingHatch_Right_C : public ASwitchMechanismTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        shp_mid_serving_hatch_R_01_a;                              // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UInteractableComponent*                      Interactable;                                              // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C");
		return ptr;
	}



	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void OnAnimationStarted();
	void OnAnimationCompleted();
	void ExecuteUbergraph_BP_MediumShip_ServingHatch_Right(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
