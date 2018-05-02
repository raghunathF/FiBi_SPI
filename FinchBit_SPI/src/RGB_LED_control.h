/*
 * RGB_control.h
 *
 * Created: 4/26/2018 2:31:52 PM
 *  Author: raghu
 */ 


#ifndef RGB_LED_CONTROL_H_
#define RGB_LED_CONTROL_H_

void update_RGB_LED(uint8_t led_red , uint8_t led_green, uint8_t led_blue );
extern uint8_t temp_compare_array[3];
extern uint8_t temp_compare_array_2[3];
extern bool update_compare_array;




#endif /* RGB_LED_CONTROL_H_ */