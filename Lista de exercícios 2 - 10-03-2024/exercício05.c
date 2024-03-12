/*
5. Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos.
a. Calcule e armazene a média.
b. Armazene também a situação do aluno: 1- Aprovado ou 2-Reprovado.
c. Ao final o programa deve imprimir uma listagem contendo as notas, a média e a situação de
cada aluno em formato tabulado.
Utilize quantos vetores forem necessários para armazenar os dados.
*/

#include <stdio.h>

struct Aluno
{
    float prova1;
    float prova2;
    float media;
    int situacao;
};

typedef struct Aluno Aluno;

int main()
{
    Aluno alunos[15];
    int i;

    for (i = 0; i < 15; i++)
    {
        printf("\nDigite a nota do aluno %d da prova 1: ", i + 1);
        scanf("%f", &alunos[i].prova1);
        printf("\nDigite a nota do aluno %d da prova 2: ", i + 1);
        scanf("%f", &alunos[i].prova2);

        alunos[i].media = (alunos[i].prova1 + alunos[i].prova2) / 2;

        if (alunos[i].media >= 6)
        {
            alunos[i].situacao = 1;
        }
        else
        {
            alunos[i].situacao = 2;
        }
    }

    printf("\n%-10s %-10s %-10s %-10s %-10s\n", "Aluno", "Prova 1", "Prova 2", "Media", "Situacao");

    for (i = 0; i < 15; i++)
    {
        printf("%-10d %-10.2f %-10.2f %-10.2f %-10d\n", i + 1, alunos[i].prova1, alunos[i].prova2, alunos[i].media, alunos[i].situacao);
    }
    return 0;
}