#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OrnamentScript
struct  OrnamentScript_t1185628925  : public MonoBehaviour_t1158329972
{
public:
	// System.Single OrnamentScript::health
	float ___health_2;
	// UnityEngine.Vector2 OrnamentScript::position
	Vector2_t2243707579  ___position_3;
	// System.Single OrnamentScript::speed
	float ___speed_4;
	// System.Single OrnamentScript::bottomBound
	float ___bottomBound_5;
	// UnityEngine.ParticleSystem OrnamentScript::hurtParticles
	ParticleSystem_t3394631041 * ___hurtParticles_6;
	// UnityEngine.ParticleSystem OrnamentScript::breakParticles
	ParticleSystem_t3394631041 * ___breakParticles_7;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(OrnamentScript_t1185628925, ___health_2)); }
	inline float get_health_2() const { return ___health_2; }
	inline float* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(float value)
	{
		___health_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(OrnamentScript_t1185628925, ___position_3)); }
	inline Vector2_t2243707579  get_position_3() const { return ___position_3; }
	inline Vector2_t2243707579 * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector2_t2243707579  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(OrnamentScript_t1185628925, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_bottomBound_5() { return static_cast<int32_t>(offsetof(OrnamentScript_t1185628925, ___bottomBound_5)); }
	inline float get_bottomBound_5() const { return ___bottomBound_5; }
	inline float* get_address_of_bottomBound_5() { return &___bottomBound_5; }
	inline void set_bottomBound_5(float value)
	{
		___bottomBound_5 = value;
	}

	inline static int32_t get_offset_of_hurtParticles_6() { return static_cast<int32_t>(offsetof(OrnamentScript_t1185628925, ___hurtParticles_6)); }
	inline ParticleSystem_t3394631041 * get_hurtParticles_6() const { return ___hurtParticles_6; }
	inline ParticleSystem_t3394631041 ** get_address_of_hurtParticles_6() { return &___hurtParticles_6; }
	inline void set_hurtParticles_6(ParticleSystem_t3394631041 * value)
	{
		___hurtParticles_6 = value;
		Il2CppCodeGenWriteBarrier(&___hurtParticles_6, value);
	}

	inline static int32_t get_offset_of_breakParticles_7() { return static_cast<int32_t>(offsetof(OrnamentScript_t1185628925, ___breakParticles_7)); }
	inline ParticleSystem_t3394631041 * get_breakParticles_7() const { return ___breakParticles_7; }
	inline ParticleSystem_t3394631041 ** get_address_of_breakParticles_7() { return &___breakParticles_7; }
	inline void set_breakParticles_7(ParticleSystem_t3394631041 * value)
	{
		___breakParticles_7 = value;
		Il2CppCodeGenWriteBarrier(&___breakParticles_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
