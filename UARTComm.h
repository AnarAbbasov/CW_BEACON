/* 
 * File:   UARTCOmm.h
 * Author: anar_
 *
 * Created on December 9, 2023, 9:24 PM
 */

#ifndef UARTCOMM_H
#define	UARTCOMM_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* UARTCOMM_H */
#ifndef XC
#define XC
#include <xc.h>
#endif
void InitUART(void);
void SendByteSerially( char Byte);

void __interrupt() ISR(void);
unsigned char ReceiveByteSerially(void);

void sendStringSerially(const  char* st);

