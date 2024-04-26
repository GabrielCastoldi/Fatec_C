/*
8. Analise o código abaixo:

a. Quais deverão ser as saídas de i e p?

i = 20
p = 20

b. Explique o que ocorreu no código.

1. A variável i é inicializada com o valor 10.
2. Um ponteiro p é declarado.
3. O ponteiro p é atribuído ao endereço de i, então p agora aponta para i.
4. O valor no endereço apontado por p (que é i) é dobrado. Portanto, i agora é 20.
5. O valor de i é impresso, que agora é 20.
6. O valor no endereço apontado por p (que ainda é i) é impresso, que também é 20.

*/

#include <stdio.h>

int main(void)
{

    int i = 10;
    int *p;

    p = &i;
    *p = *p * 2;

    printf("\nValor de i: %d", i);
    printf("\nValor de p: %d", *p);
}