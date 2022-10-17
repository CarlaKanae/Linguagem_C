#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra1;
    char letra2;

    printf(" Digite a primeira letra: ");
    scanf(" %c", &letra1);

    printf(" Digite a segunda letra: ");
    scanf(" %c", &letra2);

    printf(" As letras digitadas sao: '%c' e '%c'. \n", letra1, letra2);

    return 0;
}
