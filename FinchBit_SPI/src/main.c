
#include <asf.h>
#include "power_on_off.h"
#include "RGB_LED.h"
#include "motors.h"
#include "test.h"

//Serial Time out
volatile uint8_t serial_timeout_count = 0;
volatile bool serial_timeout = false;


//RGB 
volatile uint8_t temp_pin_array[3];
volatile uint8_t temp_pin_array_2[3];
volatile bool update_compare_array = false;

volatile uint8_t temp_compare_array_2[3];
volatile uint8_t temp_compare_array[3];

volatile bool lock_temp_array = false;

int main (void)
{
	system_init();
	power_button_init();
	delay_init();
	ORB_init();
	configure_motors();
	enable_ORB();
	 
	/* Insert application code here, after the board has been initialized. */
	while(1)
	{
		check_power_off_button();
		//test_RGB();
	    //test_motors();
	}
}
