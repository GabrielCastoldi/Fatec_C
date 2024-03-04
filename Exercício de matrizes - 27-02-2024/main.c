#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int matriz[100][50];
    int i, j;
    
    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 50; j++)
        {
            matriz[i][j] = rand() % 100;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}