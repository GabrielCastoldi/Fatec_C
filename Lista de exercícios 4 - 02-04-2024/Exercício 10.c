/*
10. Faça uma função não-recursiva que receba um número inteiro positivo n e retorne o quadrúplo
desse número. O fatorial quádruplo de um número n é dado por: ((2n)!) / (n!)
*/

#include <stdio.h>

int fatorialQuadruplo(int n) {
    int i, f = 1;
    for (i = 2 * n; i > 1; i -= 2) {
        f *= i;
    }
    return f;
}

int main() {
    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    
    printf("O fatorial quadruplo de %d eh %d\n", n, fatorialQuadruplo(n));

    return 0;
}