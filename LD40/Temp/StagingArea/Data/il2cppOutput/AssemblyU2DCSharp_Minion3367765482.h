#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_MinionStates2446580256.h"
#include "AssemblyU2DCSharp_EnemyStates2506249742.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// BossManager
struct BossManager_t1443229656;
// IFollowable
struct IFollowable_t779612170;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Minion
struct  Minion_t3367765482  : public MonoBehaviour_t1158329972
{
public:
	// MinionStates Minion::goodBadState
	int32_t ___goodBadState_2;
	// EnemyStates Minion::bossState
	int32_t ___bossState_3;
	// UnityEngine.Transform Minion::player
	Transform_t3275118058 * ___player_4;
	// BossManager Minion::bossManager
	BossManager_t1443229656 * ___bossManager_5;
	// System.Single Minion::moveSpeed
	float ___moveSpeed_6;
	// UnityEngine.Vector2 Minion::position
	Vector2_t2243707579  ___position_7;
	// UnityEngine.Transform Minion::followTarget
	Transform_t3275118058 * ___followTarget_8;
	// IFollowable Minion::followAtt
	IFollowable_t779612170 * ___followAtt_9;
	// UnityEngine.GameObject Minion::bulletPrefab
	GameObject_t1756533147 * ___bulletPrefab_10;
	// System.Single Minion::shootInterval
	float ___shootInterval_11;
	// System.Single Minion::bulletSpeed
	float ___bulletSpeed_12;
	// System.Single Minion::shootTimer
	float ___shootTimer_13;
	// UnityEngine.Vector2 Minion::formationPosition
	Vector2_t2243707579  ___formationPosition_14;
	// UnityEngine.GameObject Minion::evilBulletPrefab
	GameObject_t1756533147 * ___evilBulletPrefab_15;

public:
	inline static int32_t get_offset_of_goodBadState_2() { return static_cast<int32_t>(offsetof(Minion_t3367765482, ___goodBadState_2)); }
	inline int32_t get_goodBadState_2() const { return ___goodBadState_2; }
	inline int32_t* get_address_of_goodBadState_2() { return &___goodBadState_2; }
	inline void set_goodBadState_2(int32_t value)
	{
		___goodBadState_2 = value;
	}

	inline static int32_t get_offset_of_bossState_3() { return static_cast<int32_t>(offsetof(Minion_t3367765482, ___bossState_3)); }
	inline int32_t get_bossState_3() const { return ___bossState_3; }
	inline int32_t* get_address_of_bossState_3() { return &___bossState_3; }
	inline void set_bossState_3(int32_t value)
	{
		___bossState_3 = value;
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Minion_t3367765482, ___player_4)); }
	inline Transform_t3275118058 * get_player_4() const { return ___player_4; }
	inline Transform_t3275118058 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Transform_t3275118058 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_bossManager_5() { return static_cast<int32_t>(offsetof(Minion_t3367765482, ___bossManager_5)); }
	inline BossManager_t1443229656 * get_bossManager_5() const { return ___bossManager_5; }
	inline BossManager_t1443229656 ** get_address_of_bossManager_5() { return &___bossManager_5; }
	inline void set_bossManager_5(BossManager_t1443229656 * value)
	{
		___bossManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___bossManager_5, value);
	}

	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(Minion_t3367765482, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_position_7() { return static_cast<int32_t>(offsetof(Minion_t3367765482, ___position_7)); }
	inline Vector2_t2243707579  get_position_7() const { return ___position_7; }
	inline Vector2_t2243707579 * get_address_of_position_7() { return &___position_7; }
	inline void set_position_7(Vector2_t2243707579  value)
	{
		___position_7 = value;
	}

	inline static int32_t get_offset_of_followTarget_8() { return static_cast<int32_t>(offsetof(Minion_t3367765482, ___followTarget_8)); }
	inline Transform_t3275118058 * get_followTarget_8() const { return ___followTarget_8; }
	inline Transform_t3275118058 ** get_address_of_followTarget_8() { return &___followTarget_8; }
	inline void set_followTarget_8(Transform_t3275118058 * value)
	{
		___followTarget_8 = value;
		Il2CppCodeGenWriteBarrier(&___followTarget_8, value);
	}

	inline static int32_t get_offset_of_followAtt_9() { return static_cast<int32_t>(offsetof(Minion_t3367765482, ___followAtt_9)); }
	inline IFollowable_t779612170 * get_followAtt_9() const { return ___followAtt_9; }
	inline IFollowable_t779612170 ** get_address_of_followAtt_9() { return &___followAtt_9; }
	inline void set_followAtt_9(IFollowable_t779612170 * value)
	{
		___followAtt_9 = value;
		Il2CppCodeGenWriteBarrier(&___followAtt_9, value);
	}

	inline static int32_t get_offset_of_bulletPrefab_10() { return static_cast<int32_t>(offsetof(Minion_t3367765482, ___bulletPrefab_10)); }
	inline GameObject_t1756533147 * get_bulletPrefab_10() const { return ___bulletPrefab_10; }
	inline GameObject_t1756533147 ** get_address_of_bulletPrefab_10() { return &___bulletPrefab_10; }
	inline void set_bulletPrefab_10(GameObject_t1756533147 * value)
	{
		___bulletPrefab_10 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPrefab_10, value);
	}

	inline static int32_t get_offset_of_shootInterval_11() { return static_cast<int32_t>(offsetof(Minion_t3367765482, ___shootInterval_11)); }
	inline float get_shootInterval_11() const { return ___shootInterval_11; }
	inline float* get_address_of_shootInterval_11() { return &___shootInterval_11; }
	inline void set_shootInterval_11(float value)
	{
		___shootInterval_11 = value;
	}

	inline static int32_t get_offset_of_bulletSpeed_12() { return static_cast<int32_t>(offsetof(Minion_t3367765482, ___bulletSpeed_12)); }
	inline float get_bulletSpeed_12() const { return ___bulletSpeed_12; }
	inline float* get_address_of_bulletSpeed_12() { return &___bulletSpeed_12; }
	inline void set_bulletSpeed_12(float value)
	{
		___bulletSpeed_12 = value;
	}

	inline static int32_t get_offset_of_shootTimer_13() { return static_cast<int32_t>(offsetof(Minion_t3367765482, ___shootTimer_13)); }
	inline float get_shootTimer_13() const { return ___shootTimer_13; }
	inline float* get_address_of_shootTimer_13() { return &___shootTimer_13; }
	inline void set_shootTimer_13(float value)
	{
		___shootTimer_13 = value;
	}

	inline static int32_t get_offset_of_formationPosition_14() { return static_cast<int32_t>(offsetof(Minion_t3367765482, ___formationPosition_14)); }
	inline Vector2_t2243707579  get_formationPosition_14() const { return ___formationPosition_14; }
	inline Vector2_t2243707579 * get_address_of_formationPosition_14() { return &___formationPosition_14; }
	inline void set_formationPosition_14(Vector2_t2243707579  value)
	{
		___formationPosition_14 = value;
	}

	inline static int32_t get_offset_of_evilBulletPrefab_15() { return static_cast<int32_t>(offsetof(Minion_t3367765482, ___evilBulletPrefab_15)); }
	inline GameObject_t1756533147 * get_evilBulletPrefab_15() const { return ___evilBulletPrefab_15; }
	inline GameObject_t1756533147 ** get_address_of_evilBulletPrefab_15() { return &___evilBulletPrefab_15; }
	inline void set_evilBulletPrefab_15(GameObject_t1756533147 * value)
	{
		___evilBulletPrefab_15 = value;
		Il2CppCodeGenWriteBarrier(&___evilBulletPrefab_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
