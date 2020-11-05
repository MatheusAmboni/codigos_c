// FILE:          number_guessing_game.c
   // TITLE:         Number Guessing Game
   // SUBMITTED BY:  Matheus Costa Amboni & Antonio Pedro Chacarosque
   //                All code is my own except where credited to others.
   // FOR COURSE:    Programming Language 1
   // DUE DATE:      October 02, 2020
   //
   // PURPOSE:
   // This code was made for the purpose to make a guessing number game where the user has the
   // possibility to change the dificulty of the game. At the compiler the program will present to the user
   // a menu asking what dificulty does he wants the game to be, and according to the level, the user will have
   // less or more attempts as well as less or more numbers.
   // 
   // OVERALL METHOD:
   // The list of general tasks is:
   // 1. Print the difficulties available  
   // 2. Input the difficulty selected by the user
   // 3. A random number is generated by the functions random0, random1 or random2
   // 4. The user must input a number as suggested by the code
   // 5. It will return if the number inputed is smaller or bigger than the number generated
   // 6. If the number inputed is equal to the number generated, it will return a print that the user won the game
   // 7. If the user overtake the number of attempts defined by the difficulty selected it will return a print that he lost the game
   //
   // FUNCTIONS:
   //   random0: generates a random number between 0 and 25, as according to the parameter defined by the difficulty selected
   //   random2: generates a random number between 0 and 50, as according to the parameter defined by the difficulty selected
   //   random2: generates a random number between 0 and 100, as according to the parameter defined by the difficulty selected
   //   dicas: calculates if the number choosen is bigger or smaller than the number generated
   //
   // INCLUDED FILES:
   //    stdio.h

#include <stdio.h>

int random0();
int random1();
int random2();

void dicas(int numeroescolhido, int numerosorteado, int tentativa);

int main()
{
    int numerosorteado,
        tentativa,
        numeroescolhido,
        opcao;

        system("cls || clear");

        printf("Jogo de adivinhacao de numeros\n");
        printf("Feito pelo Matheus Amboni e Antonio Chacarosque\n\n");
        printf("Escolha sua dificuldade: \n");
        printf("0-Facil (20 tentativas, 25 numeros)\n");
        printf("1-Medio (15 tentativas, 50 numeros)\n");
        printf("2-Dificil (10 tentativas, 100 numeros)\n\n");

        printf("Dificuldade: ");
        scanf("%d", &opcao);

        switch( opcao )
        {
            case 0:
                printf("Sorteando numero entre 1 e 25...\n");
                numerosorteado = random0();

                printf("Tente adivinhar o numero!\n");
                tentativa = 0;

                do
                {
                    tentativa++;
                    printf("Tentativa %d: ", tentativa);
                    scanf("%d", &numeroescolhido);
                    dicas(numeroescolhido,numerosorteado,tentativa);
                }
                while( (numeroescolhido != numerosorteado) && (tentativa<=19));

                system("cls || clear"); 

                if (numeroescolhido == numerosorteado) {
                printf("Fim de jogo, voce ganhou com %d tentativas.\n",tentativa );
                }
                else {
                    printf("Fim de jogo voce perdeu.\n");
                }

                break;

            case 1:
                printf("Sorteando numero entre 1 e 50...\n");
                numerosorteado = random1();

                printf("Comecou! Tente adivinhar o numero!\n\n");
                tentativa = 0;

                do
                {
                    tentativa++;
                    printf("Tentativa %d: ", tentativa);
                    scanf("%d", &numeroescolhido);
                    dicas(numeroescolhido,numerosorteado,tentativa);
                }
                while( (numeroescolhido != numerosorteado) && (tentativa<=14));

                system("cls || clear");

                if (numeroescolhido == numerosorteado) {
                printf("Fim de jogo, voce ganhou com %d tentativas.\n",tentativa );
                }
                else {
                    printf("Fim de jogo voce perdeu.\n");
                }

                break;

            case 2:
                printf("Sorteando numero entre 1 e 100...\n");
                numerosorteado = random2();

                printf("Comecou! Tente adivinhar o numero!\n\n");
                tentativa = 0;

                do
                {
                    tentativa++;
                    printf("Tentativa %d: ", tentativa);
                    scanf("%d", &numeroescolhido);
                    dicas(numeroescolhido,numerosorteado,tentativa);
                }
                while( (numeroescolhido != numerosorteado) && (tentativa<=9));
                
                system("cls || clear");

                if (numeroescolhido == numerosorteado) {
                printf("Fim de jogo, voce ganhou com %d tentativas.\n",tentativa );
                }
                else {
                    printf("Fim de jogo voce perdeu.\n");
                }
                
                break;

            default:    
                    system("cls || clear");
                    printf("Opcao invalida\n");
        }
}

int random0()
{
    srand( (unsigned)time(NULL) );

    return (1 + rand()%25);
}

int random1()
{
    srand( (unsigned)time(NULL) );

    return (1 + rand()%50);
}

int random2()
{
    srand( (unsigned)time(NULL) );

    return (1 + rand()%100);
}

void dicas(int numeroescolhido, int numerosorteado, int tentativa)
{
    if(numeroescolhido < numerosorteado)
            printf("O numero aleatorio e maior que %d\n\n", numeroescolhido);
    else
        if (numeroescolhido > numerosorteado)
                printf("O numero aleatorio e menor que %d\n\n", numeroescolhido);
}