#include <stdio.h>
struct endereco
{
    char rua[50];
    int numero;
};

struct aluno
{
    int codigo;
    char nome[50];
    float media;
    struct endereco endereco;    
};


int main()
{
    struct aluno listaAlunos[5];
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("\nCodigo: ");
        scanf("%d", &listaAlunos[i].codigo);
        printf("\nNome: ");
        scanf("%s", listaAlunos[i].nome);
        printf("\nMedia: ");
        scanf("%f", &listaAlunos[i].media);
        printf("\nRua: ");
        scanf("%s", listaAlunos[i].endereco.rua);
        printf("\nNumero: ");
        scanf("%d", &listaAlunos[i].endereco.numero);
    }

    for ( i = 0; i < 5; i++)
    {
        printf("\n\nCodigo: %d", listaAlunos[i].codigo);
        printf("\nNome: %s", listaAlunos[i].nome);
        printf("\nMedia: %f", listaAlunos[i].media);
        printf("\nRua: %s", listaAlunos[i].endereco.rua);
        printf("\nNumero: %d", listaAlunos[i].endereco.numero);
    }
    
    return 0;        
}