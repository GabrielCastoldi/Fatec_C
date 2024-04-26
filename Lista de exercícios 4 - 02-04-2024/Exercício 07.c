/*
7. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da
terceira prova.
a. Permita ao usuário entrar com os dados de 5 alunos.
b. Encontre o aluno com maior nota da primeira prova.
c. Encontre o aluno com maior média geral.
d. Encontre o aluno com menor média geral
e. Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.
*/

#include <stdio.h>

#define size 5

struct aluno
{
    char nome[100];
    int matricula;
    float nota1, nota2, nota3;
};

typedef struct aluno Aluno;

int main()
{
    Aluno alunos[size];
    Aluno maiorNota1, maiorMedia, menorMedia;
    float media[size];
    int i;

    for (i = 0; i < size; i++)
    {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("\nDigite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        getchar();

        printf("\nDigite a primeira nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);
        getchar();

        printf("\nDigite a segunda nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);
        getchar();

        printf("\nDigite a terceira nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota3);
        getchar();

        media[i] = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        if (i == 0 || alunos[i].nota1 > maiorNota1.nota1)
        {
            maiorNota1 = alunos[i];
        }

        if (i == 0 || media[i] > media[i - 1])
        {
            maiorMedia = alunos[i];
        }

        if (i == 0 || media[i] < media[i - 1])
        {
            menorMedia = alunos[i];
        }
    }

    printf("\nAluno com maior nota na primeira prova: %s", maiorNota1.nome);
    printf("\nAluno com maior media: %s", maiorMedia.nome);
    printf("\nAluno com menor media: %s", menorMedia.nome);

    for (i = 0; i < size; i++)
    {
        printf("\n%s foi %s", alunos[i].nome, media[i] >= 6 ? "aprovado" : "reprovado");
    }
    return 0;
}