#include <stdio.h>

int main()
{
    int c = 10;
    int *p = &c;

    printf("Conteudo apontado por p: %d \n", *p);

    *p = 12;

    printf("Conteudo apontado por c: %d\n", c);
    printf("Conteudo apontado por *p: %d \n", *p);
    printf("Conteudo de count: %d \n", c);

    return 0;
}