/*
 * alarm_actuator.c
 *
 *  Created on: 17 Aug 2023
 *      Author: Cattoocule
 */

#include "alarm_actuator.h"
#include "driver.h"

STATE_DEFINE(alarm_Init)
{
	alarm_state_id = alarm_Init;

	alarm_pointer = STATE(alarm_Off);
}

STATE_DEFINE(alarm_On)
{
	alarm_state_id = alarm_On;

	set_Alarm_Acuator(0);

	Delay(3000);

	set_Alarm_Acuator(1);

	alarm_pointer = STATE(alarm_Waiting);
}

STATE_DEFINE(alarm_Waiting)
{
	alarm_state_id = alarm_Waiting;

	alarm_pointer = STATE(alarm_Waiting);
}

STATE_DEFINE(alarm_Off)
{
	set_Alarm_Acuator(1);

	alarm_pointer = STATE(alarm_Waiting);
}

void start_alarm()
{
	alarm_pointer = STATE(alarm_On);
}


