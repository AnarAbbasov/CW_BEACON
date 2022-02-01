
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
    SetPWMDutyCycle(10);
    TRISB0=0;
    
     while(1)
     {
            PORTBbits.RB0=0;
            dash_tone();
            __delay_ms(150);
            dot_tone();
            __delay_ms(150);    //C
            dash_tone();
            __delay_ms(150);
            dot_tone();
            __delay_ms(300);
            dash_tone(); 
            __delay_ms(150);
            dash_tone(); 
            __delay_ms(150);  //Q
            dot_tone();  
            __delay_ms(150);
            dash_tone();
            __delay_ms(300);
            dash_tone();
            __delay_ms(150);
            dot_tone();
            __delay_ms(150);    //C
            dash_tone();
            __delay_ms(150);
            dot_tone();
            __delay_ms(300);
            dash_tone(); 
            __delay_ms(150);
            dash_tone(); 
            __delay_ms(150);  //Q
            dot_tone();  
            __delay_ms(150);
            dash_tone();
            __delay_ms(300);
            dash_tone();
            __delay_ms(150);
            dot_tone();
            __delay_ms(150);    //C
            dash_tone();
            __delay_ms(150);
            dot_tone();
            __delay_ms(300);
            dash_tone(); 
            __delay_ms(150);
            dash_tone(); 
            __delay_ms(150);  //Q
            dot_tone();  
            __delay_ms(150);
            dash_tone();
            __delay_ms(300);
            dash_tone();               
            __delay_ms(150)      ;
            dot_tone();                /*K*/
            __delay_ms(150)      ;
            dash_tone();    
            __delay_ms(300)      ;
            dash_tone();                 
            __delay_ms(150)      ;
            dash_tone();                 /*G*/
            __delay_ms(150)      ;
            dot_tone();  
            __delay_ms(300)      ;
              dash_tone();               
            __delay_ms(150)      ;
            dash_tone();               
            __delay_ms(150)      ;
            dot_tone();                
            __delay_ms(150)      ;/*7*/
            dot_tone();                
            __delay_ms(150)      ;
            dot_tone();                  
            __delay_ms(300)      ;
            dot_tone();                
            __delay_ms(150)      ;
            dash_tone();               
            __delay_ms(150)      ;/*R*/
            dot_tone();           
            __delay_ms(300)      ;
            dash_tone();               
            __delay_ms(150)      ;
            dot_tone();              /* N*/
            __delay_ms(300)      ;
            dash_tone();               
            __delay_ms(150)      ;/*M*/
            dash_tone();                
            PORTBbits.RB0=0;
            __delay_ms(15000)      ;
            
     }
    return;
}
