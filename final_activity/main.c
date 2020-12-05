#include <stdio.h>

#include "function.h"

int c;
int b;
int hora;
int minuto;
int diaSemana;

int main() {
   printf("+-----------------------+\n"
        "|       Bem vindo a     |\n"
        "|       barbearia       |\n"
        "|  Chacarosque e Amboni |\n"
        "+-----------------------+\n");
   printf("Por favor, solicite como quer o seu corte: \n");
   printf("\n");
   printf("Apenas Cabelo:     digite (1) \n");
   printf("Apenas Barba:      digite (2) \n");
   printf("Barba e cabelo:    digite (3) \n");
   printf("\n");
   scanf("%d", &c);
   printf("\n");
   printf("Agora por favor, solicite com qual barbeiro queres o servico: \n");
   printf("\n");
   printf("Matheus:     digite (1) \n");
   printf("Antonio:     digite (2) \n");
   printf("Carlos:      digite (3) \n");
   printf("\n");
   scanf("%d", &b);
   printf("\n");
   printf("Agora por favor, solicite o horario preferido: \n");
   
   return 0;
}
