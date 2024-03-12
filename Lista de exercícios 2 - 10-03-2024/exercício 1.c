/*
1. Faça um programa em C que armazene 15 números inteiros em um vetor e depois permita
que o usuário digite um número inteiro para ser buscado no vetor, se for encontrado o
programa deve imprimir a posição desse número no vetor, caso contrário, deve imprimir a
mensagem: "Nao encontrado!".
*/

#include <stdio.h>

int main()
{
    int vetInteiros[15] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int buscar = 0;
    int encontrado = 0;
    int i;

    printf("\nDigite o numero a ser buscado: \n");
    scanf("%d", &buscar);

    for (i = 0; i < 15; i++)
    {
        if (vetInteiros[i] == buscar)
        {
            encontrado = i + 1;
        }
    }

    if (encontrado != 0)
    {
        printf("Valor encontrado no vetor na posicao: %d", encontrado);
    }
    else
    {
        printf("Nao encontrado!");
    }
    return 0;
}