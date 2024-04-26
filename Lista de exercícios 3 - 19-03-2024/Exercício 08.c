/*
8. Crie um programa que gere 2 vetores, W e J, de 100 posições, gere valores randômicos entre
0 e 100 e calcule e retorne t, onde:

𝑡 = (𝑚𝑎𝑥(𝑊) * [𝑚𝑖𝑛(𝐽) + 1]) / (𝑚𝑒𝑑𝑖𝑎(𝑊) + 𝑚𝑒𝑑𝑖𝑎(𝐽))
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int vetorW[100] = {0};
    int vetorJ[100] = {0};
    float t = 0.0;
    int i;
    int maiorW = 0;
    int menorJ = 100;
    int somaW = 0;
    float mediaW = 0.0;
    int somaJ = 0;
    float mediaJ = 0.0;

    for (i = 0; i < 100; i++)
    {
        vetorW[i] = rand() % 101;
        vetorJ[i] = rand() % 101;

        somaW += vetorW[i];
        somaJ += vetorJ[i];
    }

    mediaW = somaW / 100;
    mediaJ = somaJ / 100;

    for (i = 0; i < 100; i++)
    {
        if (vetorW[i] > maiorW)
        {
            maiorW = vetorW[i];
        }

        if (vetorJ[i] < menorJ)
        {
            menorJ = vetorJ[i];
        }
    }

    t = (maiorW * (menorJ + 1)) / (mediaW + mediaJ);

    printf("%.2f", t);

    return 0;
}