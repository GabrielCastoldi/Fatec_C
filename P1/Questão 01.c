/*
1. Considere as seguintes declarações de variáveis apresentadas e explique, conceitualmente, o que ocorre ao realizar as declarações expostas em relação ao uso de memória.
*/

/*
int a - esta declaração reserva espaço na memória para uma variável do tipo int chamada a. O tamanho exato do espaço reservado depende da implementação do compilador,
mas geralmente é de 4 bytes em muitos sistemas operacionais modernos.

float b - esta declaração reserva espaço na memória para uma variável do tipo float chamada b. O tamanho do espaço reservado é geralmente de 4 bytes na maioria dos sistemas.

int w[10] - esta declaração reserva espaço na memória para um array de 10 elementos, cada um do tipo int. Se cada int ocupa 4 bytes, então este array ocupará um total de
40 bytes de memória.

int m[5][5] - esta declaração reserva espaço na memória para uma matriz bidimensional de int, com 5 linhas e 5 colunas, totalizando 25 elementos.
Se cada int ocupa 4 bytes, então esta matriz ocupará um total de 100 bytes de memória.
*/

#include <stdio.h>

int main()
{
    int a;
    float b;
    int w[10];
    int m[5][5];

    return 0;
}