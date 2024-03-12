/*
7. Crie um programa que leia o preço de compra e o preço de venda de 100 mercadorias (utilize
vetores). Ao final, o programa deverá imprimir quantas mercadorias proporcionam:
a. lucro < 10%
b. 10% <= lucro <= 20%
c. lucro > 20%
*/

#include <stdio.h>

int main()
{
    float precoCompra[100];
    float precoVenda[100];
    float lucro = 0.0;
    int lucroBaixo = 0;
    int lucroMedio = 0;
    int lucroAlto = 0;
    int i;

    for (i = 0; i < 100; i++)
    {
        printf("Digite o valor de compra da mercadoria %d: ", i + 1);
        scanf("%f", &precoCompra[i]);
        printf("Digite o valor de venda da mercadoria %d: ", i + 1);
        scanf("%f", &precoVenda[i]);

        lucro = (precoVenda[i] - precoCompra[i]) / precoCompra[i] * 100;

        if (lucro < 10)
        {
            lucroBaixo++;
        }
        else if (lucro >= 10 && lucro <= 20)
        {
            lucroMedio++;
        }
        else if (lucro > 20)
        {
            lucroAlto++;
        }
    }

    printf("\nLucro menor que 10%%: %d", lucroBaixo);
    printf("\nLucro maior ou igua a 10%% e menor ou igual a 20%%: %d", lucroMedio);
    printf("\nLuco maior que 20%%: %d", lucroAlto);

    return 0;
}