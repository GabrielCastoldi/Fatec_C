/*
Crie um array de 10 posições de inteiro

a. Crie uma função que preencha o array com valores arbitrários;

b. Crie uma função que imprime o valor na tela
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// protótipos
void preencherArray(int *v, int n);
void imprimir(int *v, int n);

int main()
{
    int v[10];

    preencherArray(v, 10);
    imprimir(v, 10);

    return 0;
}

void preencherArray(int *v, int n)
{
    srand(time(NULL));
    int i;

    for (i = 0; i < n; i++)
    {
        v[i] = rand() % 100;
    }
}

void imprimir(int *v, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
}