#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Snowhead
struct  Snowhead_t1927161771  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Snowhead::bottomBound
	float ___bottomBound_2;
	// System.Single Snowhead::rotationSpeed
	float ___rotationSpeed_3;
	// UnityEngine.Transform Snowhead::spriteObj
	Transform_t3275118058 * ___spriteObj_4;

public:
	inline static int32_t get_offset_of_bottomBound_2() { return static_cast<int32_t>(offsetof(Snowhead_t1927161771, ___bottomBound_2)); }
	inline float get_bottomBound_2() const { return ___bottomBound_2; }
	inline float* get_address_of_bottomBound_2() { return &___bottomBound_2; }
	inline void set_bottomBound_2(float value)
	{
		___bottomBound_2 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_3() { return static_cast<int32_t>(offsetof(Snowhead_t1927161771, ___rotationSpeed_3)); }
	inline float get_rotationSpeed_3() const { return ___rotationSpeed_3; }
	inline float* get_address_of_rotationSpeed_3() { return &___rotationSpeed_3; }
	inline void set_rotationSpeed_3(float value)
	{
		___rotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_spriteObj_4() { return static_cast<int32_t>(offsetof(Snowhead_t1927161771, ___spriteObj_4)); }
	inline Transform_t3275118058 * get_spriteObj_4() const { return ___spriteObj_4; }
	inline Transform_t3275118058 ** get_address_of_spriteObj_4() { return &___spriteObj_4; }
	inline void set_spriteObj_4(Transform_t3275118058 * value)
	{
		___spriteObj_4 = value;
		Il2CppCodeGenWriteBarrier(&___spriteObj_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
