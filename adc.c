#include <xc.h>
#include "adc.h"
#include "config.h"


#define ACQ_US_DELAY 5

void ADC_Initialize(void)
{
    // set the ADC to the options selected in the User Interface
    
    // GO_nDONE stop; ADON enabled; CHS AN0; 
    ADCON0 = 0x81;
    
    // ADFM right; ADNREF VSS; ADPREF external; ADCS FOSC/4; 
    ADCON1 = 0x00;// 0xC2;
    
    // ADRESL 0; 
    ADRESL = 0x00;
    
    // ADRESH 0; 
    ADRESH = 0x00;
    
}

void ADC_SelectChannel(adc_channel_t channel)
{
    // select the A/D channel
    ADCON0bits.CHS = channel;    
    // Turn on the ADC module
    ADCON0bits.ADON = 1;  
}

void ADC_StartConversion()
{
    // Start the conversion
    ADCON0bits.GO_nDONE = 1;
}


bool ADC_IsConversionDone()
{
    // Start the conversion
   return ((bool)(!ADCON0bits.GO_nDONE));
}

adc_result_t ADC_GetConversionResult(void)
{
    // Conversion finished, return the result
    return ((adc_result_t)((ADRESH << 2) + (ADRESL >> 6)));
}

adc_result_t ADC_GetConversion(adc_channel_t channel)
{
    // select the A/D channel
    ADCON0bits.CHS = channel;    
    
    // Turn on the ADC module
    ADCON0bits.ADON = 1;

    // Acquisition time delay
    __delay_us(ACQ_US_DELAY);

    // Start the conversion
    ADCON0bits.GO_nDONE = 1;

    // Wait for the conversion to finish
    while (ADCON0bits.GO_nDONE)
    {
    }

    // Conversion finished, return the result
    return ((adc_result_t)((ADRESH << 2) + (ADRESL >> 6)));
}

void ADC_TemperatureAcquisitionDelay(void)
{
    __delay_us(200);
}
/**
 End of File
*/
