#include <stdio.h>
#include <time.h>
#define TAM 10

int main()
{
    /*2. Desenvolva um programa que faça a leitura de 10 valores no vetor A.
     * Construir um vetor B do mesmo tipo, observando a seguinte formatação:
    a. Se o valor do índice for par, o valor deverá ser multiplicado por 5;
    b. Se o valor do índice for ímpar, deverá ser somado com 5.
    c. Ao final mostrar os conteúdos dos dois vetores invertidos (listar ao contrário).*/

    srand(time(NULL));
    int vetorA[TAM]= {0};
    int vetorB[TAM]= {0};
    int i;

    //Atribuindo valores ao vetor A e Imprimindo
    printf("Vetor A: \n");
        for(i=0; i<TAM; i++)
        {
            vetorA[i]= rand()%10;
            printf("[%d]", vetorA[i]);
        }
    printf("\n\n");

    //Condicionando os valores pod par / impar
    //Multiplicando os pares e Somando os Impares
        for(i=0; i<TAM; i++)
        {
            if(vetorA[i] %2 ==0)
            {
                vetorB[i] = vetorA[i] * 5;
                printf(" Vetor B (PAR): %d x 5 = %d \n", vetorA[i], vetorB[i]);
            }
            else
            {
                vetorB[i] = vetorA[i] + 5;
                printf(" Vetor B (IMPAR): %d + 5 = %d \n", vetorA[i], vetorB[i]);
            }
        }
    printf("\n");

    //Imprimindo os valores invertidos dos Vetores A e B
    printf(" Vetor A Invertido: \n");

        for(i=0; i<TAM; i++)
        {
            printf("[%d] ", vetorA[9-i]);
        }
    printf("\n\n");

    printf(" Vetor B Invertido: \n");
        for(i=0; i<TAM; i++)
        {
            printf("[%d] ", vetorB[9-i]);
        }
    printf("\n");

    return 0;
}
