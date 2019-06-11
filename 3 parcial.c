#include<include/18F4620.h>
#include<stdio.h>
#include<stdlib.h>
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, NOMCLR, STVREN, NOLVP, NODEBUG
#use delay(clock=40000000)
#define __DEBUG_SERIAL__
#ifdef __DEBUG_SERIAL__
   #define TX_232        PIN_D6
   #use RS232(BAUD=9600, XMIT=TX_232, BITS=8,PARITY=N, STOP=1)
#endif

int main(int argc, char argv)
{
    TRISB = 0;
    int i;
    
    while(1)
    {
        PORTB=0X00;
        for(i=0; i<100;i++){
        }
        PORTB=0X00;
        for(i=0; i<100;i++){
    }
}
    return(EXIT_SUCCESS);
}