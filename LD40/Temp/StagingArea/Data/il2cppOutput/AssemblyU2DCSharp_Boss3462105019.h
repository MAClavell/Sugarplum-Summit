#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_EnemyStates2506249742.h"

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.Animator[]
struct AnimatorU5BU5D_t4224369806;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boss
struct  Boss_t3462105019  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] Boss::eyes
	TransformU5BU5D_t3764228911* ___eyes_2;
	// UnityEngine.Animator[] Boss::eyePupils
	AnimatorU5BU5D_t4224369806* ___eyePupils_3;
	// EnemyStates Boss::state
	int32_t ___state_4;
	// System.Int32 Boss::health
	int32_t ___health_5;
	// UnityEngine.Transform Boss::player
	Transform_t3275118058 * ___player_6;
	// UnityEngine.GameObject Boss::laserPrefab
	GameObject_t1756533147 * ___laserPrefab_7;
	// UnityEngine.AnimationClip Boss::bossDeathAnim
	AnimationClip_t3510324950 * ___bossDeathAnim_8;
	// System.Boolean Boss::intervalTurn
	bool ___intervalTurn_9;
	// System.Int32 Boss::intervalAmount
	int32_t ___intervalAmount_10;
	// System.Int32 Boss::homing
	int32_t ___homing_11;
	// System.Boolean Boss::homingTurn
	bool ___homingTurn_12;
	// System.Int32 Boss::homingAmount
	int32_t ___homingAmount_13;
	// System.Int32 Boss::laserState
	int32_t ___laserState_14;
	// System.Single Boss::laserTimer
	float ___laserTimer_15;
	// System.Single Boss::laserEyeDelay
	float ___laserEyeDelay_16;
	// System.Single Boss::laserWaitDelay
	float ___laserWaitDelay_17;
	// System.Single Boss::laserDelay
	float ___laserDelay_18;
	// System.Single Boss::laserRotateDelay
	float ___laserRotateDelay_19;
	// System.Single Boss::laserAngle
	float ___laserAngle_20;
	// UnityEngine.Transform Boss::laser
	Transform_t3275118058 * ___laser_21;
	// System.Int32 Boss::laserDir
	int32_t ___laserDir_22;
	// System.Single Boss::laserRotationSpeed
	float ___laserRotationSpeed_23;
	// System.Boolean Boss::laserPlayedAnim
	bool ___laserPlayedAnim_24;
	// System.Single Boss::laserMinionTimer
	float ___laserMinionTimer_25;

public:
	inline static int32_t get_offset_of_eyes_2() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___eyes_2)); }
	inline TransformU5BU5D_t3764228911* get_eyes_2() const { return ___eyes_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_eyes_2() { return &___eyes_2; }
	inline void set_eyes_2(TransformU5BU5D_t3764228911* value)
	{
		___eyes_2 = value;
		Il2CppCodeGenWriteBarrier(&___eyes_2, value);
	}

	inline static int32_t get_offset_of_eyePupils_3() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___eyePupils_3)); }
	inline AnimatorU5BU5D_t4224369806* get_eyePupils_3() const { return ___eyePupils_3; }
	inline AnimatorU5BU5D_t4224369806** get_address_of_eyePupils_3() { return &___eyePupils_3; }
	inline void set_eyePupils_3(AnimatorU5BU5D_t4224369806* value)
	{
		___eyePupils_3 = value;
		Il2CppCodeGenWriteBarrier(&___eyePupils_3, value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}

	inline static int32_t get_offset_of_health_5() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___health_5)); }
	inline int32_t get_health_5() const { return ___health_5; }
	inline int32_t* get_address_of_health_5() { return &___health_5; }
	inline void set_health_5(int32_t value)
	{
		___health_5 = value;
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___player_6)); }
	inline Transform_t3275118058 * get_player_6() const { return ___player_6; }
	inline Transform_t3275118058 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(Transform_t3275118058 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier(&___player_6, value);
	}

	inline static int32_t get_offset_of_laserPrefab_7() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___laserPrefab_7)); }
	inline GameObject_t1756533147 * get_laserPrefab_7() const { return ___laserPrefab_7; }
	inline GameObject_t1756533147 ** get_address_of_laserPrefab_7() { return &___laserPrefab_7; }
	inline void set_laserPrefab_7(GameObject_t1756533147 * value)
	{
		___laserPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___laserPrefab_7, value);
	}

	inline static int32_t get_offset_of_bossDeathAnim_8() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___bossDeathAnim_8)); }
	inline AnimationClip_t3510324950 * get_bossDeathAnim_8() const { return ___bossDeathAnim_8; }
	inline AnimationClip_t3510324950 ** get_address_of_bossDeathAnim_8() { return &___bossDeathAnim_8; }
	inline void set_bossDeathAnim_8(AnimationClip_t3510324950 * value)
	{
		___bossDeathAnim_8 = value;
		Il2CppCodeGenWriteBarrier(&___bossDeathAnim_8, value);
	}

	inline static int32_t get_offset_of_intervalTurn_9() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___intervalTurn_9)); }
	inline bool get_intervalTurn_9() const { return ___intervalTurn_9; }
	inline bool* get_address_of_intervalTurn_9() { return &___intervalTurn_9; }
	inline void set_intervalTurn_9(bool value)
	{
		___intervalTurn_9 = value;
	}

	inline static int32_t get_offset_of_intervalAmount_10() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___intervalAmount_10)); }
	inline int32_t get_intervalAmount_10() const { return ___intervalAmount_10; }
	inline int32_t* get_address_of_intervalAmount_10() { return &___intervalAmount_10; }
	inline void set_intervalAmount_10(int32_t value)
	{
		___intervalAmount_10 = value;
	}

	inline static int32_t get_offset_of_homing_11() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___homing_11)); }
	inline int32_t get_homing_11() const { return ___homing_11; }
	inline int32_t* get_address_of_homing_11() { return &___homing_11; }
	inline void set_homing_11(int32_t value)
	{
		___homing_11 = value;
	}

	inline static int32_t get_offset_of_homingTurn_12() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___homingTurn_12)); }
	inline bool get_homingTurn_12() const { return ___homingTurn_12; }
	inline bool* get_address_of_homingTurn_12() { return &___homingTurn_12; }
	inline void set_homingTurn_12(bool value)
	{
		___homingTurn_12 = value;
	}

	inline static int32_t get_offset_of_homingAmount_13() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___homingAmount_13)); }
	inline int32_t get_homingAmount_13() const { return ___homingAmount_13; }
	inline int32_t* get_address_of_homingAmount_13() { return &___homingAmount_13; }
	inline void set_homingAmount_13(int32_t value)
	{
		___homingAmount_13 = value;
	}

	inline static int32_t get_offset_of_laserState_14() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___laserState_14)); }
	inline int32_t get_laserState_14() const { return ___laserState_14; }
	inline int32_t* get_address_of_laserState_14() { return &___laserState_14; }
	inline void set_laserState_14(int32_t value)
	{
		___laserState_14 = value;
	}

	inline static int32_t get_offset_of_laserTimer_15() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___laserTimer_15)); }
	inline float get_laserTimer_15() const { return ___laserTimer_15; }
	inline float* get_address_of_laserTimer_15() { return &___laserTimer_15; }
	inline void set_laserTimer_15(float value)
	{
		___laserTimer_15 = value;
	}

	inline static int32_t get_offset_of_laserEyeDelay_16() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___laserEyeDelay_16)); }
	inline float get_laserEyeDelay_16() const { return ___laserEyeDelay_16; }
	inline float* get_address_of_laserEyeDelay_16() { return &___laserEyeDelay_16; }
	inline void set_laserEyeDelay_16(float value)
	{
		___laserEyeDelay_16 = value;
	}

	inline static int32_t get_offset_of_laserWaitDelay_17() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___laserWaitDelay_17)); }
	inline float get_laserWaitDelay_17() const { return ___laserWaitDelay_17; }
	inline float* get_address_of_laserWaitDelay_17() { return &___laserWaitDelay_17; }
	inline void set_laserWaitDelay_17(float value)
	{
		___laserWaitDelay_17 = value;
	}

	inline static int32_t get_offset_of_laserDelay_18() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___laserDelay_18)); }
	inline float get_laserDelay_18() const { return ___laserDelay_18; }
	inline float* get_address_of_laserDelay_18() { return &___laserDelay_18; }
	inline void set_laserDelay_18(float value)
	{
		___laserDelay_18 = value;
	}

	inline static int32_t get_offset_of_laserRotateDelay_19() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___laserRotateDelay_19)); }
	inline float get_laserRotateDelay_19() const { return ___laserRotateDelay_19; }
	inline float* get_address_of_laserRotateDelay_19() { return &___laserRotateDelay_19; }
	inline void set_laserRotateDelay_19(float value)
	{
		___laserRotateDelay_19 = value;
	}

	inline static int32_t get_offset_of_laserAngle_20() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___laserAngle_20)); }
	inline float get_laserAngle_20() const { return ___laserAngle_20; }
	inline float* get_address_of_laserAngle_20() { return &___laserAngle_20; }
	inline void set_laserAngle_20(float value)
	{
		___laserAngle_20 = value;
	}

	inline static int32_t get_offset_of_laser_21() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___laser_21)); }
	inline Transform_t3275118058 * get_laser_21() const { return ___laser_21; }
	inline Transform_t3275118058 ** get_address_of_laser_21() { return &___laser_21; }
	inline void set_laser_21(Transform_t3275118058 * value)
	{
		___laser_21 = value;
		Il2CppCodeGenWriteBarrier(&___laser_21, value);
	}

	inline static int32_t get_offset_of_laserDir_22() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___laserDir_22)); }
	inline int32_t get_laserDir_22() const { return ___laserDir_22; }
	inline int32_t* get_address_of_laserDir_22() { return &___laserDir_22; }
	inline void set_laserDir_22(int32_t value)
	{
		___laserDir_22 = value;
	}

	inline static int32_t get_offset_of_laserRotationSpeed_23() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___laserRotationSpeed_23)); }
	inline float get_laserRotationSpeed_23() const { return ___laserRotationSpeed_23; }
	inline float* get_address_of_laserRotationSpeed_23() { return &___laserRotationSpeed_23; }
	inline void set_laserRotationSpeed_23(float value)
	{
		___laserRotationSpeed_23 = value;
	}

	inline static int32_t get_offset_of_laserPlayedAnim_24() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___laserPlayedAnim_24)); }
	inline bool get_laserPlayedAnim_24() const { return ___laserPlayedAnim_24; }
	inline bool* get_address_of_laserPlayedAnim_24() { return &___laserPlayedAnim_24; }
	inline void set_laserPlayedAnim_24(bool value)
	{
		___laserPlayedAnim_24 = value;
	}

	inline static int32_t get_offset_of_laserMinionTimer_25() { return static_cast<int32_t>(offsetof(Boss_t3462105019, ___laserMinionTimer_25)); }
	inline float get_laserMinionTimer_25() const { return ___laserMinionTimer_25; }
	inline float* get_address_of_laserMinionTimer_25() { return &___laserMinionTimer_25; }
	inline void set_laserMinionTimer_25(float value)
	{
		___laserMinionTimer_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
