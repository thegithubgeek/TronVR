﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t2940878176;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonLagSimulationGui
struct  PhotonLagSimulationGui_t2028718096  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rect PhotonLagSimulationGui::WindowRect
	Rect_t3681755626  ___WindowRect_2;
	// System.Int32 PhotonLagSimulationGui::WindowId
	int32_t ___WindowId_3;
	// System.Boolean PhotonLagSimulationGui::Visible
	bool ___Visible_4;
	// ExitGames.Client.Photon.PhotonPeer PhotonLagSimulationGui::<Peer>k__BackingField
	PhotonPeer_t2940878176 * ___U3CPeerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_WindowRect_2() { return static_cast<int32_t>(offsetof(PhotonLagSimulationGui_t2028718096, ___WindowRect_2)); }
	inline Rect_t3681755626  get_WindowRect_2() const { return ___WindowRect_2; }
	inline Rect_t3681755626 * get_address_of_WindowRect_2() { return &___WindowRect_2; }
	inline void set_WindowRect_2(Rect_t3681755626  value)
	{
		___WindowRect_2 = value;
	}

	inline static int32_t get_offset_of_WindowId_3() { return static_cast<int32_t>(offsetof(PhotonLagSimulationGui_t2028718096, ___WindowId_3)); }
	inline int32_t get_WindowId_3() const { return ___WindowId_3; }
	inline int32_t* get_address_of_WindowId_3() { return &___WindowId_3; }
	inline void set_WindowId_3(int32_t value)
	{
		___WindowId_3 = value;
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(PhotonLagSimulationGui_t2028718096, ___Visible_4)); }
	inline bool get_Visible_4() const { return ___Visible_4; }
	inline bool* get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(bool value)
	{
		___Visible_4 = value;
	}

	inline static int32_t get_offset_of_U3CPeerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PhotonLagSimulationGui_t2028718096, ___U3CPeerU3Ek__BackingField_5)); }
	inline PhotonPeer_t2940878176 * get_U3CPeerU3Ek__BackingField_5() const { return ___U3CPeerU3Ek__BackingField_5; }
	inline PhotonPeer_t2940878176 ** get_address_of_U3CPeerU3Ek__BackingField_5() { return &___U3CPeerU3Ek__BackingField_5; }
	inline void set_U3CPeerU3Ek__BackingField_5(PhotonPeer_t2940878176 * value)
	{
		___U3CPeerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPeerU3Ek__BackingField_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
