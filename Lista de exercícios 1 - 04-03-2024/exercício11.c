/*
11. Conversor de Tempo

Crie um programa que ao receber do usuário um valor inteiro, correspondente a quantidade de
anos, calcule a equivalência deste em (considere meses com 30 dias e ano com 365 dias):
- meses
- dias
- horas
- minutos
*/

#include <stdio.h>

int main()
{
    float minuto = 0.0;
    float hora = 0.0;
    float dia = 0.0;
    float mes = 0.0;
    float ano = 0.0;

    printf("\nDigite o tempo em anos: ");
    scanf("%f", &ano);

    mes = ano * 12;
    dia = ano * 365;
    hora = dia * 24;
    minuto = hora * 60;

    printf("\nAno: %.2f", ano);
    printf("\nMes: %.2f", mes);
    printf("\nDia: %.2f", dia);
    printf("\nHora: %.2f", hora);
    printf("\nMinuto: %.2f", minuto);

    return 0;
}