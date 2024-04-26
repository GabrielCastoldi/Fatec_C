/*
Crie um vetor de inteiros de 10 posições por meio da alocação dinamica.
a. preencha o array;
b. some os valores;
c. desaloque a memoria;
*/

#include <stdio.h>
#include <stdlib.h>

//Protótipos
int somarValores(int *vetor, int n);

int main()
{
    int *p;
    int soma;
    int i;

    p = (int *) malloc(10*sizeof(int));

    if (p == NULL)
    {
        printf("Erro: Memoria insulficiente!\n");
        system("pause");
        exit(1);
    }

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &p[i]);
    }

    soma = somarValores(p, 10);

    printf("Soma do vetor: %d", soma);

    free(p);
    

    return 0;
}

int somarValores(int *vetor, int n)
{
    int soma = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        soma += vetor[i];
    }
    
    return soma;
}