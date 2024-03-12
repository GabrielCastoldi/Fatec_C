/*
17. Escreva um programa que preencha, com valores aleatórios até 1000, de uma matriz 10 × 10.
Em seguida, mostra o índice da linha e o índice da coluna e o valor das posições não nulas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int matriz[10][10];
    int i;
    int j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matriz[i][j] = rand() % 1001;
        }
    }

    printf("\nPosicoes nao nulas:\n");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (matriz[i][j] != 0)
            {
                printf("\nLinha: %d, Coluna: %d, Valor: %d", i, j, matriz[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}