#include <stdio.h>
#include <stdlib.h>

/*1) Desenvolva um programa que faça a leitura de 10 valores no vetor A.
– Construir um vetor B do mesmo tipo, observando a seguinte formatação:
• Se o valor do índice for par, o valor deverá ser multiplicado por 5;
• Se o valor do índice for ímpar, deverá ser somado com 5.
– Ao final mostrar os conteúdos dos dois vetores invertidos (listar ao contrário*/

int main()
{
    int vetorA[10];
    int vetorB[10];
    int i;

    //Atribuindo valores para o vetorA
        for(i=0; i<10; i++)
            {
                printf("Digite o valor %d: ", i+1);
                scanf("%d",&vetorA[i]);
            }

    printf("\n");

    //Manipulando valores do vetor A e colocando no VetorB
        for(i=0; i<10; i++)
            {
                if(vetorA[i] %2 ==0)
                {
                    vetorB[i] = vetorA[i] *5;
                    printf("Vetor B: %d x 5 = %d \n",vetorA[i], vetorB[i]);
                }
                else
                {
                    vetorB[i] = vetorA[i] +5;
                    printf("Vetor B: %d + 5 = %d \n",vetorA[i], vetorB[i]);
                }
            }

    printf("\n");

    //Imprimindo os valores invertidos dos vetores A e B
        printf(" Vetor A Invertido: \n");
        for(i=0; i<10; i++)
            {
                printf(" %d \n ",vetorA[9-i]);
            }
        printf("\n");

        printf(" Vetor B Invertido: \n");
        for(i=0; i<10; i++)
            {
                printf(" %d \n ",vetorB[9-i]);
            }

    return 0;
}
