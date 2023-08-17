/*
 * pressure_sensor.c
 *
 *  Created on: 17 Aug 2023
 *      Author: Cattoocule
 */

#include "pressure_sensor.h"

STATE_DEFINE(sens_Init)
{
	// State ID
	sens_state_id = sensor_Init;

	sensor_pointer = STATE(sens_Reading);
}

STATE_DEFINE(sens_Reading)
{
	// State ID
	sens_state_id = sensor_Reading;

	// State Action
	// Set the Pressure value
	set_PressureVal();

	Delay(3000);

	// Update the sensor to Reading again
	sensor_pointer = STATE(sens_Init);
}
