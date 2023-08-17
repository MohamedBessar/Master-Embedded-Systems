/*
 * app.h
 *
 *  Created on: 17 Aug 2023
 *      Author: Cattoocule
 */

#ifndef APP_H_
#define APP_H_

#include "state.h"

#define threshold 30

enum{
	app_pressure_detect,
	app_alarm_on
}app_state_id;


STATE_DEFINE(pressure_detect);

STATE_DEFINE(app_alarm_on);

void set_PressureVal();

void (*app_pointer)();

#endif /* APP_H_ */
