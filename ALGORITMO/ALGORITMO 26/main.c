#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data, dia, mes, ano, novaData;
    printf("Digite uma data no formato DDMMAA: ");
    scanf("%d",&data);

    dia = data / 10000;
    mes = data %10000 / 100;
    ano = data %100;

    novaData = mes *10000 + dia * 100 + ano;
    printf("DIA: %d \n",dia);
    printf("MES: %d \n",mes);
    printf("ANO: %d \n",ano);
    printf("\nData no formatop MMDDAA: %d \n", novaData);
    printf("\n");

    return 0;
}
