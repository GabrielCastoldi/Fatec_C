/*
9. Conversor de temperaturas
As unidades de temperaturas são diversas em muitos contextos e/ou países. No Brasil fazer uso na
unidade º Celsius, porém há as unidades Kelvin e ºFarenheit.

Crie um programa que ao receber uma temperatura em ºC apresente a mesma nas demais
unidades.

Fórmulas de Conversão:

Celsius para Kelvin:
0 °C + 273,15 = 273,15 K

Celsius para Farenheit
°F = °C × 1,8 + 32
*/

#include <stdio.h>

int main()
{
    float celsius = 0.0;
    float kelvin = 0.0;
    float farenheit = 0.0;

    printf("\nDigite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + (float)273.15;

    farenheit = celsius * (float)1.8 + 32;

    printf("\nTemperatura em Celsius: %.2f", celsius);
    printf("\nTemperatura em Kelvin: %.2f", kelvin);
    printf("\nTemperatura em Farenheit: %.2f", farenheit);

    return 0;
}