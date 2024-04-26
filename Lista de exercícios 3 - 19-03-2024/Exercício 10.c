/*
10. Construa uma programa em C que armazene 15 números em um vetor e imprima uma
listagem numerada contendo o número e uma das mensagens: par ou ímpar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int numeros[15] = {0};
    int i;

    for (i = 0; i < 15; i++)
    {
        numeros[i] = rand() % 51;
    }

    for (i = 0; i < 15; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            printf("\n%.2d - %.2d eh par", i + 1, numeros[i]);
        }
        else
        {
            printf("\n%.2d - %.2d eh impar", i + 1, numeros[i]);
        }
    }
    return 0;
}