#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 10000

// Insertion Sort
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
    int i, j, aux;
    int cont = 0;

    for (i = 1; i < n; i++)
    {
        aux = v[i];
        for (j = i; (j > 0) && (aux < v[j - 1]); j--)
        {
            v[j] = v[j - 1];
            cont++;
        }
        v[j] = aux;
    }
    printf("\n\nInsertion sort: %d\n\n", cont);
}