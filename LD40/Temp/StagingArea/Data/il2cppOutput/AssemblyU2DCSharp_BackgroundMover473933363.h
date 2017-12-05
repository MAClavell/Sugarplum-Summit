#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundMover
struct  BackgroundMover_t473933363  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] BackgroundMover::bgs
	TransformU5BU5D_t3764228911* ___bgs_2;
	// System.Single BackgroundMover::moveRate
	float ___moveRate_3;
	// UnityEngine.Transform BackgroundMover::bossBG
	Transform_t3275118058 * ___bossBG_4;
	// System.Boolean BackgroundMover::bossPlaced
	bool ___bossPlaced_5;

public:
	inline static int32_t get_offset_of_bgs_2() { return static_cast<int32_t>(offsetof(BackgroundMover_t473933363, ___bgs_2)); }
	inline TransformU5BU5D_t3764228911* get_bgs_2() const { return ___bgs_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_bgs_2() { return &___bgs_2; }
	inline void set_bgs_2(TransformU5BU5D_t3764228911* value)
	{
		___bgs_2 = value;
		Il2CppCodeGenWriteBarrier(&___bgs_2, value);
	}

	inline static int32_t get_offset_of_moveRate_3() { return static_cast<int32_t>(offsetof(BackgroundMover_t473933363, ___moveRate_3)); }
	inline float get_moveRate_3() const { return ___moveRate_3; }
	inline float* get_address_of_moveRate_3() { return &___moveRate_3; }
	inline void set_moveRate_3(float value)
	{
		___moveRate_3 = value;
	}

	inline static int32_t get_offset_of_bossBG_4() { return static_cast<int32_t>(offsetof(BackgroundMover_t473933363, ___bossBG_4)); }
	inline Transform_t3275118058 * get_bossBG_4() const { return ___bossBG_4; }
	inline Transform_t3275118058 ** get_address_of_bossBG_4() { return &___bossBG_4; }
	inline void set_bossBG_4(Transform_t3275118058 * value)
	{
		___bossBG_4 = value;
		Il2CppCodeGenWriteBarrier(&___bossBG_4, value);
	}

	inline static int32_t get_offset_of_bossPlaced_5() { return static_cast<int32_t>(offsetof(BackgroundMover_t473933363, ___bossPlaced_5)); }
	inline bool get_bossPlaced_5() const { return ___bossPlaced_5; }
	inline bool* get_address_of_bossPlaced_5() { return &___bossPlaced_5; }
	inline void set_bossPlaced_5(bool value)
	{
		___bossPlaced_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
