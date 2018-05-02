/*
 * power_on_off.c
 *
 * Created: 4/25/2018 4:13:52 PM
 *  Author: raghu
 */ 
#include <asf.h>
#include "power_on_off.h"



void init_power_pin()
{
	struct port_config power_button_config;
	port_get_config_defaults(&power_button_config);
	power_button_config.direction  = PORT_PIN_DIR_OUTPUT;
	port_pin_set_config(POWER_ON_PIN,&power_button_config);
	//power_button_config.direction  = PORT_PIN_DIR_OUTPUT;
	//port_pin_set_config(RGB_R_PIN,&power_button_config);
	
	power_button_config.direction  = PORT_PIN_DIR_INPUT;
	power_button_config.input_pull = SYSTEM_PINMUX_PIN_PULL_NONE;
	port_pin_set_config(POWER_OFF_PIN,&power_button_config);
}


void power_button_on()
{
	port_pin_set_output_level(POWER_ON_PIN, true);
	//port_pin_set_output_level(RGB_R_PIN, true);
}

void power_off()
{
	port_pin_set_output_level(POWER_ON_PIN, false);
}



void stop_all_actuators()
{
	//RGB LED off
	//Motors off
}

void system_power_off()
{
	//stop_all_actuators();
	power_off();
}

void check_power_off_button()
{
	uint32_t power_off_button   = 0;
	uint16_t count_power_button = 0;
	uint32_t *input_port        = INPUT_REG_ADDRESS;
	power_off_button = *input_port & MASK_POWER_OFF;
	if(power_off_button == POWER_OFF_VALUE )
	{
		count_power_button++;
		if(count_power_button > POWER_OFF_LIMIT)
		{
			//system_power_off();
		}
	}
}


void power_button_init()
{
	init_power_pin();
	power_button_on();
}