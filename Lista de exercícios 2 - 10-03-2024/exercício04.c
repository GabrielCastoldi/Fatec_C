/*
4. Faça um programa que armazene 8 números em um vetor e imprima todos os números. Ao
final, imprima o total de números múltiplos de seis.
*/

#include <stdio.h>

int main()
{
    int numeros[8] = {3, 6, 9, 12, 15, 18, 21, 24};
    int contador = 0;
    int i;

    for (i = 0; i < 8; i++)
    {
        printf("\n%d", numeros[i]);

        if (numeros[i] % 6 == 0)
        {
            contador++;
        }
    }

    printf("\nTotal de numeros divisiveis por seis: %d", contador);

    return 0;
}