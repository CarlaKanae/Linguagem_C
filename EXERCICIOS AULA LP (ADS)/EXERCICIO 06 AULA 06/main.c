#include <stdio.h>
#include <stdlib.h>
#define TAM 10

/*6. Fa�a um programa que preencha um vetor com 10 n�meros reais,
 calcule e mostre aquantidade de n�meros negativos e a soma dos
 n�meros positivos desse vetor */

int main()
{
    int vetor[TAM] = {0},soma = 0;
    int i, qtdNegativo = 0;

    //Atribuindo valores ao Vetor
    printf(" Digite 10 numeros reais: \n");
        for(i=0; i<TAM; ++i)
        {
            scanf("%d",&vetor[i]);
            //Condicionando Positivos e Negativos
            if (vetor[i] < 0)
            {
                qtdNegativo++;
            }
            else
            {
                soma = soma + vetor[i];
            }
        }
        printf("\n");

        //Imprimindo Vetor
        for(i=0; i<TAM; ++i)
        {
            printf("[%d] ", vetor[i]);
        }
        printf("\n\n");

    printf(" Quantidade de Negativos: %d \n\n", qtdNegativo);
    printf(" A soma de positivos eh: %d \n\n", soma);

    return 0;
}
