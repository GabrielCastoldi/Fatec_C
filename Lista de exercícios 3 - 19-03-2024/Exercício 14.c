/*
14. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da
terceira prova.
a. Permita ao usuário entrar com os dados de 5 alunos.
b. Encontre o aluno com maior nota da primeira prova.
c. Encontre o aluno com maior média geral.
d. Encontre o aluno com menor média geral
e. Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.
*/

#include <stdio.h>

struct aluno
{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

typedef struct aluno Aluno;

int main()
{
    Aluno alunos[5];
    int indiceMaiorNota1 = 0.0;
    int indiceMaiorMedia = 0.0;
    int indiceMenorMedia = 0.0;
    float maiorNota1 = 0.0;
    float maiorMedia = 0.0;
    float menorMedia = 10.0;
    float media = 0.0;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\nMatricula do aluno %d : ", i + 1);
        scanf("%d", &alunos[i].matricula);
        printf("\nNome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("\nNota da primeira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);
        printf("\nNota da segunda prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);
        printf("\nNota da terceira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota3);
    }

    for (i = 0; i < 5; i++)
    {
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        if (alunos[i].nota1 > maiorNota1)
        {
            maiorNota1 = alunos[i].nota1;
            indiceMaiorNota1 = i;
        }

        if (media > maiorMedia)
        {
            maiorMedia = media;
            indiceMaiorMedia = i;
        }

        if (media < menorMedia)
        {
            menorMedia = media;
            indiceMenorMedia = i;
        }
    }

    printf("\nAluno com maior nota na prova 1: %s", alunos[indiceMaiorNota1].nome);
    printf("\nAluno com maior media: %s", alunos[indiceMaiorMedia].nome);
    printf("\nAluno com menor media: %s", alunos[indiceMenorMedia].nome);

    for (i = 0; i < 5; i++)
    {
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        if (media >= 6)
        {
            printf("\nO aluno %s foi aprovado.", alunos[i].nome);
        }
        else
        {
            printf("\nO aluno %s foi reprovado.", alunos[i].nome);
        }
    }
    return 0;
}