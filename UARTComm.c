#ifndef _XTAL_FREQ
#define _XTAL_FREQ 4000000
#endif
#define BAUDRATE 9600

#include "UARTComm.h"
#include <string.h>
#include <stdbool.h> 
bool EnableSend = true;
void InitUART(void)
{
     TRISB2=0;
    TRISB1=1;
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
    TX9D=0;
    TXEN=1;
}


void SendByteSerially( char Byte)
{
   while(!TXIF);
   TXREG=Byte;
}


void __interrupt() ISR(void)
{
    
    if(RCIF)
    {
        if(OERR)
        {
            CREN=0;
            CREN=1;
        }
    }
    
   SendByteSerially( RCREG);
   if(RCREG=='R'){
    EnableSend=true;
    SendByteSerially( '\n');
    SendByteSerially( 'OK');
    }
    
    if(RCREG=='S')
    {
    EnableSend=false;
    SendByteSerially( '\n');
    SendByteSerially( 'OK');
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
    return (char)RCREG;
}



void sendStringSerially(const  char* st)
{
//while(*st)
for ( int i=0;i<=strlen(st);i++)
{
    
  SendByteSerially(st[i]);
  

}
}