#include <xc.h>
#include "pin_manager.h"
#include "stdbool.h"



void PIN_MANAGER_Initialize(void)
{
    PORTE = 0x00;    
    PORTA = 0x00;    
    PORTB = 0x00;    
    PORTC = 0x00;    
    
    TRISE = 0x08;
    TRISA = 0x03;
    TRISB = 0x80;
    TRISC = 0x00;

    ANSEL = 0x03;
    ANSELH = 0;

    /**
    WPUx registers
    */ 
    //WPUE = 0x00;
    //WPUB = 0x00;
    //IOCB = 0;
    //OPTION_REGbits.nWPUEN = 1;
    /**
    APFCONx registers
    */
    //APFCON = 0x00;


   
    
}       


/**
 End of File
*/
