/*
 * File:   main.c
 * Author: Phil Glazzard
 * MPLABX IDE v6.00
 * XC8 v2.36
 * Optimisations 0
 * Created on 15 November 2022, 18:07
 */


#include <xc.h>
#include "configurationBits.h"
#include "constants.h"
#include "configPins.h"
#include "configOsc.h"
#include "__interrupt.h"
#include "enableInterrupts.h"


void main(void) 
{
    configOsc();
    configPins();
    enableInterrupts();
    LATBbits.LATB7 = LO;
    
    while(1)
    {
        //LED ON
       // if(PORTAbits.RA4 == LO)
        {
       // PORTBbits.RB7 = HI;
      //      LATBbits.LATB7 = HI;
      //  __delay_ms(100);
        //PORTBbits.RB7 = LO;
      //  LATBbits.LATB7 = LO;
       // __delay_ms(100);
        }
    }
}
