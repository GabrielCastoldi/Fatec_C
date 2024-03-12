/*
12. Ler dois conjuntos de números reais, armazenando-os em vetores e calcular o produto
escalar entre eles. Os conjuntos têm 5 elementos cada. Imprimir os dois conjuntos e o
produto escalar, sendo que o produto escalar e ́dado por: x1 ∗ y1 + x2 ∗ y2 + ... + xn ∗ yn.
*/

#include <stdio.h>

int main()
{
    double primeiroVetor[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double segundoVetor[5] = {6.0, 7.0, 8.0, 9.0, 10.0};
    double produtoEscalar = 0.0;
    int i;

    for (i = 0; i < 5; i++)
    {
        produtoEscalar += primeiroVetor[i] * segundoVetor[i];
    }

    printf("\nPrimeiro vetor : ");

    for (i = 0; i < 5; i++)
    {
        printf("%.2f ", primeiroVetor[i]);
    }

    printf("\nSegundo vetor 2: ");

    for (i = 0; i < 5; i++)
    {
        printf("%.2f ", segundoVetor[i]);
    }

    printf("\nProduto escalar: %.2f", produtoEscalar);

    return 0;
}