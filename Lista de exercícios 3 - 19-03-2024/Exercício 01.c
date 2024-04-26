/*
1. Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor
de referência inteiro e:
a. imprima os números do vetor que são maiores que o valor referência;
b. retorne quantos números armazenados no vetor são menores que o valor de referência;
c. retorne quantas vezes o valor de referência aparece no vetor;
d. gere um segundo vetor vetor, com 50 posições e:
i. contabilize quantas vezes, cada número informado pelo usuário, consta no segundo
vetor;
ii. calcule o % de números do vetor de 50 posições que constam no primeiro;
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int numeros[10] = {0};
    int numeros2[50] = {0};
    int referencia = 0;
    int contadorMenores = 0;
    int contadorIgual = 0;
    int contadorNumeros2 = 0;
    int i;
    int j;

    printf("\nDigite o valor referencia: ");
    scanf("%d", &referencia);

    for (i = 0; i < 10; i++)
    {
        numeros[i] = rand() % 10;

        if (numeros[i] > referencia)
        {
            printf("\n%d eh maior que o valor referencia", numeros[i]);
        }

        if (numeros[i] < referencia)
        {
            contadorMenores++;
        }

        if (numeros[i] == referencia)
        {
            contadorIgual++;
        }
    }

    printf("\nNumeros menores que o valor de referencia: %d", contadorMenores);
    printf("\nVezes que o valor de referencia aparece no vetor: %d", contadorIgual);

    for (i = 0; i < 50; i++)
    {
        numeros2[i] = rand() % 50;

        for (j = 0; j < 10; j++)
        {
            if (numeros[j] == numeros2[i])
            {
                contadorNumeros2++;
            }
        }
    }
    printf("\n%d%% do vetor de 50 posicoes consta no primeiro", (contadorNumeros2 * 100) / 50);

    return 0;
}