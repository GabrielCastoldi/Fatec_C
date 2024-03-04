/*
10. Conversor de Moedas
As moedas mais robustas do sistema financeiro global são o Dollar e o Euro, porém sabe-se que há
flutuações nessas moedas em relação à cotação, principalmente quanto ao Real.

Crie um programa para ajudar os viajantes a realizar a conversão para ambas as moedas. O
usuário deverá informar o valor em real que deseja ser convertido e o valor da cotação do dollar e o
euro em relação ao real. Para efeito exemplificação, 1 dollar = R$ 5,57 e 1 euro = R$ 6,58.

Obs. esses valores da cotação devem ser informados pelo usuário!

Ao final, mostre o equivalente do valor informado em Euros e Dollar
*/

#include <stdio.h>

int main()
{
    float valorReal = 0.0;
    float valorDollar = 0.0;
    float valorEuro = 0.0;
    float cotacaoDollar = 0.0;
    float cotacaoEuro = 0.0;

    printf("\nDigite o valor em Real: ");
    scanf("%f", &valorReal);

    printf("\nDigite a cotacao do Dollar: ");
    scanf("%f", &cotacaoDollar);

    printf("\nDigite a cotacao do Euro: ");
    scanf("%f", &cotacaoEuro);

    valorDollar = valorReal / cotacaoDollar;

    valorEuro = valorReal / cotacaoEuro;

    printf("\nValor em Real: %.2f", valorReal);
    printf("\nValor em Dollar: %.2f", valorDollar);
    printf("\nValor em Euro: %.2f", valorEuro);

    return 0;
}