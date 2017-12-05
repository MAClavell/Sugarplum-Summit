#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossEye
struct  BossEye_t1527213470  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 BossEye::health
	int32_t ___health_2;
	// UnityEngine.ParticleSystem BossEye::hurtParticles
	ParticleSystem_t3394631041 * ___hurtParticles_3;
	// UnityEngine.Sprite BossEye::hurtSpriteEye
	Sprite_t309593783 * ___hurtSpriteEye_4;
	// UnityEngine.Sprite BossEye::hurtSpritePupil
	Sprite_t309593783 * ___hurtSpritePupil_5;
	// UnityEngine.SpriteRenderer BossEye::sprite
	SpriteRenderer_t1209076198 * ___sprite_6;
	// UnityEngine.SpriteRenderer BossEye::spritePupil
	SpriteRenderer_t1209076198 * ___spritePupil_7;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(BossEye_t1527213470, ___health_2)); }
	inline int32_t get_health_2() const { return ___health_2; }
	inline int32_t* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(int32_t value)
	{
		___health_2 = value;
	}

	inline static int32_t get_offset_of_hurtParticles_3() { return static_cast<int32_t>(offsetof(BossEye_t1527213470, ___hurtParticles_3)); }
	inline ParticleSystem_t3394631041 * get_hurtParticles_3() const { return ___hurtParticles_3; }
	inline ParticleSystem_t3394631041 ** get_address_of_hurtParticles_3() { return &___hurtParticles_3; }
	inline void set_hurtParticles_3(ParticleSystem_t3394631041 * value)
	{
		___hurtParticles_3 = value;
		Il2CppCodeGenWriteBarrier(&___hurtParticles_3, value);
	}

	inline static int32_t get_offset_of_hurtSpriteEye_4() { return static_cast<int32_t>(offsetof(BossEye_t1527213470, ___hurtSpriteEye_4)); }
	inline Sprite_t309593783 * get_hurtSpriteEye_4() const { return ___hurtSpriteEye_4; }
	inline Sprite_t309593783 ** get_address_of_hurtSpriteEye_4() { return &___hurtSpriteEye_4; }
	inline void set_hurtSpriteEye_4(Sprite_t309593783 * value)
	{
		___hurtSpriteEye_4 = value;
		Il2CppCodeGenWriteBarrier(&___hurtSpriteEye_4, value);
	}

	inline static int32_t get_offset_of_hurtSpritePupil_5() { return static_cast<int32_t>(offsetof(BossEye_t1527213470, ___hurtSpritePupil_5)); }
	inline Sprite_t309593783 * get_hurtSpritePupil_5() const { return ___hurtSpritePupil_5; }
	inline Sprite_t309593783 ** get_address_of_hurtSpritePupil_5() { return &___hurtSpritePupil_5; }
	inline void set_hurtSpritePupil_5(Sprite_t309593783 * value)
	{
		___hurtSpritePupil_5 = value;
		Il2CppCodeGenWriteBarrier(&___hurtSpritePupil_5, value);
	}

	inline static int32_t get_offset_of_sprite_6() { return static_cast<int32_t>(offsetof(BossEye_t1527213470, ___sprite_6)); }
	inline SpriteRenderer_t1209076198 * get_sprite_6() const { return ___sprite_6; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sprite_6() { return &___sprite_6; }
	inline void set_sprite_6(SpriteRenderer_t1209076198 * value)
	{
		___sprite_6 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_6, value);
	}

	inline static int32_t get_offset_of_spritePupil_7() { return static_cast<int32_t>(offsetof(BossEye_t1527213470, ___spritePupil_7)); }
	inline SpriteRenderer_t1209076198 * get_spritePupil_7() const { return ___spritePupil_7; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spritePupil_7() { return &___spritePupil_7; }
	inline void set_spritePupil_7(SpriteRenderer_t1209076198 * value)
	{
		___spritePupil_7 = value;
		Il2CppCodeGenWriteBarrier(&___spritePupil_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
