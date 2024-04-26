/*
9. Um vetor J contém 100 valores referente a aferições de medidas de um sistema. Como os
valores têm variações adversas faz-se necessário conhecer o desvio padrão.

desvio padrão = raiz quadrada de ((1 / (n - 1)) * soma de i=1 até n de (v[i] - m)^2)

Onde m é a média dos valores de J.

A raiz quadrada é calculada pela função sqrt(), para tanto utilize a biblioteca <math.h>
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    double j[100] = {0};
    float soma = 0.0;
    float media = 0.0;
    float somaDiferencaQuadrados = 0.0;
    float desvioPadrao = 0.0;

    for (int i = 0; i < 100; i++)
    {
        j[i] = rand() % 100;
    }

    for (int i = 0; i < 100; i++)
    {
        soma += j[i];
    }

    media = soma / 100;

    for (int i = 0; i < 100; i++)
    {
        somaDiferencaQuadrados += pow(j[i] - media, 2);
    }

    desvioPadrao = sqrt(somaDiferencaQuadrados / (100 - 1));

    printf("Desvio padrao = %.2f\n", desvioPadrao);

    return 0;
}