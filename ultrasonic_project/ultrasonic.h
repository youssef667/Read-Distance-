/*
 * ultrasonic.h
 *
 *  Created on: Oct 14, 2021
 *      Author: youssef
 */

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_
#include "std_types.h"
#include "gpio.h"

#define Trigger_port  PORTB_ID
#define Trigger_pin   PIN5_ID



void Ultrasonic_init(void);
void Ultrasonic_Trigger(void);
uint16 Ultrasonic_readDistance(void);
void Ultrasonic_edgeProcessing(void);

#endif /* ULTRASONIC_H_ */
