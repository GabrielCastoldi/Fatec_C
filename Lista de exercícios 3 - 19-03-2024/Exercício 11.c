/*
11. Construa um programa que permita armazenar o salário de 20 pessoas. Calcular e armazenar
o novo salário sabendo-se que o reajuste foi de 8%. Imprimir uma listagem numerada
contendo: salário antigo, novo salário, diferença em valor; ao final mostre o total de cada
coluna (vetor). Declare quantos vetores forem necessários.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    float salario[20];
    float novoSalario[20];
    float diferenca[20];
    float totalSalario = 0.0;
    float totalNovoSalario = 0.0;
    float totalDiferenca = 0.0;
    int i;

    for (i = 0; i < 20; i++)
    {
        salario[i] = 2000 + rand() % 2001;
        novoSalario[i] = salario[i] + (salario[i] * 8 / 100);
        diferenca[i] = novoSalario[i] - salario[i];
        totalSalario += salario[i];
        totalNovoSalario += novoSalario[i];
        totalDiferenca += diferenca[i];
    }

    for (i = 0; i < 20; i++)
    {
        printf("\n%.2d - Salario antigo: %.2f. Novo salario: %.2f. Diferenca: %.2f.", i + 1, salario[i], novoSalario[i], diferenca[i]);
    }

    printf("\n\nTotal salario antigo: %.2f. Total salario novo: %.2f. Total diferenca: %.2f.", totalSalario, totalNovoSalario, totalDiferenca);
    
    return 0;
}