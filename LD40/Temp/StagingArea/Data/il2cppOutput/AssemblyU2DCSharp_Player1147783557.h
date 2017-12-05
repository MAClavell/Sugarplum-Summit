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
#include "AssemblyU2DCSharp_MoveState4083326910.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// IFollowable
struct IFollowable_t779612170;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t1147783557  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Player::moveSpeed
	float ___moveSpeed_2;
	// UnityEngine.Vector2 Player::position
	Vector2_t2243707579  ___position_3;
	// UnityEngine.Transform Player::constraintPlane
	Transform_t3275118058 * ___constraintPlane_4;
	// System.Single Player::leftBound
	float ___leftBound_5;
	// System.Single Player::rightBound
	float ___rightBound_6;
	// System.Single Player::topBound
	float ___topBound_7;
	// System.Single Player::bottomBound
	float ___bottomBound_8;
	// MoveState Player::moveState
	int32_t ___moveState_9;
	// UnityEngine.Quaternion Player::rotation
	Quaternion_t4030073918  ___rotation_10;
	// System.Single Player::rotationAngle
	float ___rotationAngle_11;
	// System.Single Player::rotationSpeed
	float ___rotationSpeed_12;
	// System.Int32 Player::lives
	int32_t ___lives_13;
	// System.Boolean Player::invincible
	bool ___invincible_14;
	// System.Single Player::invinTimer
	float ___invinTimer_15;
	// UnityEngine.GameObject Player::bulletPrefab
	GameObject_t1756533147 * ___bulletPrefab_16;
	// System.Single Player::shootInterval
	float ___shootInterval_17;
	// System.Single Player::bulletSpeed
	float ___bulletSpeed_18;
	// System.Single Player::shootTimer
	float ___shootTimer_19;
	// UnityEngine.GameObject Player::minionPrefab
	GameObject_t1756533147 * ___minionPrefab_20;
	// IFollowable Player::followAtt
	IFollowable_t779612170 * ___followAtt_21;
	// UnityEngine.AudioClip Player::joinSound
	AudioClip_t1932558630 * ___joinSound_22;
	// UnityEngine.Transform Player::spriteObj
	Transform_t3275118058 * ___spriteObj_23;
	// UnityEngine.SpriteRenderer Player::sprite
	SpriteRenderer_t1209076198 * ___sprite_24;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___position_3)); }
	inline Vector2_t2243707579  get_position_3() const { return ___position_3; }
	inline Vector2_t2243707579 * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector2_t2243707579  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_constraintPlane_4() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___constraintPlane_4)); }
	inline Transform_t3275118058 * get_constraintPlane_4() const { return ___constraintPlane_4; }
	inline Transform_t3275118058 ** get_address_of_constraintPlane_4() { return &___constraintPlane_4; }
	inline void set_constraintPlane_4(Transform_t3275118058 * value)
	{
		___constraintPlane_4 = value;
		Il2CppCodeGenWriteBarrier(&___constraintPlane_4, value);
	}

	inline static int32_t get_offset_of_leftBound_5() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___leftBound_5)); }
	inline float get_leftBound_5() const { return ___leftBound_5; }
	inline float* get_address_of_leftBound_5() { return &___leftBound_5; }
	inline void set_leftBound_5(float value)
	{
		___leftBound_5 = value;
	}

	inline static int32_t get_offset_of_rightBound_6() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___rightBound_6)); }
	inline float get_rightBound_6() const { return ___rightBound_6; }
	inline float* get_address_of_rightBound_6() { return &___rightBound_6; }
	inline void set_rightBound_6(float value)
	{
		___rightBound_6 = value;
	}

	inline static int32_t get_offset_of_topBound_7() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___topBound_7)); }
	inline float get_topBound_7() const { return ___topBound_7; }
	inline float* get_address_of_topBound_7() { return &___topBound_7; }
	inline void set_topBound_7(float value)
	{
		___topBound_7 = value;
	}

	inline static int32_t get_offset_of_bottomBound_8() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___bottomBound_8)); }
	inline float get_bottomBound_8() const { return ___bottomBound_8; }
	inline float* get_address_of_bottomBound_8() { return &___bottomBound_8; }
	inline void set_bottomBound_8(float value)
	{
		___bottomBound_8 = value;
	}

	inline static int32_t get_offset_of_moveState_9() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___moveState_9)); }
	inline int32_t get_moveState_9() const { return ___moveState_9; }
	inline int32_t* get_address_of_moveState_9() { return &___moveState_9; }
	inline void set_moveState_9(int32_t value)
	{
		___moveState_9 = value;
	}

	inline static int32_t get_offset_of_rotation_10() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___rotation_10)); }
	inline Quaternion_t4030073918  get_rotation_10() const { return ___rotation_10; }
	inline Quaternion_t4030073918 * get_address_of_rotation_10() { return &___rotation_10; }
	inline void set_rotation_10(Quaternion_t4030073918  value)
	{
		___rotation_10 = value;
	}

	inline static int32_t get_offset_of_rotationAngle_11() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___rotationAngle_11)); }
	inline float get_rotationAngle_11() const { return ___rotationAngle_11; }
	inline float* get_address_of_rotationAngle_11() { return &___rotationAngle_11; }
	inline void set_rotationAngle_11(float value)
	{
		___rotationAngle_11 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_12() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___rotationSpeed_12)); }
	inline float get_rotationSpeed_12() const { return ___rotationSpeed_12; }
	inline float* get_address_of_rotationSpeed_12() { return &___rotationSpeed_12; }
	inline void set_rotationSpeed_12(float value)
	{
		___rotationSpeed_12 = value;
	}

	inline static int32_t get_offset_of_lives_13() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___lives_13)); }
	inline int32_t get_lives_13() const { return ___lives_13; }
	inline int32_t* get_address_of_lives_13() { return &___lives_13; }
	inline void set_lives_13(int32_t value)
	{
		___lives_13 = value;
	}

	inline static int32_t get_offset_of_invincible_14() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___invincible_14)); }
	inline bool get_invincible_14() const { return ___invincible_14; }
	inline bool* get_address_of_invincible_14() { return &___invincible_14; }
	inline void set_invincible_14(bool value)
	{
		___invincible_14 = value;
	}

	inline static int32_t get_offset_of_invinTimer_15() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___invinTimer_15)); }
	inline float get_invinTimer_15() const { return ___invinTimer_15; }
	inline float* get_address_of_invinTimer_15() { return &___invinTimer_15; }
	inline void set_invinTimer_15(float value)
	{
		___invinTimer_15 = value;
	}

	inline static int32_t get_offset_of_bulletPrefab_16() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___bulletPrefab_16)); }
	inline GameObject_t1756533147 * get_bulletPrefab_16() const { return ___bulletPrefab_16; }
	inline GameObject_t1756533147 ** get_address_of_bulletPrefab_16() { return &___bulletPrefab_16; }
	inline void set_bulletPrefab_16(GameObject_t1756533147 * value)
	{
		___bulletPrefab_16 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPrefab_16, value);
	}

	inline static int32_t get_offset_of_shootInterval_17() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___shootInterval_17)); }
	inline float get_shootInterval_17() const { return ___shootInterval_17; }
	inline float* get_address_of_shootInterval_17() { return &___shootInterval_17; }
	inline void set_shootInterval_17(float value)
	{
		___shootInterval_17 = value;
	}

	inline static int32_t get_offset_of_bulletSpeed_18() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___bulletSpeed_18)); }
	inline float get_bulletSpeed_18() const { return ___bulletSpeed_18; }
	inline float* get_address_of_bulletSpeed_18() { return &___bulletSpeed_18; }
	inline void set_bulletSpeed_18(float value)
	{
		___bulletSpeed_18 = value;
	}

	inline static int32_t get_offset_of_shootTimer_19() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___shootTimer_19)); }
	inline float get_shootTimer_19() const { return ___shootTimer_19; }
	inline float* get_address_of_shootTimer_19() { return &___shootTimer_19; }
	inline void set_shootTimer_19(float value)
	{
		___shootTimer_19 = value;
	}

	inline static int32_t get_offset_of_minionPrefab_20() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___minionPrefab_20)); }
	inline GameObject_t1756533147 * get_minionPrefab_20() const { return ___minionPrefab_20; }
	inline GameObject_t1756533147 ** get_address_of_minionPrefab_20() { return &___minionPrefab_20; }
	inline void set_minionPrefab_20(GameObject_t1756533147 * value)
	{
		___minionPrefab_20 = value;
		Il2CppCodeGenWriteBarrier(&___minionPrefab_20, value);
	}

	inline static int32_t get_offset_of_followAtt_21() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___followAtt_21)); }
	inline IFollowable_t779612170 * get_followAtt_21() const { return ___followAtt_21; }
	inline IFollowable_t779612170 ** get_address_of_followAtt_21() { return &___followAtt_21; }
	inline void set_followAtt_21(IFollowable_t779612170 * value)
	{
		___followAtt_21 = value;
		Il2CppCodeGenWriteBarrier(&___followAtt_21, value);
	}

	inline static int32_t get_offset_of_joinSound_22() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___joinSound_22)); }
	inline AudioClip_t1932558630 * get_joinSound_22() const { return ___joinSound_22; }
	inline AudioClip_t1932558630 ** get_address_of_joinSound_22() { return &___joinSound_22; }
	inline void set_joinSound_22(AudioClip_t1932558630 * value)
	{
		___joinSound_22 = value;
		Il2CppCodeGenWriteBarrier(&___joinSound_22, value);
	}

	inline static int32_t get_offset_of_spriteObj_23() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___spriteObj_23)); }
	inline Transform_t3275118058 * get_spriteObj_23() const { return ___spriteObj_23; }
	inline Transform_t3275118058 ** get_address_of_spriteObj_23() { return &___spriteObj_23; }
	inline void set_spriteObj_23(Transform_t3275118058 * value)
	{
		___spriteObj_23 = value;
		Il2CppCodeGenWriteBarrier(&___spriteObj_23, value);
	}

	inline static int32_t get_offset_of_sprite_24() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___sprite_24)); }
	inline SpriteRenderer_t1209076198 * get_sprite_24() const { return ___sprite_24; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sprite_24() { return &___sprite_24; }
	inline void set_sprite_24(SpriteRenderer_t1209076198 * value)
	{
		___sprite_24 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
