/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       openlrs.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2015
 * @brief      Implementation of the OpenLRS object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: openlrs.xml. 
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
#include "openlrs.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t OpenLRSInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(OPENLRS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(OPENLRS_OBJID,
			OPENLRS_ISSINGLEINST, OPENLRS_ISSETTINGS, OPENLRS_NUMBYTES, &OpenLRSSetDefaults);

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
void OpenLRSSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	OpenLRSData data;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(OpenLRSData));
	data.serial_baudrate = 0;
	data.rf_frequency = 0;
	data.rf_magic = 0;
	data.beacon_frequency = 462712500;
	data.failsafe_delay = 1000;
	data.version = 0;
	data.rf_power = 0;
	data.rf_channel_spacing = 0;
	data.hopchannel[0] = 0;
	data.hopchannel[1] = 0;
	data.hopchannel[2] = 0;
	data.hopchannel[3] = 0;
	data.hopchannel[4] = 0;
	data.hopchannel[5] = 0;
	data.hopchannel[6] = 0;
	data.hopchannel[7] = 0;
	data.hopchannel[8] = 0;
	data.hopchannel[9] = 0;
	data.hopchannel[10] = 0;
	data.hopchannel[11] = 0;
	data.hopchannel[12] = 0;
	data.hopchannel[13] = 0;
	data.hopchannel[14] = 0;
	data.hopchannel[15] = 0;
	data.hopchannel[16] = 0;
	data.hopchannel[17] = 0;
	data.hopchannel[18] = 0;
	data.hopchannel[19] = 0;
	data.hopchannel[20] = 0;
	data.hopchannel[21] = 0;
	data.hopchannel[22] = 0;
	data.hopchannel[23] = 0;
	data.modem_params = 0;
	data.flags = 0;
	data.beacon_delay = 30;
	data.beacon_period = 15;
	data.RSSI_Type = 0;

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
UAVObjHandle OpenLRSHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void OpenLRSserial_baudrateSet( uint32_t *Newserial_baudrate )
{
	UAVObjSetDataField(OpenLRSHandle(), (void*)Newserial_baudrate, offsetof( OpenLRSData, serial_baudrate), sizeof(uint32_t));
}
void OpenLRSserial_baudrateGet( uint32_t *Newserial_baudrate )
{
	UAVObjGetDataField(OpenLRSHandle(), (void*)Newserial_baudrate, offsetof( OpenLRSData, serial_baudrate), sizeof(uint32_t));
}
void OpenLRSrf_frequencySet( uint32_t *Newrf_frequency )
{
	UAVObjSetDataField(OpenLRSHandle(), (void*)Newrf_frequency, offsetof( OpenLRSData, rf_frequency), sizeof(uint32_t));
}
void OpenLRSrf_frequencyGet( uint32_t *Newrf_frequency )
{
	UAVObjGetDataField(OpenLRSHandle(), (void*)Newrf_frequency, offsetof( OpenLRSData, rf_frequency), sizeof(uint32_t));
}
void OpenLRSrf_magicSet( uint32_t *Newrf_magic )
{
	UAVObjSetDataField(OpenLRSHandle(), (void*)Newrf_magic, offsetof( OpenLRSData, rf_magic), sizeof(uint32_t));
}
void OpenLRSrf_magicGet( uint32_t *Newrf_magic )
{
	UAVObjGetDataField(OpenLRSHandle(), (void*)Newrf_magic, offsetof( OpenLRSData, rf_magic), sizeof(uint32_t));
}
void OpenLRSbeacon_frequencySet( uint32_t *Newbeacon_frequency )
{
	UAVObjSetDataField(OpenLRSHandle(), (void*)Newbeacon_frequency, offsetof( OpenLRSData, beacon_frequency), sizeof(uint32_t));
}
void OpenLRSbeacon_frequencyGet( uint32_t *Newbeacon_frequency )
{
	UAVObjGetDataField(OpenLRSHandle(), (void*)Newbeacon_frequency, offsetof( OpenLRSData, beacon_frequency), sizeof(uint32_t));
}
void OpenLRSfailsafe_delaySet( uint32_t *Newfailsafe_delay )
{
	UAVObjSetDataField(OpenLRSHandle(), (void*)Newfailsafe_delay, offsetof( OpenLRSData, failsafe_delay), sizeof(uint32_t));
}
void OpenLRSfailsafe_delayGet( uint32_t *Newfailsafe_delay )
{
	UAVObjGetDataField(OpenLRSHandle(), (void*)Newfailsafe_delay, offsetof( OpenLRSData, failsafe_delay), sizeof(uint32_t));
}
void OpenLRSversionSet( uint8_t *Newversion )
{
	UAVObjSetDataField(OpenLRSHandle(), (void*)Newversion, offsetof( OpenLRSData, version), sizeof(uint8_t));
}
void OpenLRSversionGet( uint8_t *Newversion )
{
	UAVObjGetDataField(OpenLRSHandle(), (void*)Newversion, offsetof( OpenLRSData, version), sizeof(uint8_t));
}
void OpenLRSrf_powerSet( uint8_t *Newrf_power )
{
	UAVObjSetDataField(OpenLRSHandle(), (void*)Newrf_power, offsetof( OpenLRSData, rf_power), sizeof(uint8_t));
}
void OpenLRSrf_powerGet( uint8_t *Newrf_power )
{
	UAVObjGetDataField(OpenLRSHandle(), (void*)Newrf_power, offsetof( OpenLRSData, rf_power), sizeof(uint8_t));
}
void OpenLRSrf_channel_spacingSet( uint8_t *Newrf_channel_spacing )
{
	UAVObjSetDataField(OpenLRSHandle(), (void*)Newrf_channel_spacing, offsetof( OpenLRSData, rf_channel_spacing), sizeof(uint8_t));
}
void OpenLRSrf_channel_spacingGet( uint8_t *Newrf_channel_spacing )
{
	UAVObjGetDataField(OpenLRSHandle(), (void*)Newrf_channel_spacing, offsetof( OpenLRSData, rf_channel_spacing), sizeof(uint8_t));
}
void OpenLRShopchannelSet( uint8_t *Newhopchannel )
{
	UAVObjSetDataField(OpenLRSHandle(), (void*)Newhopchannel, offsetof( OpenLRSData, hopchannel), 24*sizeof(uint8_t));
}
void OpenLRShopchannelGet( uint8_t *Newhopchannel )
{
	UAVObjGetDataField(OpenLRSHandle(), (void*)Newhopchannel, offsetof( OpenLRSData, hopchannel), 24*sizeof(uint8_t));
}
void OpenLRSmodem_paramsSet( uint8_t *Newmodem_params )
{
	UAVObjSetDataField(OpenLRSHandle(), (void*)Newmodem_params, offsetof( OpenLRSData, modem_params), sizeof(uint8_t));
}
void OpenLRSmodem_paramsGet( uint8_t *Newmodem_params )
{
	UAVObjGetDataField(OpenLRSHandle(), (void*)Newmodem_params, offsetof( OpenLRSData, modem_params), sizeof(uint8_t));
}
void OpenLRSflagsSet( uint8_t *Newflags )
{
	UAVObjSetDataField(OpenLRSHandle(), (void*)Newflags, offsetof( OpenLRSData, flags), sizeof(uint8_t));
}
void OpenLRSflagsGet( uint8_t *Newflags )
{
	UAVObjGetDataField(OpenLRSHandle(), (void*)Newflags, offsetof( OpenLRSData, flags), sizeof(uint8_t));
}
void OpenLRSbeacon_delaySet( uint8_t *Newbeacon_delay )
{
	UAVObjSetDataField(OpenLRSHandle(), (void*)Newbeacon_delay, offsetof( OpenLRSData, beacon_delay), sizeof(uint8_t));
}
void OpenLRSbeacon_delayGet( uint8_t *Newbeacon_delay )
{
	UAVObjGetDataField(OpenLRSHandle(), (void*)Newbeacon_delay, offsetof( OpenLRSData, beacon_delay), sizeof(uint8_t));
}
void OpenLRSbeacon_periodSet( uint8_t *Newbeacon_period )
{
	UAVObjSetDataField(OpenLRSHandle(), (void*)Newbeacon_period, offsetof( OpenLRSData, beacon_period), sizeof(uint8_t));
}
void OpenLRSbeacon_periodGet( uint8_t *Newbeacon_period )
{
	UAVObjGetDataField(OpenLRSHandle(), (void*)Newbeacon_period, offsetof( OpenLRSData, beacon_period), sizeof(uint8_t));
}
void OpenLRSRSSI_TypeSet( uint8_t *NewRSSI_Type )
{
	UAVObjSetDataField(OpenLRSHandle(), (void*)NewRSSI_Type, offsetof( OpenLRSData, RSSI_Type), sizeof(uint8_t));
}
void OpenLRSRSSI_TypeGet( uint8_t *NewRSSI_Type )
{
	UAVObjGetDataField(OpenLRSHandle(), (void*)NewRSSI_Type, offsetof( OpenLRSData, RSSI_Type), sizeof(uint8_t));
}


/**
 * @}
 * @}
 */

