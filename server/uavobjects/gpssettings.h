/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup GPSSettings GPSSettings 
 * @brief Settings for the GPS
 *
 * Autogenerated files and functions for GPSSettings Object
 
 * @{ 
 *
 * @file       gpssettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the GPSSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: gpssettings.xml. 
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

#ifndef GPSSETTINGS_H
#define GPSSETTINGS_H

// Object constants
#define GPSSETTINGS_OBJID 0xAC5F6370
#define GPSSETTINGS_ISSINGLEINST 1
#define GPSSETTINGS_ISSETTINGS 1
#define GPSSETTINGS_NUMBYTES sizeof(GPSSettingsData)

// Object access macros
/**
 * @function GPSSettingsGet(dataOut)
 * @brief Populate a GPSSettingsData object
 * @param[out] dataOut 
 */
#define GPSSettingsGet(dataOut) UAVObjGetData(GPSSettingsHandle(), dataOut)
#define GPSSettingsSet(dataIn) UAVObjSetData(GPSSettingsHandle(), dataIn)
#define GPSSettingsInstGet(instId, dataOut) UAVObjGetInstanceData(GPSSettingsHandle(), instId, dataOut)
#define GPSSettingsInstSet(instId, dataIn) UAVObjSetInstanceData(GPSSettingsHandle(), instId, dataIn)
#define GPSSettingsConnectQueue(queue) UAVObjConnectQueue(GPSSettingsHandle(), queue, EV_MASK_ALL_UPDATES)
#define GPSSettingsConnectCallback(cb) UAVObjConnectCallback(GPSSettingsHandle(), cb, EV_MASK_ALL_UPDATES)
#define GPSSettingsCreateInstance() UAVObjCreateInstance(GPSSettingsHandle(),&GPSSettingsSetDefaults)
#define GPSSettingsRequestUpdate() UAVObjRequestUpdate(GPSSettingsHandle())
#define GPSSettingsRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(GPSSettingsHandle(), instId)
#define GPSSettingsUpdated() UAVObjUpdated(GPSSettingsHandle())
#define GPSSettingsInstUpdated(instId) UAVObjUpdated(GPSSettingsHandle(), instId)
#define GPSSettingsGetMetadata(dataOut) UAVObjGetMetadata(GPSSettingsHandle(), dataOut)
#define GPSSettingsSetMetadata(dataIn) UAVObjSetMetadata(GPSSettingsHandle(), dataIn)
#define GPSSettingsReadOnly() UAVObjReadOnly(GPSSettingsHandle())

// Object data
typedef struct {
    uint8_t DataProtocol;

} __attribute__((packed)) GPSSettingsData;

// Field information
// Field DataProtocol information
/* Enumeration options for field DataProtocol */
typedef enum { GPSSETTINGS_DATAPROTOCOL_NMEA=0, GPSSETTINGS_DATAPROTOCOL_UBX=1 } GPSSettingsDataProtocolOptions;


// Generic interface functions
int32_t GPSSettingsInitialize();
UAVObjHandle GPSSettingsHandle();
void GPSSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void GPSSettingsDataProtocolSet( uint8_t *NewDataProtocol );
extern void GPSSettingsDataProtocolGet( uint8_t *NewDataProtocol );


#endif // GPSSETTINGS_H

/**
 * @}
 * @}
 */
