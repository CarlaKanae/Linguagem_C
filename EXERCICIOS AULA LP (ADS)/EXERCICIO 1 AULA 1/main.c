#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int opcao;

     do
    {
        printf(" Digite uma op��o: \n");
        printf(" 1 - clientes: \n");
        printf(" 2 - Fornecedores: \n");
        printf(" 3 - Fatura: \n\n");
        printf(" 0 - Sair: \n");

        scanf("%d",&opcao);
        printf("\n");

        switch(opcao)
        {
            case 1:
                printf(" Voc� selecionou a op��o CLIENTES! \n\n");
                break;

            case 2:
                printf(" Voc� selecionou a op��o FORNECEDORES! \n\n");
                break;

            case 3:
                printf(" Voc� selecionou a op��o FATURA! \n\n");
                break;

            case 0:
                printf(" Voc� selecionou a op��o SAIR! \n\n");
                break;

            default:
                printf(" Op��o Inv�lida! \n");

        }
        system("pause");
        system("cls");
    }while(opcao != 0);

    return 0;
}
