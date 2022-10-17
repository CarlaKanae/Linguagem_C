/*10)Criar um algoritmo que leia os elementos de uma matriz inteira de 3 x 3
e imprimir outra matriz multiplicando cada elemento da primeira matriz por 2.
Exemplo:
 1  2  3    2  4  6
 4  5  6    8 10 12
 7  8  9   12 16 18  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
     int matriz1[3][3] = {0};
     int matriz2[3][3] = {0};
     int i, j;

     //Atribuindo valores a Matriz 1
     for (i=0; i<3; i++)
     {
        for (j=0; j<3; j++)
        {
            printf("Digite um valor para a linha %d, coluna %d: ",i+1,j+1);
            scanf("%d", &matriz1[i][j]);
        }
     }

     //Imprimindo a matriz original
     printf("Matriz original\n");
     for (i=0; i<3; i++)
     {
        for (j=0; j<3; j++)
        {
            printf("[%2.0d]",matriz1[i][j]);
        }
        printf("\n");
     }

     // Preenche matriz 2 com os valores da Matriz 1 multiplicados por 2
     for (i=0; i<3; i++)
     {
         for (j=0; j<3; j++)
         {
             matriz2[i][j] = matriz1[i][j]*2;
         }
     }

     // Imprime a matriz 2
     printf("\n\nMatriz com valores da Matriz 1 multiplicados por 2\n\n");

     for (i=0; i<3; i++)
     {
        for (j=0; j<3; j++)
        {
            printf("[%2.0d]",matriz2[i][j]);
        }
        printf("\n");
     }
     printf("\n");

     return 0;
}
