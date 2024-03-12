/*
18. Escreva um programa que leia todos os elementos de uma matriz 4 × 4, em seguida mostre a
matriz e constitua sua matriz transposta.
*/

#include <stdio.h>

int main()
{
    int matriz[4][4];
    int transposta[4][4];
    int i;
    int j;

    printf("\nDigite os elementos da matriz:\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\nElemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("\nMatriz original:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}