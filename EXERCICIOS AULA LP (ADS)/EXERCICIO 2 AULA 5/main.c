#include <stdio.h>
#include <stdlib.h>

/*Desenvolver um programa que leia 5 elementos de um vetor A.
– No final, apresente:
• A soma de todos os valores ímpares.
• A soma de todos os valores pares.
• A soma total.
• E a porcentagem de números ímpares em relação aos pares.*/

int main()
{
    int vetorA[5],i;
    int soma1 = 0, soma2 = 0, total = 0;
    int porcentagemImpar = 0, porcentagemPar = 0;
    int contaPar = 0, contaImpar = 0;

    //Atribuindo valores ao VetorA
        for(i=0; i<5; i++)
        {
            printf(" Digite o valor %d: ", i+1);
            scanf("%d", &vetorA[i]);
        }
        printf("\n");

    //Somar todos os valores pares e impares
        for(i=0; i<5; i++)
        {
            if(vetorA[i] %2 == 0)
            {
                soma1 = soma1 + vetorA[i];
                contaPar++;
                porcentagemPar = (contaPar / (5*1.0)) * 100;
            }
            else
            {
                soma2 = soma2 + vetorA[i];
                contaImpar++;
                porcentagemImpar = (contaImpar / (5*1.0)) * 100;

            }
        }
    printf(" A soma de pares eh %d \n\n", soma1);
    printf(" A soma de impares eh %d \n\n", soma2);

    //A soma de pares e impares
        total = soma1 + soma2;
        printf(" O total das somas eh %d \n\n", total);

    //Mostrando a quantidades de pares e impares que há e sua porcentagem
    printf(" Ha %d par(es) \n\n", contaPar);
    printf(" Ha %d impar(es) \n\n", contaImpar);

    printf(" Aparecem %d %% de pares! \n\n", porcentagemPar);
    printf(" Aparecem %d %% de impares! \n\n", porcentagemImpar);

    return 0;
}
