/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup GroundTruth GroundTruth 
 * @brief Ground truth data output by a simulator.
 *
 * Autogenerated files and functions for GroundTruth Object
 
 * @{ 
 *
 * @file       groundtruth.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the GroundTruth object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: groundtruth.xml. 
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

#ifndef GROUNDTRUTH_H
#define GROUNDTRUTH_H

// Object constants
#define GROUNDTRUTH_OBJID 0xF178DCA8
#define GROUNDTRUTH_ISSINGLEINST 1
#define GROUNDTRUTH_ISSETTINGS 0
#define GROUNDTRUTH_NUMBYTES 76

// Generic interface functions
int32_t GroundTruthInitialize();
UAVObjHandle GroundTruthHandle();
void GroundTruthSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float AccelerationXYZ[3];
    float PositionNED[3];
    float VelocityNED[3];
    float RPY[3];
    float AngularRates[3];
    float TrueAirspeed;
    float CalibratedAirspeed;
    float AngleOfAttack;
    float AngleOfSlip;

} __attribute__((packed)) __attribute__((aligned(4))) GroundTruthData;

// Typesafe Object access functions
/**
 * @function GroundTruthGet(dataOut)
 * @brief Populate a GroundTruthData object
 * @param[out] dataOut 
 */
static inline int32_t GroundTruthGet(GroundTruthData *dataOut) { return UAVObjGetData(GroundTruthHandle(), dataOut); }

static inline int32_t GroundTruthSet(const GroundTruthData *dataIn) { return UAVObjSetData(GroundTruthHandle(), dataIn); }

static inline int32_t GroundTruthInstGet(uint16_t instId, GroundTruthData *dataOut) { return UAVObjGetInstanceData(GroundTruthHandle(), instId, dataOut); }

static inline int32_t GroundTruthInstSet(uint16_t instId, const GroundTruthData *dataIn) { return UAVObjSetInstanceData(GroundTruthHandle(), instId, dataIn); }

static inline int32_t GroundTruthConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(GroundTruthHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t GroundTruthConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(GroundTruthHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t GroundTruthCreateInstance() { return UAVObjCreateInstance(GroundTruthHandle(), &GroundTruthSetDefaults); }

static inline void GroundTruthRequestUpdate() { UAVObjRequestUpdate(GroundTruthHandle()); }

static inline void GroundTruthRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(GroundTruthHandle(), instId); }

static inline void GroundTruthUpdated() { UAVObjUpdated(GroundTruthHandle()); }

static inline void GroundTruthInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(GroundTruthHandle(), instId); }

static inline int32_t GroundTruthGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(GroundTruthHandle(), dataOut); }

static inline int32_t GroundTruthSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(GroundTruthHandle(), dataIn); }

static inline int8_t GroundTruthReadOnly() { return UAVObjReadOnly(GroundTruthHandle()); }

// Field information
// Field AccelerationXYZ information
/* Number of elements for field AccelerationXYZ */
#define GROUNDTRUTH_ACCELERATIONXYZ_NUMELEM 3
// Field PositionNED information
/* Number of elements for field PositionNED */
#define GROUNDTRUTH_POSITIONNED_NUMELEM 3
// Field VelocityNED information
/* Number of elements for field VelocityNED */
#define GROUNDTRUTH_VELOCITYNED_NUMELEM 3
// Field RPY information
/* Number of elements for field RPY */
#define GROUNDTRUTH_RPY_NUMELEM 3
// Field AngularRates information
/* Number of elements for field AngularRates */
#define GROUNDTRUTH_ANGULARRATES_NUMELEM 3
// Field TrueAirspeed information
// Field CalibratedAirspeed information
// Field AngleOfAttack information
// Field AngleOfSlip information


// set/Get functions
extern void GroundTruthAccelerationXYZSet( float *NewAccelerationXYZ );
extern void GroundTruthAccelerationXYZGet( float *NewAccelerationXYZ );
extern void GroundTruthPositionNEDSet( float *NewPositionNED );
extern void GroundTruthPositionNEDGet( float *NewPositionNED );
extern void GroundTruthVelocityNEDSet( float *NewVelocityNED );
extern void GroundTruthVelocityNEDGet( float *NewVelocityNED );
extern void GroundTruthRPYSet( float *NewRPY );
extern void GroundTruthRPYGet( float *NewRPY );
extern void GroundTruthAngularRatesSet( float *NewAngularRates );
extern void GroundTruthAngularRatesGet( float *NewAngularRates );
extern void GroundTruthTrueAirspeedSet( float *NewTrueAirspeed );
extern void GroundTruthTrueAirspeedGet( float *NewTrueAirspeed );
extern void GroundTruthCalibratedAirspeedSet( float *NewCalibratedAirspeed );
extern void GroundTruthCalibratedAirspeedGet( float *NewCalibratedAirspeed );
extern void GroundTruthAngleOfAttackSet( float *NewAngleOfAttack );
extern void GroundTruthAngleOfAttackGet( float *NewAngleOfAttack );
extern void GroundTruthAngleOfSlipSet( float *NewAngleOfSlip );
extern void GroundTruthAngleOfSlipGet( float *NewAngleOfSlip );


#endif // GROUNDTRUTH_H

/**
 * @}
 * @}
 */
