   // FILE:          modern_barbershop.c
   // TITLE:         Barbearia Chacarosque e Amboni
   // SUBMITTED BY:  Antônio Pedro Chacarosque de Castro e Matheus Costa Amboni
   //                All code are our own except where credited to others.
   // FOR COURSE:    Computer Enginnering
   // DUE DATE:      December 09, 2020
   //
   // PURPOSE:
   //
   // This code was made with the objective to automate the process of making an 
   // appointment at the barbershop.
   //
   // OVERALL METHOD:
   // The list of general tasks is:
   // 1. The code print the first menu by the menu1 function so the user must insert
   //    a number between 1 and 3.
   // 2. The code saves in the variable "c" and depending on the value of "c" the code 
   //    execute a switch statement, printing a different text, declares a new value to
   //    variable "corte" and a new value to the variable "v".
   // 3. The code print the second menu by the menu2 function so the user must insert
   //    a number between 1 and 4.
   // 4. The code saves in the variable "b" and depending on the value of "b" the code
   //    execute a switch statement, printing a different text and declares a new value to
   //    variable "barbeiro".  
   // 5. The user must insert a value to the variable "horario". 
   // 6. The code print the values saved at the variables "v", "corte", "barbeiro", "horario".
   //
   // FUNCTIONS:
   //
   // menu1 
   //    This function simply prints the introduction of the code and the first menu
   //
   // menu2
   //    This function simply prints the second menu. 
   //
   // INCLUDED FILES:
   //    menu.h
   //    
   //
   // DATA FILES:
   //    stdio.h

#include <stdio.h>
#include "menu.h"

int c;
int b;
int v; 

char *barbeiro = "";
char *corte = "";
char horario[5] = "";

int main() {
   menu1();
   scanf("%d", &c);
   switch (c)
   {
   case 1 :
      printf("Voce selecionou cabelo\n");
      corte = "apenas cabelo";
      v = 40;
      break;
   case 2 :
      printf("Voce selecionou Barba\n");
      corte = "apenas barba";
      v = 15;
      break;
   case 3 :
      printf("Voce selecionou barba e cabelo\n");
      corte = "barba e cabelo";
      v = 50;
      break;
   default:
      printf("Selecione um numero de 1 a 3\n");
      return 0;
   }
   menu2();
   scanf("%d", &b);
   switch (b)
   {
   case 1 :
      printf("Voce escolheu Matheus\n");
      barbeiro = "Matheus";
      break;
   case 2 :
      printf("Voce escolheu Antonio\n");
      barbeiro = "Antonio";
      break;
   case 3 :
      printf("Voce escolheu Carlos\n");
      barbeiro = "Carlos";
      break;
   case 4 :
      printf("Voce escolheu Nicolas\n");
      barbeiro = "Nicolas";
      break;
   default:
      printf("Selecione um numero de 1 a 4\n");
      return 0;
   }
   printf("Agora por favor, solicite o horario preferido: \n");
   printf("Formato: hh:mm \n\n");
   scanf("%s", horario);
   printf("\n");
   printf("Horario solicitado com o\
   \b\bbarbeiro %s, o corte sendo %s as %s horas! \n", barbeiro, corte, horario );
   printf("O valor fica: %d,00 R$\n", v);
   printf("Entraremos em contato com voce em breve\n");
   return 0;
}


  
