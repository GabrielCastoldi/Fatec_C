/*
8. Crie as seguintes estruturas, observe que cada aluno possui até 5 avaliações, as quais são
compostas pelas notas, p1, p2 e média, de uma dada disciplina.

a. gere dados aleatórios para 10 alunos;
i. p1 e p2 não devem ultrapassar o valor 10;
ii. a média deve ser calculada de modo aritmético;

b. exiba a seguinte saída:

Aluno: 1 Idade 29
-------------------------------
Disciplinas
-------------------------------
Cod   c.hor   p1   p2   media
1     100     3    5    4
2     150     4    6    5
...
5     488     3    7    10
-------------------------------

c. Calcule a média geral da sala.

Struct disciplina {
    int codigo;
    int cargaHoraria;
};

struct avaliacao {
    float p1;
    float p2;
    float media;
    struct disciplina disciplina;
};

struct aluno {
    int codigo;
    int idade;
    struct avaliacao avaliacoes[5];
};
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 10

struct disciplina
{
    int codigo;
    int cargaHoraria;
};

typedef struct disciplina Disciplina;

struct avaliacao
{
    float p1;
    float p2;
    float media;
    Disciplina disciplina;
};

typedef struct avaliacao Avaliacao;

struct aluno
{
    int codigo;
    int idade;
    Avaliacao avaliacoes[5];
};

typedef struct aluno Aluno;

int main()
{
    srand(time(NULL));
    Aluno alunos[size];
    float mediaSala = 0;
    int i, j;

    for (i = 0; i < size; i++)
    {
        alunos[i].codigo = i + 1;
        alunos[i].idade = rand() % 43 + 18;

        printf("\nAluno: %d Idade %d\n", alunos[i].codigo, alunos[i].idade);
        printf("-----------------------------------------\n");
        printf("Disciplinas\n");
        printf("-----------------------------------------\n");
        printf("%7s %7s %7s %7s %7s", "Cod", "c. hor", "p1", "p2", "media\n");

        for (j = 0; j < size; j++)
        {
            alunos[i].avaliacoes[j].disciplina.codigo = j + 1;
            alunos[i].avaliacoes[j].disciplina.cargaHoraria = rand() % 500 + 100;
            alunos[i].avaliacoes[j].p1 = rand() % 11;
            alunos[i].avaliacoes[j].p2 = rand() % 11;
            alunos[i].avaliacoes[j].media = (alunos[i].avaliacoes[j].p1 + alunos[i].avaliacoes[j].p2) / 2;

            printf("%7d %7d %7.1f %7.1f %7.1f\n", alunos[i].avaliacoes[j].disciplina.codigo, alunos[i].avaliacoes[j].disciplina.cargaHoraria, alunos[i].avaliacoes[j].p1, alunos[i].avaliacoes[j].p2, alunos[i].avaliacoes[j].media);

            mediaSala += alunos[i].avaliacoes[j].media;
        }

        printf("-----------------------------------------\n");
    }

    mediaSala /= 50;
    printf("\nMédia geral da sala: %.1f\n", mediaSala);

    return 0;
}