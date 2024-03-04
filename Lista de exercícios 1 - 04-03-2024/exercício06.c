/*
6. Programa: calculador de custos.
Sabe-se que o custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
Crie um programa que permita ao usuário informar: valor do custo de fábrica,
o % de impostos e o % do distribuidor.

A saída deverá mostrar:
- Valor total do carro;
- Valor do distribuidor e a porcentagem informada;
- Valor dos impostos;
*/

#include <stdio.h>

int main()
{
    float custoFabrica = 0.0;
    float percentualImposto = 0.0;
    float percentualDistribuidor = 0.0;
    float valorImposto = 0.0;
    float valorDistribuidor = 0.0;
    float custoFinal = 0.0;

    printf("\nInforme o custo de fabrica: ");
    scanf("%f", &custoFabrica);

    printf("\nInforme o percentual de imposto: ");
    scanf("%f", &percentualImposto);

    printf("\nInforme o percentual do distribuidor: ");
    scanf("%f", &percentualDistribuidor);

    valorDistribuidor = custoFabrica * percentualDistribuidor / 100;

    valorImposto = custoFabrica * percentualImposto / 100;

    custoFinal = custoFabrica + valorDistribuidor + valorImposto;

    printf("\nValor final do carro: R$%.2f", custoFinal);

    printf("\nPorcentagem do distribuidor eh: %.2f%%", percentualDistribuidor);

    printf("\nValor referente a porcentagem do distribuidor: R$%.2f",valorDistribuidor);

    printf("\nValor do imposto: R$%.2f", valorImposto);

    return 0;
}