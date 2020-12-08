#include <stdio.h>

void menu1();
void menu2();

void menu1() {
   printf("\n+-----------------------+\n"
        "|      BEM VINDO A      |\n"
        "|       BARBEARIA       |\n"
        "| CHACAROSQUE E AMBONI  |\n"
        "+-----------------------+\n");
   printf("A barbearia mais moderna da regiao\n");
   printf("Por favor, selecione como quer o seu corte: \n\n");
   printf("Apenas Cabelo (40R$):     digite (1) \n");
   printf("Apenas Barba (15R$):      digite (2) \n");
   printf("Barba e cabelo (50R$):    digite (3) \n\n");
}

void menu2() {
     printf("Agora por favor, selecione com qual\
   \b\bbarbeiro queres o servico: \n\n");
   printf("Matheus:     digite (1) \n");
   printf("Antonio:     digite (2) \n");
   printf("Carlos:      digite (3) \n");
   printf("Nicolas:     digite (4) \n\n");
}
