/*
 * pinout.h
 *
 * Created: 4/25/2018 4:15:43 PM
 *  Author: raghu
 */ 


#ifndef PINOUT_H_
#define PINOUT_H_


//RGB LEDs
#define RGB_R_PIN PIN_PA27
#define RGB_B_PIN PIN_PA30
#define RGB_G_PIN PIN_PA31

//Motor
#define LEFT_MOTOR_CLOCK_PIN	PIN_PA10
#define LEFT_MOTOR_ANTI_PIN		PIN_PA11
#define RIGHT_MOTOR_CLOCK_PIN   PIN_PA04
#define RIGHT_MOTOR_ANTI_PIN    PIN_PA05

//Line Sensor
#define RIGHT_LINE_SENSOR_PIN        PIN_PA08
#define LEFT_LINE_SENSOR_PIN         PIN_PA02
#define LINE_SENSOR_POWER_PIN     PIN_PA17

//Ultra Sound Sensor
#define US_ECHO_PIN			PIN_PA06
#define US_TRIGGER_PIN		PIN_PA07

//Power On/off
#define POWER_ON_PIN		PIN_PA09
#define POWER_OFF_PIN       PIN_PA14
//Encoder
#define LEFT_ENCODER_PIN        PIN_PA16
#define RIGHT_ENCODER_PIN       PIN_PA15

//Battery monitor
#define BATTERY_MONITOR_PIN     PIN_PA03

//SPI
#define SPI_SLAVE_MOSI_PIN      PIN_PA25
#define SPI_SLAVE_MISO_PIN      PIN_PA22
#define SPI_SLAVE_SCK_PIN       PIN_PA23
#define SPI_SLAVE_SS_PIN        PIN_PA24





#endif /* PINOUT_H_ */