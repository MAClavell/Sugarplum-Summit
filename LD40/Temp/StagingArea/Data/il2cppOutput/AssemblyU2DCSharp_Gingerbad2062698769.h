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
#include "AssemblyU2DCSharp_MoveState4083326910.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gingerbad
struct  Gingerbad_t2062698769  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Gingerbad::speed
	float ___speed_2;
	// UnityEngine.Vector2 Gingerbad::position
	Vector2_t2243707579  ___position_3;
	// System.Single Gingerbad::leftBound
	float ___leftBound_4;
	// System.Single Gingerbad::rightBound
	float ___rightBound_5;
	// EnemyStates Gingerbad::state
	int32_t ___state_6;
	// System.Single Gingerbad::yPosEnter
	float ___yPosEnter_7;
	// UnityEngine.GameObject[] Gingerbad::halfPrefabs
	GameObjectU5BU5D_t3057952154* ___halfPrefabs_8;
	// System.Single Gingerbad::wiggleTimer
	float ___wiggleTimer_9;
	// System.Single Gingerbad::wiggleSpeed
	float ___wiggleSpeed_10;
	// System.Single Gingerbad::wiggleLimit
	float ___wiggleLimit_11;
	// MoveState Gingerbad::moveState
	int32_t ___moveState_12;
	// UnityEngine.GameObject Gingerbad::bulletPrefab
	GameObject_t1756533147 * ___bulletPrefab_13;
	// System.Single Gingerbad::shootInterval
	float ___shootInterval_14;
	// System.Single Gingerbad::bulletSpeed
	float ___bulletSpeed_15;
	// System.Single Gingerbad::shootTimer
	float ___shootTimer_16;
	// UnityEngine.Transform Gingerbad::player
	Transform_t3275118058 * ___player_17;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___position_3)); }
	inline Vector2_t2243707579  get_position_3() const { return ___position_3; }
	inline Vector2_t2243707579 * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector2_t2243707579  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_leftBound_4() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___leftBound_4)); }
	inline float get_leftBound_4() const { return ___leftBound_4; }
	inline float* get_address_of_leftBound_4() { return &___leftBound_4; }
	inline void set_leftBound_4(float value)
	{
		___leftBound_4 = value;
	}

	inline static int32_t get_offset_of_rightBound_5() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___rightBound_5)); }
	inline float get_rightBound_5() const { return ___rightBound_5; }
	inline float* get_address_of_rightBound_5() { return &___rightBound_5; }
	inline void set_rightBound_5(float value)
	{
		___rightBound_5 = value;
	}

	inline static int32_t get_offset_of_state_6() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___state_6)); }
	inline int32_t get_state_6() const { return ___state_6; }
	inline int32_t* get_address_of_state_6() { return &___state_6; }
	inline void set_state_6(int32_t value)
	{
		___state_6 = value;
	}

	inline static int32_t get_offset_of_yPosEnter_7() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___yPosEnter_7)); }
	inline float get_yPosEnter_7() const { return ___yPosEnter_7; }
	inline float* get_address_of_yPosEnter_7() { return &___yPosEnter_7; }
	inline void set_yPosEnter_7(float value)
	{
		___yPosEnter_7 = value;
	}

	inline static int32_t get_offset_of_halfPrefabs_8() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___halfPrefabs_8)); }
	inline GameObjectU5BU5D_t3057952154* get_halfPrefabs_8() const { return ___halfPrefabs_8; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_halfPrefabs_8() { return &___halfPrefabs_8; }
	inline void set_halfPrefabs_8(GameObjectU5BU5D_t3057952154* value)
	{
		___halfPrefabs_8 = value;
		Il2CppCodeGenWriteBarrier(&___halfPrefabs_8, value);
	}

	inline static int32_t get_offset_of_wiggleTimer_9() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___wiggleTimer_9)); }
	inline float get_wiggleTimer_9() const { return ___wiggleTimer_9; }
	inline float* get_address_of_wiggleTimer_9() { return &___wiggleTimer_9; }
	inline void set_wiggleTimer_9(float value)
	{
		___wiggleTimer_9 = value;
	}

	inline static int32_t get_offset_of_wiggleSpeed_10() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___wiggleSpeed_10)); }
	inline float get_wiggleSpeed_10() const { return ___wiggleSpeed_10; }
	inline float* get_address_of_wiggleSpeed_10() { return &___wiggleSpeed_10; }
	inline void set_wiggleSpeed_10(float value)
	{
		___wiggleSpeed_10 = value;
	}

	inline static int32_t get_offset_of_wiggleLimit_11() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___wiggleLimit_11)); }
	inline float get_wiggleLimit_11() const { return ___wiggleLimit_11; }
	inline float* get_address_of_wiggleLimit_11() { return &___wiggleLimit_11; }
	inline void set_wiggleLimit_11(float value)
	{
		___wiggleLimit_11 = value;
	}

	inline static int32_t get_offset_of_moveState_12() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___moveState_12)); }
	inline int32_t get_moveState_12() const { return ___moveState_12; }
	inline int32_t* get_address_of_moveState_12() { return &___moveState_12; }
	inline void set_moveState_12(int32_t value)
	{
		___moveState_12 = value;
	}

	inline static int32_t get_offset_of_bulletPrefab_13() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___bulletPrefab_13)); }
	inline GameObject_t1756533147 * get_bulletPrefab_13() const { return ___bulletPrefab_13; }
	inline GameObject_t1756533147 ** get_address_of_bulletPrefab_13() { return &___bulletPrefab_13; }
	inline void set_bulletPrefab_13(GameObject_t1756533147 * value)
	{
		___bulletPrefab_13 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPrefab_13, value);
	}

	inline static int32_t get_offset_of_shootInterval_14() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___shootInterval_14)); }
	inline float get_shootInterval_14() const { return ___shootInterval_14; }
	inline float* get_address_of_shootInterval_14() { return &___shootInterval_14; }
	inline void set_shootInterval_14(float value)
	{
		___shootInterval_14 = value;
	}

	inline static int32_t get_offset_of_bulletSpeed_15() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___bulletSpeed_15)); }
	inline float get_bulletSpeed_15() const { return ___bulletSpeed_15; }
	inline float* get_address_of_bulletSpeed_15() { return &___bulletSpeed_15; }
	inline void set_bulletSpeed_15(float value)
	{
		___bulletSpeed_15 = value;
	}

	inline static int32_t get_offset_of_shootTimer_16() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___shootTimer_16)); }
	inline float get_shootTimer_16() const { return ___shootTimer_16; }
	inline float* get_address_of_shootTimer_16() { return &___shootTimer_16; }
	inline void set_shootTimer_16(float value)
	{
		___shootTimer_16 = value;
	}

	inline static int32_t get_offset_of_player_17() { return static_cast<int32_t>(offsetof(Gingerbad_t2062698769, ___player_17)); }
	inline Transform_t3275118058 * get_player_17() const { return ___player_17; }
	inline Transform_t3275118058 ** get_address_of_player_17() { return &___player_17; }
	inline void set_player_17(Transform_t3275118058 * value)
	{
		___player_17 = value;
		Il2CppCodeGenWriteBarrier(&___player_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
