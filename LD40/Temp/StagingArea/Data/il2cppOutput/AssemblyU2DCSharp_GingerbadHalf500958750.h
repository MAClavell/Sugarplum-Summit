#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_EnemyStates2506249742.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GingerbadHalf
struct  GingerbadHalf_t500958750  : public MonoBehaviour_t1158329972
{
public:
	// EnemyStates GingerbadHalf::state
	int32_t ___state_2;
	// UnityEngine.Vector2 GingerbadHalf::position
	Vector2_t2243707579  ___position_3;
	// UnityEngine.Transform GingerbadHalf::player
	Transform_t3275118058 * ___player_4;
	// UnityEngine.Vector2 GingerbadHalf::target
	Vector2_t2243707579  ___target_5;
	// System.Single GingerbadHalf::moveSpeed
	float ___moveSpeed_6;
	// System.Single GingerbadHalf::bottomBound
	float ___bottomBound_7;
	// System.Int32 GingerbadHalf::direction
	int32_t ___direction_8;
	// System.Int32 GingerbadHalf::timeUntilSeek
	int32_t ___timeUntilSeek_9;
	// System.Single GingerbadHalf::fallTime
	float ___fallTime_10;
	// UnityEngine.Vector2 GingerbadHalf::desiredVelocity
	Vector2_t2243707579  ___desiredVelocity_11;
	// System.Single GingerbadHalf::rotationSpeed
	float ___rotationSpeed_12;

public:
	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(GingerbadHalf_t500958750, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(GingerbadHalf_t500958750, ___position_3)); }
	inline Vector2_t2243707579  get_position_3() const { return ___position_3; }
	inline Vector2_t2243707579 * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector2_t2243707579  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(GingerbadHalf_t500958750, ___player_4)); }
	inline Transform_t3275118058 * get_player_4() const { return ___player_4; }
	inline Transform_t3275118058 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Transform_t3275118058 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(GingerbadHalf_t500958750, ___target_5)); }
	inline Vector2_t2243707579  get_target_5() const { return ___target_5; }
	inline Vector2_t2243707579 * get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Vector2_t2243707579  value)
	{
		___target_5 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(GingerbadHalf_t500958750, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_bottomBound_7() { return static_cast<int32_t>(offsetof(GingerbadHalf_t500958750, ___bottomBound_7)); }
	inline float get_bottomBound_7() const { return ___bottomBound_7; }
	inline float* get_address_of_bottomBound_7() { return &___bottomBound_7; }
	inline void set_bottomBound_7(float value)
	{
		___bottomBound_7 = value;
	}

	inline static int32_t get_offset_of_direction_8() { return static_cast<int32_t>(offsetof(GingerbadHalf_t500958750, ___direction_8)); }
	inline int32_t get_direction_8() const { return ___direction_8; }
	inline int32_t* get_address_of_direction_8() { return &___direction_8; }
	inline void set_direction_8(int32_t value)
	{
		___direction_8 = value;
	}

	inline static int32_t get_offset_of_timeUntilSeek_9() { return static_cast<int32_t>(offsetof(GingerbadHalf_t500958750, ___timeUntilSeek_9)); }
	inline int32_t get_timeUntilSeek_9() const { return ___timeUntilSeek_9; }
	inline int32_t* get_address_of_timeUntilSeek_9() { return &___timeUntilSeek_9; }
	inline void set_timeUntilSeek_9(int32_t value)
	{
		___timeUntilSeek_9 = value;
	}

	inline static int32_t get_offset_of_fallTime_10() { return static_cast<int32_t>(offsetof(GingerbadHalf_t500958750, ___fallTime_10)); }
	inline float get_fallTime_10() const { return ___fallTime_10; }
	inline float* get_address_of_fallTime_10() { return &___fallTime_10; }
	inline void set_fallTime_10(float value)
	{
		___fallTime_10 = value;
	}

	inline static int32_t get_offset_of_desiredVelocity_11() { return static_cast<int32_t>(offsetof(GingerbadHalf_t500958750, ___desiredVelocity_11)); }
	inline Vector2_t2243707579  get_desiredVelocity_11() const { return ___desiredVelocity_11; }
	inline Vector2_t2243707579 * get_address_of_desiredVelocity_11() { return &___desiredVelocity_11; }
	inline void set_desiredVelocity_11(Vector2_t2243707579  value)
	{
		___desiredVelocity_11 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_12() { return static_cast<int32_t>(offsetof(GingerbadHalf_t500958750, ___rotationSpeed_12)); }
	inline float get_rotationSpeed_12() const { return ___rotationSpeed_12; }
	inline float* get_address_of_rotationSpeed_12() { return &___rotationSpeed_12; }
	inline void set_rotationSpeed_12(float value)
	{
		___rotationSpeed_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
