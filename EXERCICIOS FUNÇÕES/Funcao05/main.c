/* 05) Criar um programa que receba um nome como parâmetro
e retorne quais letras são vogais e quais são as consoantes.
Usar uma função que verifica se é uma vogal.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
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
     char nome[30];
     int i,tam;

     printf("\nDigite um nome: ");
     gets(nome);
     tam = strlen(nome); //strlen: Descobrir o tamanho da string

     printf("O nome possui %d letras \n", tam);

     for(i=0; i<tam; i++)
         if(verificaLetra(nome[i])==1 )
         printf("\nA letra [%c] eh uma VOGAL: ",nome[i]);
         else
         printf("\nA letra [%c] eh uma CONSOANTE: ",nome[i]);
     printf("\n");

     return(0);
 }
