/*
13. Faça um programa que calcule o desvio padrão de um vetor v contendo n = 10 números,
onde m é a média do vetor.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float v[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    float m = 0.0;
    float desvioPadrao = 0.0;
    int i;

    for (i = 0; i < 10; i++)
    {
        m += v[i];
    }
    
    m /= 10;

    for (i = 0; i < 10; i++)
    {
        desvioPadrao += pow(v[i] - m, 2);
    }

    desvioPadrao = sqrt(desvioPadrao / (10 - 1));

    printf("\nMedia: %.2f", m);
    printf("\nDesvio padrao: %.2f", desvioPadrao);

    return 0;
}