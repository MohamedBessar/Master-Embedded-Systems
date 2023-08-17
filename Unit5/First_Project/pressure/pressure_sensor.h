/*
 * pressure_sensor.h
 *
 *  Created on: 17 Aug 2023
 *      Author: Cattoocule
 */

#ifndef PRESSURE_SENSOR_H_
#define PRESSURE_SENSOR_H_

#include "state.h"
#include "app.h"

// Pressure Sensor States
enum{
	sensor_Init,
	sensor_Reading
}sens_state_id;

// Init the Sensor
STATE_DEFINE(sens_Init);

// Reading state
STATE_DEFINE(sens_Reading);

// Pointer to Sensor function
void (*sensor_pointer)();



#endif /* PRESSURE_SENSOR_H_ */
