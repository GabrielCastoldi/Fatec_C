/*
3. Considere o seguinte trecho de código:

A saída devera ser: 58

*/

#include <stdio.h>

int main()
{
    int a = 50;
    int b = 5;

    int c = (--a + b++);

    printf("\n%d", a);
    printf("\n%d", b);
    printf("\n%d", c);

    printf("\n%d", (--c + --b));

    printf("\n%d", a);
    printf("\n%d", b);
    printf("\n%d", c);

    return 0;
}