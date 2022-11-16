#include "constants.h"
void configPins(void)
{
    // turn off analog pin ANSB4 to make pin digital i/o
    ANSELBbits.ANSB4 = LO;
    
    // make RB7 is an output
    TRISBbits.TRISB7 = LO;
    
    
    ANSELA= 0x00;
    CM1CON0 = 0x00;                 // all COMPARATORS off
    CM2CON0 = 0x00;
    CM1CON1 = 0x00;
    CM2CON1 = 0x00;
    //make RA4  an input
    TRISAbits.TRISA4 = HI;
}
