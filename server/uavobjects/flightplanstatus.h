/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FlightPlanStatus FlightPlanStatus 
 * @brief Status of the flight plan script
 *
 * Autogenerated files and functions for FlightPlanStatus Object
 
 * @{ 
 *
 * @file       flightplanstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the FlightPlanStatus object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: flightplanstatus.xml. 
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

#ifndef FLIGHTPLANSTATUS_H
#define FLIGHTPLANSTATUS_H

// Object constants
#define FLIGHTPLANSTATUS_OBJID 0x2206EE46
#define FLIGHTPLANSTATUS_ISSINGLEINST 1
#define FLIGHTPLANSTATUS_ISSETTINGS 0
#define FLIGHTPLANSTATUS_NUMBYTES 18

// Generic interface functions
int32_t FlightPlanStatusInitialize();
UAVObjHandle FlightPlanStatusHandle();
void FlightPlanStatusSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint32_t ErrorFileID;
    uint32_t ErrorLineNum;
    float Debug[2];
    uint8_t Status;
    uint8_t ErrorType;

} __attribute__((packed)) __attribute__((aligned(4))) FlightPlanStatusData;

// Typesafe Object access functions
/**
 * @function FlightPlanStatusGet(dataOut)
 * @brief Populate a FlightPlanStatusData object
 * @param[out] dataOut 
 */
static inline int32_t FlightPlanStatusGet(FlightPlanStatusData *dataOut) { return UAVObjGetData(FlightPlanStatusHandle(), dataOut); }

static inline int32_t FlightPlanStatusSet(const FlightPlanStatusData *dataIn) { return UAVObjSetData(FlightPlanStatusHandle(), dataIn); }

static inline int32_t FlightPlanStatusInstGet(uint16_t instId, FlightPlanStatusData *dataOut) { return UAVObjGetInstanceData(FlightPlanStatusHandle(), instId, dataOut); }

static inline int32_t FlightPlanStatusInstSet(uint16_t instId, const FlightPlanStatusData *dataIn) { return UAVObjSetInstanceData(FlightPlanStatusHandle(), instId, dataIn); }

static inline int32_t FlightPlanStatusConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(FlightPlanStatusHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t FlightPlanStatusConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(FlightPlanStatusHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t FlightPlanStatusCreateInstance() { return UAVObjCreateInstance(FlightPlanStatusHandle(), &FlightPlanStatusSetDefaults); }

static inline void FlightPlanStatusRequestUpdate() { UAVObjRequestUpdate(FlightPlanStatusHandle()); }

static inline void FlightPlanStatusRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(FlightPlanStatusHandle(), instId); }

static inline void FlightPlanStatusUpdated() { UAVObjUpdated(FlightPlanStatusHandle()); }

static inline void FlightPlanStatusInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(FlightPlanStatusHandle(), instId); }

static inline int32_t FlightPlanStatusGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(FlightPlanStatusHandle(), dataOut); }

static inline int32_t FlightPlanStatusSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(FlightPlanStatusHandle(), dataIn); }

static inline int8_t FlightPlanStatusReadOnly() { return UAVObjReadOnly(FlightPlanStatusHandle()); }

// Field information
// Field ErrorFileID information
// Field ErrorLineNum information
// Field Debug information
/* Number of elements for field Debug */
#define FLIGHTPLANSTATUS_DEBUG_NUMELEM 2
// Field Status information
/* Enumeration options for field Status */
typedef enum { FLIGHTPLANSTATUS_STATUS_STOPPED=0, FLIGHTPLANSTATUS_STATUS_RUNNING=1, FLIGHTPLANSTATUS_STATUS_ERROR=2 } FlightPlanStatusStatusOptions;
// Field ErrorType information
/* Enumeration options for field ErrorType */
typedef enum { FLIGHTPLANSTATUS_ERRORTYPE_NONE=0, FLIGHTPLANSTATUS_ERRORTYPE_VMINITERROR=1, FLIGHTPLANSTATUS_ERRORTYPE_EXCEPTION=2, FLIGHTPLANSTATUS_ERRORTYPE_IOERROR=3, FLIGHTPLANSTATUS_ERRORTYPE_DIVBYZERO=4, FLIGHTPLANSTATUS_ERRORTYPE_ASSERTERROR=5, FLIGHTPLANSTATUS_ERRORTYPE_ATTRIBUTEERROR=6, FLIGHTPLANSTATUS_ERRORTYPE_IMPORTERROR=7, FLIGHTPLANSTATUS_ERRORTYPE_INDEXERROR=8, FLIGHTPLANSTATUS_ERRORTYPE_KEYERROR=9, FLIGHTPLANSTATUS_ERRORTYPE_MEMORYERROR=10, FLIGHTPLANSTATUS_ERRORTYPE_NAMEERROR=11, FLIGHTPLANSTATUS_ERRORTYPE_SYNTAXERROR=12, FLIGHTPLANSTATUS_ERRORTYPE_SYSTEMERROR=13, FLIGHTPLANSTATUS_ERRORTYPE_TYPEERROR=14, FLIGHTPLANSTATUS_ERRORTYPE_VALUEERROR=15, FLIGHTPLANSTATUS_ERRORTYPE_STOPITERATION=16, FLIGHTPLANSTATUS_ERRORTYPE_WARNING=17, FLIGHTPLANSTATUS_ERRORTYPE_UNKNOWNERROR=18 } FlightPlanStatusErrorTypeOptions;


// set/Get functions
extern void FlightPlanStatusErrorFileIDSet( uint32_t *NewErrorFileID );
extern void FlightPlanStatusErrorFileIDGet( uint32_t *NewErrorFileID );
extern void FlightPlanStatusErrorLineNumSet( uint32_t *NewErrorLineNum );
extern void FlightPlanStatusErrorLineNumGet( uint32_t *NewErrorLineNum );
extern void FlightPlanStatusDebugSet( float *NewDebug );
extern void FlightPlanStatusDebugGet( float *NewDebug );
extern void FlightPlanStatusStatusSet( uint8_t *NewStatus );
extern void FlightPlanStatusStatusGet( uint8_t *NewStatus );
extern void FlightPlanStatusErrorTypeSet( uint8_t *NewErrorType );
extern void FlightPlanStatusErrorTypeGet( uint8_t *NewErrorType );


#endif // FLIGHTPLANSTATUS_H

/**
 * @}
 * @}
 */
