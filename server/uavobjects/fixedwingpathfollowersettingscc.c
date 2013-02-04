/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FixedWingPathFollowerSettingsCC FixedWingPathFollowerSettingsCC
 * @brief Settings for the @ref FixedWingPathFollowerModule
 *
 * Autogenerated files and functions for FixedWingPathFollowerSettingsCC Object
 * @{ 
 *
 * @file       fixedwingpathfollowersettingscc.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the FixedWingPathFollowerSettingsCC object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: fixedwingpathfollowersettingscc.xml. 
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
#include "fixedwingpathfollowersettingscc.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t FixedWingPathFollowerSettingsCCInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(FIXEDWINGPATHFOLLOWERSETTINGSCC_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(FIXEDWINGPATHFOLLOWERSETTINGSCC_OBJID,
			FIXEDWINGPATHFOLLOWERSETTINGSCC_ISSINGLEINST, FIXEDWINGPATHFOLLOWERSETTINGSCC_ISSETTINGS, FIXEDWINGPATHFOLLOWERSETTINGSCC_NUMBYTES, &FixedWingPathFollowerSettingsCCSetDefaults);

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
void FixedWingPathFollowerSettingsCCSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	FixedWingPathFollowerSettingsCCData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(FixedWingPathFollowerSettingsCCData));
	data.VerticalVelMax = 10;
	data.VectorFollowingGain = 0.5;
	data.OrbitFollowingGain = 0.5;
	data.FollowerIntegralGain = 0;
	data.VerticalPosP = 0.05;
	data.HeadingPI[0] = 0.6;
	data.HeadingPI[1] = 0;
	data.HeadingPI[2] = 0;
	data.AirspeedPI[0] = 1;
	data.AirspeedPI[1] = 0.05;
	data.AirspeedPI[2] = 5;
	data.VerticalToPitchCrossFeed[0] = 0.2;
	data.VerticalToPitchCrossFeed[1] = 10;
	data.AirspeedToVerticalCrossFeed[0] = 10;
	data.AirspeedToVerticalCrossFeed[1] = 100;
	data.ThrottlePI[0] = 0.001;
	data.ThrottlePI[1] = 0.0001;
	data.ThrottlePI[2] = 0.5;
	data.RollLimit[0] = -35;
	data.RollLimit[1] = 0;
	data.RollLimit[2] = 35;
	data.PitchLimit[0] = -10;
	data.PitchLimit[1] = 0;
	data.PitchLimit[2] = 10;
	data.ThrottleLimit[0] = 0;
	data.ThrottleLimit[1] = 0.5;
	data.ThrottleLimit[2] = 1;
	data.UpdatePeriod = 100;

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
UAVObjHandle FixedWingPathFollowerSettingsCCHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void FixedWingPathFollowerSettingsCCVerticalVelMaxSet( float *NewVerticalVelMax )
{
	UAVObjSetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewVerticalVelMax, offsetof( FixedWingPathFollowerSettingsCCData, VerticalVelMax), sizeof(float));
}
void FixedWingPathFollowerSettingsCCVerticalVelMaxGet( float *NewVerticalVelMax )
{
	UAVObjGetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewVerticalVelMax, offsetof( FixedWingPathFollowerSettingsCCData, VerticalVelMax), sizeof(float));
}
void FixedWingPathFollowerSettingsCCVectorFollowingGainSet( float *NewVectorFollowingGain )
{
	UAVObjSetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewVectorFollowingGain, offsetof( FixedWingPathFollowerSettingsCCData, VectorFollowingGain), sizeof(float));
}
void FixedWingPathFollowerSettingsCCVectorFollowingGainGet( float *NewVectorFollowingGain )
{
	UAVObjGetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewVectorFollowingGain, offsetof( FixedWingPathFollowerSettingsCCData, VectorFollowingGain), sizeof(float));
}
void FixedWingPathFollowerSettingsCCOrbitFollowingGainSet( float *NewOrbitFollowingGain )
{
	UAVObjSetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewOrbitFollowingGain, offsetof( FixedWingPathFollowerSettingsCCData, OrbitFollowingGain), sizeof(float));
}
void FixedWingPathFollowerSettingsCCOrbitFollowingGainGet( float *NewOrbitFollowingGain )
{
	UAVObjGetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewOrbitFollowingGain, offsetof( FixedWingPathFollowerSettingsCCData, OrbitFollowingGain), sizeof(float));
}
void FixedWingPathFollowerSettingsCCFollowerIntegralGainSet( float *NewFollowerIntegralGain )
{
	UAVObjSetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewFollowerIntegralGain, offsetof( FixedWingPathFollowerSettingsCCData, FollowerIntegralGain), sizeof(float));
}
void FixedWingPathFollowerSettingsCCFollowerIntegralGainGet( float *NewFollowerIntegralGain )
{
	UAVObjGetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewFollowerIntegralGain, offsetof( FixedWingPathFollowerSettingsCCData, FollowerIntegralGain), sizeof(float));
}
void FixedWingPathFollowerSettingsCCVerticalPosPSet( float *NewVerticalPosP )
{
	UAVObjSetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewVerticalPosP, offsetof( FixedWingPathFollowerSettingsCCData, VerticalPosP), sizeof(float));
}
void FixedWingPathFollowerSettingsCCVerticalPosPGet( float *NewVerticalPosP )
{
	UAVObjGetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewVerticalPosP, offsetof( FixedWingPathFollowerSettingsCCData, VerticalPosP), sizeof(float));
}
void FixedWingPathFollowerSettingsCCHeadingPISet( float *NewHeadingPI )
{
	UAVObjSetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewHeadingPI, offsetof( FixedWingPathFollowerSettingsCCData, HeadingPI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsCCHeadingPIGet( float *NewHeadingPI )
{
	UAVObjGetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewHeadingPI, offsetof( FixedWingPathFollowerSettingsCCData, HeadingPI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsCCAirspeedPISet( float *NewAirspeedPI )
{
	UAVObjSetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewAirspeedPI, offsetof( FixedWingPathFollowerSettingsCCData, AirspeedPI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsCCAirspeedPIGet( float *NewAirspeedPI )
{
	UAVObjGetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewAirspeedPI, offsetof( FixedWingPathFollowerSettingsCCData, AirspeedPI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsCCVerticalToPitchCrossFeedSet( float *NewVerticalToPitchCrossFeed )
{
	UAVObjSetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewVerticalToPitchCrossFeed, offsetof( FixedWingPathFollowerSettingsCCData, VerticalToPitchCrossFeed), 2*sizeof(float));
}
void FixedWingPathFollowerSettingsCCVerticalToPitchCrossFeedGet( float *NewVerticalToPitchCrossFeed )
{
	UAVObjGetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewVerticalToPitchCrossFeed, offsetof( FixedWingPathFollowerSettingsCCData, VerticalToPitchCrossFeed), 2*sizeof(float));
}
void FixedWingPathFollowerSettingsCCAirspeedToVerticalCrossFeedSet( float *NewAirspeedToVerticalCrossFeed )
{
	UAVObjSetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewAirspeedToVerticalCrossFeed, offsetof( FixedWingPathFollowerSettingsCCData, AirspeedToVerticalCrossFeed), 2*sizeof(float));
}
void FixedWingPathFollowerSettingsCCAirspeedToVerticalCrossFeedGet( float *NewAirspeedToVerticalCrossFeed )
{
	UAVObjGetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewAirspeedToVerticalCrossFeed, offsetof( FixedWingPathFollowerSettingsCCData, AirspeedToVerticalCrossFeed), 2*sizeof(float));
}
void FixedWingPathFollowerSettingsCCThrottlePISet( float *NewThrottlePI )
{
	UAVObjSetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewThrottlePI, offsetof( FixedWingPathFollowerSettingsCCData, ThrottlePI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsCCThrottlePIGet( float *NewThrottlePI )
{
	UAVObjGetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewThrottlePI, offsetof( FixedWingPathFollowerSettingsCCData, ThrottlePI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsCCRollLimitSet( float *NewRollLimit )
{
	UAVObjSetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewRollLimit, offsetof( FixedWingPathFollowerSettingsCCData, RollLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsCCRollLimitGet( float *NewRollLimit )
{
	UAVObjGetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewRollLimit, offsetof( FixedWingPathFollowerSettingsCCData, RollLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsCCPitchLimitSet( float *NewPitchLimit )
{
	UAVObjSetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewPitchLimit, offsetof( FixedWingPathFollowerSettingsCCData, PitchLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsCCPitchLimitGet( float *NewPitchLimit )
{
	UAVObjGetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewPitchLimit, offsetof( FixedWingPathFollowerSettingsCCData, PitchLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsCCThrottleLimitSet( float *NewThrottleLimit )
{
	UAVObjSetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewThrottleLimit, offsetof( FixedWingPathFollowerSettingsCCData, ThrottleLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsCCThrottleLimitGet( float *NewThrottleLimit )
{
	UAVObjGetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewThrottleLimit, offsetof( FixedWingPathFollowerSettingsCCData, ThrottleLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsCCUpdatePeriodSet( int16_t *NewUpdatePeriod )
{
	UAVObjSetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewUpdatePeriod, offsetof( FixedWingPathFollowerSettingsCCData, UpdatePeriod), sizeof(int16_t));
}
void FixedWingPathFollowerSettingsCCUpdatePeriodGet( int16_t *NewUpdatePeriod )
{
	UAVObjGetDataField(FixedWingPathFollowerSettingsCCHandle(), (void*)NewUpdatePeriod, offsetof( FixedWingPathFollowerSettingsCCData, UpdatePeriod), sizeof(int16_t));
}


/**
 * @}
 */
