#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// IFollowable
struct IFollowable_t779612170;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IFollowable
struct  IFollowable_t779612170  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean IFollowable::move
	bool ___move_2;
	// IFollowable IFollowable::leader
	IFollowable_t779612170 * ___leader_3;
	// System.Boolean IFollowable::startMove
	bool ___startMove_4;
	// System.Single IFollowable::delay
	float ___delay_5;
	// System.Single IFollowable::delayTimer
	float ___delayTimer_6;

public:
	inline static int32_t get_offset_of_move_2() { return static_cast<int32_t>(offsetof(IFollowable_t779612170, ___move_2)); }
	inline bool get_move_2() const { return ___move_2; }
	inline bool* get_address_of_move_2() { return &___move_2; }
	inline void set_move_2(bool value)
	{
		___move_2 = value;
	}

	inline static int32_t get_offset_of_leader_3() { return static_cast<int32_t>(offsetof(IFollowable_t779612170, ___leader_3)); }
	inline IFollowable_t779612170 * get_leader_3() const { return ___leader_3; }
	inline IFollowable_t779612170 ** get_address_of_leader_3() { return &___leader_3; }
	inline void set_leader_3(IFollowable_t779612170 * value)
	{
		___leader_3 = value;
		Il2CppCodeGenWriteBarrier(&___leader_3, value);
	}

	inline static int32_t get_offset_of_startMove_4() { return static_cast<int32_t>(offsetof(IFollowable_t779612170, ___startMove_4)); }
	inline bool get_startMove_4() const { return ___startMove_4; }
	inline bool* get_address_of_startMove_4() { return &___startMove_4; }
	inline void set_startMove_4(bool value)
	{
		___startMove_4 = value;
	}

	inline static int32_t get_offset_of_delay_5() { return static_cast<int32_t>(offsetof(IFollowable_t779612170, ___delay_5)); }
	inline float get_delay_5() const { return ___delay_5; }
	inline float* get_address_of_delay_5() { return &___delay_5; }
	inline void set_delay_5(float value)
	{
		___delay_5 = value;
	}

	inline static int32_t get_offset_of_delayTimer_6() { return static_cast<int32_t>(offsetof(IFollowable_t779612170, ___delayTimer_6)); }
	inline float get_delayTimer_6() const { return ___delayTimer_6; }
	inline float* get_address_of_delayTimer_6() { return &___delayTimer_6; }
	inline void set_delayTimer_6(float value)
	{
		___delayTimer_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
