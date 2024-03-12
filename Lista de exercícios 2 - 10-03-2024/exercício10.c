/*
10. Construa um programa que leia dados para um vetor de 100 elementos inteiros. Imprimir o
maior e o menor, sem ordenar, o percentual de números pares e a média dos elementos do vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main()
{
    srand(time(NULL));
    int elementos[100] = {0};
    int maior = INT_MIN;
    int menor = INT_MAX;
    float percentualPares = 0.0;
    int somaElementos = 0;
    float mediaElementos = 0.0;
    int i;

    for (i = 0; i < 100; i++)
    {
        elementos[i] = rand() % 100;
        if (elementos[i] < menor)
        {
            menor = elementos[i];
        }
        if (elementos[i] > maior)
        {
            maior = elementos[i];
        }

        if (elementos[i] % 2 == 0)
        {
            percentualPares++;
        }
        somaElementos += elementos[i];
    }

    mediaElementos = somaElementos / 100.0;
    percentualPares = (percentualPares / 100.0) * 100;

    printf("\nMaior: %d. Menor: %d.", maior, menor);
    printf("\nPercentual pares: %.2f%%", percentualPares);
    printf("\nMedia dos elementos do vetor: %.2f", mediaElementos);

    return 0;
}