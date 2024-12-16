#ifndef _REGULATOR_TIMER_H_
#define _REGULATOR_TIMER_H_

#include <LPC17xx.h>

typedef union{
	struct {
		uint8_t f1ms		: 1;
		uint8_t f5ms		: 1;
		uint8_t f50ms		: 1;
		uint8_t f500ms	: 1;
		uint8_t f1s			: 1;
		uint8_t 				: 3; 	//!< unused
	};
	uint8_t bits;
} timerFlags;

extern timerFlags timerStatus;

void initTimer(void);
/*
void resetTimer(void);
void delay(unsigned int time_ms);
uint32_t timestamp(void);
*/

#endif