/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       hwcolibri.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2015
 * @brief      Implementation of the HwColibri object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: hwcolibri.xml. 
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
#include "hwcolibri.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t HwColibriInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(HWCOLIBRI_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(HWCOLIBRI_OBJID,
			HWCOLIBRI_ISSINGLEINST, HWCOLIBRI_ISSETTINGS, HWCOLIBRI_NUMBYTES, &HwColibriSetDefaults);

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
void HwColibriSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	HwColibriData data;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(HwColibriData));
	data.Frame = 0;
	data.RcvrPort = 3;
	data.Uart1 = 0;
	data.Uart2 = 0;
	data.Uart3 = 0;
	data.Uart4 = 1;
	data.USB_HIDPort = 0;
	data.USB_VCPPort = 4;
	data.DSMxMode = 0;
	data.GyroRange = 3;
	data.AccelRange = 2;
	data.MPU6000Rate = 3;
	data.MPU6000DLPF = 0;
	data.Magnetometer = 1;
	data.ExtMagOrientation = 0;

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
UAVObjHandle HwColibriHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void HwColibriFrameSet( uint8_t *NewFrame )
{
	UAVObjSetDataField(HwColibriHandle(), (void*)NewFrame, offsetof( HwColibriData, Frame), sizeof(uint8_t));
}
void HwColibriFrameGet( uint8_t *NewFrame )
{
	UAVObjGetDataField(HwColibriHandle(), (void*)NewFrame, offsetof( HwColibriData, Frame), sizeof(uint8_t));
}
void HwColibriRcvrPortSet( uint8_t *NewRcvrPort )
{
	UAVObjSetDataField(HwColibriHandle(), (void*)NewRcvrPort, offsetof( HwColibriData, RcvrPort), sizeof(uint8_t));
}
void HwColibriRcvrPortGet( uint8_t *NewRcvrPort )
{
	UAVObjGetDataField(HwColibriHandle(), (void*)NewRcvrPort, offsetof( HwColibriData, RcvrPort), sizeof(uint8_t));
}
void HwColibriUart1Set( uint8_t *NewUart1 )
{
	UAVObjSetDataField(HwColibriHandle(), (void*)NewUart1, offsetof( HwColibriData, Uart1), sizeof(uint8_t));
}
void HwColibriUart1Get( uint8_t *NewUart1 )
{
	UAVObjGetDataField(HwColibriHandle(), (void*)NewUart1, offsetof( HwColibriData, Uart1), sizeof(uint8_t));
}
void HwColibriUart2Set( uint8_t *NewUart2 )
{
	UAVObjSetDataField(HwColibriHandle(), (void*)NewUart2, offsetof( HwColibriData, Uart2), sizeof(uint8_t));
}
void HwColibriUart2Get( uint8_t *NewUart2 )
{
	UAVObjGetDataField(HwColibriHandle(), (void*)NewUart2, offsetof( HwColibriData, Uart2), sizeof(uint8_t));
}
void HwColibriUart3Set( uint8_t *NewUart3 )
{
	UAVObjSetDataField(HwColibriHandle(), (void*)NewUart3, offsetof( HwColibriData, Uart3), sizeof(uint8_t));
}
void HwColibriUart3Get( uint8_t *NewUart3 )
{
	UAVObjGetDataField(HwColibriHandle(), (void*)NewUart3, offsetof( HwColibriData, Uart3), sizeof(uint8_t));
}
void HwColibriUart4Set( uint8_t *NewUart4 )
{
	UAVObjSetDataField(HwColibriHandle(), (void*)NewUart4, offsetof( HwColibriData, Uart4), sizeof(uint8_t));
}
void HwColibriUart4Get( uint8_t *NewUart4 )
{
	UAVObjGetDataField(HwColibriHandle(), (void*)NewUart4, offsetof( HwColibriData, Uart4), sizeof(uint8_t));
}
void HwColibriUSB_HIDPortSet( uint8_t *NewUSB_HIDPort )
{
	UAVObjSetDataField(HwColibriHandle(), (void*)NewUSB_HIDPort, offsetof( HwColibriData, USB_HIDPort), sizeof(uint8_t));
}
void HwColibriUSB_HIDPortGet( uint8_t *NewUSB_HIDPort )
{
	UAVObjGetDataField(HwColibriHandle(), (void*)NewUSB_HIDPort, offsetof( HwColibriData, USB_HIDPort), sizeof(uint8_t));
}
void HwColibriUSB_VCPPortSet( uint8_t *NewUSB_VCPPort )
{
	UAVObjSetDataField(HwColibriHandle(), (void*)NewUSB_VCPPort, offsetof( HwColibriData, USB_VCPPort), sizeof(uint8_t));
}
void HwColibriUSB_VCPPortGet( uint8_t *NewUSB_VCPPort )
{
	UAVObjGetDataField(HwColibriHandle(), (void*)NewUSB_VCPPort, offsetof( HwColibriData, USB_VCPPort), sizeof(uint8_t));
}
void HwColibriDSMxModeSet( uint8_t *NewDSMxMode )
{
	UAVObjSetDataField(HwColibriHandle(), (void*)NewDSMxMode, offsetof( HwColibriData, DSMxMode), sizeof(uint8_t));
}
void HwColibriDSMxModeGet( uint8_t *NewDSMxMode )
{
	UAVObjGetDataField(HwColibriHandle(), (void*)NewDSMxMode, offsetof( HwColibriData, DSMxMode), sizeof(uint8_t));
}
void HwColibriGyroRangeSet( uint8_t *NewGyroRange )
{
	UAVObjSetDataField(HwColibriHandle(), (void*)NewGyroRange, offsetof( HwColibriData, GyroRange), sizeof(uint8_t));
}
void HwColibriGyroRangeGet( uint8_t *NewGyroRange )
{
	UAVObjGetDataField(HwColibriHandle(), (void*)NewGyroRange, offsetof( HwColibriData, GyroRange), sizeof(uint8_t));
}
void HwColibriAccelRangeSet( uint8_t *NewAccelRange )
{
	UAVObjSetDataField(HwColibriHandle(), (void*)NewAccelRange, offsetof( HwColibriData, AccelRange), sizeof(uint8_t));
}
void HwColibriAccelRangeGet( uint8_t *NewAccelRange )
{
	UAVObjGetDataField(HwColibriHandle(), (void*)NewAccelRange, offsetof( HwColibriData, AccelRange), sizeof(uint8_t));
}
void HwColibriMPU6000RateSet( uint8_t *NewMPU6000Rate )
{
	UAVObjSetDataField(HwColibriHandle(), (void*)NewMPU6000Rate, offsetof( HwColibriData, MPU6000Rate), sizeof(uint8_t));
}
void HwColibriMPU6000RateGet( uint8_t *NewMPU6000Rate )
{
	UAVObjGetDataField(HwColibriHandle(), (void*)NewMPU6000Rate, offsetof( HwColibriData, MPU6000Rate), sizeof(uint8_t));
}
void HwColibriMPU6000DLPFSet( uint8_t *NewMPU6000DLPF )
{
	UAVObjSetDataField(HwColibriHandle(), (void*)NewMPU6000DLPF, offsetof( HwColibriData, MPU6000DLPF), sizeof(uint8_t));
}
void HwColibriMPU6000DLPFGet( uint8_t *NewMPU6000DLPF )
{
	UAVObjGetDataField(HwColibriHandle(), (void*)NewMPU6000DLPF, offsetof( HwColibriData, MPU6000DLPF), sizeof(uint8_t));
}
void HwColibriMagnetometerSet( uint8_t *NewMagnetometer )
{
	UAVObjSetDataField(HwColibriHandle(), (void*)NewMagnetometer, offsetof( HwColibriData, Magnetometer), sizeof(uint8_t));
}
void HwColibriMagnetometerGet( uint8_t *NewMagnetometer )
{
	UAVObjGetDataField(HwColibriHandle(), (void*)NewMagnetometer, offsetof( HwColibriData, Magnetometer), sizeof(uint8_t));
}
void HwColibriExtMagOrientationSet( uint8_t *NewExtMagOrientation )
{
	UAVObjSetDataField(HwColibriHandle(), (void*)NewExtMagOrientation, offsetof( HwColibriData, ExtMagOrientation), sizeof(uint8_t));
}
void HwColibriExtMagOrientationGet( uint8_t *NewExtMagOrientation )
{
	UAVObjGetDataField(HwColibriHandle(), (void*)NewExtMagOrientation, offsetof( HwColibriData, ExtMagOrientation), sizeof(uint8_t));
}


/**
 * @}
 * @}
 */

