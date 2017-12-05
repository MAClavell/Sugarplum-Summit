#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GameState1561012519.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// Player
struct Player_t1147783557;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// GameManager
struct GameManager_t2252321495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GameManager::gameOver
	bool ___gameOver_2;
	// GameState GameManager::state
	int32_t ___state_3;
	// Player GameManager::player
	Player_t1147783557 * ___player_4;
	// System.Single GameManager::gameLength
	float ___gameLength_5;
	// System.Single GameManager::currentLength
	float ___currentLength_6;
	// UnityEngine.Vector2 GameManager::progBarVals
	Vector2_t2243707579  ___progBarVals_7;
	// UnityEngine.Transform GameManager::progWings
	Transform_t3275118058 * ___progWings_8;
	// UnityEngine.Vector2 GameManager::progWingsPosition
	Vector2_t2243707579  ___progWingsPosition_9;
	// UnityEngine.GameObject[] GameManager::lives
	GameObjectU5BU5D_t3057952154* ___lives_10;
	// UnityEngine.Camera GameManager::cameraMain
	Camera_t189460977 * ___cameraMain_11;
	// UnityEngine.UI.Text GameManager::uiText
	Text_t356221433 * ___uiText_12;
	// UnityEngine.GameObject GameManager::GOUI
	GameObject_t1756533147 * ___GOUI_13;

public:
	inline static int32_t get_offset_of_gameOver_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___gameOver_2)); }
	inline bool get_gameOver_2() const { return ___gameOver_2; }
	inline bool* get_address_of_gameOver_2() { return &___gameOver_2; }
	inline void set_gameOver_2(bool value)
	{
		___gameOver_2 = value;
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___state_3)); }
	inline int32_t get_state_3() const { return ___state_3; }
	inline int32_t* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(int32_t value)
	{
		___state_3 = value;
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___player_4)); }
	inline Player_t1147783557 * get_player_4() const { return ___player_4; }
	inline Player_t1147783557 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Player_t1147783557 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_gameLength_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___gameLength_5)); }
	inline float get_gameLength_5() const { return ___gameLength_5; }
	inline float* get_address_of_gameLength_5() { return &___gameLength_5; }
	inline void set_gameLength_5(float value)
	{
		___gameLength_5 = value;
	}

	inline static int32_t get_offset_of_currentLength_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___currentLength_6)); }
	inline float get_currentLength_6() const { return ___currentLength_6; }
	inline float* get_address_of_currentLength_6() { return &___currentLength_6; }
	inline void set_currentLength_6(float value)
	{
		___currentLength_6 = value;
	}

	inline static int32_t get_offset_of_progBarVals_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___progBarVals_7)); }
	inline Vector2_t2243707579  get_progBarVals_7() const { return ___progBarVals_7; }
	inline Vector2_t2243707579 * get_address_of_progBarVals_7() { return &___progBarVals_7; }
	inline void set_progBarVals_7(Vector2_t2243707579  value)
	{
		___progBarVals_7 = value;
	}

	inline static int32_t get_offset_of_progWings_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___progWings_8)); }
	inline Transform_t3275118058 * get_progWings_8() const { return ___progWings_8; }
	inline Transform_t3275118058 ** get_address_of_progWings_8() { return &___progWings_8; }
	inline void set_progWings_8(Transform_t3275118058 * value)
	{
		___progWings_8 = value;
		Il2CppCodeGenWriteBarrier(&___progWings_8, value);
	}

	inline static int32_t get_offset_of_progWingsPosition_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___progWingsPosition_9)); }
	inline Vector2_t2243707579  get_progWingsPosition_9() const { return ___progWingsPosition_9; }
	inline Vector2_t2243707579 * get_address_of_progWingsPosition_9() { return &___progWingsPosition_9; }
	inline void set_progWingsPosition_9(Vector2_t2243707579  value)
	{
		___progWingsPosition_9 = value;
	}

	inline static int32_t get_offset_of_lives_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___lives_10)); }
	inline GameObjectU5BU5D_t3057952154* get_lives_10() const { return ___lives_10; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_lives_10() { return &___lives_10; }
	inline void set_lives_10(GameObjectU5BU5D_t3057952154* value)
	{
		___lives_10 = value;
		Il2CppCodeGenWriteBarrier(&___lives_10, value);
	}

	inline static int32_t get_offset_of_cameraMain_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___cameraMain_11)); }
	inline Camera_t189460977 * get_cameraMain_11() const { return ___cameraMain_11; }
	inline Camera_t189460977 ** get_address_of_cameraMain_11() { return &___cameraMain_11; }
	inline void set_cameraMain_11(Camera_t189460977 * value)
	{
		___cameraMain_11 = value;
		Il2CppCodeGenWriteBarrier(&___cameraMain_11, value);
	}

	inline static int32_t get_offset_of_uiText_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___uiText_12)); }
	inline Text_t356221433 * get_uiText_12() const { return ___uiText_12; }
	inline Text_t356221433 ** get_address_of_uiText_12() { return &___uiText_12; }
	inline void set_uiText_12(Text_t356221433 * value)
	{
		___uiText_12 = value;
		Il2CppCodeGenWriteBarrier(&___uiText_12, value);
	}

	inline static int32_t get_offset_of_GOUI_13() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___GOUI_13)); }
	inline GameObject_t1756533147 * get_GOUI_13() const { return ___GOUI_13; }
	inline GameObject_t1756533147 ** get_address_of_GOUI_13() { return &___GOUI_13; }
	inline void set_GOUI_13(GameObject_t1756533147 * value)
	{
		___GOUI_13 = value;
		Il2CppCodeGenWriteBarrier(&___GOUI_13, value);
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::gameManager
	GameManager_t2252321495 * ___gameManager_14;

public:
	inline static int32_t get_offset_of_gameManager_14() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___gameManager_14)); }
	inline GameManager_t2252321495 * get_gameManager_14() const { return ___gameManager_14; }
	inline GameManager_t2252321495 ** get_address_of_gameManager_14() { return &___gameManager_14; }
	inline void set_gameManager_14(GameManager_t2252321495 * value)
	{
		___gameManager_14 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
