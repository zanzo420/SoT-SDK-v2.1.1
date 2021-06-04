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

// BlueprintGeneratedClass BP_Blunderbuss.BP_Blunderbuss_C
// 0x0034 (FullSize[0x0AB0] - InheritedSize[0x0A7C])
class ABP_Blunderbuss_C : public AProjectileWeapon
{
public:
	unsigned char                                      UnknownData_GDX0[0x4];                                     // 0x0A7C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                               // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TEnumAsByte<RareAudio_EEmitterRelationship>        sfx_relationship;                                          // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UG19[0x7];                                     // 0x0A91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                           // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UObject*                                     FiringVFX3rdPerson;                                        // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UWwiseEvent*                                 Blunderbuss_Firing_sfx_3rd_person;                         // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Blunderbuss.BP_Blunderbuss_C");
		return ptr;
	}



	void SetScopeEffectOn(bool IsOn);
	void determine_sfx_relationship(TEnumAsByte<RareAudio_EEmitterRelationship>* Relationship);
	void DoFireEffect();
	void UserConstructionScript();
	void OnWeaponFired();
	void RadialBlurOn();
	void RadialBlurOff();
	void ExecuteUbergraph_BP_Blunderbuss(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
