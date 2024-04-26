/*
12. Crie um programa em C o qual deverá obter a discrepância e a variância de uma amostra
relativa aos chutes livres ao gol convertidos em acertos; tais chutes são realizados por
jogadores de futebol. Como iniciativa organize os dados em vetores de acordo com as
colunas da tabela abaixo:
Jogador | Acertos(Xi) | xi | (xi)^2
1         8
2         4
3         6
4         10
5         9
6         7
7         8
8         12
9         5
10        8
11        3

As discrepâncias são calculadas por:
𝑥𝑖 = 𝑋𝑖 − 𝑀
Onde, Xi é a quantidade de acertos de cada jogador e M, a média aritmética da soma dos acertos.
A variância S é dada pela somatória de xi ao quadrado.
Calcule a variância e exiba os vetores em formato tabular, similar a tabela acima.

*/

#include <stdio.h>

int main()
{
    int jogadores[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int acertos[11] = {8, 4, 6, 10, 9, 7, 8, 12, 5, 8, 3};
    float xi[11] = {0.0};
    float xiQuadrado[11] = {0.0};
    float soma = 0.0;
    float media = 0.0;
    float variancia = 0.0;
    int i;

    for (i = 0; i < 11; i++)
    {
        soma += acertos[i];
    }

    media = soma / 11;

    for (i = 0; i < 11; i++)
    {
        xi[i] = acertos[i] - media;
        xiQuadrado[i] = xi[i] * xi[i];
    }

    for (i = 0; i < 11; i++)
    {
        variancia += xiQuadrado[i];
    }

    printf("\n%12s %12s %12s %12s", "Jogador", "Acertos(Xi)", "xi", "(xi)^2");
    for (i = 0; i < 11; i++)
    {
        printf("\n%12d %12d %12.2f %12.2f", jogadores[i], acertos[i], xi[i], xiQuadrado[i]);
    }

    printf("\nA variancia eh: %.2f", variancia);
    return 0;
}