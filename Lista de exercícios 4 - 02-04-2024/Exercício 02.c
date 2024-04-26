/*
2. Escreva um programa que inicialize uma matriz 10 × 10 com 0 em todas as posições. O
usuário irá digitar o índice da linha e o índice da coluna e em seguida o valor das posições. A
leitura será feita enquanto os índices não forem negativos. Após a leitura imprima a matriz na
tela.
*/

#include <stdio.h>

int main()
{
    int matriz[10][10] = {0};
    int linha, coluna, valor;
    int i, j;

    do
    {

        printf("\nDigite os indices e os valores das posicoes ou um indice negativo para sair\n");

        printf("\nIndice linha: ");
        scanf("%d", &linha);

        printf("\nIndice coluna: ");
        scanf("%d", &coluna);

        printf("\nValor da posicao: ");
        scanf("%d", &valor);

        matriz[linha][coluna] = valor;

    } while (linha >= 0 && coluna >= 0);

    printf("\nMatriz:\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}