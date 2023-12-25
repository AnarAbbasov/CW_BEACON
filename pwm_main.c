
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
#include "UARTComm.h"
#include <xc.h>
#define _XTAL_FREQ 4000000
#include <stdio.h>



void main(void)
{
TRISB=0;

InitPWM();
InitUART();
GIE=1;
PEIE=1;
EnableSend=true;
SetPWMDutyCycle(10);
char enableSendInd[1];
//sprintf(enableSendInd,"Value of EnableSend %d\n",EnableSend);
//sendStringSerially(enableSendInd);
sendStringSerially("***4K/KG7RNM Mayaki!***\n");
sendStringSerially("***Versiya 1.0.1 (12/24/2023)***\n");
sendStringSerially("***Mayak bashlayir!***\n");
while(1)
{
    if (EnableSend==true){
        dash();
        __delay_ms(150);
        dot();
        __delay_ms(150);    //C
        __delay_ms(150);
        dot();

        __delay_ms(300);
        
        dash(); 
        __delay_ms(150);
        dash(); 
        __delay_ms(150);  //Q
        dot();  
        __delay_ms(150);
        dash();
        
        
        __delay_ms(300);
        
        
       
        
                 
        dash();
        __delay_ms(150);
        dot();
        __delay_ms(150);    //C
        dash();
        __delay_ms(150);
        dot();
        
        
        
        __delay_ms(300);
        
        
        
        dash(); 
        __delay_ms(150);
        dash(); 
        __delay_ms(150);  //Q
        dot();  
        __delay_ms(150);
        dash();
        
        
        __delay_ms(300);
        
        
        
        
               
        
                 
        dash();
        __delay_ms(150);
        dot();
        __delay_ms(150);    //C
        dash();
        __delay_ms(150);
        dot();
        
        
        
        __delay_ms(300);
        
        
        
        dash(); 
        __delay_ms(150);
        dash(); 
        __delay_ms(150);  //Q
        dot();  
        __delay_ms(150);
        dash();
        
        
        __delay_ms(300);
        
        
        
        
        dash();               
        __delay_ms(150)      ;
        dot();                /*K*/
        __delay_ms(150)      ;
        dash();    
        
        
        __delay_ms(300)      ;
        
        
        
        dash();                 
        __delay_ms(150)      ;
        dash();                 /*G*/
        __delay_ms(150)      ;
        dot();  
        
        
        
      __delay_ms(300)      ;
        
      
      
          dash();               
        __delay_ms(150)      ;
        dash();               
       __delay_ms(150)      ;
        dot();                
       __delay_ms(150)      ;/*7*/
        dot();                
      __delay_ms(150)      ;
        dot();                  
        
        
        
        __delay_ms(300)      ;
        
        
        
        dot();                
       __delay_ms(150)      ;
        dash();               
        __delay_ms(150)      ;/*R*/
        dot();           
        
        
        __delay_ms(300)      ;
        
        
        dash();               
        __delay_ms(150)      ;
        dot();              /* N*/
        
        __delay_ms(300)      ;
        
        
        dash();               
        __delay_ms(150)      ;/*M*/
        dash();                
          
        __delay_ms(300) ;
        
        FSLASH
        __delay_ms(300) ;
        SEND_B
        
        /*__delay_ms(300) ;
                
             dot();
        __delay_ms(150);
             dash();     // P
        __delay_ms(150);
             dash();   
        __delay_ms(150);
             dot();
        
           
        
        
        
        
        __delay_ms(300) ; 
        
         dot();
        __delay_ms(150)  ;  S
         dot();
        __delay_ms(150);
          dot();
        
        __delay_ms(300) ;
        
         dot();                 E
        
        __delay_ms(300) ;
        
         dash();               
        __delay_ms(150)      ;
        dot();                K
        __delay_ms(150)      ;
        dash();    
                
        */
         PORTBbits.RB0=0;
        __delay_ms(15000)      ;
    }
    else {
        sendStringSerially( "Mayak Dayandirilib!\n");
      //  sprintf(enableSendInd,"Value of EnableSend %d\n",EnableSend);
       // sendStringSerially(enableSendInd);
       // SendByteSerially( '\n');
         __delay_ms(1000) ;
        continue;
    }
      //  sendStringSerially("KG7RNM/b Beacon\n");
     }
    return;
}
