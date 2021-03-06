/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup MixerSettings MixerSettings
 * @brief Settings for the @ref ActuatorModule that controls the channel assignments for the mixer based on AircraftType
 *
 *
 * @file       mixersettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2015
 * @brief      Include files for the MixerSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: mixersettings.xml. 
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

#ifndef MIXERSETTINGS_H
#define MIXERSETTINGS_H

#include "pios_queue.h"
#include "uavoversion.h"



// Object constants
#define MIXERSETTINGS_OBJID 0x4E485B94
#define MIXERSETTINGS_ISSINGLEINST 1
#define MIXERSETTINGS_ISSETTINGS 1
#define MIXERSETTINGS_NUMBYTES 101

// Generic interface functions
int32_t MixerSettingsInitialize();
UAVObjHandle MixerSettingsHandle();
void MixerSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float ThrottleCurve1[5];
    float ThrottleCurve2[5];
    uint8_t Curve2Source;
    uint8_t Mixer1Type;
    int8_t Mixer1Vector[5];
    uint8_t Mixer2Type;
    int8_t Mixer2Vector[5];
    uint8_t Mixer3Type;
    int8_t Mixer3Vector[5];
    uint8_t Mixer4Type;
    int8_t Mixer4Vector[5];
    uint8_t Mixer5Type;
    int8_t Mixer5Vector[5];
    uint8_t Mixer6Type;
    int8_t Mixer6Vector[5];
    uint8_t Mixer7Type;
    int8_t Mixer7Vector[5];
    uint8_t Mixer8Type;
    int8_t Mixer8Vector[5];
    uint8_t Mixer9Type;
    int8_t Mixer9Vector[5];
    uint8_t Mixer10Type;
    int8_t Mixer10Vector[5];

} __attribute__((packed)) __attribute__((aligned(4))) MixerSettingsData;

// Typesafe Object access functions
/**
 * @function MixerSettingsGet(dataOut)
 * @brief Populate a MixerSettingsData object
 * @param[out] dataOut 
 */
static inline int32_t MixerSettingsGet(MixerSettingsData *dataOut) { return UAVObjGetData(MixerSettingsHandle(), dataOut); }

static inline int32_t MixerSettingsSet(const MixerSettingsData *dataIn) { return UAVObjSetData(MixerSettingsHandle(), dataIn); }

static inline int32_t MixerSettingsInstGet(uint16_t instId, MixerSettingsData *dataOut) { return UAVObjGetInstanceData(MixerSettingsHandle(), instId, dataOut); }

static inline int32_t MixerSettingsInstSet(uint16_t instId, const MixerSettingsData *dataIn) { return UAVObjSetInstanceData(MixerSettingsHandle(), instId, dataIn); }

static inline int32_t MixerSettingsConnectQueue(struct pios_queue *queue) { return UAVObjConnectQueue(MixerSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t MixerSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(MixerSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t MixerSettingsCreateInstance() { return UAVObjCreateInstance(MixerSettingsHandle(), &MixerSettingsSetDefaults); }

static inline void MixerSettingsRequestUpdate() { UAVObjRequestUpdate(MixerSettingsHandle()); }

static inline void MixerSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(MixerSettingsHandle(), instId); }

static inline void MixerSettingsUpdated() { UAVObjUpdated(MixerSettingsHandle()); }

static inline void MixerSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(MixerSettingsHandle(), instId); }

static inline int32_t MixerSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(MixerSettingsHandle(), dataOut); }

static inline int32_t MixerSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(MixerSettingsHandle(), dataIn); }

static inline int8_t MixerSettingsReadOnly() { return UAVObjReadOnly(MixerSettingsHandle()); }

static inline uint16_t MixerSettingsGetNumInstances(){ return UAVObjGetNumInstances(MixerSettingsHandle()); }

static inline uint32_t MixerSettingsGetNumBytes(){ return UAVObjGetNumBytes(MixerSettingsHandle()); }

// Field information
// Field ThrottleCurve1 information
/* Array element names for field ThrottleCurve1 */
typedef enum { MIXERSETTINGS_THROTTLECURVE1_0=0, MIXERSETTINGS_THROTTLECURVE1_25=1, MIXERSETTINGS_THROTTLECURVE1_50=2, MIXERSETTINGS_THROTTLECURVE1_75=3, MIXERSETTINGS_THROTTLECURVE1_100=4 } __attribute__((packed)) MixerSettingsThrottleCurve1Elem;
/* Number of elements for field ThrottleCurve1 */
#define MIXERSETTINGS_THROTTLECURVE1_NUMELEM 5
// Field ThrottleCurve2 information
/* Array element names for field ThrottleCurve2 */
typedef enum { MIXERSETTINGS_THROTTLECURVE2_0=0, MIXERSETTINGS_THROTTLECURVE2_25=1, MIXERSETTINGS_THROTTLECURVE2_50=2, MIXERSETTINGS_THROTTLECURVE2_75=3, MIXERSETTINGS_THROTTLECURVE2_100=4 } __attribute__((packed)) MixerSettingsThrottleCurve2Elem;
/* Number of elements for field ThrottleCurve2 */
#define MIXERSETTINGS_THROTTLECURVE2_NUMELEM 5
// Field Curve2Source information
/* Enumeration options for field Curve2Source */
typedef enum { MIXERSETTINGS_CURVE2SOURCE_THROTTLE=0, MIXERSETTINGS_CURVE2SOURCE_ROLL=1, MIXERSETTINGS_CURVE2SOURCE_PITCH=2, MIXERSETTINGS_CURVE2SOURCE_YAW=3, MIXERSETTINGS_CURVE2SOURCE_COLLECTIVE=4, MIXERSETTINGS_CURVE2SOURCE_ACCESSORY0=5, MIXERSETTINGS_CURVE2SOURCE_ACCESSORY1=6, MIXERSETTINGS_CURVE2SOURCE_ACCESSORY2=7, MIXERSETTINGS_CURVE2SOURCE_ACCESSORY3=8, MIXERSETTINGS_CURVE2SOURCE_ACCESSORY4=9, MIXERSETTINGS_CURVE2SOURCE_ACCESSORY5=10 }  __attribute__((packed)) MixerSettingsCurve2SourceOptions;
/* Max value of any option in topmost parent Curve2Source of field Curve2Source */
#define MIXERSETTINGS_CURVE2SOURCE_GLOBAL_MAXOPTVAL 10
/* Max value of any option in field Curve2Source */
#define MIXERSETTINGS_CURVE2SOURCE_MAXOPTVAL 10
/* Ensure field Curve2Source contains valid data */
static inline bool MixerSettingsCurve2SourceIsValid( uint8_t CurrentCurve2Source ) { return CurrentCurve2Source < MIXERSETTINGS_CURVE2SOURCE_MAXOPTVAL; }
// Field Mixer1Type information
/* Enumeration options for field Mixer1Type */
typedef enum { MIXERSETTINGS_MIXER1TYPE_DISABLED=0, MIXERSETTINGS_MIXER1TYPE_MOTOR=1, MIXERSETTINGS_MIXER1TYPE_SERVO=2, MIXERSETTINGS_MIXER1TYPE_CAMERAROLL=3, MIXERSETTINGS_MIXER1TYPE_CAMERAPITCH=4, MIXERSETTINGS_MIXER1TYPE_CAMERAYAW=5, MIXERSETTINGS_MIXER1TYPE_ACCESSORY0=6, MIXERSETTINGS_MIXER1TYPE_ACCESSORY1=7, MIXERSETTINGS_MIXER1TYPE_ACCESSORY2=8, MIXERSETTINGS_MIXER1TYPE_ACCESSORY3=9, MIXERSETTINGS_MIXER1TYPE_ACCESSORY4=10, MIXERSETTINGS_MIXER1TYPE_ACCESSORY5=11 }  __attribute__((packed)) MixerSettingsMixer1TypeOptions;
/* Max value of any option in topmost parent Mixer1Type of field Mixer1Type */
#define MIXERSETTINGS_MIXER1TYPE_GLOBAL_MAXOPTVAL 11
/* Max value of any option in field Mixer1Type */
#define MIXERSETTINGS_MIXER1TYPE_MAXOPTVAL 11
/* Ensure field Mixer1Type contains valid data */
static inline bool MixerSettingsMixer1TypeIsValid( uint8_t CurrentMixer1Type ) { return CurrentMixer1Type < MIXERSETTINGS_MIXER1TYPE_MAXOPTVAL; }
// Field Mixer1Vector information
/* Array element names for field Mixer1Vector */
typedef enum { MIXERSETTINGS_MIXER1VECTOR_THROTTLECURVE1=0, MIXERSETTINGS_MIXER1VECTOR_THROTTLECURVE2=1, MIXERSETTINGS_MIXER1VECTOR_ROLL=2, MIXERSETTINGS_MIXER1VECTOR_PITCH=3, MIXERSETTINGS_MIXER1VECTOR_YAW=4 } __attribute__((packed)) MixerSettingsMixer1VectorElem;
/* Number of elements for field Mixer1Vector */
#define MIXERSETTINGS_MIXER1VECTOR_NUMELEM 5
// Field Mixer2Type information
/* Enumeration options for field Mixer2Type */
typedef enum { MIXERSETTINGS_MIXER2TYPE_DISABLED=0, MIXERSETTINGS_MIXER2TYPE_MOTOR=1, MIXERSETTINGS_MIXER2TYPE_SERVO=2, MIXERSETTINGS_MIXER2TYPE_CAMERAROLL=3, MIXERSETTINGS_MIXER2TYPE_CAMERAPITCH=4, MIXERSETTINGS_MIXER2TYPE_CAMERAYAW=5, MIXERSETTINGS_MIXER2TYPE_ACCESSORY0=6, MIXERSETTINGS_MIXER2TYPE_ACCESSORY1=7, MIXERSETTINGS_MIXER2TYPE_ACCESSORY2=8, MIXERSETTINGS_MIXER2TYPE_ACCESSORY3=9, MIXERSETTINGS_MIXER2TYPE_ACCESSORY4=10, MIXERSETTINGS_MIXER2TYPE_ACCESSORY5=11 }  __attribute__((packed)) MixerSettingsMixer2TypeOptions;
/* Max value of any option in topmost parent Mixer2Type of field Mixer2Type */
#define MIXERSETTINGS_MIXER2TYPE_GLOBAL_MAXOPTVAL 11
/* Max value of any option in field Mixer2Type */
#define MIXERSETTINGS_MIXER2TYPE_MAXOPTVAL 11
/* Ensure field Mixer2Type contains valid data */
static inline bool MixerSettingsMixer2TypeIsValid( uint8_t CurrentMixer2Type ) { return CurrentMixer2Type < MIXERSETTINGS_MIXER2TYPE_MAXOPTVAL; }
// Field Mixer2Vector information
/* Array element names for field Mixer2Vector */
typedef enum { MIXERSETTINGS_MIXER2VECTOR_THROTTLECURVE1=0, MIXERSETTINGS_MIXER2VECTOR_THROTTLECURVE2=1, MIXERSETTINGS_MIXER2VECTOR_ROLL=2, MIXERSETTINGS_MIXER2VECTOR_PITCH=3, MIXERSETTINGS_MIXER2VECTOR_YAW=4 } __attribute__((packed)) MixerSettingsMixer2VectorElem;
/* Number of elements for field Mixer2Vector */
#define MIXERSETTINGS_MIXER2VECTOR_NUMELEM 5
// Field Mixer3Type information
/* Enumeration options for field Mixer3Type */
typedef enum { MIXERSETTINGS_MIXER3TYPE_DISABLED=0, MIXERSETTINGS_MIXER3TYPE_MOTOR=1, MIXERSETTINGS_MIXER3TYPE_SERVO=2, MIXERSETTINGS_MIXER3TYPE_CAMERAROLL=3, MIXERSETTINGS_MIXER3TYPE_CAMERAPITCH=4, MIXERSETTINGS_MIXER3TYPE_CAMERAYAW=5, MIXERSETTINGS_MIXER3TYPE_ACCESSORY0=6, MIXERSETTINGS_MIXER3TYPE_ACCESSORY1=7, MIXERSETTINGS_MIXER3TYPE_ACCESSORY2=8, MIXERSETTINGS_MIXER3TYPE_ACCESSORY3=9, MIXERSETTINGS_MIXER3TYPE_ACCESSORY4=10, MIXERSETTINGS_MIXER3TYPE_ACCESSORY5=11 }  __attribute__((packed)) MixerSettingsMixer3TypeOptions;
/* Max value of any option in topmost parent Mixer3Type of field Mixer3Type */
#define MIXERSETTINGS_MIXER3TYPE_GLOBAL_MAXOPTVAL 11
/* Max value of any option in field Mixer3Type */
#define MIXERSETTINGS_MIXER3TYPE_MAXOPTVAL 11
/* Ensure field Mixer3Type contains valid data */
static inline bool MixerSettingsMixer3TypeIsValid( uint8_t CurrentMixer3Type ) { return CurrentMixer3Type < MIXERSETTINGS_MIXER3TYPE_MAXOPTVAL; }
// Field Mixer3Vector information
/* Array element names for field Mixer3Vector */
typedef enum { MIXERSETTINGS_MIXER3VECTOR_THROTTLECURVE1=0, MIXERSETTINGS_MIXER3VECTOR_THROTTLECURVE2=1, MIXERSETTINGS_MIXER3VECTOR_ROLL=2, MIXERSETTINGS_MIXER3VECTOR_PITCH=3, MIXERSETTINGS_MIXER3VECTOR_YAW=4 } __attribute__((packed)) MixerSettingsMixer3VectorElem;
/* Number of elements for field Mixer3Vector */
#define MIXERSETTINGS_MIXER3VECTOR_NUMELEM 5
// Field Mixer4Type information
/* Enumeration options for field Mixer4Type */
typedef enum { MIXERSETTINGS_MIXER4TYPE_DISABLED=0, MIXERSETTINGS_MIXER4TYPE_MOTOR=1, MIXERSETTINGS_MIXER4TYPE_SERVO=2, MIXERSETTINGS_MIXER4TYPE_CAMERAROLL=3, MIXERSETTINGS_MIXER4TYPE_CAMERAPITCH=4, MIXERSETTINGS_MIXER4TYPE_CAMERAYAW=5, MIXERSETTINGS_MIXER4TYPE_ACCESSORY0=6, MIXERSETTINGS_MIXER4TYPE_ACCESSORY1=7, MIXERSETTINGS_MIXER4TYPE_ACCESSORY2=8, MIXERSETTINGS_MIXER4TYPE_ACCESSORY3=9, MIXERSETTINGS_MIXER4TYPE_ACCESSORY4=10, MIXERSETTINGS_MIXER4TYPE_ACCESSORY5=11 }  __attribute__((packed)) MixerSettingsMixer4TypeOptions;
/* Max value of any option in topmost parent Mixer4Type of field Mixer4Type */
#define MIXERSETTINGS_MIXER4TYPE_GLOBAL_MAXOPTVAL 11
/* Max value of any option in field Mixer4Type */
#define MIXERSETTINGS_MIXER4TYPE_MAXOPTVAL 11
/* Ensure field Mixer4Type contains valid data */
static inline bool MixerSettingsMixer4TypeIsValid( uint8_t CurrentMixer4Type ) { return CurrentMixer4Type < MIXERSETTINGS_MIXER4TYPE_MAXOPTVAL; }
// Field Mixer4Vector information
/* Array element names for field Mixer4Vector */
typedef enum { MIXERSETTINGS_MIXER4VECTOR_THROTTLECURVE1=0, MIXERSETTINGS_MIXER4VECTOR_THROTTLECURVE2=1, MIXERSETTINGS_MIXER4VECTOR_ROLL=2, MIXERSETTINGS_MIXER4VECTOR_PITCH=3, MIXERSETTINGS_MIXER4VECTOR_YAW=4 } __attribute__((packed)) MixerSettingsMixer4VectorElem;
/* Number of elements for field Mixer4Vector */
#define MIXERSETTINGS_MIXER4VECTOR_NUMELEM 5
// Field Mixer5Type information
/* Enumeration options for field Mixer5Type */
typedef enum { MIXERSETTINGS_MIXER5TYPE_DISABLED=0, MIXERSETTINGS_MIXER5TYPE_MOTOR=1, MIXERSETTINGS_MIXER5TYPE_SERVO=2, MIXERSETTINGS_MIXER5TYPE_CAMERAROLL=3, MIXERSETTINGS_MIXER5TYPE_CAMERAPITCH=4, MIXERSETTINGS_MIXER5TYPE_CAMERAYAW=5, MIXERSETTINGS_MIXER5TYPE_ACCESSORY0=6, MIXERSETTINGS_MIXER5TYPE_ACCESSORY1=7, MIXERSETTINGS_MIXER5TYPE_ACCESSORY2=8, MIXERSETTINGS_MIXER5TYPE_ACCESSORY3=9, MIXERSETTINGS_MIXER5TYPE_ACCESSORY4=10, MIXERSETTINGS_MIXER5TYPE_ACCESSORY5=11 }  __attribute__((packed)) MixerSettingsMixer5TypeOptions;
/* Max value of any option in topmost parent Mixer5Type of field Mixer5Type */
#define MIXERSETTINGS_MIXER5TYPE_GLOBAL_MAXOPTVAL 11
/* Max value of any option in field Mixer5Type */
#define MIXERSETTINGS_MIXER5TYPE_MAXOPTVAL 11
/* Ensure field Mixer5Type contains valid data */
static inline bool MixerSettingsMixer5TypeIsValid( uint8_t CurrentMixer5Type ) { return CurrentMixer5Type < MIXERSETTINGS_MIXER5TYPE_MAXOPTVAL; }
// Field Mixer5Vector information
/* Array element names for field Mixer5Vector */
typedef enum { MIXERSETTINGS_MIXER5VECTOR_THROTTLECURVE1=0, MIXERSETTINGS_MIXER5VECTOR_THROTTLECURVE2=1, MIXERSETTINGS_MIXER5VECTOR_ROLL=2, MIXERSETTINGS_MIXER5VECTOR_PITCH=3, MIXERSETTINGS_MIXER5VECTOR_YAW=4 } __attribute__((packed)) MixerSettingsMixer5VectorElem;
/* Number of elements for field Mixer5Vector */
#define MIXERSETTINGS_MIXER5VECTOR_NUMELEM 5
// Field Mixer6Type information
/* Enumeration options for field Mixer6Type */
typedef enum { MIXERSETTINGS_MIXER6TYPE_DISABLED=0, MIXERSETTINGS_MIXER6TYPE_MOTOR=1, MIXERSETTINGS_MIXER6TYPE_SERVO=2, MIXERSETTINGS_MIXER6TYPE_CAMERAROLL=3, MIXERSETTINGS_MIXER6TYPE_CAMERAPITCH=4, MIXERSETTINGS_MIXER6TYPE_CAMERAYAW=5, MIXERSETTINGS_MIXER6TYPE_ACCESSORY0=6, MIXERSETTINGS_MIXER6TYPE_ACCESSORY1=7, MIXERSETTINGS_MIXER6TYPE_ACCESSORY2=8, MIXERSETTINGS_MIXER6TYPE_ACCESSORY3=9, MIXERSETTINGS_MIXER6TYPE_ACCESSORY4=10, MIXERSETTINGS_MIXER6TYPE_ACCESSORY5=11 }  __attribute__((packed)) MixerSettingsMixer6TypeOptions;
/* Max value of any option in topmost parent Mixer6Type of field Mixer6Type */
#define MIXERSETTINGS_MIXER6TYPE_GLOBAL_MAXOPTVAL 11
/* Max value of any option in field Mixer6Type */
#define MIXERSETTINGS_MIXER6TYPE_MAXOPTVAL 11
/* Ensure field Mixer6Type contains valid data */
static inline bool MixerSettingsMixer6TypeIsValid( uint8_t CurrentMixer6Type ) { return CurrentMixer6Type < MIXERSETTINGS_MIXER6TYPE_MAXOPTVAL; }
// Field Mixer6Vector information
/* Array element names for field Mixer6Vector */
typedef enum { MIXERSETTINGS_MIXER6VECTOR_THROTTLECURVE1=0, MIXERSETTINGS_MIXER6VECTOR_THROTTLECURVE2=1, MIXERSETTINGS_MIXER6VECTOR_ROLL=2, MIXERSETTINGS_MIXER6VECTOR_PITCH=3, MIXERSETTINGS_MIXER6VECTOR_YAW=4 } __attribute__((packed)) MixerSettingsMixer6VectorElem;
/* Number of elements for field Mixer6Vector */
#define MIXERSETTINGS_MIXER6VECTOR_NUMELEM 5
// Field Mixer7Type information
/* Enumeration options for field Mixer7Type */
typedef enum { MIXERSETTINGS_MIXER7TYPE_DISABLED=0, MIXERSETTINGS_MIXER7TYPE_MOTOR=1, MIXERSETTINGS_MIXER7TYPE_SERVO=2, MIXERSETTINGS_MIXER7TYPE_CAMERAROLL=3, MIXERSETTINGS_MIXER7TYPE_CAMERAPITCH=4, MIXERSETTINGS_MIXER7TYPE_CAMERAYAW=5, MIXERSETTINGS_MIXER7TYPE_ACCESSORY0=6, MIXERSETTINGS_MIXER7TYPE_ACCESSORY1=7, MIXERSETTINGS_MIXER7TYPE_ACCESSORY2=8, MIXERSETTINGS_MIXER7TYPE_ACCESSORY3=9, MIXERSETTINGS_MIXER7TYPE_ACCESSORY4=10, MIXERSETTINGS_MIXER7TYPE_ACCESSORY5=11 }  __attribute__((packed)) MixerSettingsMixer7TypeOptions;
/* Max value of any option in topmost parent Mixer7Type of field Mixer7Type */
#define MIXERSETTINGS_MIXER7TYPE_GLOBAL_MAXOPTVAL 11
/* Max value of any option in field Mixer7Type */
#define MIXERSETTINGS_MIXER7TYPE_MAXOPTVAL 11
/* Ensure field Mixer7Type contains valid data */
static inline bool MixerSettingsMixer7TypeIsValid( uint8_t CurrentMixer7Type ) { return CurrentMixer7Type < MIXERSETTINGS_MIXER7TYPE_MAXOPTVAL; }
// Field Mixer7Vector information
/* Array element names for field Mixer7Vector */
typedef enum { MIXERSETTINGS_MIXER7VECTOR_THROTTLECURVE1=0, MIXERSETTINGS_MIXER7VECTOR_THROTTLECURVE2=1, MIXERSETTINGS_MIXER7VECTOR_ROLL=2, MIXERSETTINGS_MIXER7VECTOR_PITCH=3, MIXERSETTINGS_MIXER7VECTOR_YAW=4 } __attribute__((packed)) MixerSettingsMixer7VectorElem;
/* Number of elements for field Mixer7Vector */
#define MIXERSETTINGS_MIXER7VECTOR_NUMELEM 5
// Field Mixer8Type information
/* Enumeration options for field Mixer8Type */
typedef enum { MIXERSETTINGS_MIXER8TYPE_DISABLED=0, MIXERSETTINGS_MIXER8TYPE_MOTOR=1, MIXERSETTINGS_MIXER8TYPE_SERVO=2, MIXERSETTINGS_MIXER8TYPE_CAMERAROLL=3, MIXERSETTINGS_MIXER8TYPE_CAMERAPITCH=4, MIXERSETTINGS_MIXER8TYPE_CAMERAYAW=5, MIXERSETTINGS_MIXER8TYPE_ACCESSORY0=6, MIXERSETTINGS_MIXER8TYPE_ACCESSORY1=7, MIXERSETTINGS_MIXER8TYPE_ACCESSORY2=8, MIXERSETTINGS_MIXER8TYPE_ACCESSORY3=9, MIXERSETTINGS_MIXER8TYPE_ACCESSORY4=10, MIXERSETTINGS_MIXER8TYPE_ACCESSORY5=11 }  __attribute__((packed)) MixerSettingsMixer8TypeOptions;
/* Max value of any option in topmost parent Mixer8Type of field Mixer8Type */
#define MIXERSETTINGS_MIXER8TYPE_GLOBAL_MAXOPTVAL 11
/* Max value of any option in field Mixer8Type */
#define MIXERSETTINGS_MIXER8TYPE_MAXOPTVAL 11
/* Ensure field Mixer8Type contains valid data */
static inline bool MixerSettingsMixer8TypeIsValid( uint8_t CurrentMixer8Type ) { return CurrentMixer8Type < MIXERSETTINGS_MIXER8TYPE_MAXOPTVAL; }
// Field Mixer8Vector information
/* Array element names for field Mixer8Vector */
typedef enum { MIXERSETTINGS_MIXER8VECTOR_THROTTLECURVE1=0, MIXERSETTINGS_MIXER8VECTOR_THROTTLECURVE2=1, MIXERSETTINGS_MIXER8VECTOR_ROLL=2, MIXERSETTINGS_MIXER8VECTOR_PITCH=3, MIXERSETTINGS_MIXER8VECTOR_YAW=4 } __attribute__((packed)) MixerSettingsMixer8VectorElem;
/* Number of elements for field Mixer8Vector */
#define MIXERSETTINGS_MIXER8VECTOR_NUMELEM 5
// Field Mixer9Type information
/* Enumeration options for field Mixer9Type */
typedef enum { MIXERSETTINGS_MIXER9TYPE_DISABLED=0, MIXERSETTINGS_MIXER9TYPE_MOTOR=1, MIXERSETTINGS_MIXER9TYPE_SERVO=2, MIXERSETTINGS_MIXER9TYPE_CAMERAROLL=3, MIXERSETTINGS_MIXER9TYPE_CAMERAPITCH=4, MIXERSETTINGS_MIXER9TYPE_CAMERAYAW=5, MIXERSETTINGS_MIXER9TYPE_ACCESSORY0=6, MIXERSETTINGS_MIXER9TYPE_ACCESSORY1=7, MIXERSETTINGS_MIXER9TYPE_ACCESSORY2=8, MIXERSETTINGS_MIXER9TYPE_ACCESSORY3=9, MIXERSETTINGS_MIXER9TYPE_ACCESSORY4=10, MIXERSETTINGS_MIXER9TYPE_ACCESSORY5=11 }  __attribute__((packed)) MixerSettingsMixer9TypeOptions;
/* Max value of any option in topmost parent Mixer9Type of field Mixer9Type */
#define MIXERSETTINGS_MIXER9TYPE_GLOBAL_MAXOPTVAL 11
/* Max value of any option in field Mixer9Type */
#define MIXERSETTINGS_MIXER9TYPE_MAXOPTVAL 11
/* Ensure field Mixer9Type contains valid data */
static inline bool MixerSettingsMixer9TypeIsValid( uint8_t CurrentMixer9Type ) { return CurrentMixer9Type < MIXERSETTINGS_MIXER9TYPE_MAXOPTVAL; }
// Field Mixer9Vector information
/* Array element names for field Mixer9Vector */
typedef enum { MIXERSETTINGS_MIXER9VECTOR_THROTTLECURVE1=0, MIXERSETTINGS_MIXER9VECTOR_THROTTLECURVE2=1, MIXERSETTINGS_MIXER9VECTOR_ROLL=2, MIXERSETTINGS_MIXER9VECTOR_PITCH=3, MIXERSETTINGS_MIXER9VECTOR_YAW=4 } __attribute__((packed)) MixerSettingsMixer9VectorElem;
/* Number of elements for field Mixer9Vector */
#define MIXERSETTINGS_MIXER9VECTOR_NUMELEM 5
// Field Mixer10Type information
/* Enumeration options for field Mixer10Type */
typedef enum { MIXERSETTINGS_MIXER10TYPE_DISABLED=0, MIXERSETTINGS_MIXER10TYPE_MOTOR=1, MIXERSETTINGS_MIXER10TYPE_SERVO=2, MIXERSETTINGS_MIXER10TYPE_CAMERAROLL=3, MIXERSETTINGS_MIXER10TYPE_CAMERAPITCH=4, MIXERSETTINGS_MIXER10TYPE_CAMERAYAW=5, MIXERSETTINGS_MIXER10TYPE_ACCESSORY0=6, MIXERSETTINGS_MIXER10TYPE_ACCESSORY1=7, MIXERSETTINGS_MIXER10TYPE_ACCESSORY2=8, MIXERSETTINGS_MIXER10TYPE_ACCESSORY3=9, MIXERSETTINGS_MIXER10TYPE_ACCESSORY4=10, MIXERSETTINGS_MIXER10TYPE_ACCESSORY5=11 }  __attribute__((packed)) MixerSettingsMixer10TypeOptions;
/* Max value of any option in topmost parent Mixer10Type of field Mixer10Type */
#define MIXERSETTINGS_MIXER10TYPE_GLOBAL_MAXOPTVAL 11
/* Max value of any option in field Mixer10Type */
#define MIXERSETTINGS_MIXER10TYPE_MAXOPTVAL 11
/* Ensure field Mixer10Type contains valid data */
static inline bool MixerSettingsMixer10TypeIsValid( uint8_t CurrentMixer10Type ) { return CurrentMixer10Type < MIXERSETTINGS_MIXER10TYPE_MAXOPTVAL; }
// Field Mixer10Vector information
/* Array element names for field Mixer10Vector */
typedef enum { MIXERSETTINGS_MIXER10VECTOR_THROTTLECURVE1=0, MIXERSETTINGS_MIXER10VECTOR_THROTTLECURVE2=1, MIXERSETTINGS_MIXER10VECTOR_ROLL=2, MIXERSETTINGS_MIXER10VECTOR_PITCH=3, MIXERSETTINGS_MIXER10VECTOR_YAW=4 } __attribute__((packed)) MixerSettingsMixer10VectorElem;
/* Number of elements for field Mixer10Vector */
#define MIXERSETTINGS_MIXER10VECTOR_NUMELEM 5


// set/Get functions
extern void MixerSettingsThrottleCurve1Set( float *NewThrottleCurve1 );
extern void MixerSettingsThrottleCurve1Get( float *NewThrottleCurve1 );
extern void MixerSettingsThrottleCurve2Set( float *NewThrottleCurve2 );
extern void MixerSettingsThrottleCurve2Get( float *NewThrottleCurve2 );
extern void MixerSettingsCurve2SourceSet( uint8_t *NewCurve2Source );
extern void MixerSettingsCurve2SourceGet( uint8_t *NewCurve2Source );
extern void MixerSettingsMixer1TypeSet( uint8_t *NewMixer1Type );
extern void MixerSettingsMixer1TypeGet( uint8_t *NewMixer1Type );
extern void MixerSettingsMixer1VectorSet( int8_t *NewMixer1Vector );
extern void MixerSettingsMixer1VectorGet( int8_t *NewMixer1Vector );
extern void MixerSettingsMixer2TypeSet( uint8_t *NewMixer2Type );
extern void MixerSettingsMixer2TypeGet( uint8_t *NewMixer2Type );
extern void MixerSettingsMixer2VectorSet( int8_t *NewMixer2Vector );
extern void MixerSettingsMixer2VectorGet( int8_t *NewMixer2Vector );
extern void MixerSettingsMixer3TypeSet( uint8_t *NewMixer3Type );
extern void MixerSettingsMixer3TypeGet( uint8_t *NewMixer3Type );
extern void MixerSettingsMixer3VectorSet( int8_t *NewMixer3Vector );
extern void MixerSettingsMixer3VectorGet( int8_t *NewMixer3Vector );
extern void MixerSettingsMixer4TypeSet( uint8_t *NewMixer4Type );
extern void MixerSettingsMixer4TypeGet( uint8_t *NewMixer4Type );
extern void MixerSettingsMixer4VectorSet( int8_t *NewMixer4Vector );
extern void MixerSettingsMixer4VectorGet( int8_t *NewMixer4Vector );
extern void MixerSettingsMixer5TypeSet( uint8_t *NewMixer5Type );
extern void MixerSettingsMixer5TypeGet( uint8_t *NewMixer5Type );
extern void MixerSettingsMixer5VectorSet( int8_t *NewMixer5Vector );
extern void MixerSettingsMixer5VectorGet( int8_t *NewMixer5Vector );
extern void MixerSettingsMixer6TypeSet( uint8_t *NewMixer6Type );
extern void MixerSettingsMixer6TypeGet( uint8_t *NewMixer6Type );
extern void MixerSettingsMixer6VectorSet( int8_t *NewMixer6Vector );
extern void MixerSettingsMixer6VectorGet( int8_t *NewMixer6Vector );
extern void MixerSettingsMixer7TypeSet( uint8_t *NewMixer7Type );
extern void MixerSettingsMixer7TypeGet( uint8_t *NewMixer7Type );
extern void MixerSettingsMixer7VectorSet( int8_t *NewMixer7Vector );
extern void MixerSettingsMixer7VectorGet( int8_t *NewMixer7Vector );
extern void MixerSettingsMixer8TypeSet( uint8_t *NewMixer8Type );
extern void MixerSettingsMixer8TypeGet( uint8_t *NewMixer8Type );
extern void MixerSettingsMixer8VectorSet( int8_t *NewMixer8Vector );
extern void MixerSettingsMixer8VectorGet( int8_t *NewMixer8Vector );
extern void MixerSettingsMixer9TypeSet( uint8_t *NewMixer9Type );
extern void MixerSettingsMixer9TypeGet( uint8_t *NewMixer9Type );
extern void MixerSettingsMixer9VectorSet( int8_t *NewMixer9Vector );
extern void MixerSettingsMixer9VectorGet( int8_t *NewMixer9Vector );
extern void MixerSettingsMixer10TypeSet( uint8_t *NewMixer10Type );
extern void MixerSettingsMixer10TypeGet( uint8_t *NewMixer10Type );
extern void MixerSettingsMixer10VectorSet( int8_t *NewMixer10Vector );
extern void MixerSettingsMixer10VectorGet( int8_t *NewMixer10Vector );


#endif // MIXERSETTINGS_H

/**
 * @}
 * @}
 */
