#include <stdio.h>
#include <stdlib.h>

/*Crie um vetor A com 5 posições.
– O usuário deverá fornecer o valor para cada campo, ao
final será mostrado como resultado este mesmo vetor A,
porém em ordem crescente de valores.*/

int main()
{
    int vetor[5], i, j, aux;

    //Atribuindo valores ao vetor
        for(i=0; i<5; i++)
        {
            printf(" Digite o valor %d: ", i+1);
            scanf("%d", &vetor[i]);
        }

    //Ordenando os vetores em ordem crescente
        for(i=0; i<5; i++)
        {
            for(j=i+1; j<5; j++)
            {
                if(vetor[i] > vetor[j])
                {
                    aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
                }
            }
        }

    //Imprimir em ordem crescente
    printf(" Em ordem crescente: \n");
        for(i=0; i<5; i++)
        {
            printf(" %d \n", vetor[i]);
        }

        //Ordenando os vetores em ordem decrescente
        for(i=0; i<5; i++)
        {
            for(j=i+1; j<5; j++)
            {
                if(vetor[i] < vetor[j])
                {
                    aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
                }
            }
        }

        //Imprimir em ordem decrescente
        printf(" Em ordem decrescente: \n");
        for(i=0; i<5; i++)
        {
            printf(" %d \n", vetor[i]);
        }

    return 0;
}
