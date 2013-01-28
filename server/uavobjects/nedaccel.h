/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup NedAccel NedAccel 
 * @brief The projection of acceleration in the NED reference frame used by @ref Guidance.
 *
 * Autogenerated files and functions for NedAccel Object
 
 * @{ 
 *
 * @file       nedaccel.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the NedAccel object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: nedaccel.xml. 
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

#ifndef NEDACCEL_H
#define NEDACCEL_H

// Object constants
#define NEDACCEL_OBJID 0x7C7F5BC0
#define NEDACCEL_ISSINGLEINST 1
#define NEDACCEL_ISSETTINGS 0
#define NEDACCEL_NUMBYTES 12

// Generic interface functions
int32_t NedAccelInitialize();
UAVObjHandle NedAccelHandle();
void NedAccelSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float North;
    float East;
    float Down;

} __attribute__((packed)) __attribute__((aligned(4))) NedAccelData;

// Typesafe Object access functions
/**
 * @function NedAccelGet(dataOut)
 * @brief Populate a NedAccelData object
 * @param[out] dataOut 
 */
static inline int32_t NedAccelGet(NedAccelData *dataOut) { return UAVObjGetData(NedAccelHandle(), dataOut); }

static inline int32_t NedAccelSet(const NedAccelData *dataIn) { return UAVObjSetData(NedAccelHandle(), dataIn); }

static inline int32_t NedAccelInstGet(uint16_t instId, NedAccelData *dataOut) { return UAVObjGetInstanceData(NedAccelHandle(), instId, dataOut); }

static inline int32_t NedAccelInstSet(uint16_t instId, const NedAccelData *dataIn) { return UAVObjSetInstanceData(NedAccelHandle(), instId, dataIn); }

static inline int32_t NedAccelConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(NedAccelHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t NedAccelConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(NedAccelHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t NedAccelCreateInstance() { return UAVObjCreateInstance(NedAccelHandle(), &NedAccelSetDefaults); }

static inline void NedAccelRequestUpdate() { UAVObjRequestUpdate(NedAccelHandle()); }

static inline void NedAccelRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(NedAccelHandle(), instId); }

static inline void NedAccelUpdated() { UAVObjUpdated(NedAccelHandle()); }

static inline void NedAccelInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(NedAccelHandle(), instId); }

static inline int32_t NedAccelGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(NedAccelHandle(), dataOut); }

static inline int32_t NedAccelSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(NedAccelHandle(), dataIn); }

static inline int8_t NedAccelReadOnly() { return UAVObjReadOnly(NedAccelHandle()); }

// Field information
// Field North information
// Field East information
// Field Down information


// set/Get functions
extern void NedAccelNorthSet( float *NewNorth );
extern void NedAccelNorthGet( float *NewNorth );
extern void NedAccelEastSet( float *NewEast );
extern void NedAccelEastGet( float *NewEast );
extern void NedAccelDownSet( float *NewDown );
extern void NedAccelDownGet( float *NewDown );


#endif // NEDACCEL_H

/**
 * @}
 * @}
 */
