/*
 * File:   main.c
 * Author: TOP
 *
 * Created on February 14, 2019, 9:52 AM
 */


#include <xc.h>
#include "config.h"
#include <stdio.h>
#define DEC 10

char *ftoa1(float f, int * status);

void main(void) 
{
    SYSTEM_Initialize();
    
    while(1)
    {
        uint16_t adc = ADC_GetConversion(0);
        float volt = (5.0 * adc) / 1024.0;
        printf("Volt :");
        printf(ftoa1(volt,1));
        printf("\nAnalog : %d \n", adc);
        __delay_ms(1000);
    }
    return;
}


char *ftoa1(float f, int * status)
{
	static char		buf[17];
	char *			cp = buf;
	unsigned long	l, rem;

	if(f < 0) {
		*cp++ = '-';
		f = -f;
	}
	l = (unsigned long)f;
	f -= (float)l;
	rem = (unsigned long)(f * 1e6);
	sprintf(cp, "%lu.%2.2lu", l, rem);
	return buf;
}
