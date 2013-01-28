/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup OveroSyncStats OveroSyncStats 
 * @brief Maintains statistics on transfer rate to and from over
 *
 * Autogenerated files and functions for OveroSyncStats Object
 
 * @{ 
 *
 * @file       overosyncstats.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the OveroSyncStats object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: overosyncstats.xml. 
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

#ifndef OVEROSYNCSTATS_H
#define OVEROSYNCSTATS_H

// Object constants
#define OVEROSYNCSTATS_OBJID 0xD2085FAC
#define OVEROSYNCSTATS_ISSINGLEINST 1
#define OVEROSYNCSTATS_ISSETTINGS 0
#define OVEROSYNCSTATS_NUMBYTES 25

// Generic interface functions
int32_t OveroSyncStatsInitialize();
UAVObjHandle OveroSyncStatsHandle();
void OveroSyncStatsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint32_t Send;
    uint32_t Received;
    uint32_t FramesyncErrors;
    uint32_t UnderrunErrors;
    uint32_t DroppedUpdates;
    uint32_t Packets;
    uint8_t Connected;

} __attribute__((packed)) __attribute__((aligned(4))) OveroSyncStatsData;

// Typesafe Object access functions
/**
 * @function OveroSyncStatsGet(dataOut)
 * @brief Populate a OveroSyncStatsData object
 * @param[out] dataOut 
 */
static inline int32_t OveroSyncStatsGet(OveroSyncStatsData *dataOut) { return UAVObjGetData(OveroSyncStatsHandle(), dataOut); }

static inline int32_t OveroSyncStatsSet(const OveroSyncStatsData *dataIn) { return UAVObjSetData(OveroSyncStatsHandle(), dataIn); }

static inline int32_t OveroSyncStatsInstGet(uint16_t instId, OveroSyncStatsData *dataOut) { return UAVObjGetInstanceData(OveroSyncStatsHandle(), instId, dataOut); }

static inline int32_t OveroSyncStatsInstSet(uint16_t instId, const OveroSyncStatsData *dataIn) { return UAVObjSetInstanceData(OveroSyncStatsHandle(), instId, dataIn); }

static inline int32_t OveroSyncStatsConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(OveroSyncStatsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t OveroSyncStatsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(OveroSyncStatsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t OveroSyncStatsCreateInstance() { return UAVObjCreateInstance(OveroSyncStatsHandle(), &OveroSyncStatsSetDefaults); }

static inline void OveroSyncStatsRequestUpdate() { UAVObjRequestUpdate(OveroSyncStatsHandle()); }

static inline void OveroSyncStatsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(OveroSyncStatsHandle(), instId); }

static inline void OveroSyncStatsUpdated() { UAVObjUpdated(OveroSyncStatsHandle()); }

static inline void OveroSyncStatsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(OveroSyncStatsHandle(), instId); }

static inline int32_t OveroSyncStatsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(OveroSyncStatsHandle(), dataOut); }

static inline int32_t OveroSyncStatsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(OveroSyncStatsHandle(), dataIn); }

static inline int8_t OveroSyncStatsReadOnly() { return UAVObjReadOnly(OveroSyncStatsHandle()); }

// Field information
// Field Send information
// Field Received information
// Field FramesyncErrors information
// Field UnderrunErrors information
// Field DroppedUpdates information
// Field Packets information
// Field Connected information
/* Enumeration options for field Connected */
typedef enum { OVEROSYNCSTATS_CONNECTED_FALSE=0, OVEROSYNCSTATS_CONNECTED_TRUE=1 } OveroSyncStatsConnectedOptions;


// set/Get functions
extern void OveroSyncStatsSendSet( uint32_t *NewSend );
extern void OveroSyncStatsSendGet( uint32_t *NewSend );
extern void OveroSyncStatsReceivedSet( uint32_t *NewReceived );
extern void OveroSyncStatsReceivedGet( uint32_t *NewReceived );
extern void OveroSyncStatsFramesyncErrorsSet( uint32_t *NewFramesyncErrors );
extern void OveroSyncStatsFramesyncErrorsGet( uint32_t *NewFramesyncErrors );
extern void OveroSyncStatsUnderrunErrorsSet( uint32_t *NewUnderrunErrors );
extern void OveroSyncStatsUnderrunErrorsGet( uint32_t *NewUnderrunErrors );
extern void OveroSyncStatsDroppedUpdatesSet( uint32_t *NewDroppedUpdates );
extern void OveroSyncStatsDroppedUpdatesGet( uint32_t *NewDroppedUpdates );
extern void OveroSyncStatsPacketsSet( uint32_t *NewPackets );
extern void OveroSyncStatsPacketsGet( uint32_t *NewPackets );
extern void OveroSyncStatsConnectedSet( uint8_t *NewConnected );
extern void OveroSyncStatsConnectedGet( uint8_t *NewConnected );


#endif // OVEROSYNCSTATS_H

/**
 * @}
 * @}
 */
