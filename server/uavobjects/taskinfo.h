/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup TaskInfo TaskInfo 
 * @brief Task information
 *
 * Autogenerated files and functions for TaskInfo Object
 
 * @{ 
 *
 * @file       taskinfo.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the TaskInfo object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: taskinfo.xml. 
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

#ifndef TASKINFO_H
#define TASKINFO_H

// Object constants
#define TASKINFO_OBJID 0x36BB762A
#define TASKINFO_ISSINGLEINST 1
#define TASKINFO_ISSETTINGS 0
#define TASKINFO_NUMBYTES 104

// Generic interface functions
int32_t TaskInfoInitialize();
UAVObjHandle TaskInfoHandle();
void TaskInfoSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint16_t StackRemaining[26];
    uint8_t Running[26];
    uint8_t RunningTime[26];

} __attribute__((packed)) __attribute__((aligned(4))) TaskInfoData;

// Typesafe Object access functions
/**
 * @function TaskInfoGet(dataOut)
 * @brief Populate a TaskInfoData object
 * @param[out] dataOut 
 */
static inline int32_t TaskInfoGet(TaskInfoData *dataOut) { return UAVObjGetData(TaskInfoHandle(), dataOut); }

static inline int32_t TaskInfoSet(const TaskInfoData *dataIn) { return UAVObjSetData(TaskInfoHandle(), dataIn); }

static inline int32_t TaskInfoInstGet(uint16_t instId, TaskInfoData *dataOut) { return UAVObjGetInstanceData(TaskInfoHandle(), instId, dataOut); }

static inline int32_t TaskInfoInstSet(uint16_t instId, const TaskInfoData *dataIn) { return UAVObjSetInstanceData(TaskInfoHandle(), instId, dataIn); }

static inline int32_t TaskInfoConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(TaskInfoHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t TaskInfoConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(TaskInfoHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t TaskInfoCreateInstance() { return UAVObjCreateInstance(TaskInfoHandle(), &TaskInfoSetDefaults); }

static inline void TaskInfoRequestUpdate() { UAVObjRequestUpdate(TaskInfoHandle()); }

static inline void TaskInfoRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(TaskInfoHandle(), instId); }

static inline void TaskInfoUpdated() { UAVObjUpdated(TaskInfoHandle()); }

static inline void TaskInfoInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(TaskInfoHandle(), instId); }

static inline int32_t TaskInfoGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(TaskInfoHandle(), dataOut); }

static inline int32_t TaskInfoSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(TaskInfoHandle(), dataIn); }

static inline int8_t TaskInfoReadOnly() { return UAVObjReadOnly(TaskInfoHandle()); }

// Field information
// Field StackRemaining information
/* Array element names for field StackRemaining */
typedef enum { TASKINFO_STACKREMAINING_SYSTEM=0, TASKINFO_STACKREMAINING_ACTUATOR=1, TASKINFO_STACKREMAINING_ATTITUDE=2, TASKINFO_STACKREMAINING_SENSORS=3, TASKINFO_STACKREMAINING_TELEMETRYTX=4, TASKINFO_STACKREMAINING_TELEMETRYTXPRI=5, TASKINFO_STACKREMAINING_TELEMETRYRX=6, TASKINFO_STACKREMAINING_GPS=7, TASKINFO_STACKREMAINING_MANUALCONTROL=8, TASKINFO_STACKREMAINING_ALTITUDE=9, TASKINFO_STACKREMAINING_AIRSPEED=10, TASKINFO_STACKREMAINING_STABILIZATION=11, TASKINFO_STACKREMAINING_ALTITUDEHOLD=12, TASKINFO_STACKREMAINING_PATHPLANNER=13, TASKINFO_STACKREMAINING_PATHFOLLOWER=14, TASKINFO_STACKREMAINING_FLIGHTPLAN=15, TASKINFO_STACKREMAINING_COM2USBBRIDGE=16, TASKINFO_STACKREMAINING_USB2COMBRIDGE=17, TASKINFO_STACKREMAINING_OVEROSYNC=18, TASKINFO_STACKREMAINING_MODEMRX=19, TASKINFO_STACKREMAINING_MODEMTX=20, TASKINFO_STACKREMAINING_MODEMSTAT=21, TASKINFO_STACKREMAINING_AUTOTUNE=22, TASKINFO_STACKREMAINING_EVENTDISPATCHER=23, TASKINFO_STACKREMAINING_GENERICI2CSENSOR=24, TASKINFO_STACKREMAINING_UAVOMAVLINKBRIDGE=25 } TaskInfoStackRemainingElem;
/* Number of elements for field StackRemaining */
#define TASKINFO_STACKREMAINING_NUMELEM 26
// Field Running information
/* Enumeration options for field Running */
typedef enum { TASKINFO_RUNNING_FALSE=0, TASKINFO_RUNNING_TRUE=1 } TaskInfoRunningOptions;
/* Array element names for field Running */
typedef enum { TASKINFO_RUNNING_SYSTEM=0, TASKINFO_RUNNING_ACTUATOR=1, TASKINFO_RUNNING_ATTITUDE=2, TASKINFO_RUNNING_SENSORS=3, TASKINFO_RUNNING_TELEMETRYTX=4, TASKINFO_RUNNING_TELEMETRYTXPRI=5, TASKINFO_RUNNING_TELEMETRYRX=6, TASKINFO_RUNNING_GPS=7, TASKINFO_RUNNING_MANUALCONTROL=8, TASKINFO_RUNNING_ALTITUDE=9, TASKINFO_RUNNING_AIRSPEED=10, TASKINFO_RUNNING_STABILIZATION=11, TASKINFO_RUNNING_ALTITUDEHOLD=12, TASKINFO_RUNNING_PATHPLANNER=13, TASKINFO_RUNNING_PATHFOLLOWER=14, TASKINFO_RUNNING_FLIGHTPLAN=15, TASKINFO_RUNNING_COM2USBBRIDGE=16, TASKINFO_RUNNING_USB2COMBRIDGE=17, TASKINFO_RUNNING_OVEROSYNC=18, TASKINFO_RUNNING_MODEMRX=19, TASKINFO_RUNNING_MODEMTX=20, TASKINFO_RUNNING_MODEMSTAT=21, TASKINFO_RUNNING_AUTOTUNE=22, TASKINFO_RUNNING_EVENTDISPATCHER=23, TASKINFO_RUNNING_GENERICI2CSENSOR=24, TASKINFO_RUNNING_UAVOMAVLINKBRIDGE=25 } TaskInfoRunningElem;
/* Number of elements for field Running */
#define TASKINFO_RUNNING_NUMELEM 26
// Field RunningTime information
/* Array element names for field RunningTime */
typedef enum { TASKINFO_RUNNINGTIME_SYSTEM=0, TASKINFO_RUNNINGTIME_ACTUATOR=1, TASKINFO_RUNNINGTIME_ATTITUDE=2, TASKINFO_RUNNINGTIME_SENSORS=3, TASKINFO_RUNNINGTIME_TELEMETRYTX=4, TASKINFO_RUNNINGTIME_TELEMETRYTXPRI=5, TASKINFO_RUNNINGTIME_TELEMETRYRX=6, TASKINFO_RUNNINGTIME_GPS=7, TASKINFO_RUNNINGTIME_MANUALCONTROL=8, TASKINFO_RUNNINGTIME_ALTITUDE=9, TASKINFO_RUNNINGTIME_AIRSPEED=10, TASKINFO_RUNNINGTIME_STABILIZATION=11, TASKINFO_RUNNINGTIME_ALTITUDEHOLD=12, TASKINFO_RUNNINGTIME_PATHPLANNER=13, TASKINFO_RUNNINGTIME_PATHFOLLOWER=14, TASKINFO_RUNNINGTIME_FLIGHTPLAN=15, TASKINFO_RUNNINGTIME_COM2USBBRIDGE=16, TASKINFO_RUNNINGTIME_USB2COMBRIDGE=17, TASKINFO_RUNNINGTIME_OVEROSYNC=18, TASKINFO_RUNNINGTIME_MODEMRX=19, TASKINFO_RUNNINGTIME_MODEMTX=20, TASKINFO_RUNNINGTIME_MODEMSTAT=21, TASKINFO_RUNNINGTIME_AUTOTUNE=22, TASKINFO_RUNNINGTIME_EVENTDISPATCHER=23, TASKINFO_RUNNINGTIME_GENERICI2CSENSOR=24, TASKINFO_RUNNINGTIME_UAVOMAVLINKBRIDGE=25 } TaskInfoRunningTimeElem;
/* Number of elements for field RunningTime */
#define TASKINFO_RUNNINGTIME_NUMELEM 26


// set/Get functions
extern void TaskInfoStackRemainingSet( uint16_t *NewStackRemaining );
extern void TaskInfoStackRemainingGet( uint16_t *NewStackRemaining );
extern void TaskInfoRunningSet( uint8_t *NewRunning );
extern void TaskInfoRunningGet( uint8_t *NewRunning );
extern void TaskInfoRunningTimeSet( uint8_t *NewRunningTime );
extern void TaskInfoRunningTimeGet( uint8_t *NewRunningTime );


#endif // TASKINFO_H

/**
 * @}
 * @}
 */
