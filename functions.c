/*
 * File:   functions.c
 * Author: User 1
 *
 * Created on January 23, 2022, 12:10 PM
 */


#include <xc.h>
#define _XTAL_FREQ 4000000

              
void InitPWM(void)
{
    
    TRISB3=0;
    CCP1CON=0x0C;
    PR2=0x5E;
    T2CONbits.T2CKPS0=1;
    T2CONbits.T2CKPS1=0;

}



void generateTone(void)
{
    //T2CON |=0x04;
     T2CONbits.TMR2ON=1;
}
void stopTone(void)
{
    T2CONbits.TMR2ON=0;
}
void SetPWMDutyCycle(unsigned int DutyCycle)
{

CCPR1L=DutyCycle>>2;
    CCP1CON&=0xCF;
    CCP1CON|=(0x30&(DutyCycle<<4));
    //T2CON |=0x04;
     
}



void dot()
{
 
  generateTone(); 
PORTBbits.RB0=1;
__delay_ms(50);
PORTBbits.RB0=0;
  stopTone();

return ;
}



void dash()
{

     generateTone();
PORTBbits.RB0=1;
__delay_ms(150);
 PORTBbits.RB0=0;
    stopTone();
return ;
}