#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    printf("O CARACTERE \\n � usado para pular uma linha!\n");
    printf("O CARACTERE \\\\ � usado para deixar um comentario de uma linha apenas! \n");
    printf("O CARACTERE \\t � usado para dar o espa�o de uma tabula��o! \n");
    printf("O CARACTERE %%%% � usado para imprimir o simbolo de porcentagem! \n");

    return 0;
}
