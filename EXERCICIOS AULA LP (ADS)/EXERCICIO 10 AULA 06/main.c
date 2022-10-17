#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrizA[4][2] = {0};
    int matrizB[4][2] = {0};
    int matrizC[4][2] = {0};
    int i, j;

    //Atribuindo valores a matriz A
    printf("Digite valores para a matriz A: \n");
        for(i=0; i<4; i++)
        {
            for(j=0; j<2; j++)
            {
                scanf("%d", &matrizA[i][j]);
            }
        }
    printf("\n");

    //Atribuindo valores a matriz B
    printf("Digite valores para a matriz B: \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }
    printf("\n");

    //Imprimindo matriz A
    printf("Matriz A: \n");
        for(i=0; i<4; i++)
        {
            for(j=0; j<2; j++)
            {
                printf("[%.2d]", matrizA[i][j]);
            }
            printf("\n");
        }
    printf("\n");

    //Imprimindo matriz B
    printf("Matriz B: \n");
        for(i=0; i<4; i++)
        {
            for(j=0; j<2; j++)
            {
                printf("[%.2d]", matrizB[i][j]);
            }
            printf("\n");
        }
    printf("\n");

    //Somando as matrizes A e B
        for(i=0; i<4; i++)
        {
            for(j=0; j<2; j++)
            {
                matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            }
        }

    //Imprimindo matriz C
    printf("Matriz C: \n");
        for(i=0; i<4; i++)
        {
            for(j=0; j<2; j++)
            {
                printf("[%.2d]", matrizC[i][j]);
            }
            printf("\n");
        }
    printf("\n");

    return 0;
}
