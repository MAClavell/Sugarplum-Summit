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
#include "AssemblyU2DCSharp_EnemyStates2506249742.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nutcracker
struct  Nutcracker_t1005795692  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Nutcracker::speed
	float ___speed_2;
	// UnityEngine.Vector2 Nutcracker::position
	Vector2_t2243707579  ___position_3;
	// System.Single Nutcracker::bottomBound
	float ___bottomBound_4;
	// System.Single Nutcracker::floatTimer
	float ___floatTimer_5;
	// EnemyStates Nutcracker::state
	int32_t ___state_6;
	// System.Single Nutcracker::yPosEnter
	float ___yPosEnter_7;
	// System.Single Nutcracker::dir
	float ___dir_8;
	// UnityEngine.GameObject Nutcracker::bulletPrefab
	GameObject_t1756533147 * ___bulletPrefab_9;
	// System.Single Nutcracker::shootInterval
	float ___shootInterval_10;
	// System.Single Nutcracker::bulletSpeed
	float ___bulletSpeed_11;
	// System.Single Nutcracker::shootTimer
	float ___shootTimer_12;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Nutcracker_t1005795692, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(Nutcracker_t1005795692, ___position_3)); }
	inline Vector2_t2243707579  get_position_3() const { return ___position_3; }
	inline Vector2_t2243707579 * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector2_t2243707579  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_bottomBound_4() { return static_cast<int32_t>(offsetof(Nutcracker_t1005795692, ___bottomBound_4)); }
	inline float get_bottomBound_4() const { return ___bottomBound_4; }
	inline float* get_address_of_bottomBound_4() { return &___bottomBound_4; }
	inline void set_bottomBound_4(float value)
	{
		___bottomBound_4 = value;
	}

	inline static int32_t get_offset_of_floatTimer_5() { return static_cast<int32_t>(offsetof(Nutcracker_t1005795692, ___floatTimer_5)); }
	inline float get_floatTimer_5() const { return ___floatTimer_5; }
	inline float* get_address_of_floatTimer_5() { return &___floatTimer_5; }
	inline void set_floatTimer_5(float value)
	{
		___floatTimer_5 = value;
	}

	inline static int32_t get_offset_of_state_6() { return static_cast<int32_t>(offsetof(Nutcracker_t1005795692, ___state_6)); }
	inline int32_t get_state_6() const { return ___state_6; }
	inline int32_t* get_address_of_state_6() { return &___state_6; }
	inline void set_state_6(int32_t value)
	{
		___state_6 = value;
	}

	inline static int32_t get_offset_of_yPosEnter_7() { return static_cast<int32_t>(offsetof(Nutcracker_t1005795692, ___yPosEnter_7)); }
	inline float get_yPosEnter_7() const { return ___yPosEnter_7; }
	inline float* get_address_of_yPosEnter_7() { return &___yPosEnter_7; }
	inline void set_yPosEnter_7(float value)
	{
		___yPosEnter_7 = value;
	}

	inline static int32_t get_offset_of_dir_8() { return static_cast<int32_t>(offsetof(Nutcracker_t1005795692, ___dir_8)); }
	inline float get_dir_8() const { return ___dir_8; }
	inline float* get_address_of_dir_8() { return &___dir_8; }
	inline void set_dir_8(float value)
	{
		___dir_8 = value;
	}

	inline static int32_t get_offset_of_bulletPrefab_9() { return static_cast<int32_t>(offsetof(Nutcracker_t1005795692, ___bulletPrefab_9)); }
	inline GameObject_t1756533147 * get_bulletPrefab_9() const { return ___bulletPrefab_9; }
	inline GameObject_t1756533147 ** get_address_of_bulletPrefab_9() { return &___bulletPrefab_9; }
	inline void set_bulletPrefab_9(GameObject_t1756533147 * value)
	{
		___bulletPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPrefab_9, value);
	}

	inline static int32_t get_offset_of_shootInterval_10() { return static_cast<int32_t>(offsetof(Nutcracker_t1005795692, ___shootInterval_10)); }
	inline float get_shootInterval_10() const { return ___shootInterval_10; }
	inline float* get_address_of_shootInterval_10() { return &___shootInterval_10; }
	inline void set_shootInterval_10(float value)
	{
		___shootInterval_10 = value;
	}

	inline static int32_t get_offset_of_bulletSpeed_11() { return static_cast<int32_t>(offsetof(Nutcracker_t1005795692, ___bulletSpeed_11)); }
	inline float get_bulletSpeed_11() const { return ___bulletSpeed_11; }
	inline float* get_address_of_bulletSpeed_11() { return &___bulletSpeed_11; }
	inline void set_bulletSpeed_11(float value)
	{
		___bulletSpeed_11 = value;
	}

	inline static int32_t get_offset_of_shootTimer_12() { return static_cast<int32_t>(offsetof(Nutcracker_t1005795692, ___shootTimer_12)); }
	inline float get_shootTimer_12() const { return ___shootTimer_12; }
	inline float* get_address_of_shootTimer_12() { return &___shootTimer_12; }
	inline void set_shootTimer_12(float value)
	{
		___shootTimer_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
