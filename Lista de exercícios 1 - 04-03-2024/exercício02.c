// 2. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main()
{
    srand(time(NULL));
    int numeros[10] = {0};
    int menorValor = INT_MAX;
    int maiorValor = INT_MIN;
    int i;

    for (i = 0; i < 10; i++)
    {
        numeros[i] = rand() % 100;
        if (numeros[i] < menorValor)
        {
            menorValor = numeros[i];
        }
        if (numeros[i] > maiorValor)
        {
            maiorValor = numeros[i];
        }
    }

    printf("Menor valor: %d", menorValor);
    printf("\nMaior valor: %d", maiorValor);

    return 0;
}