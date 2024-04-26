#include <stdio.h>

void trocarValor(int *n1, int *n2);

int main()
{
    int n1 = 1;
    int n2 = 2;

    printf("\nValor de n1: %d", n1);
    printf("\nValor de n2: %d", n2);

    trocarValor(&n1, &n2);

    printf("\nValor de n1: %d", n1);
    printf("\nValor de n2: %d", n2);
}

void trocarValor(int *n1, int *n2)
{
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}