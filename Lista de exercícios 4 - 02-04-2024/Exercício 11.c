/*
11. Faça uma função que calcule o desvio padrão de um vetor v contendo n números.

Desvio padrão = raiz quadrada de ((1 / (n - 1)) * soma de i=1 até n de (v[i] - m)^2)

onde m é a media do vetor.
*/

#include <stdio.h>
#include <math.h>

// protótipos
double media(double *v, int n);
double desvioPadrao(double *v, int n);

int main()
{
    double v[] = {1, 2, 3, 4, 5};
    int n = sizeof(v) / sizeof(v[0]);

    printf("\nO desvio padrao eh %f\n", desvioPadrao(v, n));

    return 0;
}

double media(double *v, int n)
{
    int i;
    double soma = 0;
    for (i = 0; i < n; i++)
    {
        soma += v[i];
    }
    return soma / n;
}

double desvioPadrao(double *v, int n)
{
    double m = media(v, n);
    int i;
    double soma = 0;
    
    for (i = 0; i < n; i++)
    {
        soma += (v[i] - m) * (v[i] - m);
    }
    return sqrt(soma / (n - 1));
}