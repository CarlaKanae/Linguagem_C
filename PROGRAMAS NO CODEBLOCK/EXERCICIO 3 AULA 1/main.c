#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    printf("O CARACTERE \\n é usado para pular uma linha!\n");
    printf("O CARACTERE \\\\ é usado para deixar um comentario de uma linha apenas! \n");
    printf("O CARACTERE \\t é usado para dar o espaço de uma tabulação! \n");
    printf("O CARACTERE %%%% é usado para imprimir o simbolo de porcentagem! \n");

    return 0;
}
