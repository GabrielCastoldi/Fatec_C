/*
15. Leia duas matrizes 2x3 de números double. Imprima a soma destas duas matrizes
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double primeiraMatriz[2][3];
    double segundaMatriz[2][3];
    double somaMatriz[2][3];
    int i;
    int j;

    printf("\nSoma das matrizes: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            primeiraMatriz[i][j] = rand() % 50;
            segundaMatriz[i][j] = rand() % 50;
            somaMatriz[i][j] = primeiraMatriz[i][j] + segundaMatriz[i][j];

            printf("%.2f ", somaMatriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}