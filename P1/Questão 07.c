/*
7. Analise o código abaixo:

Responda:

a.Quais serão as saídas para A, B, C, D e E?

A: 1.9838000
B: 1.983800
C: 0.983800
D: 0.983800
E: 0.983800

b. Explique o conceito de ponteiros utilizado no código.

O código usa ponteiros para acessar e modificar a estrutura GeolocPoint. Um ponteiro é uma variável que armazena o endereço de memória de outra variável.
No código, p é um ponteiro para g1, o que significa que ele armazena o endereço de memória de g1. Isso permite que você acesse e modifique g1 indiretamente através de p.
Da mesma forma, y é um ponteiro para o ponteiro p, permitindo que você acesse e modifique p (e, portanto, g1) indiretamente através de y.

c. Faça um esboço ilustrativo, e explique, de como dar-se-a a relação entre g1, *p e **y em relação ao uso de memória
[sugestão usar uma tabela para apontar os endereços e valores de memória.]

Endereço          Variável          Valor

100               g1                {1.9838, 1.3030}
200               p                 Endereço 100
300               y                 Endereço 200


*/

#include <stdio.h>

struct geoloc {
float lat;
float lon;
};

typedef struct geoloc GeolocPoint;

int main()
{
    GeolocPoint g1 = {1.9838, 1.3030};
    GeolocPoint *p = &g1;
    GeolocPoint **y = &p;

    printf("\nA: %f", p->lat);
    printf("\nB: %f", (*y)->lat);

    g1.lat--;

    printf("\n\nC: %f", g1.lat);
    printf("D: %f", p->lat);
    printf("\nE: %f", (*y)->lat);
}