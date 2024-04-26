/*
1. Crie e popule duas matrizes 2x3 de números double. Imprima a soma destas duas matrizes
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    double matrizA[2][3];
    double matrizB[2][3];
    double matrizSoma[2][3];
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matrizA[i][j] = ((double)rand() / RAND_MAX) * 50;
            matrizB[i][j] = ((double)rand() / RAND_MAX) * 50;
        }
    }

    printf("\nA soma das matrizes eh:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%.2f ", matrizSoma[i][j]);
        }
        printf("\n");
    }
    return 0;
}