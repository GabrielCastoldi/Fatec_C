/*
12. Fazer um programa em "C" que solicite 2 números e informe:
a. A soma dos números;
b. O produto do primeiro número pelo quadrado do segundo;
c. O quadrado do primeiro número;
d. A soma dos cubos de ambos números;
*/

#include <stdio.h>

int main()
{
    float numero1 = 0.0;
    float numero2 = 0.0;
    float soma = 0.0;
    float produto = 0.0;
    float quadrado = 0.0;
    float somaCubos = 0.0;

    printf("\nDigite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("\nDigite o segundo numero: ");
    scanf("%f", &numero2);

    soma = numero1 + numero2;
    produto = numero1 * (numero2 * numero2);
    quadrado = numero1 * numero1;
    somaCubos = (numero1 * numero1 * numero1) + (numero2 * numero2 * numero2);

    printf("\nSoma dos numeros: %.2f", soma);
    printf("\nProduto do primeiro pelo quadrado do segundo: %.2f", produto);
    printf("\nQuadrado do primeiro numero: %.2f", quadrado);
    printf("\nSoma dos cubos dos dois numeros: %.2f", somaCubos);

    return 0;
}