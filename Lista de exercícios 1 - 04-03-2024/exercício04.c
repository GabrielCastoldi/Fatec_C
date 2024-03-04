/*
4. Ler uma sequência de números inteiros e determinar se eles são pares ou não.
Deverá ser informado o número de dados lidos em número de valores pares. O processo termina quando for digitado o número 1000.
*/

#include <stdio.h>

int main()
{
    int numero = 0;
    int contadorPares = 0;

    do
    {
        printf("\nDigite um numero inteiro ou 1000 para terminar: ");
        scanf("%d", &numero);

        if (numero != 1000 && numero % 2 == 0)
        {
            contadorPares++;
        }

    } while (numero != 1000);

    printf("\nQuantidade de numeros pares: %d", contadorPares);

    return 0;
}