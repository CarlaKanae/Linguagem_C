#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data, dia, mes, ano;
    printf(" Digite uma data no formato ddmmaa: ");
    scanf("%d", &data);

    dia = data / 10000;
    mes = data %10000 / 100;
    ano = data %100;

    printf("\n");
    printf(" DIA: %d \n", dia);
    printf(" MES: %d \n", mes);
    printf(" ANO: %d \n", ano);

    return 0;
}
