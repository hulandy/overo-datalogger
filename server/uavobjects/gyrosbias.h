/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup GyrosBias GyrosBias 
 * @brief The online-estimate of gyro bias.
 *
 * Autogenerated files and functions for GyrosBias Object
 
 * @{ 
 *
 * @file       gyrosbias.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the GyrosBias object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: gyrosbias.xml. 
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

#ifndef GYROSBIAS_H
#define GYROSBIAS_H

// Object constants
#define GYROSBIAS_OBJID 0xE4B6F980
#define GYROSBIAS_ISSINGLEINST 1
#define GYROSBIAS_ISSETTINGS 0
#define GYROSBIAS_NUMBYTES 12

// Generic interface functions
int32_t GyrosBiasInitialize();
UAVObjHandle GyrosBiasHandle();
void GyrosBiasSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float x;
    float y;
    float z;

} __attribute__((packed)) __attribute__((aligned(4))) GyrosBiasData;

// Typesafe Object access functions
/**
 * @function GyrosBiasGet(dataOut)
 * @brief Populate a GyrosBiasData object
 * @param[out] dataOut 
 */
static inline int32_t GyrosBiasGet(GyrosBiasData *dataOut) { return UAVObjGetData(GyrosBiasHandle(), dataOut); }

static inline int32_t GyrosBiasSet(const GyrosBiasData *dataIn) { return UAVObjSetData(GyrosBiasHandle(), dataIn); }

static inline int32_t GyrosBiasInstGet(uint16_t instId, GyrosBiasData *dataOut) { return UAVObjGetInstanceData(GyrosBiasHandle(), instId, dataOut); }

static inline int32_t GyrosBiasInstSet(uint16_t instId, const GyrosBiasData *dataIn) { return UAVObjSetInstanceData(GyrosBiasHandle(), instId, dataIn); }

static inline int32_t GyrosBiasConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(GyrosBiasHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t GyrosBiasConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(GyrosBiasHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t GyrosBiasCreateInstance() { return UAVObjCreateInstance(GyrosBiasHandle(), &GyrosBiasSetDefaults); }

static inline void GyrosBiasRequestUpdate() { UAVObjRequestUpdate(GyrosBiasHandle()); }

static inline void GyrosBiasRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(GyrosBiasHandle(), instId); }

static inline void GyrosBiasUpdated() { UAVObjUpdated(GyrosBiasHandle()); }

static inline void GyrosBiasInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(GyrosBiasHandle(), instId); }

static inline int32_t GyrosBiasGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(GyrosBiasHandle(), dataOut); }

static inline int32_t GyrosBiasSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(GyrosBiasHandle(), dataIn); }

static inline int8_t GyrosBiasReadOnly() { return UAVObjReadOnly(GyrosBiasHandle()); }

// Field information
// Field x information
// Field y information
// Field z information


// set/Get functions
extern void GyrosBiasxSet( float *Newx );
extern void GyrosBiasxGet( float *Newx );
extern void GyrosBiasySet( float *Newy );
extern void GyrosBiasyGet( float *Newy );
extern void GyrosBiaszSet( float *Newz );
extern void GyrosBiaszGet( float *Newz );


#endif // GYROSBIAS_H

/**
 * @}
 * @}
 */
