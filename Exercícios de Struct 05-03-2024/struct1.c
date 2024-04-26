#include <stdio.h>

struct aluno
{
    int codigo;
    char nome[50];
    float media;
};

int main()
{
    struct aluno a1;
    struct aluno a2 = {99, "joao", 8.8};

    printf("\nCodigo: ");
    scanf("%d", &a1.codigo);
    printf("\nNome: ");
    scanf("%s", &a1.nome);
    printf("\nMedia: ");
    scanf("%f", &a1.media);

    printf("\nDados do aluno: \n");
    printf("\nCodigo: %d", a1.codigo);
    printf("\nNominho: %s", a1.nome);
    printf("\nMedia: %f", a1.media);

    return 0;
}