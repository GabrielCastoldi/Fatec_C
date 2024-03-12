/*
14. Leia dois vetores de inteiros x e y, cada um com 5 elementos (assuma que o usuário informa
elementos repetidos). Calcule e mostre os vetores resultantes em cada caso abaixo:

a. Soma entre x e y: soma de cada elemento de x com o elemento da mesma posição em y.
b. Produto entre x e y: multiplicação o de cada elemento de x com o elemento da mesma posição em y.
c. Diferença entre x e y: todos os elementos de x que não existam em y.
d. Intersecção ̧entre x e y: apenas os elementos que aparecem nos dois vetores.
e. União entre x e y: todos os elementos de x, e todos os elementos de y que não estão o em x
*/

#include <stdio.h>

int main()
{
    int x[5] = {0};
    int y[5] = {0};
    int flag = 0;
    int i;
    int j;

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o valor %d do vetor x: ", i + 1);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o valor %d do vetor y: ", i + 1);
        scanf("%d", &y[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nSoma dos vetores da posicao %d: %d", i + 1, x[i] + y[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nProduto dos vetores da posicao %d: %d", i + 1, x[i] * y[i]);
    }

    printf("\nNumeros do vetor x que nao exixtem em y: ");
    for (i = 0; i < 5; i++)
    {
        flag = 0;
        for (j = 0; j < 5; j++)
        {
            if (x[i] == y[j])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("\n%d", x[i]);
        }
    }

    printf("\nNumeros que aparecem nos dois vetores: ");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (x[i] == y[j])
            {
                printf("\n%d", x[i]);
            }
        }
    }

    printf("\nTodos os elementos dos vetores x e y: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
        printf("%d ", y[i]);
    }
    return 0;
}