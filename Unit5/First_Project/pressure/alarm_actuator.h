/*
 * alarm_actuator.h
 *
 *  Created on: 17 Aug 2023
 *      Author: Cattoocule
 */

#ifndef ALARM_ACTUATOR_H_
#define ALARM_ACTUATOR_H_
#include "state.h"

enum{
	alarm_Init,
	alarm_On,
	alarm_Waiting
}alarm_state_id;

//prototypes
//Init
STATE_DEFINE(alarm_Init);

// Alarm On
STATE_DEFINE(alarm_On);

// Alarm Off
STATE_DEFINE(alarm_Off);

// Alarm Waiting
STATE_DEFINE(alarm_Waiting);

void start_alarm();

void (*alarm_pointer)();


#endif /* ALARM_ACTUATOR_H_ */
