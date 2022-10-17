/* 02) Criar uma função que retorna o seguinte:
A função recebe 3 valores float e retornar
o quadrado do 1º + a soma dos outros dois.
Vai retornar o tipo inteiro.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float calcula(float x, float y, float z)
     {
        return (pow(x,2)+(y+z));
     }

int main()
{
    float n1, n2, n3;

    printf("Digite o valor 1:");
    scanf("%f",&n1);

    printf("Digite o valor 2:");
    scanf("%f",&n2);

    printf("Digite o valor 3:");
    scanf("%f",&n3);

    printf("Resultado: %.2f\n", calcula(n1,n2,n3));
    printf("\n");

    return(0);
}

