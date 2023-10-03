/*
 * SevenSegment.c
 *
 * Created: 9/23/2023 12:04:02 PM
 * Author : youssef
 */ 

#define F_CPU 1000000ul
#include <avr/io.h>
#include <util/delay.h>
#include "STDMACROS.h"
#include "Seven_Segment.h"

int main(void)
{
	set_bit(DDRA, 0);
	set_bit(DDRA, 1);
	set_bit(DDRA, 2);
	set_bit(DDRA, 3);
	
	SS_D(PORTA, 5);
    while (1) 
    {
    }
}

