#include <stdio.h>
#include <stdlib.h>

//Faça um programa que dados 10 números pelo usuário, verifique quantos são pares

int main()
{
    int num = 0;
    int contador = 0;
    int cont = 0;

    while(contador < 10)
    {
        printf(" Digite um numero: \n");
        scanf("%d",&num);

        if(num % 2 == 0)
        cont++;
        contador++;
    }

    printf(" %d numeros pares", cont);

    return 0;
}
