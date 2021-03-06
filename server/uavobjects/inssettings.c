/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       inssettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2015
 * @brief      Implementation of the INSSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: inssettings.xml. 
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

#include <string.h>
#include "uavobjectmanager.h"
#include "inssettings.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t INSSettingsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(INSSETTINGS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(INSSETTINGS_OBJID,
			INSSETTINGS_ISSINGLEINST, INSSETTINGS_ISSETTINGS, INSSETTINGS_NUMBYTES, &INSSettingsSetDefaults);

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
void INSSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	INSSettingsData data;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(INSSettingsData));
	data.AccelVar[0] = 0.003;
	data.AccelVar[1] = 0.003;
	data.AccelVar[2] = 0.003;
	data.GyroVar[0] = 1e-05;
	data.GyroVar[1] = 1e-05;
	data.GyroVar[2] = 0.0001;
	data.MagVar[0] = 10;
	data.MagVar[1] = 10;
	data.MagVar[2] = 100;
	data.GpsVar[0] = 0.001;
	data.GpsVar[1] = 0.01;
	data.GpsVar[2] = 0.5;
	data.BaroVar = 0.01;
	data.MagBiasNullingRate = 0;
	data.MinRNAVPDOP = 4;
	data.ComputeGyroBias = 0;
	data.MinRNAVSatellites = 6;

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	if (instId == 0) {
		UAVObjMetadata metadata;
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
}

/**
 * Get object handle
 */
UAVObjHandle INSSettingsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void INSSettingsAccelVarSet( float *NewAccelVar )
{
	UAVObjSetDataField(INSSettingsHandle(), (void*)NewAccelVar, offsetof( INSSettingsData, AccelVar), 3*sizeof(float));
}
void INSSettingsAccelVarGet( float *NewAccelVar )
{
	UAVObjGetDataField(INSSettingsHandle(), (void*)NewAccelVar, offsetof( INSSettingsData, AccelVar), 3*sizeof(float));
}
void INSSettingsGyroVarSet( float *NewGyroVar )
{
	UAVObjSetDataField(INSSettingsHandle(), (void*)NewGyroVar, offsetof( INSSettingsData, GyroVar), 3*sizeof(float));
}
void INSSettingsGyroVarGet( float *NewGyroVar )
{
	UAVObjGetDataField(INSSettingsHandle(), (void*)NewGyroVar, offsetof( INSSettingsData, GyroVar), 3*sizeof(float));
}
void INSSettingsMagVarSet( float *NewMagVar )
{
	UAVObjSetDataField(INSSettingsHandle(), (void*)NewMagVar, offsetof( INSSettingsData, MagVar), 3*sizeof(float));
}
void INSSettingsMagVarGet( float *NewMagVar )
{
	UAVObjGetDataField(INSSettingsHandle(), (void*)NewMagVar, offsetof( INSSettingsData, MagVar), 3*sizeof(float));
}
void INSSettingsGpsVarSet( float *NewGpsVar )
{
	UAVObjSetDataField(INSSettingsHandle(), (void*)NewGpsVar, offsetof( INSSettingsData, GpsVar), 3*sizeof(float));
}
void INSSettingsGpsVarGet( float *NewGpsVar )
{
	UAVObjGetDataField(INSSettingsHandle(), (void*)NewGpsVar, offsetof( INSSettingsData, GpsVar), 3*sizeof(float));
}
void INSSettingsBaroVarSet( float *NewBaroVar )
{
	UAVObjSetDataField(INSSettingsHandle(), (void*)NewBaroVar, offsetof( INSSettingsData, BaroVar), sizeof(float));
}
void INSSettingsBaroVarGet( float *NewBaroVar )
{
	UAVObjGetDataField(INSSettingsHandle(), (void*)NewBaroVar, offsetof( INSSettingsData, BaroVar), sizeof(float));
}
void INSSettingsMagBiasNullingRateSet( float *NewMagBiasNullingRate )
{
	UAVObjSetDataField(INSSettingsHandle(), (void*)NewMagBiasNullingRate, offsetof( INSSettingsData, MagBiasNullingRate), sizeof(float));
}
void INSSettingsMagBiasNullingRateGet( float *NewMagBiasNullingRate )
{
	UAVObjGetDataField(INSSettingsHandle(), (void*)NewMagBiasNullingRate, offsetof( INSSettingsData, MagBiasNullingRate), sizeof(float));
}
void INSSettingsMinRNAVPDOPSet( float *NewMinRNAVPDOP )
{
	UAVObjSetDataField(INSSettingsHandle(), (void*)NewMinRNAVPDOP, offsetof( INSSettingsData, MinRNAVPDOP), sizeof(float));
}
void INSSettingsMinRNAVPDOPGet( float *NewMinRNAVPDOP )
{
	UAVObjGetDataField(INSSettingsHandle(), (void*)NewMinRNAVPDOP, offsetof( INSSettingsData, MinRNAVPDOP), sizeof(float));
}
void INSSettingsComputeGyroBiasSet( uint8_t *NewComputeGyroBias )
{
	UAVObjSetDataField(INSSettingsHandle(), (void*)NewComputeGyroBias, offsetof( INSSettingsData, ComputeGyroBias), sizeof(uint8_t));
}
void INSSettingsComputeGyroBiasGet( uint8_t *NewComputeGyroBias )
{
	UAVObjGetDataField(INSSettingsHandle(), (void*)NewComputeGyroBias, offsetof( INSSettingsData, ComputeGyroBias), sizeof(uint8_t));
}
void INSSettingsMinRNAVSatellitesSet( uint8_t *NewMinRNAVSatellites )
{
	UAVObjSetDataField(INSSettingsHandle(), (void*)NewMinRNAVSatellites, offsetof( INSSettingsData, MinRNAVSatellites), sizeof(uint8_t));
}
void INSSettingsMinRNAVSatellitesGet( uint8_t *NewMinRNAVSatellites )
{
	UAVObjGetDataField(INSSettingsHandle(), (void*)NewMinRNAVSatellites, offsetof( INSSettingsData, MinRNAVSatellites), sizeof(uint8_t));
}


/**
 * @}
 * @}
 */

