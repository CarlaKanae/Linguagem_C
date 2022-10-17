/*03)Criar uma função que retorna o seguinte:
A função recebe 3 valores float (n1,N2,n3)e retornar o (x*x)+y+z
ou seja : O quadrado do 1º + a soma dos outros dois.
Vai retornar o tipo inteiro.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float calcula (float x, float y, float z)
     {
     return (pow(x,2)+(y+z));
     }

int main()
{
     int i;
     float vet[3] = {0};

     //Alimenta o vetor
     for(i=0;i<=2;i++)
     {
         printf(" [%d] Digite um numero: ",i);
         scanf("%f",&vet[i]);
     }

     printf("\n Resultado: %.2f \n", calcula(vet[0],vet[1],vet[2]));

     return(0);
}
