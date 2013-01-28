/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup AltHoldSmoothed AltHoldSmoothed 
 * @brief The output on the kalman filter on altitude.
 *
 * Autogenerated files and functions for AltHoldSmoothed Object
 
 * @{ 
 *
 * @file       altholdsmoothed.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the AltHoldSmoothed object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: altholdsmoothed.xml. 
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

#ifndef ALTHOLDSMOOTHED_H
#define ALTHOLDSMOOTHED_H

// Object constants
#define ALTHOLDSMOOTHED_OBJID 0x2BC6B9D2
#define ALTHOLDSMOOTHED_ISSINGLEINST 1
#define ALTHOLDSMOOTHED_ISSETTINGS 0
#define ALTHOLDSMOOTHED_NUMBYTES 12

// Generic interface functions
int32_t AltHoldSmoothedInitialize();
UAVObjHandle AltHoldSmoothedHandle();
void AltHoldSmoothedSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float Altitude;
    float Velocity;
    float Accel;

} __attribute__((packed)) __attribute__((aligned(4))) AltHoldSmoothedData;

// Typesafe Object access functions
/**
 * @function AltHoldSmoothedGet(dataOut)
 * @brief Populate a AltHoldSmoothedData object
 * @param[out] dataOut 
 */
static inline int32_t AltHoldSmoothedGet(AltHoldSmoothedData *dataOut) { return UAVObjGetData(AltHoldSmoothedHandle(), dataOut); }

static inline int32_t AltHoldSmoothedSet(const AltHoldSmoothedData *dataIn) { return UAVObjSetData(AltHoldSmoothedHandle(), dataIn); }

static inline int32_t AltHoldSmoothedInstGet(uint16_t instId, AltHoldSmoothedData *dataOut) { return UAVObjGetInstanceData(AltHoldSmoothedHandle(), instId, dataOut); }

static inline int32_t AltHoldSmoothedInstSet(uint16_t instId, const AltHoldSmoothedData *dataIn) { return UAVObjSetInstanceData(AltHoldSmoothedHandle(), instId, dataIn); }

static inline int32_t AltHoldSmoothedConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(AltHoldSmoothedHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t AltHoldSmoothedConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(AltHoldSmoothedHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t AltHoldSmoothedCreateInstance() { return UAVObjCreateInstance(AltHoldSmoothedHandle(), &AltHoldSmoothedSetDefaults); }

static inline void AltHoldSmoothedRequestUpdate() { UAVObjRequestUpdate(AltHoldSmoothedHandle()); }

static inline void AltHoldSmoothedRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(AltHoldSmoothedHandle(), instId); }

static inline void AltHoldSmoothedUpdated() { UAVObjUpdated(AltHoldSmoothedHandle()); }

static inline void AltHoldSmoothedInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(AltHoldSmoothedHandle(), instId); }

static inline int32_t AltHoldSmoothedGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(AltHoldSmoothedHandle(), dataOut); }

static inline int32_t AltHoldSmoothedSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(AltHoldSmoothedHandle(), dataIn); }

static inline int8_t AltHoldSmoothedReadOnly() { return UAVObjReadOnly(AltHoldSmoothedHandle()); }

// Field information
// Field Altitude information
// Field Velocity information
// Field Accel information


// set/Get functions
extern void AltHoldSmoothedAltitudeSet( float *NewAltitude );
extern void AltHoldSmoothedAltitudeGet( float *NewAltitude );
extern void AltHoldSmoothedVelocitySet( float *NewVelocity );
extern void AltHoldSmoothedVelocityGet( float *NewVelocity );
extern void AltHoldSmoothedAccelSet( float *NewAccel );
extern void AltHoldSmoothedAccelGet( float *NewAccel );


#endif // ALTHOLDSMOOTHED_H

/**
 * @}
 * @}
 */
