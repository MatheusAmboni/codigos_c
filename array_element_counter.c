// FILE:          trabalho2.c
   // TITLE:         Array Element Counter
   // SUBMITTED BY:  Matheus Costa Amboni
   //                All code is my own except where credited to others.
   // FOR COURSE:    Programming Language
   // DUE DATE:      05/11/2020
   //
   // PURPOSE:
   // This program was made to count the number of times a elemenent is repeated in given array
   // made from the user.
   // 
   // OVERALL METHOD:
   // The list of general tasks is:
   // 1. The user must type the elements for the size 10 array
   // 2. The user must type the value to count the repeated number
   // 3. The function "count" will go through the array and will count every element that is equal
   //    to the given value choosen by the user
   //
   // FUNCTIONS:
   //
   // count
   //   will go through the array "a" and will count every element that is equal to the
   //   given value choosen by the user and if it's right it will sum +1 to the "C" variable.
   //   So the function will return the variable "C".
   //
   // INCLUDED FILES:
   //   stdio.h
   //
   // DATA FILES:
   //   none
   //
   // name OF FUNCTION: count
   // CREDIT:
   // PURPOSE:
   //
   //   The function was made to count every number of the array that is equal to the  
   //   given number choosen by the user.
   //
   // PARAMETERS:
   // name         type  value/reference   description
   // ---------------------------------------------------------------------
   // a[]          int   reference         the array of numbers
   // valor        int   value             number choosen by the user
   //
   // RETURN VALUE:
   // name         type  description
   // ---------------------------------------------------------------------
   // c            int   the number of times the number is repeated
   //
   // CALLS TO: none
   //
   // CALLED FROM: main
   //
   // METHOD: The following is pseudocode describing how the function works.
   // 1. Declares C equal to: 0;
   // 2. Declares I;
   // 3. The variable I run from 0 through 10 in a for statement
   // 4. Opens a if statement in a condition of being the element of the array equal to the Variable "valor";
   // 5. If the condition is right the variable c is counted plus one
   // 6. Returns C
   //


#include <stdio.h>

int count (int a[ ], int valor);

int main()
{
    int a[10], i, valor;

    printf("Digite os elementos do vetor: \n");
    for (i=0; i<10; i++)
    {
        scanf("%i", &a[i]);
    }

    printf("Digite o valor para contar os elementos repetidos: ");
    scanf("%i", &valor);

    printf("O numero %i se repetiu %i vezes no vetor\n", valor, count(a, valor));
    
    return 0;
}

int count (int a[ ], int valor) 
{
    int c=0;

    for (int i=0; i<10; i++)
    {
        if (a[i] == valor)
        {
            c++;
        }   
    }
    return c;
}


