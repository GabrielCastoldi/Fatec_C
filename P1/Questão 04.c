/*
4. Considere um vetor de N posições, e:
a. Escreva o código necessário à ordenação ascendente;
b. Qual a expressão que determina a quantidade total de iterações do algoritmo desenvolvido?

A quantidade total de iterações do algoritmo de ordenação por bolha é determinada pela expressão n∗(n−1)/2
*/

#include <stdio.h>

// Protótipo
void bubbleSort(int *vetor, int n);

int main()
{
    int vetor[] = {7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    bubbleSort(vetor, n);

    printf("\nVetor ordenado: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}

void bubbleSort(int *vetor, int n)
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
            if (vetor[i] > vetor[i + 1])
            {
                int aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;

                ordenado = 0;
            }
        }
    }
    printf("\n\nOrdenacao - Iteracoes: %d\n\n", cont);
}