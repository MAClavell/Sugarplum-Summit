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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletScript
struct  BulletScript_t1317259639  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BulletScript::speed
	float ___speed_2;
	// UnityEngine.Vector2 BulletScript::position
	Vector2_t2243707579  ___position_3;
	// System.Single BulletScript::topBound
	float ___topBound_4;
	// System.Single BulletScript::bottomBound
	float ___bottomBound_5;
	// System.Boolean BulletScript::homing
	bool ___homing_6;
	// UnityEngine.Vector2 BulletScript::velocity
	Vector2_t2243707579  ___velocity_7;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ___position_3)); }
	inline Vector2_t2243707579  get_position_3() const { return ___position_3; }
	inline Vector2_t2243707579 * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector2_t2243707579  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_topBound_4() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ___topBound_4)); }
	inline float get_topBound_4() const { return ___topBound_4; }
	inline float* get_address_of_topBound_4() { return &___topBound_4; }
	inline void set_topBound_4(float value)
	{
		___topBound_4 = value;
	}

	inline static int32_t get_offset_of_bottomBound_5() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ___bottomBound_5)); }
	inline float get_bottomBound_5() const { return ___bottomBound_5; }
	inline float* get_address_of_bottomBound_5() { return &___bottomBound_5; }
	inline void set_bottomBound_5(float value)
	{
		___bottomBound_5 = value;
	}

	inline static int32_t get_offset_of_homing_6() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ___homing_6)); }
	inline bool get_homing_6() const { return ___homing_6; }
	inline bool* get_address_of_homing_6() { return &___homing_6; }
	inline void set_homing_6(bool value)
	{
		___homing_6 = value;
	}

	inline static int32_t get_offset_of_velocity_7() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ___velocity_7)); }
	inline Vector2_t2243707579  get_velocity_7() const { return ___velocity_7; }
	inline Vector2_t2243707579 * get_address_of_velocity_7() { return &___velocity_7; }
	inline void set_velocity_7(Vector2_t2243707579  value)
	{
		___velocity_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
