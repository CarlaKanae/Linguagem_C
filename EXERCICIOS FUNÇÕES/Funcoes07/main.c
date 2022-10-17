/* 07) Criar um programa que receba dois nomes e retorne
quais letras são vogais e quais são as constantes.
Usar uma função que verifica se é uma vogal.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int verificaVogal(char M)
 {
     if(M=='a' || M=='A' || M=='e' || M=='E'
     || M=='i' || M=='I' || M=='o' || M=='O' || M=='u' || M=='U')
     return(1);
     else
     return(0);
 }
int main()
{
     char nome1[30], nome2[30] ;
     int i, tam1, tam2;
     int cv1 = 0, cc1 = 0, cv2 = 0, cc2 = 0;

     printf(" Digite um nome: ");
     gets(nome1);

     tam1=strlen(nome1);

     printf(" Digite outro nome: ");
     gets(nome2);

     tam2=strlen(nome2);

     for(i=0; i<tam1; i++)
     {
         if(verificaVogal(nome1[i])==1 )
         {
            printf("\n A letra [%c] eh uma VOGAL: ",nome1[i]);
            cv1++;
         }
        else
         {
            printf("\n A letra [%c] eh uma CONSOANTE: ",nome1[i]);
            cc1++;
         }
     }
         printf("\n");

     for(i=0; i<tam2; i++)
     {
         if(verificaVogal(nome2[i])==1 )
         {
             printf("\n A letra [%c] eh uma VOGAL: ",nome2[i]);
             cv2++;
         }
         else
         {
             printf("\n A letra [%c] eh uma CONSOANTE: ",nome2[i]);
             cc2++;
         }
     }
         printf("\n\n");


     printf(" Ha %d vogais no primeiro nome \n",cv1);
     printf(" Ha %d consoantes no primeiro nome \n",cc1);
     printf(" Ha %d vogais no segundo nome \n",cv2);
     printf(" Ha %d consoantes no segundo nome \n",cc2);

     return(0);
 }
