/*
 * app.c
 *
 *  Created on: 17 Aug 2023
 *      Author: Cattoocule
 */

#include "app.h"
#include "state.h"

int Pval;

STATE_DEFINE(pressure_detect)
{
	app_state_id = app_pressure_detect;

	(Pval > threshold)? (app_pointer = STATE(app_alarm_on)) : (app_pointer = STATE(pressure_detect));
}

STATE_DEFINE(app_alarm_on)
{
	app_state_id = app_alarm_on;

	start_alarm();

	app_pointer = STATE(pressure_detect);
}

void set_PressureVal()
{
	Pval = getPressureVal();
}
