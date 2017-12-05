#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IEnemy
struct  IEnemy_t1299004613  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 IEnemy::health
	int32_t ___health_2;
	// System.Boolean IEnemy::killable
	bool ___killable_3;
	// System.Boolean IEnemy::deathAnimation
	bool ___deathAnimation_4;
	// System.Boolean IEnemy::deathSound
	bool ___deathSound_5;
	// UnityEngine.AnimationClip IEnemy::hurtAnim
	AnimationClip_t3510324950 * ___hurtAnim_6;
	// UnityEngine.AnimationClip IEnemy::deathAnim
	AnimationClip_t3510324950 * ___deathAnim_7;
	// UnityEngine.AudioClip IEnemy::deathSoundClip
	AudioClip_t1932558630 * ___deathSoundClip_8;
	// UnityEngine.ParticleSystem IEnemy::hurtParticles
	ParticleSystem_t3394631041 * ___hurtParticles_9;
	// UnityEngine.Animator IEnemy::animator
	Animator_t69676727 * ___animator_10;
	// System.Boolean IEnemy::startDead
	bool ___startDead_11;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(IEnemy_t1299004613, ___health_2)); }
	inline int32_t get_health_2() const { return ___health_2; }
	inline int32_t* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(int32_t value)
	{
		___health_2 = value;
	}

	inline static int32_t get_offset_of_killable_3() { return static_cast<int32_t>(offsetof(IEnemy_t1299004613, ___killable_3)); }
	inline bool get_killable_3() const { return ___killable_3; }
	inline bool* get_address_of_killable_3() { return &___killable_3; }
	inline void set_killable_3(bool value)
	{
		___killable_3 = value;
	}

	inline static int32_t get_offset_of_deathAnimation_4() { return static_cast<int32_t>(offsetof(IEnemy_t1299004613, ___deathAnimation_4)); }
	inline bool get_deathAnimation_4() const { return ___deathAnimation_4; }
	inline bool* get_address_of_deathAnimation_4() { return &___deathAnimation_4; }
	inline void set_deathAnimation_4(bool value)
	{
		___deathAnimation_4 = value;
	}

	inline static int32_t get_offset_of_deathSound_5() { return static_cast<int32_t>(offsetof(IEnemy_t1299004613, ___deathSound_5)); }
	inline bool get_deathSound_5() const { return ___deathSound_5; }
	inline bool* get_address_of_deathSound_5() { return &___deathSound_5; }
	inline void set_deathSound_5(bool value)
	{
		___deathSound_5 = value;
	}

	inline static int32_t get_offset_of_hurtAnim_6() { return static_cast<int32_t>(offsetof(IEnemy_t1299004613, ___hurtAnim_6)); }
	inline AnimationClip_t3510324950 * get_hurtAnim_6() const { return ___hurtAnim_6; }
	inline AnimationClip_t3510324950 ** get_address_of_hurtAnim_6() { return &___hurtAnim_6; }
	inline void set_hurtAnim_6(AnimationClip_t3510324950 * value)
	{
		___hurtAnim_6 = value;
		Il2CppCodeGenWriteBarrier(&___hurtAnim_6, value);
	}

	inline static int32_t get_offset_of_deathAnim_7() { return static_cast<int32_t>(offsetof(IEnemy_t1299004613, ___deathAnim_7)); }
	inline AnimationClip_t3510324950 * get_deathAnim_7() const { return ___deathAnim_7; }
	inline AnimationClip_t3510324950 ** get_address_of_deathAnim_7() { return &___deathAnim_7; }
	inline void set_deathAnim_7(AnimationClip_t3510324950 * value)
	{
		___deathAnim_7 = value;
		Il2CppCodeGenWriteBarrier(&___deathAnim_7, value);
	}

	inline static int32_t get_offset_of_deathSoundClip_8() { return static_cast<int32_t>(offsetof(IEnemy_t1299004613, ___deathSoundClip_8)); }
	inline AudioClip_t1932558630 * get_deathSoundClip_8() const { return ___deathSoundClip_8; }
	inline AudioClip_t1932558630 ** get_address_of_deathSoundClip_8() { return &___deathSoundClip_8; }
	inline void set_deathSoundClip_8(AudioClip_t1932558630 * value)
	{
		___deathSoundClip_8 = value;
		Il2CppCodeGenWriteBarrier(&___deathSoundClip_8, value);
	}

	inline static int32_t get_offset_of_hurtParticles_9() { return static_cast<int32_t>(offsetof(IEnemy_t1299004613, ___hurtParticles_9)); }
	inline ParticleSystem_t3394631041 * get_hurtParticles_9() const { return ___hurtParticles_9; }
	inline ParticleSystem_t3394631041 ** get_address_of_hurtParticles_9() { return &___hurtParticles_9; }
	inline void set_hurtParticles_9(ParticleSystem_t3394631041 * value)
	{
		___hurtParticles_9 = value;
		Il2CppCodeGenWriteBarrier(&___hurtParticles_9, value);
	}

	inline static int32_t get_offset_of_animator_10() { return static_cast<int32_t>(offsetof(IEnemy_t1299004613, ___animator_10)); }
	inline Animator_t69676727 * get_animator_10() const { return ___animator_10; }
	inline Animator_t69676727 ** get_address_of_animator_10() { return &___animator_10; }
	inline void set_animator_10(Animator_t69676727 * value)
	{
		___animator_10 = value;
		Il2CppCodeGenWriteBarrier(&___animator_10, value);
	}

	inline static int32_t get_offset_of_startDead_11() { return static_cast<int32_t>(offsetof(IEnemy_t1299004613, ___startDead_11)); }
	inline bool get_startDead_11() const { return ___startDead_11; }
	inline bool* get_address_of_startDead_11() { return &___startDead_11; }
	inline void set_startDead_11(bool value)
	{
		___startDead_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
