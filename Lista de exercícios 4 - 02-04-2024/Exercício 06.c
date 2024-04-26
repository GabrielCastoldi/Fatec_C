/*
6. Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a
informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
*/

#include <stdio.h>

#define size 5

struct aluno
{
    char nome[100];
    int matricula;
    char curso[100];
};

typedef struct aluno Aluno;

int main()
{
    Aluno alunos[size];
    int i;

    for (i = 0; i < size; i++)
    {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("\nDigite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        getchar();

        printf("\nDigite o curso do aluno %d: ", i + 1);
        fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);
    }

    for (i = 0; i < size; i++)
    {
        printf("\nDados do aluno %d: \n", i + 1);
        printf("\nNome: %s", alunos[i].nome);
        printf("\nMatricula: %d", alunos[i].matricula);
        printf("\nCurso: %s", alunos[i].curso);
    }
    return 0;
}