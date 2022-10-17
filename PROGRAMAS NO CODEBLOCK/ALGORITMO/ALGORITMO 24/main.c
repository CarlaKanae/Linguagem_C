#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, d;

    printf(" Digite um numero de 3 casas: ");
    scanf("%d", &num);

    d = (num / 10)%10;
    printf("\n O algarismo da casa das dezenas eh: %d \n",d);

    printf("\nDigite um numero de 3 casas: ");
    scanf("%d", &num);

    d = (num %100 / 10);
    printf("\n O algarismo da casa das dezenas eh: %d \n",d);

    return 0;
}
