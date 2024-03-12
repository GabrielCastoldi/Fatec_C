/*
2. Faça um programa que armazene 10 letras em um vetor e imprima uma listagem numerada
*/

#include <stdio.h>

int main()
{
    char letras[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("\n%d - %c", i + 1, letras[i]);
    }
    return 0;
}