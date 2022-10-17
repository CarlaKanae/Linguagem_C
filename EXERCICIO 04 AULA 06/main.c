#include <stdio.h>

int main()
{
    /*4. Crie um programa que lê 10 valores inteiros pares e, em seguida, mostre na tela os
    valores lidos na ordem inversa. */

    int valor[10]= {0};
    int i;

    //Atribuindo valores oares ao vetor VALOR
    printf(" Digite 10 valores Pares: \n\n");
        for(i=0; i<10; i++)
        {
            do
            {
                printf(" Valor par %d: ", i + 1);
                scanf("%d", &valor[i]);

            }while (valor[i] % 2 != 0);

        }
        printf("\n");

    //Imprimir na tela os valores invertidos
    printf("Imprimindo os valores Invertidos: \n\n");
        for(i=0; i<10; i++)
        {
            printf("[%d] ",valor[9-i]);
        }
        printf("\n");

    return 0;
}
