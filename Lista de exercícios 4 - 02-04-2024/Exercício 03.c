/*
3. Escreva um programa que preencha, com valores aleatórios até 1000, de uma matriz 10 × 10.
Solicite ao usuário informar um valor procurado, caso encontrado exiba o valor e a posição
da linha e coluna.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[10][10];
    int valorProcurado, achou = 0;
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matriz[i][j] = rand() % 1001;
        }
    }

    printf("\nInforme o valor procurado: ");
    scanf("%d", &valorProcurado);

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (matriz[i][j] == valorProcurado)
            {
                printf("\nValor %d encontrado na linha %d, coluna %d", valorProcurado, i, j);
                achou = 1;
            }
        }
    }

    if (!achou)
    {
        printf("\nValor nao encontrado");
    }
    return 0;
}