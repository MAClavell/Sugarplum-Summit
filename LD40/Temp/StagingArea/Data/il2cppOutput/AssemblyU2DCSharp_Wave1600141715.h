#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wave
struct  Wave_t1600141715  : public Il2CppObject
{
public:
	// System.Single[] Wave::times
	SingleU5BU5D_t577127397* ___times_0;
	// UnityEngine.GameObject[] Wave::enemies
	GameObjectU5BU5D_t3057952154* ___enemies_1;
	// System.Boolean[] Wave::generated
	BooleanU5BU5D_t3568034315* ___generated_2;
	// System.Int32 Wave::totalEnemies
	int32_t ___totalEnemies_3;
	// System.Single Wave::waveLength
	float ___waveLength_4;

public:
	inline static int32_t get_offset_of_times_0() { return static_cast<int32_t>(offsetof(Wave_t1600141715, ___times_0)); }
	inline SingleU5BU5D_t577127397* get_times_0() const { return ___times_0; }
	inline SingleU5BU5D_t577127397** get_address_of_times_0() { return &___times_0; }
	inline void set_times_0(SingleU5BU5D_t577127397* value)
	{
		___times_0 = value;
		Il2CppCodeGenWriteBarrier(&___times_0, value);
	}

	inline static int32_t get_offset_of_enemies_1() { return static_cast<int32_t>(offsetof(Wave_t1600141715, ___enemies_1)); }
	inline GameObjectU5BU5D_t3057952154* get_enemies_1() const { return ___enemies_1; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_enemies_1() { return &___enemies_1; }
	inline void set_enemies_1(GameObjectU5BU5D_t3057952154* value)
	{
		___enemies_1 = value;
		Il2CppCodeGenWriteBarrier(&___enemies_1, value);
	}

	inline static int32_t get_offset_of_generated_2() { return static_cast<int32_t>(offsetof(Wave_t1600141715, ___generated_2)); }
	inline BooleanU5BU5D_t3568034315* get_generated_2() const { return ___generated_2; }
	inline BooleanU5BU5D_t3568034315** get_address_of_generated_2() { return &___generated_2; }
	inline void set_generated_2(BooleanU5BU5D_t3568034315* value)
	{
		___generated_2 = value;
		Il2CppCodeGenWriteBarrier(&___generated_2, value);
	}

	inline static int32_t get_offset_of_totalEnemies_3() { return static_cast<int32_t>(offsetof(Wave_t1600141715, ___totalEnemies_3)); }
	inline int32_t get_totalEnemies_3() const { return ___totalEnemies_3; }
	inline int32_t* get_address_of_totalEnemies_3() { return &___totalEnemies_3; }
	inline void set_totalEnemies_3(int32_t value)
	{
		___totalEnemies_3 = value;
	}

	inline static int32_t get_offset_of_waveLength_4() { return static_cast<int32_t>(offsetof(Wave_t1600141715, ___waveLength_4)); }
	inline float get_waveLength_4() const { return ___waveLength_4; }
	inline float* get_address_of_waveLength_4() { return &___waveLength_4; }
	inline void set_waveLength_4(float value)
	{
		___waveLength_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
