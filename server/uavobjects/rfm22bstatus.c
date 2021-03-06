/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       rfm22bstatus.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2015
 * @brief      Implementation of the RFM22BStatus object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: rfm22bstatus.xml. 
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
#include "rfm22bstatus.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t RFM22BStatusInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(RFM22BSTATUS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(RFM22BSTATUS_OBJID,
			RFM22BSTATUS_ISSINGLEINST, RFM22BSTATUS_ISSETTINGS, RFM22BSTATUS_NUMBYTES, &RFM22BStatusSetDefaults);

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
void RFM22BStatusSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	RFM22BStatusData data;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(RFM22BStatusData));
	data.DeviceID = 0;
	data.TXRate = 0;
	data.RXRate = 0;
	data.RxGood = 0;
	data.RxCorrected = 0;
	data.RxErrors = 0;
	data.RxSyncMissed = 0;
	data.TxMissed = 0;
	data.RxFailure = 0;
	data.Resets = 0;
	data.Timeouts = 0;
	data.RSSI = 0;
	data.LinkQuality = 0;
	data.LinkState = 0;

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	if (instId == 0) {
		UAVObjMetadata metadata;
		metadata.flags =
			ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
			ACCESS_READONLY << UAVOBJ_GCS_ACCESS_SHIFT |
			0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
			0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
			UPDATEMODE_THROTTLED << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
			UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
		metadata.telemetryUpdatePeriod = 500;
		metadata.gcsTelemetryUpdatePeriod = 0;
		metadata.loggingUpdatePeriod = 0;
		UAVObjSetMetadata(obj, &metadata);
	}
}

/**
 * Get object handle
 */
UAVObjHandle RFM22BStatusHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void RFM22BStatusDeviceIDSet( uint32_t *NewDeviceID )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewDeviceID, offsetof( RFM22BStatusData, DeviceID), sizeof(uint32_t));
}
void RFM22BStatusDeviceIDGet( uint32_t *NewDeviceID )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewDeviceID, offsetof( RFM22BStatusData, DeviceID), sizeof(uint32_t));
}
void RFM22BStatusBoardRevisionSet( uint16_t *NewBoardRevision )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewBoardRevision, offsetof( RFM22BStatusData, BoardRevision), sizeof(uint16_t));
}
void RFM22BStatusBoardRevisionGet( uint16_t *NewBoardRevision )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewBoardRevision, offsetof( RFM22BStatusData, BoardRevision), sizeof(uint16_t));
}
void RFM22BStatusHeapRemainingSet( uint16_t *NewHeapRemaining )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewHeapRemaining, offsetof( RFM22BStatusData, HeapRemaining), sizeof(uint16_t));
}
void RFM22BStatusHeapRemainingGet( uint16_t *NewHeapRemaining )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewHeapRemaining, offsetof( RFM22BStatusData, HeapRemaining), sizeof(uint16_t));
}
void RFM22BStatusTXRateSet( uint16_t *NewTXRate )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewTXRate, offsetof( RFM22BStatusData, TXRate), sizeof(uint16_t));
}
void RFM22BStatusTXRateGet( uint16_t *NewTXRate )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewTXRate, offsetof( RFM22BStatusData, TXRate), sizeof(uint16_t));
}
void RFM22BStatusRXRateSet( uint16_t *NewRXRate )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewRXRate, offsetof( RFM22BStatusData, RXRate), sizeof(uint16_t));
}
void RFM22BStatusRXRateGet( uint16_t *NewRXRate )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewRXRate, offsetof( RFM22BStatusData, RXRate), sizeof(uint16_t));
}
void RFM22BStatusBoardTypeSet( uint8_t *NewBoardType )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewBoardType, offsetof( RFM22BStatusData, BoardType), sizeof(uint8_t));
}
void RFM22BStatusBoardTypeGet( uint8_t *NewBoardType )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewBoardType, offsetof( RFM22BStatusData, BoardType), sizeof(uint8_t));
}
void RFM22BStatusRxGoodSet( uint8_t *NewRxGood )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewRxGood, offsetof( RFM22BStatusData, RxGood), sizeof(uint8_t));
}
void RFM22BStatusRxGoodGet( uint8_t *NewRxGood )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewRxGood, offsetof( RFM22BStatusData, RxGood), sizeof(uint8_t));
}
void RFM22BStatusRxCorrectedSet( uint8_t *NewRxCorrected )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewRxCorrected, offsetof( RFM22BStatusData, RxCorrected), sizeof(uint8_t));
}
void RFM22BStatusRxCorrectedGet( uint8_t *NewRxCorrected )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewRxCorrected, offsetof( RFM22BStatusData, RxCorrected), sizeof(uint8_t));
}
void RFM22BStatusRxErrorsSet( uint8_t *NewRxErrors )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewRxErrors, offsetof( RFM22BStatusData, RxErrors), sizeof(uint8_t));
}
void RFM22BStatusRxErrorsGet( uint8_t *NewRxErrors )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewRxErrors, offsetof( RFM22BStatusData, RxErrors), sizeof(uint8_t));
}
void RFM22BStatusRxSyncMissedSet( uint8_t *NewRxSyncMissed )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewRxSyncMissed, offsetof( RFM22BStatusData, RxSyncMissed), sizeof(uint8_t));
}
void RFM22BStatusRxSyncMissedGet( uint8_t *NewRxSyncMissed )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewRxSyncMissed, offsetof( RFM22BStatusData, RxSyncMissed), sizeof(uint8_t));
}
void RFM22BStatusTxMissedSet( uint8_t *NewTxMissed )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewTxMissed, offsetof( RFM22BStatusData, TxMissed), sizeof(uint8_t));
}
void RFM22BStatusTxMissedGet( uint8_t *NewTxMissed )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewTxMissed, offsetof( RFM22BStatusData, TxMissed), sizeof(uint8_t));
}
void RFM22BStatusRxFailureSet( uint8_t *NewRxFailure )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewRxFailure, offsetof( RFM22BStatusData, RxFailure), sizeof(uint8_t));
}
void RFM22BStatusRxFailureGet( uint8_t *NewRxFailure )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewRxFailure, offsetof( RFM22BStatusData, RxFailure), sizeof(uint8_t));
}
void RFM22BStatusResetsSet( uint8_t *NewResets )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewResets, offsetof( RFM22BStatusData, Resets), sizeof(uint8_t));
}
void RFM22BStatusResetsGet( uint8_t *NewResets )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewResets, offsetof( RFM22BStatusData, Resets), sizeof(uint8_t));
}
void RFM22BStatusTimeoutsSet( uint8_t *NewTimeouts )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewTimeouts, offsetof( RFM22BStatusData, Timeouts), sizeof(uint8_t));
}
void RFM22BStatusTimeoutsGet( uint8_t *NewTimeouts )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewTimeouts, offsetof( RFM22BStatusData, Timeouts), sizeof(uint8_t));
}
void RFM22BStatusRSSISet( int8_t *NewRSSI )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewRSSI, offsetof( RFM22BStatusData, RSSI), sizeof(int8_t));
}
void RFM22BStatusRSSIGet( int8_t *NewRSSI )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewRSSI, offsetof( RFM22BStatusData, RSSI), sizeof(int8_t));
}
void RFM22BStatusLinkQualitySet( uint8_t *NewLinkQuality )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewLinkQuality, offsetof( RFM22BStatusData, LinkQuality), sizeof(uint8_t));
}
void RFM22BStatusLinkQualityGet( uint8_t *NewLinkQuality )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewLinkQuality, offsetof( RFM22BStatusData, LinkQuality), sizeof(uint8_t));
}
void RFM22BStatusLinkStateSet( uint8_t *NewLinkState )
{
	UAVObjSetDataField(RFM22BStatusHandle(), (void*)NewLinkState, offsetof( RFM22BStatusData, LinkState), sizeof(uint8_t));
}
void RFM22BStatusLinkStateGet( uint8_t *NewLinkState )
{
	UAVObjGetDataField(RFM22BStatusHandle(), (void*)NewLinkState, offsetof( RFM22BStatusData, LinkState), sizeof(uint8_t));
}


/**
 * @}
 * @}
 */

