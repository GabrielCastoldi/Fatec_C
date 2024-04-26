/*
4. Crie um programa que gere 20 números aleatórios, armazene em um vetor, e os exiba em
ordem inversa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int vetor[20] = {0};
    int i;

    printf("\nVetor normal:  ");

    for (i = 0; i < 20; i++)
    {
        vetor[i] = rand() % 100;
        printf("%.2d ", vetor[i]);
    }

    printf("\nVetor inverso: ");

    for (i = 19; i >= 0; i--)
    {
        printf("%.2d ", vetor[i]);
    }
    return 0;
}