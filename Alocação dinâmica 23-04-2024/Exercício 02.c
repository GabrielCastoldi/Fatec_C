/*
Crie um array A de 5 posições e preencha com valores inteiros
Crie uma matriz M de 5x5 e preencha-a com valores arbitrários. Use alocação dinamica para ambos.
a. exiba o vetor A
b. exiba a matriz M no formato matricial
c. multiplique cada linha de M por A e exiba a matriz
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    int **m;
    int i;
    int j;

    a = (int *)malloc(5 * sizeof(int));

    if (a == NULL)
    {
        printf("Erro: Memoria insulficiente!\n");
        system("pause");
        exit(1);
    }

    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("Vetor A:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    m = (int **)malloc(5 * sizeof(int *));

    for (i = 0; i < 5; i++)
    {
        m[i] = (int *)malloc(5 * sizeof(int));
        if (m[i] == NULL)
        {
            printf("Erro: Memoria insulficiente!\n");
            system("pause");
            exit(1);
        }
    }

    printf("Digite os valores para a matriz M:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("Matriz M:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("Matriz M apos multiplicacao por A:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            m[i][j] *= a[i];
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    free(a);
    
    for (i = 0; i < 5; i++)
    {
        free(m[i]);
    }
    free(m);

    return 0;
}