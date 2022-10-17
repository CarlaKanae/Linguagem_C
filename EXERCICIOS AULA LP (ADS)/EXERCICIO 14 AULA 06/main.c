#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int matriz[9][9] = {0};
    int i, j;
    int vetor[81] = {0};
    int gerado = 0, posicao = 0, aux = 0;

    //GErando numeros aleatorio para a matriz
    for(i=0; i<9; i++)
     {
        for(j=0; j<9; j++)
         {
            gerado = rand()%100;
            if(gerado %2 == 0)
            {
                gerado++;
                matriz[i][j] = gerado;
            }
         }
      }

    //Alimentando o vetor com valores da matriz
    do
    {
        for(i=0; i<9; i++)
        {
            for(j=0; j<9; j++)
            {
                vetor[posicao++] = matriz[i][j];
            }
        }
    }
    while(posicao < 81);

    //Ordenar o vetor
    for (i = 0; i < 81; i++)
        {
            for (j = i; j < 81; j++)
            {
                if(vetor[i] > vetor[j])
                {
                    aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
                }
            }
        }

    //apresentando os dados
    for (i = 0; i < 81; i++)
    {
        if(i %9 == 0) printf("\n"); //pulando linha de 9 em 9
        printf("[%3d] ", vetor[i]);
    }
        printf("\n");

    return 0;
}
