#include <stdio.h>

#include "function.h"

int c;
int b;
char horario[5] = "";

int main() {
   printf("+-----------------------+\n"
        "|       Bem vindo a     |\n"
        "|       barbearia       |\n"
        "|  Chacarosque e Amboni |\n"
        "+-----------------------+\n");
   printf("Por favor, solicite como quer o seu corte: \n\n");
   printf("Apenas Cabelo:     digite (1) \n");
   printf("Apenas Barba:      digite (2) \n");
   printf("Barba e cabelo:    digite (3) \n\n");
   scanf("%d", &c);
   printf("\n");
   printf("Agora por favor, solicite com qual barbeiro queres o servico: \n\n");
   printf("Matheus:     digite (1) \n");
   printf("Antonio:     digite (2) \n");
   printf("Carlos:      digite (3) \n\n");
   scanf("%d", &b);
   printf("\n");
   printf("Agora por favor, solicite o horario preferido: \n");
   printf("Formato: hh:mm \n\n");
   scanf("%s", horario);
   printf("\n");
   printf("Horario marcado com o barbeiro %d, sendo %d e no horario %s. \n", c, b, horario);
   printf("Aguardamos sua presenca.");
   
   return 0;
}
