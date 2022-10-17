#include <stdio.h>

int main()
{
    /*3. Crie um programa que lê 10 valores inteiros e, em seguida, mostre na tela os valores
    lidos na ordem inversa.*/

    int valor[10]= {0};
    int i;

    //Atribuindo valores ao vetor VALOR
    printf(" Digite 10 valores: \n\n");
        for(i=0; i<10; i++)
        {
            printf(" Digite o valor %d: ", i+1);
            scanf("%d", & valor[i]);
        }
    printf("\n");

    //Invertendo o vetor
    printf(" Valores Invertidos: \n");
        for(i=0; i<10; i++)
        {
            printf("[%d] ", valor[9-i]);
        }
    printf("\n");

    return 0;
}
