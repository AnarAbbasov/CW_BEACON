#ifndef _XTAL_FREQ
#define _XTAL_FREQ 4000000
#endif
#define BAUDRATE 9600

#include "UARTComm.h"

void InitUART(void)
{
    TRISB=0;
    TRISB=1;
    SPBRG=((_XTAL_FREQ/16)/BAUDRATE)-1;
    BRGH=1;
    SYNC=0;
    SPEN=1;
    CREN=1;
    SREN=0;
    TXIE=0;
    RCIE=1;
    TX9=0;
    RX9=0;
    TXEN=0;
    TXEN=1;
}


void SendByteSerially(unsigned char Byte)
{
   while(!TXIF);
   TXREG=Byte;
}


void interrupt ISR(void)
{
    if(RCIF)
    {
        if(OERR)
        {
            CREN=0;
            CREN=1;
        }
    }
    if(RCREG=='F'){
    EnableSend=0;
    SendByteSerially( 'K');
    }
    
    if(RCREG=='S')
    {
    EnableSend=1;
    SendByteSerially( 'K');
    }
}





unsigned char ReceiveByteSerially(void)
{
    if(OERR)
    {
    CREN=0;
    CREN=1;
    }
    while(!RCIF);
    return RCREG;
}

    