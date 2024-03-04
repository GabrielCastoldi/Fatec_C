#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

  srand(time(NULL));
  int a[20];
  int b[20];
  int c[20];
  int i;
  int somaC = 0;
  int contMultiplos = 0;

  for (i = 0; i < 20; i++)
  {
    a[i] = rand() % 100;
    b[i] = rand() % 100;
    c[i] = a[i] + b[i];

    somaC += c[i];

    if (a[i] % 7 == 0)
    {
      contMultiplos++;
    }

    if (b[i] % 7 == 0)
    {
      contMultiplos++;
    }

    if (c[i] % 7 == 0)
    {
      contMultiplos++;
    }
  }

  printf("----------------------------");
  printf("\nA    +    B    =    C");
  printf("\n----------------------------");

  for (i = 0; i < 20; i++)
  {
    printf("\n%d + %d = %d", a[i], b[i], c[i]);
  }

  printf("\nMultiplos de 7: %d", contMultiplos);
  printf("\nSoma de C: %d", somaC);
  printf("\nMedia de C: %.2f", (float)somaC / 20);

  return 0;
}