/* 3)Criar um algoritmo que leia os elementos de uma matriz inteira de 3 x 3
e imprimir todos os elementos, exceto os elementos da diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
     int matriz[3][3] = {0};
     int i, j;

     //Atribuindo valoes a matriz
     for (i=0; i<3; i++)
     {
        for (j=0; j<3; j++)
        {
            printf("Digite o valor para linha %d, coluna %d: ",i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
     }
     //Imprimindo a matriz
     printf("Matriz\n");
     for (i=0; i<=2; i++)
     {
        for (j=0; j<3; j++)
        {
            printf("[%2.0d]",matriz[i][j]);
        }
        printf("\n");
     }

     // Imprimindo a matriz menos diagonal principal
     printf("\n\nMatriz menos a diagonal principal\n");
     for (i=0; i<3; i++)
     {
        for (j=0; j<3; j++)
        {
            if (i != j)
            printf("[%2.0d]",matriz[i][j]);
            else
            printf("    ");
        }
        printf("\n");
     }

     printf("\n");

     return 0;
}
