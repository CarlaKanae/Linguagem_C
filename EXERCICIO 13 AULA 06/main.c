#include <stdio.h>
#include <stdlib.h>
#define TAM 7

int main()
{
    int matriz[TAM][TAM] = {0};
    int i, j;

    //Atribuindo valor a matriz
    for(i=0; i<TAM; i++)
    {
        matriz[i][i] = 1;
    }

    //Imprimindo a Matriz
    for(i=0; i<TAM; i++)
    {
        for(j=0; j<TAM; j++)
        {
            printf("[%2d]",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
