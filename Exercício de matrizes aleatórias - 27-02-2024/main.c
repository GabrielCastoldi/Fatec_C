/*
Crie uma matriz M de 10x10 e preencha com valores aleatórios.

Crie dois vetores: somaColunas e somaLinhas, de tamanho adequado e, para cada qual realize a soma das linhas e colunas correlatadas.

Exiba a matriz e os vetores resultantes.

Calcule e exiba a soma da matriz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int matriz[10][10];
    int somaColunas[10] = {0};
    int somaLinhas[10] = {0};
    int somaMatriz = 0;
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matriz[i][j] = rand() % 100;
            printf("%2d ", matriz[i][j]);
            somaMatriz += matriz[i][j];
        }
        printf("\n");
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            somaLinhas[i] += matriz[i][j];
            somaColunas[j] += matriz[i][j];
        }
    }

    printf("\nSoma das linhas: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", somaLinhas[i]);
    }

    printf("\nSoma das colunas: ");
    for (j = 0; j < 10; j++)
    {
        printf("%d ", somaColunas[j]);
    }

    printf("\nSoma da matriz: %d", somaMatriz);

    return 0;
}