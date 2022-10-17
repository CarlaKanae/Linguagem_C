#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];
    int i, maior, menor;
    int posiMaior, posiMenor;

    //Atribuindo valores ao vetor
    for(i=0; i<5; i++)
    {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);

        if(i==0)
        {
            posiMaior = 0;
            posiMenor = 0;
            maior = vetor[i];
            menor = vetor[i];
        }
        else
        {
            if(maior < vetor[i])
            {
                maior = vetor[i];
                posiMaior = i;
            }
            if(menor > vetor[i])
            {
                menor = vetor[i];
                posiMenor = i;
            }
        }
    }
    printf("\n");

    //Imprimindo o vetor e a posição maior e a menor
    for(i=0; i<5; i++)
    {
        printf("[%d] ",vetor[i]);
    }
    printf("\n\n");

    printf("O maior valor eh %d \n Esta na posicao: %d \n", maior, posiMaior);
    printf("O menor valor eh %d \n Esta na posicao: %d \n", menor, posiMenor);

    return 0;
}
