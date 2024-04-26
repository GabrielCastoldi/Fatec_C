#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 10000

// Selection Sort
void preencher(int *v, int n);
void imprimir(int *v, int n);
void ordenar(int *v, int n);

int main()
{
    int v[tamanho];
    srand(time(NULL));

    clock_t ordenarInicial, ordenarFinal;

    preencher(v, tamanho);
    imprimir(v, tamanho);
    ordenarInicial = clock();
    ordenar(v, tamanho);
    ordenarFinal = clock();
    imprimir(v, tamanho);

    double totaltempo = (double)(ordenarFinal - ordenarInicial) / CLOCKS_PER_SEC;
    printf("\nTempo: %f", totaltempo);

    return 0;
}

void preencher(int *v, int n)
{
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
    printf("\n");
}

void ordenar(int *v, int n)
{
    int i, j, menor, troca;
    int cont = 0;

    for (i = 0; i < n - 1; i++)
    {
        menor = i;
        // encontra o menor dos elementos desordenados
        for (j = i + 1; j < n; j++)
        {
            if (v[j] < v[menor])
            {
                menor = j;
            }
            cont++;
        }
        if (i != menor)
        {
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
        }
    }
    printf("\n\nSelection sort: %d\n\n", cont);
}