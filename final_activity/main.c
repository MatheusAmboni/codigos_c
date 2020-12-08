#include <stdio.h>
#include <string.h>
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


  

