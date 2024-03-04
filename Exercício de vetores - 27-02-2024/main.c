#include <stdio.h>

int main(void)
{

  int vetores[20];
  int i;

  for (i = 0; i < 20; i++)
  {
    printf("\nDigite o %d valor: ", i + 1);
    scanf("%d", &vetores[i]);
  }

  for (i = 0; i < 20; i++)
  {
    printf("\n%d -> %d", vetores[i], vetores[i] * 2);
  }
  return 0;
}