// 1. Faça um programa que solicite ao usuário para digitar 10 valores e some-os.

#include <stdio.h>

int main()
{
    int valores[10] = {0};
    int soma = 0;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Didite o %d numero: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    printf("Soma: %d", soma);

    return 0;
}