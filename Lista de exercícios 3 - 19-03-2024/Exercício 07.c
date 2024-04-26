/*
7. Crie um programa gerador de tabuada, o usuário deverá informar o número do qual deseja a
tabuada e a saída esperada deverá ser:
Digite um número para geração da tabuada: 3
Tabuada do 3:

Soma:
3 + 0 = 3
3 + 1 = 4
3 + 2 = 5
. . .
3 + 10 = 13

Multiplicação:
3 x 0 = 0
3 x 1 = 3
. . .
3 x 10 = 30

*/

#include <stdio.h>

int main()
{
    int tabuada = 0;
    int i;

    printf("\nTabuada desejada: ");
    scanf("%d", &tabuada);

    printf("\nTabuada do %d:\n", tabuada);

    printf("\nSoma:");
    for (i = 0; i < 11; i++)
    {
        printf("\n%d + %d = %d", tabuada, i, tabuada + i);
    }

    printf("\n\nMultiplicacao:");
    for (i = 0; i < 11; i++)
    {
        printf("\n%d x %d = %d", tabuada, i, tabuada * i);
    }
    return 0;
}