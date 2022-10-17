#include <stdio.h>

int main()
{
    /*Desenvolver um programa que leia 5 elementos de um vetor A. – No final, apresente:
    a. A soma de todos os valores ímpares.
    b. A soma de todos os valores pares.
    c. A soma total.
    d. E a porcentagem de números ímpares e de pares.*/

    int vetor[5] = {0};
    int i, soma1 =0, soma2 =0, total =0;
    double contImpar =0, contPar =0,porcPar = 0, porcImpar = 0;

        //Atribuindo valores ao vetor
        for(i=0; i<5; i++)
        {
            printf("Digite o valor %d: ",i+1);
            scanf("%d",&vetor[i]);
        }
        printf("\n");

        //Imprimindo vetor
        for(i=0; i<5; i++)
        {
            printf("[%d]",vetor[i]);
        }
        printf("\n");

        //Contando os pares e Impares
        for(i=0; i<5; i++)
        {
            if(vetor[i] %2 == 0)
            {
                soma1 = soma1 + vetor[i];
                contPar ++;
                porcPar = (contPar/5*100);
            }
            else
            {
                soma2 = soma2 + vetor[i];
                contImpar++;
                porcImpar = (contImpar/5*100);
            }
        }
        printf("\n");

    printf(" A soma de par(es) eh: %d \n", soma1);
    printf(" A soma de impar(es) eh: %d \n\n", soma2);

    //Mostrando a soma de pares e impares e suas porcentagens
    total = soma1 + soma2;
    printf(" O total da soma de pares e impares eh: %d \n\n", total);

    printf(" A porcentagem de par(es): %.1lf %%\n", porcPar);
    printf(" A porcentagem de impar(es): %.1lf %%\n", porcImpar);
    return 0;
}
