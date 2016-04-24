/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup RateTorqueKF RateTorqueKF
 * @brief Output from the Rate Torque kalman filter
 *
 *
 * @file       ratetorquekf.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2015
 * @brief      Include files for the RateTorqueKF object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: ratetorquekf.xml. 
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

#ifndef RATETORQUEKF_H
#define RATETORQUEKF_H

#include "pios_queue.h"
#include "uavoversion.h"



// Object constants
#define RATETORQUEKF_OBJID 0xC1D9D1EE
#define RATETORQUEKF_ISSINGLEINST 1
#define RATETORQUEKF_ISSETTINGS 0
#define RATETORQUEKF_NUMBYTES 24

// Generic interface functions
int32_t RateTorqueKFInitialize();
UAVObjHandle RateTorqueKFHandle();
void RateTorqueKFSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float Rate[3];
    float Torque[3];

} __attribute__((packed)) __attribute__((aligned(4))) RateTorqueKFData;

// Typesafe Object access functions
/**
 * @function RateTorqueKFGet(dataOut)
 * @brief Populate a RateTorqueKFData object
 * @param[out] dataOut 
 */
static inline int32_t RateTorqueKFGet(RateTorqueKFData *dataOut) { return UAVObjGetData(RateTorqueKFHandle(), dataOut); }

static inline int32_t RateTorqueKFSet(const RateTorqueKFData *dataIn) { return UAVObjSetData(RateTorqueKFHandle(), dataIn); }

static inline int32_t RateTorqueKFInstGet(uint16_t instId, RateTorqueKFData *dataOut) { return UAVObjGetInstanceData(RateTorqueKFHandle(), instId, dataOut); }

static inline int32_t RateTorqueKFInstSet(uint16_t instId, const RateTorqueKFData *dataIn) { return UAVObjSetInstanceData(RateTorqueKFHandle(), instId, dataIn); }

static inline int32_t RateTorqueKFConnectQueue(struct pios_queue *queue) { return UAVObjConnectQueue(RateTorqueKFHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t RateTorqueKFConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(RateTorqueKFHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t RateTorqueKFCreateInstance() { return UAVObjCreateInstance(RateTorqueKFHandle(), &RateTorqueKFSetDefaults); }

static inline void RateTorqueKFRequestUpdate() { UAVObjRequestUpdate(RateTorqueKFHandle()); }

static inline void RateTorqueKFRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(RateTorqueKFHandle(), instId); }

static inline void RateTorqueKFUpdated() { UAVObjUpdated(RateTorqueKFHandle()); }

static inline void RateTorqueKFInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(RateTorqueKFHandle(), instId); }

static inline int32_t RateTorqueKFGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(RateTorqueKFHandle(), dataOut); }

static inline int32_t RateTorqueKFSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(RateTorqueKFHandle(), dataIn); }

static inline int8_t RateTorqueKFReadOnly() { return UAVObjReadOnly(RateTorqueKFHandle()); }

static inline uint16_t RateTorqueKFGetNumInstances(){ return UAVObjGetNumInstances(RateTorqueKFHandle()); }

static inline uint32_t RateTorqueKFGetNumBytes(){ return UAVObjGetNumBytes(RateTorqueKFHandle()); }

// Field information
// Field Rate information
/* Array element names for field Rate */
typedef enum { RATETORQUEKF_RATE_ROLL=0, RATETORQUEKF_RATE_PITCH=1, RATETORQUEKF_RATE_YAW=2 } __attribute__((packed)) RateTorqueKFRateElem;
/* Number of elements for field Rate */
#define RATETORQUEKF_RATE_NUMELEM 3
// Field Torque information
/* Array element names for field Torque */
typedef enum { RATETORQUEKF_TORQUE_ROLL=0, RATETORQUEKF_TORQUE_PITCH=1, RATETORQUEKF_TORQUE_YAW=2 } __attribute__((packed)) RateTorqueKFTorqueElem;
/* Number of elements for field Torque */
#define RATETORQUEKF_TORQUE_NUMELEM 3


// set/Get functions
extern void RateTorqueKFRateSet( float *NewRate );
extern void RateTorqueKFRateGet( float *NewRate );
extern void RateTorqueKFTorqueSet( float *NewTorque );
extern void RateTorqueKFTorqueGet( float *NewTorque );


#endif // RATETORQUEKF_H

/**
 * @}
 * @}
 */