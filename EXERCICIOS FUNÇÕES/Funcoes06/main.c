/*06) Criar uma função que retorna o seguinte:
A função recebe 3 valores float e retornar o quadrado do 1º
+ a soma dos outros dois. Vai retornar o tipo inteiro.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

float calcula (float x, float y, float z)
     {
     return (pow(x,2)+(y+z));
     }
int main()
{
     int x, y, z;
     float vet[3];

     printf(" Digite um numero: ");
     scanf("%d",&x);

     printf(" Digite um numero: ");
     scanf("%d",&y);

     printf(" Digite um numero: ");
     scanf("%d",&z);

     printf("\n O Resultado e: %.2f \n\n", calcula(x,y,z));

     printf(" Digite um numero: ");
     scanf("%f",&vet[0]);

     printf(" Digite um numero: ");
     scanf("%f",&vet[1]);

     printf(" Digite um numero: ");
     scanf("%f",&vet[2]);

     printf("\n O Resultado e: %.2f \n", calcula(vet[0],vet[1],vet[2]));

     return(0);
}
