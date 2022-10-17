/* 01)Ler um vetor vet de 10 elementos e obter um vetor quadrado cujos
componentes deste vetor são o quadrado dos respectivos componentes de vet.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float vet[10], quad[10];
    int i;

     for (i=0; i<10; i++)
     {
         printf("Digite o numero %d: ",i+1);
         scanf("%f", &vet[i]);
         quad[i] = pow(vet[i],2);
     }

 printf("\n\nVetor VET: ");

     for (i=0; i<10; i++)
     {
         printf("[%.0f]",vet[i]);
     }
     printf("\n\n");

 printf("Vetor QUAD: ");

     for (i=0; i<=9; i++)
     {
         printf("[%.0f]",quad[i]);
     }
     printf("\n\n");

 return 0;
}
