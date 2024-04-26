/*
5. Crie um programa que gere 2 vetores de 10 posições, w e k, aleatórios ou informados pelo
usuário, e calcule:

9
∑ (𝑤[𝑖] + 𝑘[9 − 𝑖])
𝑖=𝑜
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int vetorW[10] = {0};
    int vetorK[10] = {0};
    int vetorSoma[10];
    int somaTotal = 0;
    int i;

    for (i = 0; i < 10; i++)
    {
        vetorW[i] = rand() % 50;
        vetorK[i] = rand() % 50;
        vetorSoma[i] = vetorW[i] + vetorK[9 - i];

        somaTotal += vetorSoma[i];
    }

    printf("\nVetor W:    ");
    for (i = 0; i < 10; i++)
    {
        printf("%.2d ", vetorW[i]);
    }

    printf("\nVetor K:    ");
    for (i = 0; i < 10; i++)
    {
        printf("%.2d ", vetorK[i]);
    }

    printf("\nVetor Soma: ");
    for (i = 0; i < 10; i++)
    {
        printf("%.2d ", vetorSoma[i]);
    }

    printf("\nSoma dos vetores: %.2d", somaTotal);

    return 0;
}