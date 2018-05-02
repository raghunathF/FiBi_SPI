/*
 * test.c
 *
 * Created: 4/26/2018 3:24:34 PM
 *  Author: raghu
 */ 
#include <asf.h>
#include "RGB_LED_control.h"
#include "motors.h"


//Fade test
void test_RGB()
{
	uint8_t i =0;
	
	//R LED
	for(i=1;i<250;i=i+3)
	{
		update_RGB_LED(i,0,0);
		delay_cycles_ms(20);
	}
	for(i=255;i>4;i = i-3)
	{
		update_RGB_LED(i,0,0);
		delay_cycles_ms(20);
	}
	
	//G LED
	for(i=1;i<250;i=i+3)
	{
		update_RGB_LED(0,i,0);
		delay_cycles_ms(20);
	}
	for(i=255;i>5;i = i-3)
	{
		update_RGB_LED(0,i,0);
		delay_cycles_ms(20);
	}
	
	//B LED
	for(i=1;i<250;i=i+3)
	{
		update_RGB_LED(0,0,i);
		delay_cycles_ms(20);
	}
	for(i=255;i>5;i = i-3)
	{
		update_RGB_LED(0,0,i);
		delay_cycles_ms(20);
	}
}

void test_motors()
{
	//Left Forward
	set_motor_left(0,150);
	set_motor_right(0,150);
	delay_cycles_ms(2000);
	//Right Forward
	/*
	set_motor_left(0,0);
	set_motor_right(0,0);
	delay_cycles_ms(2000);
	
	set_motor_left(1,150);
	set_motor_right(1,150);
	delay_cycles_ms(2000);
	*/
	/*
	//Left Reverse
	set_motor_left(1,150);
	set_motor_right(0,0);
	delay_cycles_ms(2000);
	//Right Reverse
	set_motor_left(0,0);
	set_motor_right(1,150);
	delay_cycles_ms(2000);
	
	//Both Forward
	set_motor_left(0,0);
	set_motor_right(0,0);
	delay_cycles_ms(500);
	set_motor_left(0,150);
	set_motor_right(0,150);
	delay_cycles_ms(2000);
	//Both Reverse
	set_motor_left(0,0);
	set_motor_right(0,0);
	delay_cycles_ms(500);
	set_motor_left(1,150);
	set_motor_right(1,150);
	delay_cycles_ms(2000);
	*/
}