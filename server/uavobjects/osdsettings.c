/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup OsdSettings OsdSettings
 * @brief OSD settings used by the OSDgen module
 *
 * Autogenerated files and functions for OsdSettings Object
 * @{ 
 *
 * @file       osdsettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the OsdSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: osdsettings.xml. 
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

#include "openpilot.h"
#include "osdsettings.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t OsdSettingsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(OSDSETTINGS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(OSDSETTINGS_OBJID,
			OSDSETTINGS_ISSINGLEINST, OSDSETTINGS_ISSETTINGS, OSDSETTINGS_NUMBYTES, &OsdSettingsSetDefaults);

	// Done
	if (handle != 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void OsdSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	OsdSettingsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(OsdSettingsData));
	data.AttitudeSetup[0] = 168;
	data.AttitudeSetup[1] = 135;
	data.TimeSetup[0] = 10;
	data.TimeSetup[1] = 250;
	data.BatterySetup[0] = 316;
	data.BatterySetup[1] = 210;
	data.SpeedSetup[0] = 2;
	data.SpeedSetup[1] = 145;
	data.AltitudeSetup[0] = 2;
	data.AltitudeSetup[1] = 145;
	data.HeadingSetup[0] = 168;
	data.HeadingSetup[1] = 240;
	data.Attitude = 1;
	data.Time = 1;
	data.Battery = 1;
	data.Speed = 1;
	data.Altitude = 1;
	data.Heading = 1;
	data.Screen = 0;

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 0;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle OsdSettingsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void OsdSettingsAttitudeSetupSet( int16_t *NewAttitudeSetup )
{
	UAVObjSetDataField(OsdSettingsHandle(), (void*)NewAttitudeSetup, offsetof( OsdSettingsData, AttitudeSetup), 2*sizeof(int16_t));
}
void OsdSettingsAttitudeSetupGet( int16_t *NewAttitudeSetup )
{
	UAVObjGetDataField(OsdSettingsHandle(), (void*)NewAttitudeSetup, offsetof( OsdSettingsData, AttitudeSetup), 2*sizeof(int16_t));
}
void OsdSettingsTimeSetupSet( int16_t *NewTimeSetup )
{
	UAVObjSetDataField(OsdSettingsHandle(), (void*)NewTimeSetup, offsetof( OsdSettingsData, TimeSetup), 2*sizeof(int16_t));
}
void OsdSettingsTimeSetupGet( int16_t *NewTimeSetup )
{
	UAVObjGetDataField(OsdSettingsHandle(), (void*)NewTimeSetup, offsetof( OsdSettingsData, TimeSetup), 2*sizeof(int16_t));
}
void OsdSettingsBatterySetupSet( int16_t *NewBatterySetup )
{
	UAVObjSetDataField(OsdSettingsHandle(), (void*)NewBatterySetup, offsetof( OsdSettingsData, BatterySetup), 2*sizeof(int16_t));
}
void OsdSettingsBatterySetupGet( int16_t *NewBatterySetup )
{
	UAVObjGetDataField(OsdSettingsHandle(), (void*)NewBatterySetup, offsetof( OsdSettingsData, BatterySetup), 2*sizeof(int16_t));
}
void OsdSettingsSpeedSetupSet( int16_t *NewSpeedSetup )
{
	UAVObjSetDataField(OsdSettingsHandle(), (void*)NewSpeedSetup, offsetof( OsdSettingsData, SpeedSetup), 2*sizeof(int16_t));
}
void OsdSettingsSpeedSetupGet( int16_t *NewSpeedSetup )
{
	UAVObjGetDataField(OsdSettingsHandle(), (void*)NewSpeedSetup, offsetof( OsdSettingsData, SpeedSetup), 2*sizeof(int16_t));
}
void OsdSettingsAltitudeSetupSet( int16_t *NewAltitudeSetup )
{
	UAVObjSetDataField(OsdSettingsHandle(), (void*)NewAltitudeSetup, offsetof( OsdSettingsData, AltitudeSetup), 2*sizeof(int16_t));
}
void OsdSettingsAltitudeSetupGet( int16_t *NewAltitudeSetup )
{
	UAVObjGetDataField(OsdSettingsHandle(), (void*)NewAltitudeSetup, offsetof( OsdSettingsData, AltitudeSetup), 2*sizeof(int16_t));
}
void OsdSettingsHeadingSetupSet( int16_t *NewHeadingSetup )
{
	UAVObjSetDataField(OsdSettingsHandle(), (void*)NewHeadingSetup, offsetof( OsdSettingsData, HeadingSetup), 2*sizeof(int16_t));
}
void OsdSettingsHeadingSetupGet( int16_t *NewHeadingSetup )
{
	UAVObjGetDataField(OsdSettingsHandle(), (void*)NewHeadingSetup, offsetof( OsdSettingsData, HeadingSetup), 2*sizeof(int16_t));
}
void OsdSettingsAttitudeSet( uint8_t *NewAttitude )
{
	UAVObjSetDataField(OsdSettingsHandle(), (void*)NewAttitude, offsetof( OsdSettingsData, Attitude), sizeof(uint8_t));
}
void OsdSettingsAttitudeGet( uint8_t *NewAttitude )
{
	UAVObjGetDataField(OsdSettingsHandle(), (void*)NewAttitude, offsetof( OsdSettingsData, Attitude), sizeof(uint8_t));
}
void OsdSettingsTimeSet( uint8_t *NewTime )
{
	UAVObjSetDataField(OsdSettingsHandle(), (void*)NewTime, offsetof( OsdSettingsData, Time), sizeof(uint8_t));
}
void OsdSettingsTimeGet( uint8_t *NewTime )
{
	UAVObjGetDataField(OsdSettingsHandle(), (void*)NewTime, offsetof( OsdSettingsData, Time), sizeof(uint8_t));
}
void OsdSettingsBatterySet( uint8_t *NewBattery )
{
	UAVObjSetDataField(OsdSettingsHandle(), (void*)NewBattery, offsetof( OsdSettingsData, Battery), sizeof(uint8_t));
}
void OsdSettingsBatteryGet( uint8_t *NewBattery )
{
	UAVObjGetDataField(OsdSettingsHandle(), (void*)NewBattery, offsetof( OsdSettingsData, Battery), sizeof(uint8_t));
}
void OsdSettingsSpeedSet( uint8_t *NewSpeed )
{
	UAVObjSetDataField(OsdSettingsHandle(), (void*)NewSpeed, offsetof( OsdSettingsData, Speed), sizeof(uint8_t));
}
void OsdSettingsSpeedGet( uint8_t *NewSpeed )
{
	UAVObjGetDataField(OsdSettingsHandle(), (void*)NewSpeed, offsetof( OsdSettingsData, Speed), sizeof(uint8_t));
}
void OsdSettingsAltitudeSet( uint8_t *NewAltitude )
{
	UAVObjSetDataField(OsdSettingsHandle(), (void*)NewAltitude, offsetof( OsdSettingsData, Altitude), sizeof(uint8_t));
}
void OsdSettingsAltitudeGet( uint8_t *NewAltitude )
{
	UAVObjGetDataField(OsdSettingsHandle(), (void*)NewAltitude, offsetof( OsdSettingsData, Altitude), sizeof(uint8_t));
}
void OsdSettingsHeadingSet( uint8_t *NewHeading )
{
	UAVObjSetDataField(OsdSettingsHandle(), (void*)NewHeading, offsetof( OsdSettingsData, Heading), sizeof(uint8_t));
}
void OsdSettingsHeadingGet( uint8_t *NewHeading )
{
	UAVObjGetDataField(OsdSettingsHandle(), (void*)NewHeading, offsetof( OsdSettingsData, Heading), sizeof(uint8_t));
}
void OsdSettingsScreenSet( uint8_t *NewScreen )
{
	UAVObjSetDataField(OsdSettingsHandle(), (void*)NewScreen, offsetof( OsdSettingsData, Screen), sizeof(uint8_t));
}
void OsdSettingsScreenGet( uint8_t *NewScreen )
{
	UAVObjGetDataField(OsdSettingsHandle(), (void*)NewScreen, offsetof( OsdSettingsData, Screen), sizeof(uint8_t));
}


/**
 * @}
 */

