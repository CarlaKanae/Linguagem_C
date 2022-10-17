#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[20], endereco[40], telefone[20];

    printf("Digite o nome: ");
    fgets(nome,20,stdin);

    printf("Digite o endereço: ");
    fgets(endereco,40,stdin);

    printf("Digite o telefone: ");
    fgets(telefone,20,stdin);

    printf("\n\n");

    printf(" Nome: %s \n",nome);
    printf(" Endereço: %s \n",endereco);
    printf(" Telefone: %s \n",telefone);

    return 0;
}
