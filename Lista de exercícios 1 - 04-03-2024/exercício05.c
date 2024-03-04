/*
5. Faça um programa que receba dois números. Calcule e mostre:
a. a soma dos números pares desse intervalo de números, incluindo os números digitados;
b. a multiplicação dos números ímpares desse intervalo, incluindo os digitados;
*/


#include <stdio.h>

int main()
{
    int numero1 = 0;
    int numero2 = 0;
    int somaPares = 0;
    int multiplicacaoImpares = 1;
    int validacao = 0;
    int i;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    if (numero1 > numero2)
    {
        validacao = numero1;
        numero1 = numero2;
        numero2 = validacao;
    }
    

    for(i = numero1; i <= numero2; i++) {
        if(i % 2 == 0) {
            somaPares += i;
        } else {
            multiplicacaoImpares *= i;
        }
    }

    printf("\nA soma dos numeros pares no intervalo eh: %d", somaPares);
    printf("\nA multiplicacao dos numeros impares no intervalo eh: %d", multiplicacaoImpares);

    return 0;
}