/*
3. Construa uma programa em C que armazene 15 números em um vetor e imprima uma
listagem numerada contendo o número e uma das mensagens: par ou ímpar.
*/

#include <stdio.h>

int main()
{
    int numeros[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int i;

    for (i = 0; i < 15; i++)
    {
        if (numeros[i] % 2 == 1)
        {
            printf("\nImpar");
        }
        else
        {
            printf("\nPar");
        }
    }
    return 0;
}