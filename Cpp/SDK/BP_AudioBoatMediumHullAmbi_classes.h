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

// BlueprintGeneratedClass BP_AudioBoatMediumHullAmbi.BP_AudioBoatMediumHullAmbi_C
// 0x00E0 (FullSize[0x06E0] - InheritedSize[0x0600])
class ABP_AudioBoatMediumHullAmbi_C : public AShipHullAudio
{
public:
	class UTritonComponent*                            Triton;                                                    // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_water_laps_FL;                                       // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_water_laps_FR;                                       // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_metal2;                                        // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_metal;                                         // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_window;                                        // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_04;                                      // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_03;                                      // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_02;                                      // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_01;                                      // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_map_01;                                        // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_map_continuous;                                // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_map_02;                                        // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_deck_back;                                     // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioPortalComponent*                       DeckGrille;                                                // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioPortalComponent*                       DeckGrille2;                                               // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_mast_rear;                                     // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_wake_stern;                                          // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_wake_bow;                                            // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_wake_side_L;                                         // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_wake_side_R;                                         // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_mast_front_nest;                               // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_mast_front;                                    // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_FL;                                            // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_FR;                                            // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_rope_front;                                    // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipAudioEmitterComponent*                  audio_creak_smallship_global;                              // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioPortalComponent*                       Deckgrille3;                                               // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AudioBoatMediumHullAmbi.BP_AudioBoatMediumHullAmbi_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
