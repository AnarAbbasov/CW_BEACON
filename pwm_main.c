
// PIC16F628A Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RA5/MCLR/VPP Pin Function Select bit (RA5/MCLR/VPP pin function is MCLR)
#pragma config BOREN = ON       // Brown-out Detect Enable bit (BOD enabled)
#pragma config LVP = ON         // Low-Voltage Programming Enable bit (RB4/PGM pin has PGM function, low-voltage programming enabled)
#pragma config CPD = OFF        // Data EE Memory Code Protection bit (Data memory code protection off)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

#include "anar_functions.h"
#include <xc.h>
#define _XTAL_FREQ 4000000
void main(void) {
    
    InitPWM();
    
    int pwmcyc=0;
    
      TRISB0=0;
     generateTone(); 
     while(1)
     {
        SetPWMDutyCycle(pwmcyc);
         
        __delay_ms(1500);
        if (pwmcyc>=0x041A){
            pwmcyc=0;
        
        }
        
        pwmcyc=pwmcyc+50;
        
    
         
  
        
    
     }
    return;
}
