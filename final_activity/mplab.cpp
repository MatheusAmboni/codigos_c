#include <xc.h>
#include <pic16f877a.h>
#include <stdio.h>

#define _XTAL_FREQ 4000000

//****** congiguration bits  **************************************************
#pragma config WDTE = OFF   //Desabilita o uso do WDT
#pragma config FOSC = HS     //define uso do clock externo EM 4 OU 20mHZ
//se usar o XT no m?ximo 4Mhz
#pragma config PWRTE = ON   //habilita reset ao ligar
#pragma config BOREN = ON   //Habilita o reset por Brown-out 

//*** define pinos referentes a interface com LCD
#define RS RD2
#define EN RD3
#define D4 RD4
#define D5 RD5
#define D6 RD6
#define D7 RD7

#include "lcd.h"
int main()
{
  TRISB = 0;  //entrada chave e botao
  TRISC = 0;  //motor e led
  TRISD = 0x00;  //lcd
  
  PORTBbits.RB0 = 1;
  PORTBbits.RB1 = 1;
  PORTBbits.RB2 = 1;
  PORTBbits.RB3 = 1;
  PORTBbits.RB4 = 1;
  PORTBbits.RB5 = 1;
  
  PORTCbits.RC0 = 0;
  PORTCbits.RC1 = 0;
  PORTCbits.RC2 = 0;
  PORTCbits.RC3 = 0;
  PORTCbits.RC4 = 0;
  
  Lcd_Init();  //LCD iniciar
  Lcd_Clear(); //limpar lcd
  __delay_ms(2000);

  while(1)
  {
        if( 
            PORTBbits.RB0 == 1 &&
            PORTBbits.RB1 == 1 && 
            PORTBbits.RB2 == 1 && 
            PORTBbits.RB3 == 1 && 
            PORTBbits.RB4 == 1 && 
            PORTBbits.RB5 == 1 
        ){
            Lcd_Set_Cursor(1,1);           
            Lcd_Write_String("AUTOMACAO   "); 
            Lcd_Set_Cursor(2,1);            
            Lcd_Write_String("AMBONI");
        }

        if( 
            PORTBbits.RB0 == 1 &&
            PORTBbits.RB1 == 1 && 
            PORTBbits.RB2 == 1 && 
            PORTBbits.RB3 == 1 && 
            PORTBbits.RB4 == 0 && 
            PORTBbits.RB5 == 1 
        ){
            Lcd_Set_Cursor(1,1);           
            Lcd_Write_String("caixa normal  "); 
            Lcd_Set_Cursor(2,1);            
            Lcd_Write_String("0%    ");
        }

        if(
            PORTBbits.RB0 == 1 &&
            PORTBbits.RB1 == 1 && 
            PORTBbits.RB2 == 1 && 
            PORTBbits.RB3 == 0 && 
            PORTBbits.RB4 == 0 && 
            PORTBbits.RB5 == 1   
        ){        
            Lcd_Set_Cursor(1,1);           
            Lcd_Write_String("caixa normal  "); 
            Lcd_Set_Cursor(2,1);            
            Lcd_Write_String("25%   ");
        }

        if(
            PORTBbits.RB0 == 1 &&
            PORTBbits.RB1 == 1 && 
            PORTBbits.RB2 == 0 && 
            PORTBbits.RB3 == 0 && 
            PORTBbits.RB4 == 0 && 
            PORTBbits.RB5 == 1   
        ){   
            Lcd_Set_Cursor(1,1);           
            Lcd_Write_String("caixa normal  "); 
            Lcd_Set_Cursor(2,1);            
            Lcd_Write_String("100%  ");
        }

        if(
            PORTBbits.RB0 == 1 &&
            PORTBbits.RB1 == 0 && 
            PORTBbits.RB2 == 0 && 
            PORTBbits.RB3 == 0 && 
            PORTBbits.RB4 == 0 && 
            PORTBbits.RB5 == 1   
        ){    
            Lcd_Set_Cursor(1,1);           
            Lcd_Write_String("caixa filtrada"); 
            Lcd_Set_Cursor(2,1);            
            Lcd_Write_String("25%   ");
        }

        if(
            PORTBbits.RB0 == 0 &&
            PORTBbits.RB1 == 0 && 
            PORTBbits.RB2 == 0 && 
            PORTBbits.RB3 == 0 && 
            PORTBbits.RB4 == 0 && 
            PORTBbits.RB5 == 1   
        ){    

            Lcd_Set_Cursor(1,1);           
            Lcd_Write_String("caixa filtrada"); 
            Lcd_Set_Cursor(2,1);            
            Lcd_Write_String("100%  ");
        }

        if(
            PORTBbits.RB0 == 0 &&
            PORTBbits.RB1 == 0 && 
            PORTBbits.RB2 == 0 && 
            PORTBbits.RB3 == 0 && 
            PORTBbits.RB4 == 0 && 
            PORTBbits.RB5 == 0   
        ){    

            Lcd_Set_Cursor(1,1);           
            Lcd_Write_String("sirene ativada"); 
            Lcd_Set_Cursor(2,1);            
            Lcd_Write_String("100%  ");
        }

        if(
            PORTBbits.RB0 == 1 &&
            PORTBbits.RB1 == 0 && 
            PORTBbits.RB2 == 0 && 
            PORTBbits.RB3 == 0 && 
            PORTBbits.RB4 == 0 && 
            PORTBbits.RB5 == 0   
        ){    

            Lcd_Set_Cursor(1,1);           
            Lcd_Write_String("caixa filtrada"); 
            Lcd_Set_Cursor(2,1);            
            Lcd_Write_String("25%  ");
        }

        if(
            PORTBbits.RB0 == 1 &&
            PORTBbits.RB1 == 1 && 
            PORTBbits.RB2 == 0 && 
            PORTBbits.RB3 == 0 && 
            PORTBbits.RB4 == 0 && 
            PORTBbits.RB5 == 0   
        ){   
            Lcd_Set_Cursor(1,1);           
            Lcd_Write_String("caixa normal  "); 
            Lcd_Set_Cursor(2,1);            
            Lcd_Write_String("100%  ");
        }

        if(
            PORTBbits.RB0 == 1 &&
            PORTBbits.RB1 == 1 && 
            PORTBbits.RB2 == 1 && 
            PORTBbits.RB3 == 0 && 
            PORTBbits.RB4 == 0 && 
            PORTBbits.RB5 == 0   
        ){        
            Lcd_Set_Cursor(1,1);           
            Lcd_Write_String("caixa normal  "); 
            Lcd_Set_Cursor(2,1);            
            Lcd_Write_String("25%   ");
        }

        if( 
            PORTBbits.RB0 == 1 &&
            PORTBbits.RB1 == 1 && 
            PORTBbits.RB2 == 1 && 
            PORTBbits.RB3 == 1 && 
            PORTBbits.RB4 == 0 && 
            PORTBbits.RB5 == 0 
        ){
            Lcd_Set_Cursor(1,1);           
            Lcd_Write_String("caixa normal  "); 
            Lcd_Set_Cursor(2,1);            
            Lcd_Write_String("0%    ");
        }


    if(PORTBbits.RB4 == 0){  //comecar sistema 
        if(PORTBbits.RB5 == 0){  //habilita sirene
            if(PORTBbits.RB0 == 1 ){  //100% filtrada aberta
                PORTCbits.RC4 = 1;  //liga sirene
                if(PORTBbits.RB1 == 1){  //25% filtrada aberta
                    PORTCbits.RC4 = 0;  //desliga sirene
                    if(PORTBbits.RB2 == 1){  //100% normal aberta
                        PORTCbits.RC4 = 1;  //liga sirene
                        //if(PORTBbits.RB3 == 1){  //25% normal aberta
                            //PORTCbits.RC4 = 0;  //desliga sirene
                        //}else{
                            //PORTCbits.RC4 = 1;  //liga sirene
                        //}
                    }else{
                        PORTCbits.RC4 = 0;  //desliga sirene
                    }
                }else{
                    PORTCbits.RC4 = 1;  //liga sirene
                }
            }else{
                PORTCbits.RC4 = 0;
            }
        } 
        PORTCbits.RC2 = 1;  //liga a normal
        if(PORTBbits.RB2 == 0){  //se a 100% normal estiver ligada 
            PORTCbits.RC0 = 1;  //liga led normal cheia
            PORTCbits.RC2 = 1;  //mantem ligado motor normal pra continuar enchendo da normal tambem 
            PORTCbits.RC3 = 1;  //liga motor pra encher a filtrada
            if(PORTBbits.RB0 == 0){  //se a filtrada chega em 100%
                PORTCbits.RC1 = 1;  //liga o led da filtrada cheia
                PORTCbits.RC2 = 0;  //desliga motor normal
                PORTCbits.RC3 = 0;  //desliga motor filtrada
            }else{  //se a caixa filtrada nao estiver 100%
                PORTCbits.RC1 = 0;  //desligado led filtrada cheia 
            }
        }else{  //se a caixa normal nao estiver 100%
            PORTCbits.RC0 = 0;  //desligar led da normal cheia
            PORTCbits.RC3 = 0;  //desligar motor da filtrada pois agora so enche a normal
        }
    }else{  //garantir que fique tudo desligado 
        PORTCbits.RC0 = 0;
        PORTCbits.RC1 = 0;
        PORTCbits.RC2 = 0;
        PORTCbits.RC3 = 0;
        PORTCbits.RC4 = 0;
    }
  }
  return 0;
}


