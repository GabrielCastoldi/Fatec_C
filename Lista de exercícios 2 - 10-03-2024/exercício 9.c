/*
9. Faça um programa em C que leia dois conjuntos de números inteiros, tendo cada um 10
elementos. Ao final o programa deve listar os elementos comuns aos conjuntos.
*/

#include <stdio.h>

int main()
{
    int conjunto1[10] = {0};
    int conjunto2[10] = {0};
    int i;
    int j;

    printf("\nDigite os numeros do primeiro conjunto: \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &conjunto1[i]);
    }

    printf("\nDigite od numeros do segundo conjunto: \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &conjunto2[i]);
    }

    printf("\nElementos comuns aos conjuntos: ");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (conjunto1[i] == conjunto2[j])
            {
                printf("\n%d", conjunto1[i]);
            }
        }
    }

    return 0;
}