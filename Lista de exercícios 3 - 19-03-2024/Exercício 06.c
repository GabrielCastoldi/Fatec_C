/*
6. Crie um programa que gere dois vetores de 20 posições, A e B, com números aleatórios
entre 0 e 50. Crie um vetor C com os elementos únicos (sem repetição) dos vetores A e B,
ordenado de forma crescente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int vetorA[20] = {0};
    int vetorB[20] = {0};
    int vetorC[40] = {0};
    int i;
    int j;
    int k = 0; //Variável para controlar o tamanho do vetor C
    int achou; //Variável para verificar se um elemento já existe no vetor C
    int auxiliar = 0;

    for (i = 0; i < 20; i++)
    {
        vetorA[i] = rand() % 51;
        vetorB[i] = rand() % 51;
    }

    for (i = 0; i < 20; i++) //Combina os vetores A e B em um vetor C, tirando os repetidos
    {
        achou = 0;
        for (j = 0; j < k; j++)
        {
            if (vetorC[j] == vetorA[i])
            {
                achou = 1;
            }
        }
        if (!achou)
        {
            vetorC[k] = vetorA[i];
            k++;
        }
    }

    for (i = 0; i < 20; i++)
    {
        achou = 0;
        for (j = 0; j < k; j++)
        {
            if (vetorC[j] == vetorB[i])
            {
                achou = 1;
            }
        }
        if (!achou)
        {
            vetorC[k] = vetorB[i];
            k++;
        }
    }

    for (i = 0; i < k; i++) //Ordena o vetor C em ordem crescente
    {
        for (j = i + 1; j < k; j++)
        {
            if (vetorC[i]> vetorC[j])
            {
                auxiliar = vetorC[i];
                vetorC[i] = vetorC[j];
                vetorC[j] = auxiliar;
            }
        }
    }

    for (i = 0; i < k; i++)
    {
        printf("%d ", vetorC[i]);
    }
    return 0;
}