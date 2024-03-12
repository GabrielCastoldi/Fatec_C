/*
16. Escreva um programa que inicialize uma matriz 10 × 10 com 0 em todas as posições. O
usuário irá digitar o índice da linha e o índice da coluna e em seguida o valor das posições. A
leitura será feita enquanto os índices não forem negativos. Após a leitura imprima a matriz na
tela
*/

#include <stdio.h>

int main()
{
    int matriz[10][10] = {0};
    int linha = 0;
    int coluna = 0;
    int valor = 0;
    int i;
    int j;

    do
    {
        printf("Digite o indice da linha: ");
        scanf("%d", &linha);

        printf("Digite o indice da coluna: ");
        scanf("%d", &coluna);

        if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10)
        {
            printf("Digite o valor da posicao: ");
            scanf("%d", &valor);

            matriz[linha][coluna] = valor;
        }
    } while (linha >= 0 && coluna >= 0);

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