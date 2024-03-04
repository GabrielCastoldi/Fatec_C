// 3. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.

#include <stdio.h>

int main()
{
    int n = 0;
    int contador = 0;
    int i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (i = 1; contador < n; i += 2)
    {
        printf("%d\n", i);
        contador++;
    }

    return 0;
}