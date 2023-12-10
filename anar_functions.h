
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // include processor files - each processor file is guarded.  


#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

void SetPWMDutyCycle(unsigned int DutyCycle);
void InitPWM(void);
void generateTone(void);
void stopTone(void);
void dot();
void dash();

#define FSLASH  \
     dash();\
     __delay_ms(150); \
     dot();\
     __delay_ms(150);\
     dot();   \
     __delay_ms(150);\
     dash();\
     __delay_ms(150);\
    dot();
    
#define SEND_B   dash(); __delay_ms(150);  dot();\
      __delay_ms(150);dot(); __delay_ms(150);dot();

#define SEND_A 