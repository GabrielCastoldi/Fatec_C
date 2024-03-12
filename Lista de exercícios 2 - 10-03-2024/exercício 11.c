/*
11. Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor
de referência inteiro e:
a. imprima os números do vetor que são maiores que o valor referência
b. retorne quantos números armazenados no vetor são menores que o valor de referência
c. retorne quantas vezes o valor de referência aparece no vetor
*/

#include <stdio.h>

int main()
{
    int numeros[10] = {0};
    int referencia = 0;
    int menor = 0;
    int igual;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("\nDigite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nDigite o valor de referencia: ");
    scanf("%d", &referencia);

    printf("\nNumeros maiores que o valor de referencia: ");
    for (i = 0; i < 10; i++)
    {
        if (numeros[i] > referencia)
        {
            printf("\n%d", numeros[i]);
        }

        if (numeros[i] == referencia)
        {
            igual++;
        }

        if (numeros[i] < referencia)
        {
            menor++;
        }
    }

    printf("\nQuantidade de numeros menores que a referencia: %d", menor);    
    printf("\nQuantidade de vezes que o numero de referencia aparece no vetor: %d", igual);

    return 0;
}