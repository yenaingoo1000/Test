
#ifndef EUSART_H
#define EUSART_H

#include <xc.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include "config.h"

#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif


#define EUSART_DataReady  (EUSART_is_rx_ready())

void EUSART_Initialize(void);

bool EUSART_is_tx_ready(void);

bool EUSART_is_rx_ready(void);

bool EUSART_is_tx_done(void);

uint8_t EUSART_Read(void);

void EUSART_Write(uint8_t txData);


#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif

#endif  // EUSART_H
