/* 02) Criar um algoritmo que leia os elementos de uma matriz inteira de 4 x 4
 e imprimir os elementos da diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i, j;
     int mat[4][4];

     //Alimentando a matriz
         for (i=0; i<4; i++)
         {
             for (j=0; j<4; j++)
             {
                 printf("Digite ELEMENTO da linha %d, coluna %d da matriz: ",i+1,j+1);
                 scanf("%d", &mat[i][j]);
             }
             printf("\n");
         }

     //Imprimindo a matriz
     printf("Matriz: \n\n");

         for (i=0; i<4; i++)
         {
             for (j=0; j<4; j++)
             {
                 printf("[%2.0d] ",mat[i][j]);
             }
             printf("\n");
         }

     // Imprimindo a diagonal principal
     printf("\n\nDiagonal principal\n\n");

         for (i=0; i<4; i++)
         {
              for (j=0; j<4; j++)
             {
                  if(i==j)
                  printf("[%2.0d] ", mat[i][j]);
                  else
                  printf("    ");//4 espaços
             }
             printf("\n");
         }
     printf("\n");

     return 0;
}
