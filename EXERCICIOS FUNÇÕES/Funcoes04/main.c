/*04) Criar uma função que receba um caractere como parâmetro
 e retorne 1 (um) caso seja uma vogal e zero caso não seja.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int verificaLetra(char V)
 {
     if(V =='a' || V =='A' || V =='e' || V =='E' || V =='i'
        || V =='I' || V =='o' || V =='O' || V =='u' || V =='U')
     return(1);
     else
     return(0);
 }
int main()
{
     char letra;

     printf("Digite uma letra: ");
     scanf("%c",&letra);

     if(verificaLetra(letra)==1)
     printf("\nA letra [ %c ] eh uma vogal: ",letra);
     else
     printf("\nA letra [ %c ] eh uma consoante: ",letra);
     printf("\n");

     return(0);
 }

