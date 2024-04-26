/*
Considere a seguinte implementação de funções:

void somaA(int a, int b, int *c)
{
    *c = a + b;
}

int somaB(int a, int b)
{
    return a + b;
}

Responda:

a. Para invocar ambas as funções a partir do metodo main e/ou de outras funções, qual a implementação correta do uso de ambas as funções
(represente exemplo de como funções em termos de código). Faça o código que permita mostrar o resultado no console.

b. Qual a diferença entre ambas funções?

A principal diferença entre as duas funções é a forma como elas retornam o resultado da soma:

A função somaA usa um parâmetro de ponteiro para retornar o resultado. Ela não retorna um valor diretamente, mas modifica o valor da variável apontada por c para ser a soma de a e b.
A função somaB, por outro lado, retorna o resultado diretamente. Ela calcula a soma de a e b e retorna esse valor.
*/

#include <stdio.h>

void somaA(int a, int b, int *c)
{
    *c = a + b;
}

int somaB(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 5, y = 7, z;

    // Invocando a função somaA
    somaA(x, y, &z);
    printf("O resultado de somaA é: %d\n", z);

    // Invocando a função somaB
    z = somaB(x, y);
    printf("O resultado de somaB é: %d\n", z);

    return 0;
}
