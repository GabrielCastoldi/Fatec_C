/*
6. Construa um programa que permita armazenar o salário de 20 pessoas. Calcular e armazenar
o novo salário sabendo-se que o reajuste foi de 8%. Imprimir uma listagem numerada com o
salário e o novo salário. Declare quantos vetores forem necessários.
*/

#include <stdio.h>

int main()
{
    float salarios[20] = {0.0};
    int i;

    for (i = 0; i < 20; i++)
    {
        printf("\nDigite o salario da pessoa %d: ", i + 1);
        scanf("%f", &salarios[i]);

        salarios[i] += salarios[i] * 8 / 100;
    }

    for (i = 0; i < 20; i++)
    {
        printf("\nNovo salario da %d pessoa: %.2f", i + 1, salarios[i]);
    }

    return 0;
}