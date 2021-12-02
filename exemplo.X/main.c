/*
 * File:   main.c
 * Author: mateu
 *
 * Created on 18 de Agosto de 2021, 07:56
 */


#include <xc.h>

#include <pic16f877a.h>
#include <stdio.h>

#define _XTAL_FREQ 4000000


void main(void) {
    TRISB= 0;
    
    while(1){
        PORTBbits.RB0 = 1; //coloca pino RB0 em 1
        __delay_ms(1000);
        
        PORTBbits.RB0 = 0; //zera pino RB0
        __delay_ms(1000);
    }
    
    
}
