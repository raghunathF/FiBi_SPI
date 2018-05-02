/*
 * RGB_LED_control.c
 *
 * Created: 4/26/2018 2:31:34 PM
 *  Author: raghu
 */ 
#include <asf.h>
#include "RGB_LED.h"
#include "RGB_LED_control.h"

void update_RGB_LED(uint8_t r , uint8_t g , uint8_t b)
{

	temp_compare_array_2[0] = 255-r;//Left -- R
	temp_compare_array_2[1] = 255-g;//Left  -- G
	temp_compare_array_2[2] = 255-b;//Left  -- B
	
	initializing_pin_array();
	increasing_sort_tag();

	update_compare_array = true;
	
}