#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_BossStates1169204639.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// BackgroundMover
struct BackgroundMover_t473933363;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// BossManager
struct BossManager_t1443229656;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossManager
struct  BossManager_t1443229656  : public MonoBehaviour_t1158329972
{
public:
	// BossStates BossManager::state
	int32_t ___state_2;
	// UnityEngine.Transform[] BossManager::formationPositions
	TransformU5BU5D_t3764228911* ___formationPositions_3;
	// System.Collections.Generic.List`1<UnityEngine.Transform> BossManager::minions
	List_1_t2644239190 * ___minions_4;
	// UnityEngine.GameObject BossManager::bossPrefab
	GameObject_t1756533147 * ___bossPrefab_5;
	// UnityEngine.Transform BossManager::boss
	Transform_t3275118058 * ___boss_6;
	// UnityEngine.Vector2 BossManager::bossPosition
	Vector2_t2243707579  ___bossPosition_7;
	// System.Single BossManager::speed
	float ___speed_8;
	// System.Boolean BossManager::bossCreated
	bool ___bossCreated_9;
	// System.Boolean BossManager::wait
	bool ___wait_10;
	// System.Single BossManager::waitTimer
	float ___waitTimer_11;
	// System.Boolean BossManager::minionsTurned
	bool ___minionsTurned_12;
	// BackgroundMover BossManager::bgMove
	BackgroundMover_t473933363 * ___bgMove_13;
	// UnityEngine.AudioClip BossManager::bossMusic
	AudioClip_t1932558630 * ___bossMusic_14;

public:
	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(BossManager_t1443229656, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_formationPositions_3() { return static_cast<int32_t>(offsetof(BossManager_t1443229656, ___formationPositions_3)); }
	inline TransformU5BU5D_t3764228911* get_formationPositions_3() const { return ___formationPositions_3; }
	inline TransformU5BU5D_t3764228911** get_address_of_formationPositions_3() { return &___formationPositions_3; }
	inline void set_formationPositions_3(TransformU5BU5D_t3764228911* value)
	{
		___formationPositions_3 = value;
		Il2CppCodeGenWriteBarrier(&___formationPositions_3, value);
	}

	inline static int32_t get_offset_of_minions_4() { return static_cast<int32_t>(offsetof(BossManager_t1443229656, ___minions_4)); }
	inline List_1_t2644239190 * get_minions_4() const { return ___minions_4; }
	inline List_1_t2644239190 ** get_address_of_minions_4() { return &___minions_4; }
	inline void set_minions_4(List_1_t2644239190 * value)
	{
		___minions_4 = value;
		Il2CppCodeGenWriteBarrier(&___minions_4, value);
	}

	inline static int32_t get_offset_of_bossPrefab_5() { return static_cast<int32_t>(offsetof(BossManager_t1443229656, ___bossPrefab_5)); }
	inline GameObject_t1756533147 * get_bossPrefab_5() const { return ___bossPrefab_5; }
	inline GameObject_t1756533147 ** get_address_of_bossPrefab_5() { return &___bossPrefab_5; }
	inline void set_bossPrefab_5(GameObject_t1756533147 * value)
	{
		___bossPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___bossPrefab_5, value);
	}

	inline static int32_t get_offset_of_boss_6() { return static_cast<int32_t>(offsetof(BossManager_t1443229656, ___boss_6)); }
	inline Transform_t3275118058 * get_boss_6() const { return ___boss_6; }
	inline Transform_t3275118058 ** get_address_of_boss_6() { return &___boss_6; }
	inline void set_boss_6(Transform_t3275118058 * value)
	{
		___boss_6 = value;
		Il2CppCodeGenWriteBarrier(&___boss_6, value);
	}

	inline static int32_t get_offset_of_bossPosition_7() { return static_cast<int32_t>(offsetof(BossManager_t1443229656, ___bossPosition_7)); }
	inline Vector2_t2243707579  get_bossPosition_7() const { return ___bossPosition_7; }
	inline Vector2_t2243707579 * get_address_of_bossPosition_7() { return &___bossPosition_7; }
	inline void set_bossPosition_7(Vector2_t2243707579  value)
	{
		___bossPosition_7 = value;
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(BossManager_t1443229656, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_bossCreated_9() { return static_cast<int32_t>(offsetof(BossManager_t1443229656, ___bossCreated_9)); }
	inline bool get_bossCreated_9() const { return ___bossCreated_9; }
	inline bool* get_address_of_bossCreated_9() { return &___bossCreated_9; }
	inline void set_bossCreated_9(bool value)
	{
		___bossCreated_9 = value;
	}

	inline static int32_t get_offset_of_wait_10() { return static_cast<int32_t>(offsetof(BossManager_t1443229656, ___wait_10)); }
	inline bool get_wait_10() const { return ___wait_10; }
	inline bool* get_address_of_wait_10() { return &___wait_10; }
	inline void set_wait_10(bool value)
	{
		___wait_10 = value;
	}

	inline static int32_t get_offset_of_waitTimer_11() { return static_cast<int32_t>(offsetof(BossManager_t1443229656, ___waitTimer_11)); }
	inline float get_waitTimer_11() const { return ___waitTimer_11; }
	inline float* get_address_of_waitTimer_11() { return &___waitTimer_11; }
	inline void set_waitTimer_11(float value)
	{
		___waitTimer_11 = value;
	}

	inline static int32_t get_offset_of_minionsTurned_12() { return static_cast<int32_t>(offsetof(BossManager_t1443229656, ___minionsTurned_12)); }
	inline bool get_minionsTurned_12() const { return ___minionsTurned_12; }
	inline bool* get_address_of_minionsTurned_12() { return &___minionsTurned_12; }
	inline void set_minionsTurned_12(bool value)
	{
		___minionsTurned_12 = value;
	}

	inline static int32_t get_offset_of_bgMove_13() { return static_cast<int32_t>(offsetof(BossManager_t1443229656, ___bgMove_13)); }
	inline BackgroundMover_t473933363 * get_bgMove_13() const { return ___bgMove_13; }
	inline BackgroundMover_t473933363 ** get_address_of_bgMove_13() { return &___bgMove_13; }
	inline void set_bgMove_13(BackgroundMover_t473933363 * value)
	{
		___bgMove_13 = value;
		Il2CppCodeGenWriteBarrier(&___bgMove_13, value);
	}

	inline static int32_t get_offset_of_bossMusic_14() { return static_cast<int32_t>(offsetof(BossManager_t1443229656, ___bossMusic_14)); }
	inline AudioClip_t1932558630 * get_bossMusic_14() const { return ___bossMusic_14; }
	inline AudioClip_t1932558630 ** get_address_of_bossMusic_14() { return &___bossMusic_14; }
	inline void set_bossMusic_14(AudioClip_t1932558630 * value)
	{
		___bossMusic_14 = value;
		Il2CppCodeGenWriteBarrier(&___bossMusic_14, value);
	}
};

struct BossManager_t1443229656_StaticFields
{
public:
	// BossManager BossManager::bossManager
	BossManager_t1443229656 * ___bossManager_15;

public:
	inline static int32_t get_offset_of_bossManager_15() { return static_cast<int32_t>(offsetof(BossManager_t1443229656_StaticFields, ___bossManager_15)); }
	inline BossManager_t1443229656 * get_bossManager_15() const { return ___bossManager_15; }
	inline BossManager_t1443229656 ** get_address_of_bossManager_15() { return &___bossManager_15; }
	inline void set_bossManager_15(BossManager_t1443229656 * value)
	{
		___bossManager_15 = value;
		Il2CppCodeGenWriteBarrier(&___bossManager_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
