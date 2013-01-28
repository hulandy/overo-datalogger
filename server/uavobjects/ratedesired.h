/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup RateDesired RateDesired 
 * @brief Status for the matrix mixer showing the output of each mixer after all scaling
 *
 * Autogenerated files and functions for RateDesired Object
 
 * @{ 
 *
 * @file       ratedesired.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the RateDesired object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: ratedesired.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef RATEDESIRED_H
#define RATEDESIRED_H

// Object constants
#define RATEDESIRED_OBJID 0xCE8C826
#define RATEDESIRED_ISSINGLEINST 1
#define RATEDESIRED_ISSETTINGS 0
#define RATEDESIRED_NUMBYTES 12

// Generic interface functions
int32_t RateDesiredInitialize();
UAVObjHandle RateDesiredHandle();
void RateDesiredSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float Roll;
    float Pitch;
    float Yaw;

} __attribute__((packed)) __attribute__((aligned(4))) RateDesiredData;

// Typesafe Object access functions
/**
 * @function RateDesiredGet(dataOut)
 * @brief Populate a RateDesiredData object
 * @param[out] dataOut 
 */
static inline int32_t RateDesiredGet(RateDesiredData *dataOut) { return UAVObjGetData(RateDesiredHandle(), dataOut); }

static inline int32_t RateDesiredSet(const RateDesiredData *dataIn) { return UAVObjSetData(RateDesiredHandle(), dataIn); }

static inline int32_t RateDesiredInstGet(uint16_t instId, RateDesiredData *dataOut) { return UAVObjGetInstanceData(RateDesiredHandle(), instId, dataOut); }

static inline int32_t RateDesiredInstSet(uint16_t instId, const RateDesiredData *dataIn) { return UAVObjSetInstanceData(RateDesiredHandle(), instId, dataIn); }

static inline int32_t RateDesiredConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(RateDesiredHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t RateDesiredConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(RateDesiredHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t RateDesiredCreateInstance() { return UAVObjCreateInstance(RateDesiredHandle(), &RateDesiredSetDefaults); }

static inline void RateDesiredRequestUpdate() { UAVObjRequestUpdate(RateDesiredHandle()); }

static inline void RateDesiredRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(RateDesiredHandle(), instId); }

static inline void RateDesiredUpdated() { UAVObjUpdated(RateDesiredHandle()); }

static inline void RateDesiredInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(RateDesiredHandle(), instId); }

static inline int32_t RateDesiredGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(RateDesiredHandle(), dataOut); }

static inline int32_t RateDesiredSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(RateDesiredHandle(), dataIn); }

static inline int8_t RateDesiredReadOnly() { return UAVObjReadOnly(RateDesiredHandle()); }

// Field information
// Field Roll information
// Field Pitch information
// Field Yaw information


// set/Get functions
extern void RateDesiredRollSet( float *NewRoll );
extern void RateDesiredRollGet( float *NewRoll );
extern void RateDesiredPitchSet( float *NewPitch );
extern void RateDesiredPitchGet( float *NewPitch );
extern void RateDesiredYawSet( float *NewYaw );
extern void RateDesiredYawGet( float *NewYaw );


#endif // RATEDESIRED_H

/**
 * @}
 * @}
 */
