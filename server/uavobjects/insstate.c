/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup INSState INSState
 * @brief Contains the INS state estimate
 *
 * Autogenerated files and functions for INSState Object
 * @{ 
 *
 * @file       insstate.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the INSState object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: insstate.xml. 
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
#include "insstate.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t INSStateInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(INSSTATE_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(INSSTATE_OBJID,
			INSSTATE_ISSINGLEINST, INSSTATE_ISSETTINGS, INSSTATE_NUMBYTES, &INSStateSetDefaults);

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
void INSStateSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	INSStateData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(INSStateData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 1000;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 1000;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle INSStateHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void INSStateStateSet( float *NewState )
{
	UAVObjSetDataField(INSStateHandle(), (void*)NewState, offsetof( INSStateData, State), 13*sizeof(float));
}
void INSStateStateGet( float *NewState )
{
	UAVObjGetDataField(INSStateHandle(), (void*)NewState, offsetof( INSStateData, State), 13*sizeof(float));
}
void INSStateVarSet( float *NewVar )
{
	UAVObjSetDataField(INSStateHandle(), (void*)NewVar, offsetof( INSStateData, Var), 13*sizeof(float));
}
void INSStateVarGet( float *NewVar )
{
	UAVObjGetDataField(INSStateHandle(), (void*)NewVar, offsetof( INSStateData, Var), 13*sizeof(float));
}


/**
 * @}
 */

