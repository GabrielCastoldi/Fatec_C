/*
2. Gere um vetor W de 100 posições de valores inteiros, gerados de modo randômico entre 0 e
1000, verifique e exiba, os números primos contidos no vetor W.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int w[100];
    int i;
    int j;

    for (i = 0; i < 100; i++)
    {
        w[i] = rand() % 1001;
    }

    for (int i = 0; i < 100; i++)
    {
        int numero = w[i];
        int primo = numero > 1 ? 1 : 0; // Verificador ternário. Verifica se numero é maior que 1, se for, retorna 1, senao, 0

        for (j = 2; j * j <= numero && primo; j++)
        {
            if (numero % j == 0)
            {
                primo = 0;
            }
        }

        if (primo == 1)
        {

            printf("\n%d ", numero);
        }
    }
    return 0;
}