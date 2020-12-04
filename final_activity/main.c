#include <stdio.h>

#include "function.h"

int c;

int main() {
   system("cls || clear");
   printf("Bem vindo a Cabelaria Chacarosque e Amboni \n");
   printf("------------------------------------------\n");
   printf("Por favor, solicite como quer o seu corte: \n");
   printf("\n");
   printf("Apenas Cabelo: digite 1 \n");
   printf("Apenas Barba: digite 2 \n");
   printf("Barba e cabelo: digite 3 \n");
   printf("\n");
   scanf("%d", &c);
   return 0;
}