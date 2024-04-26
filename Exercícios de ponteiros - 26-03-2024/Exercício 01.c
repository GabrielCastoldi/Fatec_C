#include <stdio.h>

// protótipos
int quadrado(int a);
void incrementa(int *n);

int main()
{
    int n1, n2;
    printf("Entre com um numero: ");
    scanf("%d", &n1);

    n2 = quadrado(n1);

    printf("O seu quadrado vale: %d\n", n2);

    int x = 10;
    printf("Valor de x: %d", x);
    incrementa(&x);
    printf("\nValor de x: %d", x);
    
    return 0;
}

void incrementa(int *n)
{
    *n = *n * 2;
}

int quadrado(int a)
{
    return a * a;
}