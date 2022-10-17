#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[4] = {0};
    int vetorB[4] = {0};
    int i, A = 0, B = 0;

    do
    {
        printf("Digite um valor positivo menor que 10.000 para o Vetor A: ");
        scanf("%d",&A);
    }
    while(A <= 0 || A>= 10000);

    do
    {
        printf("Digite um valor positivo menor de 10.000 para o vetor B: ");
        scanf("%d",&B);
    }
    while(B <= 0 || B >= 10000);

    vetorA[0] = A / 1000;
    vetorA[0] = vetorA[0] %10;

    vetorA[1] = A / 100;
    vetorA[1] = vetorA[1] %10;

    vetorA[2] = A / 10;
    vetorA[2] = vetorA[2] %10;

    vetorA[3] = A %10;

    vetorB[0] = B / 1000;
    vetorB[0] = vetorB[0] %10;

    vetorB[1] = B / 100;
    vetorB[1] = vetorB[1] %10;

    vetorB[2] = B / 10;
    vetorB[2] = vetorB[2] %10;

    vetorB[3] = B %10;

    //Imprimindo vetor A
    printf(" Vetor A: \n");
    for(i=0; i<4; i++)
    {
        printf("[%d]", vetorA[i]);
    }
    printf("\n");

    //Imprimindo vetor B
    printf(" Vetor B: \n");
    for(i=0; i<4; i++)
    {
        printf("[%d]", vetorB[i]);
    }
    printf("\n");



    return 0;
}
