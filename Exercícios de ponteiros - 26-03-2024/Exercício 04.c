#include <stdio.h>
#include <stdlib.h>

#define tamanho 300000

void preencherArray(int *v, int n);
void mostrarArray(int *v, int n);
void ordenar(int *v, int n);
void selectionSort(int *v, int n);

int main()
{
    int v[tamanho];

    preencherArray(v, tamanho);
    mostrarArray(v, tamanho);
    //ordenar(v, tamanho);
    selectionSort(v, tamanho);
    mostrarArray(v, tamanho);

    return 0;
}

void ordenar(int *v, int n)
{
    int ordenado = 0;
    int i, cont = 0;

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
    printf("\n\nOrdencao - Iteracoes: %d", cont);
}

void preencherArray(int *v, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        v[i] = rand() % 100;
    }
}

void mostrarArray(int *v, int n)
{
    int i;

    printf("\nVetor:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
}

void selectionSort(int *v, int n)
{
    int i, j, menor, troca;
    int cont = 0;

    for (i = 0; i < n - 1; i++)
    {
        menor = i;
        for (j = i + 1; j < n; j++)
        {
            cont++;
            if (v[j] < v[menor])
            {
                menor = j;
            }
        }
        if (i != menor)
        {
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
        }
    }
    printf("\n\nSelectionSort: %d\n", cont);
}