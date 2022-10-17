#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que leia 8 valores em um vetor A.
– Construir um vetor B com a mesma dimensão.
  Os elementos do vetor A devem ser multiplicados por 3 e
  armazenado o resultado no vetor B. Ou seja,
– B[1] = A[1] * 3; por exemplo. */

int main()
{
    int vetorA[8],vetorB[8],i;

    //Atribuindo valores para o vetor A
    for(i=0; i<8; i++)
    {
        printf(" Digite o valor %d: ", i+1);
        scanf("%d", &vetorA[i]);
    }
    printf("\n");

    //Imprimindo os valores ja multiplicados
    printf(" Vetor B: \n");
    for(i=0; i<8; i++)
    {
        vetorB[i] = vetorA[i] *3;
        printf("%d X 3 = %d \n",vetorA[i],vetorB[i]);
    }

    return 0;
}
