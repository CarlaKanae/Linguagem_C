#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int opcao;

     do
    {
        printf(" Digite uma opção: \n");
        printf(" 1 - clientes: \n");
        printf(" 2 - Fornecedores: \n");
        printf(" 3 - Fatura: \n\n");
        printf(" 0 - Sair: \n");

        scanf("%d",&opcao);
        printf("\n");

        switch(opcao)
        {
            case 1:
                printf(" Você selecionou a opção CLIENTES! \n\n");
                break;

            case 2:
                printf(" Você selecionou a opção FORNECEDORES! \n\n");
                break;

            case 3:
                printf(" Você selecionou a opção FATURA! \n\n");
                break;

            case 0:
                printf(" Você selecionou a opção SAIR! \n\n");
                break;

            default:
                printf(" Opção Inválida! \n");

        }
        system("pause");
        system("cls");
    }while(opcao != 0);

    return 0;
}
