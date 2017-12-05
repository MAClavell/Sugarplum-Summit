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

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LaserScript
struct  LaserScript_t460893360  : public MonoBehaviour_t1158329972
{
public:
	// System.Single LaserScript::stretchSpeed
	float ___stretchSpeed_2;
	// System.Single LaserScript::maxStrech
	float ___maxStrech_3;
	// UnityEngine.Vector2 LaserScript::position
	Vector2_t2243707579  ___position_4;
	// UnityEngine.Vector2 LaserScript::scale
	Vector2_t2243707579  ___scale_5;
	// UnityEngine.Transform LaserScript::spriteTransform
	Transform_t3275118058 * ___spriteTransform_6;

public:
	inline static int32_t get_offset_of_stretchSpeed_2() { return static_cast<int32_t>(offsetof(LaserScript_t460893360, ___stretchSpeed_2)); }
	inline float get_stretchSpeed_2() const { return ___stretchSpeed_2; }
	inline float* get_address_of_stretchSpeed_2() { return &___stretchSpeed_2; }
	inline void set_stretchSpeed_2(float value)
	{
		___stretchSpeed_2 = value;
	}

	inline static int32_t get_offset_of_maxStrech_3() { return static_cast<int32_t>(offsetof(LaserScript_t460893360, ___maxStrech_3)); }
	inline float get_maxStrech_3() const { return ___maxStrech_3; }
	inline float* get_address_of_maxStrech_3() { return &___maxStrech_3; }
	inline void set_maxStrech_3(float value)
	{
		___maxStrech_3 = value;
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(LaserScript_t460893360, ___position_4)); }
	inline Vector2_t2243707579  get_position_4() const { return ___position_4; }
	inline Vector2_t2243707579 * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector2_t2243707579  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_scale_5() { return static_cast<int32_t>(offsetof(LaserScript_t460893360, ___scale_5)); }
	inline Vector2_t2243707579  get_scale_5() const { return ___scale_5; }
	inline Vector2_t2243707579 * get_address_of_scale_5() { return &___scale_5; }
	inline void set_scale_5(Vector2_t2243707579  value)
	{
		___scale_5 = value;
	}

	inline static int32_t get_offset_of_spriteTransform_6() { return static_cast<int32_t>(offsetof(LaserScript_t460893360, ___spriteTransform_6)); }
	inline Transform_t3275118058 * get_spriteTransform_6() const { return ___spriteTransform_6; }
	inline Transform_t3275118058 ** get_address_of_spriteTransform_6() { return &___spriteTransform_6; }
	inline void set_spriteTransform_6(Transform_t3275118058 * value)
	{
		___spriteTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___spriteTransform_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
