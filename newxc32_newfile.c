#include <xc.h>

#include <p32xxxx.h> 
#include <stdio.h>
#include <stdio.h>
#include <p32xxxx.h>
#define _XTAL_FREQ 4000000
#define DELAY 36000




void main(void){
   
    TRISG = 0x00;                   // set mode for port G (1 = 0xff - entrance, 0 = 0x00 - exit)
    PORTG = 0x00;           
    TMR1 = 0;
        PORTGbits.RG12 = 1;
        while(TMR1 < DELAY){
            TMR1++;
        }
        TMR1 = 0;
        PORTGbits.RG12 = 0;
        /*while(TMR1 < DELAY){
            TMR1++;
        }*/
        TMR1 = 0;
        PORTGbits.RG13 = 1;
        while(TMR1 < DELAY){
            TMR1++;
        }
        TMR1 = 0;
        PORTGbits.RG13 = 0;
        /*while(TMR1 < DELAY){
            TMR1++;
        }*/
        TMR1 = 0;
        PORTGbits.RG14 = 1;
        while(TMR1 < DELAY){
            TMR1++;
        }
        TMR1 = 0;
        PORTGbits.RG14 = 0;
        /*while(TMR1 < DELAY){
            TMR1++;
        }*/
        TMR1 = 0;
        PORTGbits.RG15 = 1;
        while(TMR1 < DELAY){
            TMR1++;
        }
        TMR1 = 0;
        PORTGbits.RG15 = 0;
       /* while(TMR1 < DELAY){
            TMR1++;
        }*/       
    
         TMR1 = 0;
        PORTGbits.RG12 = 1;// high level 1st diod
        while(TMR1 < DELAY){//wait
            TMR1++;
        }
        
        TMR1 = 0;
        PORTGbits.RG13 = 1;//high level 2 diod
        while(TMR1 < DELAY){//wait
            TMR1++;
        }
        TMR1 = 0;
        PORTGbits.RG14 = 1;
        while(TMR1 < DELAY){
            TMR1++;
        }
        TMR1 = 0;
        PORTGbits.RG15 = 1;
        while(TMR1 < DELAY){
            TMR1++;
        }
        TMR1 = 0;
        PORTGbits.RG15 = 0;//low level all diod
        PORTGbits.RG14 = 0;
        PORTGbits.RG13 = 0;
        PORTGbits.RG12 = 0;
        while(TMR1 < DELAY){
            TMR1++;
        }
        return;
}