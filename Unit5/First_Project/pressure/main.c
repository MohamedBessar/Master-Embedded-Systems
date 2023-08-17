/*
 * main.c
 *
 *  Created on: 17 Aug 2023
 *      Author: Cattoocule
 */


#include "stdio.h"
#include "stdint.h"

#include "app.h"
#include "pressure_sensor.h"
#include "alarm_actuator.h"
#include "driver.h"

void setup();

int main()
{
	setup();
	while(1)
	{
		alarm_pointer();
		sensor_pointer();
		app_pointer();
	}
	return 0;
}

void setup()
{
	GPIO_Init();
	app_pointer = STATE(pressure_detect);
	sensor_pointer = STATE(sens_Init);
	alarm_pointer = STATE(alarm_Off);
}
