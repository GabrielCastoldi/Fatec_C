#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 10000

// Bubble Sort
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
        v[i] = rand() % 10000;
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
    int ordenado = 0; // false
    int i;
    int cont = 0;
    while (ordenado == 0)
    {
        ordenado = 1;
        for (i = 0; i < n - 1; i++)
        {
            cont++;
            if (v[i] > v[i + 1])
            {
                int aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;

                ordenado = 0;
            }
        }
    }
    printf("\n\nOrdenacao - Iteracoes: %d\n\n", cont);
}