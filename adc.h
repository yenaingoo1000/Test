#ifndef _ADC_H
#define _ADC_H


#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
#include "config.h"

#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif



typedef uint16_t adc_result_t;

typedef struct
{
    adc_result_t adcResult1;
    adc_result_t adcResult2;
} adc_sync_double_result_t;

typedef enum
{
    channel_AN0 =  0x0,
    channel_AN1 =  0x1,
    channel_Temp =  0x1D,
    channel_DAC =  0x1E,
    channel_FVR =  0x1F
} adc_channel_t;

void ADC_Initialize(void);


void ADC_SelectChannel(adc_channel_t channel);


void ADC_StartConversion();


bool ADC_IsConversionDone();


adc_result_t ADC_GetConversionResult(void);


adc_result_t ADC_GetConversion(adc_channel_t channel);


void ADC_TemperatureAcquisitionDelay(void);

#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif

#endif	//_ADC_H
/**
 End of File
*/