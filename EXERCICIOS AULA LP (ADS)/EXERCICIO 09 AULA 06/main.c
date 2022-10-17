#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#include <time.h>

int main()
{
    srand(time(NULL));

    int matriz[TAM][TAM] = {0};
    int i, j;

    for(i=0; i<TAM; i++)
    {
        for(j=0; j<TAM; j++)
        {
            matriz[i][j] = rand()%25;
        }
    }
    printf("\n");

    for(i=0; i<TAM; i++)
    {
        for(j=i; j<TAM; j++)
        {
            printf("[%.2d] ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
