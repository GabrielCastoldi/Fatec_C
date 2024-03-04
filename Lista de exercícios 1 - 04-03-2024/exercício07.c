/*
7. Programa: média ponderada.
Muitos concursos e universidades usam o sistema de média ponderada para a formulação da média final dos alunos.
Assim, objetivo desse programa é a realização desse cálculo de forma automatizada.
Considere três notas de um aluno - a serem informadas pelo usuário, calcule e escreva a média final deste aluno.
Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5, respectivamente Fórmula
para o cálculo da média final é:

mediafinal = n1 * 2 + n2 * 3 + n3 * 5 / 10
*/

#include <stdio.h>

int main()
{
    float notas[3] = {0};
    float pesos[3] = {2, 3, 5};
    float mediaFinal = 0.0;
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nInforme a %d nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (i = 0; i < 3; i++)
    {
        mediaFinal += notas[i] * pesos[i];
    }

    mediaFinal /= 10;

    printf("\nA media final eh: %.2f", mediaFinal);

    return 0;
}