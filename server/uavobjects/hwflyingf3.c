/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup HwFlyingF3 HwFlyingF3
 * @brief Selection of optional hardware configurations.
 *
 * Autogenerated files and functions for HwFlyingF3 Object
 * @{ 
 *
 * @file       hwflyingf3.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the HwFlyingF3 object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: hwflyingf3.xml. 
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
#include "hwflyingf3.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t HwFlyingF3Initialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(HWFLYINGF3_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(HWFLYINGF3_OBJID,
			HWFLYINGF3_ISSINGLEINST, HWFLYINGF3_ISSETTINGS, HWFLYINGF3_NUMBYTES, &HwFlyingF3SetDefaults);

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
void HwFlyingF3SetDefaults(UAVObjHandle obj, uint16_t instId)
{
	HwFlyingF3Data data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(HwFlyingF3Data));
	data.RcvrPort = 1;
	data.Uart1 = 0;
	data.Uart2 = 0;
	data.Uart3 = 0;
	data.Uart4 = 0;
	data.Uart5 = 0;
	data.USB_HIDPort = 0;
	data.USB_VCPPort = 3;
	data.DSMxBind = 0;
	data.GyroRange = 1;
	data.AccelRange = 2;

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
UAVObjHandle HwFlyingF3Handle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void HwFlyingF3RcvrPortSet( uint8_t *NewRcvrPort )
{
	UAVObjSetDataField(HwFlyingF3Handle(), (void*)NewRcvrPort, offsetof( HwFlyingF3Data, RcvrPort), sizeof(uint8_t));
}
void HwFlyingF3RcvrPortGet( uint8_t *NewRcvrPort )
{
	UAVObjGetDataField(HwFlyingF3Handle(), (void*)NewRcvrPort, offsetof( HwFlyingF3Data, RcvrPort), sizeof(uint8_t));
}
void HwFlyingF3Uart1Set( uint8_t *NewUart1 )
{
	UAVObjSetDataField(HwFlyingF3Handle(), (void*)NewUart1, offsetof( HwFlyingF3Data, Uart1), sizeof(uint8_t));
}
void HwFlyingF3Uart1Get( uint8_t *NewUart1 )
{
	UAVObjGetDataField(HwFlyingF3Handle(), (void*)NewUart1, offsetof( HwFlyingF3Data, Uart1), sizeof(uint8_t));
}
void HwFlyingF3Uart2Set( uint8_t *NewUart2 )
{
	UAVObjSetDataField(HwFlyingF3Handle(), (void*)NewUart2, offsetof( HwFlyingF3Data, Uart2), sizeof(uint8_t));
}
void HwFlyingF3Uart2Get( uint8_t *NewUart2 )
{
	UAVObjGetDataField(HwFlyingF3Handle(), (void*)NewUart2, offsetof( HwFlyingF3Data, Uart2), sizeof(uint8_t));
}
void HwFlyingF3Uart3Set( uint8_t *NewUart3 )
{
	UAVObjSetDataField(HwFlyingF3Handle(), (void*)NewUart3, offsetof( HwFlyingF3Data, Uart3), sizeof(uint8_t));
}
void HwFlyingF3Uart3Get( uint8_t *NewUart3 )
{
	UAVObjGetDataField(HwFlyingF3Handle(), (void*)NewUart3, offsetof( HwFlyingF3Data, Uart3), sizeof(uint8_t));
}
void HwFlyingF3Uart4Set( uint8_t *NewUart4 )
{
	UAVObjSetDataField(HwFlyingF3Handle(), (void*)NewUart4, offsetof( HwFlyingF3Data, Uart4), sizeof(uint8_t));
}
void HwFlyingF3Uart4Get( uint8_t *NewUart4 )
{
	UAVObjGetDataField(HwFlyingF3Handle(), (void*)NewUart4, offsetof( HwFlyingF3Data, Uart4), sizeof(uint8_t));
}
void HwFlyingF3Uart5Set( uint8_t *NewUart5 )
{
	UAVObjSetDataField(HwFlyingF3Handle(), (void*)NewUart5, offsetof( HwFlyingF3Data, Uart5), sizeof(uint8_t));
}
void HwFlyingF3Uart5Get( uint8_t *NewUart5 )
{
	UAVObjGetDataField(HwFlyingF3Handle(), (void*)NewUart5, offsetof( HwFlyingF3Data, Uart5), sizeof(uint8_t));
}
void HwFlyingF3USB_HIDPortSet( uint8_t *NewUSB_HIDPort )
{
	UAVObjSetDataField(HwFlyingF3Handle(), (void*)NewUSB_HIDPort, offsetof( HwFlyingF3Data, USB_HIDPort), sizeof(uint8_t));
}
void HwFlyingF3USB_HIDPortGet( uint8_t *NewUSB_HIDPort )
{
	UAVObjGetDataField(HwFlyingF3Handle(), (void*)NewUSB_HIDPort, offsetof( HwFlyingF3Data, USB_HIDPort), sizeof(uint8_t));
}
void HwFlyingF3USB_VCPPortSet( uint8_t *NewUSB_VCPPort )
{
	UAVObjSetDataField(HwFlyingF3Handle(), (void*)NewUSB_VCPPort, offsetof( HwFlyingF3Data, USB_VCPPort), sizeof(uint8_t));
}
void HwFlyingF3USB_VCPPortGet( uint8_t *NewUSB_VCPPort )
{
	UAVObjGetDataField(HwFlyingF3Handle(), (void*)NewUSB_VCPPort, offsetof( HwFlyingF3Data, USB_VCPPort), sizeof(uint8_t));
}
void HwFlyingF3DSMxBindSet( uint8_t *NewDSMxBind )
{
	UAVObjSetDataField(HwFlyingF3Handle(), (void*)NewDSMxBind, offsetof( HwFlyingF3Data, DSMxBind), sizeof(uint8_t));
}
void HwFlyingF3DSMxBindGet( uint8_t *NewDSMxBind )
{
	UAVObjGetDataField(HwFlyingF3Handle(), (void*)NewDSMxBind, offsetof( HwFlyingF3Data, DSMxBind), sizeof(uint8_t));
}
void HwFlyingF3GyroRangeSet( uint8_t *NewGyroRange )
{
	UAVObjSetDataField(HwFlyingF3Handle(), (void*)NewGyroRange, offsetof( HwFlyingF3Data, GyroRange), sizeof(uint8_t));
}
void HwFlyingF3GyroRangeGet( uint8_t *NewGyroRange )
{
	UAVObjGetDataField(HwFlyingF3Handle(), (void*)NewGyroRange, offsetof( HwFlyingF3Data, GyroRange), sizeof(uint8_t));
}
void HwFlyingF3AccelRangeSet( uint8_t *NewAccelRange )
{
	UAVObjSetDataField(HwFlyingF3Handle(), (void*)NewAccelRange, offsetof( HwFlyingF3Data, AccelRange), sizeof(uint8_t));
}
void HwFlyingF3AccelRangeGet( uint8_t *NewAccelRange )
{
	UAVObjGetDataField(HwFlyingF3Handle(), (void*)NewAccelRange, offsetof( HwFlyingF3Data, AccelRange), sizeof(uint8_t));
}


/**
 * @}
 */

