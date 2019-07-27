/* 
 * File:   config.h
 * Author: TOP
 *
 * Created on February 14, 2019, 9:54 AM
 */

#ifndef CONFIG_H
#define	CONFIG_H

#ifdef	__cplusplus
extern "C" {
#endif
#include<stdint.h>
#include<stdbool.h>
#include<xc.h>
#include "adc.h"
#include "eusart.h"
#include "pin_manager.h"
    
#define _XTAL_FREQ 16000000
    
void SYSTEM_Initialize(void);
    
void OSCILLATOR_Initialize(void);


#ifdef	__cplusplus
}
#endif

#endif	/* CONFIG_H */

