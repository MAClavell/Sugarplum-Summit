#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Transform
struct Transform_t3275118058;
// Wave
struct Wave_t1600141715;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// EnemyManager
struct EnemyManager_t3846953235;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyManager
struct  EnemyManager_t3846953235  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] EnemyManager::enemyPrefabs
	GameObjectU5BU5D_t3057952154* ___enemyPrefabs_2;
	// UnityEngine.Transform EnemyManager::player
	Transform_t3275118058 * ___player_3;
	// UnityEngine.Transform EnemyManager::spawnPlane
	Transform_t3275118058 * ___spawnPlane_4;
	// System.Single EnemyManager::leftBound
	float ___leftBound_5;
	// System.Single EnemyManager::rightBound
	float ___rightBound_6;
	// System.Single EnemyManager::topBound
	float ___topBound_7;
	// System.Single EnemyManager::bottomBound
	float ___bottomBound_8;
	// System.Single EnemyManager::midBound
	float ___midBound_9;
	// Wave EnemyManager::currentWave
	Wave_t1600141715 * ___currentWave_10;
	// System.Single EnemyManager::currentWaveTime
	float ___currentWaveTime_11;
	// System.Collections.Generic.List`1<UnityEngine.Transform> EnemyManager::enemies
	List_1_t2644239190 * ___enemies_12;
	// UnityEngine.GameObject EnemyManager::ornamentPrefab
	GameObject_t1756533147 * ___ornamentPrefab_13;
	// System.Int32 EnemyManager::amountOrnaments
	int32_t ___amountOrnaments_14;
	// System.Single[] EnemyManager::ornamentTimes
	SingleU5BU5D_t577127397* ___ornamentTimes_15;
	// System.Boolean[] EnemyManager::generatedOrnaments
	BooleanU5BU5D_t3568034315* ___generatedOrnaments_16;

public:
	inline static int32_t get_offset_of_enemyPrefabs_2() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___enemyPrefabs_2)); }
	inline GameObjectU5BU5D_t3057952154* get_enemyPrefabs_2() const { return ___enemyPrefabs_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_enemyPrefabs_2() { return &___enemyPrefabs_2; }
	inline void set_enemyPrefabs_2(GameObjectU5BU5D_t3057952154* value)
	{
		___enemyPrefabs_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemyPrefabs_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___player_3)); }
	inline Transform_t3275118058 * get_player_3() const { return ___player_3; }
	inline Transform_t3275118058 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(Transform_t3275118058 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_spawnPlane_4() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___spawnPlane_4)); }
	inline Transform_t3275118058 * get_spawnPlane_4() const { return ___spawnPlane_4; }
	inline Transform_t3275118058 ** get_address_of_spawnPlane_4() { return &___spawnPlane_4; }
	inline void set_spawnPlane_4(Transform_t3275118058 * value)
	{
		___spawnPlane_4 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPlane_4, value);
	}

	inline static int32_t get_offset_of_leftBound_5() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___leftBound_5)); }
	inline float get_leftBound_5() const { return ___leftBound_5; }
	inline float* get_address_of_leftBound_5() { return &___leftBound_5; }
	inline void set_leftBound_5(float value)
	{
		___leftBound_5 = value;
	}

	inline static int32_t get_offset_of_rightBound_6() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___rightBound_6)); }
	inline float get_rightBound_6() const { return ___rightBound_6; }
	inline float* get_address_of_rightBound_6() { return &___rightBound_6; }
	inline void set_rightBound_6(float value)
	{
		___rightBound_6 = value;
	}

	inline static int32_t get_offset_of_topBound_7() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___topBound_7)); }
	inline float get_topBound_7() const { return ___topBound_7; }
	inline float* get_address_of_topBound_7() { return &___topBound_7; }
	inline void set_topBound_7(float value)
	{
		___topBound_7 = value;
	}

	inline static int32_t get_offset_of_bottomBound_8() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___bottomBound_8)); }
	inline float get_bottomBound_8() const { return ___bottomBound_8; }
	inline float* get_address_of_bottomBound_8() { return &___bottomBound_8; }
	inline void set_bottomBound_8(float value)
	{
		___bottomBound_8 = value;
	}

	inline static int32_t get_offset_of_midBound_9() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___midBound_9)); }
	inline float get_midBound_9() const { return ___midBound_9; }
	inline float* get_address_of_midBound_9() { return &___midBound_9; }
	inline void set_midBound_9(float value)
	{
		___midBound_9 = value;
	}

	inline static int32_t get_offset_of_currentWave_10() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___currentWave_10)); }
	inline Wave_t1600141715 * get_currentWave_10() const { return ___currentWave_10; }
	inline Wave_t1600141715 ** get_address_of_currentWave_10() { return &___currentWave_10; }
	inline void set_currentWave_10(Wave_t1600141715 * value)
	{
		___currentWave_10 = value;
		Il2CppCodeGenWriteBarrier(&___currentWave_10, value);
	}

	inline static int32_t get_offset_of_currentWaveTime_11() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___currentWaveTime_11)); }
	inline float get_currentWaveTime_11() const { return ___currentWaveTime_11; }
	inline float* get_address_of_currentWaveTime_11() { return &___currentWaveTime_11; }
	inline void set_currentWaveTime_11(float value)
	{
		___currentWaveTime_11 = value;
	}

	inline static int32_t get_offset_of_enemies_12() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___enemies_12)); }
	inline List_1_t2644239190 * get_enemies_12() const { return ___enemies_12; }
	inline List_1_t2644239190 ** get_address_of_enemies_12() { return &___enemies_12; }
	inline void set_enemies_12(List_1_t2644239190 * value)
	{
		___enemies_12 = value;
		Il2CppCodeGenWriteBarrier(&___enemies_12, value);
	}

	inline static int32_t get_offset_of_ornamentPrefab_13() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___ornamentPrefab_13)); }
	inline GameObject_t1756533147 * get_ornamentPrefab_13() const { return ___ornamentPrefab_13; }
	inline GameObject_t1756533147 ** get_address_of_ornamentPrefab_13() { return &___ornamentPrefab_13; }
	inline void set_ornamentPrefab_13(GameObject_t1756533147 * value)
	{
		___ornamentPrefab_13 = value;
		Il2CppCodeGenWriteBarrier(&___ornamentPrefab_13, value);
	}

	inline static int32_t get_offset_of_amountOrnaments_14() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___amountOrnaments_14)); }
	inline int32_t get_amountOrnaments_14() const { return ___amountOrnaments_14; }
	inline int32_t* get_address_of_amountOrnaments_14() { return &___amountOrnaments_14; }
	inline void set_amountOrnaments_14(int32_t value)
	{
		___amountOrnaments_14 = value;
	}

	inline static int32_t get_offset_of_ornamentTimes_15() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___ornamentTimes_15)); }
	inline SingleU5BU5D_t577127397* get_ornamentTimes_15() const { return ___ornamentTimes_15; }
	inline SingleU5BU5D_t577127397** get_address_of_ornamentTimes_15() { return &___ornamentTimes_15; }
	inline void set_ornamentTimes_15(SingleU5BU5D_t577127397* value)
	{
		___ornamentTimes_15 = value;
		Il2CppCodeGenWriteBarrier(&___ornamentTimes_15, value);
	}

	inline static int32_t get_offset_of_generatedOrnaments_16() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___generatedOrnaments_16)); }
	inline BooleanU5BU5D_t3568034315* get_generatedOrnaments_16() const { return ___generatedOrnaments_16; }
	inline BooleanU5BU5D_t3568034315** get_address_of_generatedOrnaments_16() { return &___generatedOrnaments_16; }
	inline void set_generatedOrnaments_16(BooleanU5BU5D_t3568034315* value)
	{
		___generatedOrnaments_16 = value;
		Il2CppCodeGenWriteBarrier(&___generatedOrnaments_16, value);
	}
};

struct EnemyManager_t3846953235_StaticFields
{
public:
	// EnemyManager EnemyManager::enemyManager
	EnemyManager_t3846953235 * ___enemyManager_17;

public:
	inline static int32_t get_offset_of_enemyManager_17() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235_StaticFields, ___enemyManager_17)); }
	inline EnemyManager_t3846953235 * get_enemyManager_17() const { return ___enemyManager_17; }
	inline EnemyManager_t3846953235 ** get_address_of_enemyManager_17() { return &___enemyManager_17; }
	inline void set_enemyManager_17(EnemyManager_t3846953235 * value)
	{
		___enemyManager_17 = value;
		Il2CppCodeGenWriteBarrier(&___enemyManager_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
