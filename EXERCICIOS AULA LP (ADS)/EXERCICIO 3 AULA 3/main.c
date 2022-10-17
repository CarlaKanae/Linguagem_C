#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ordenado, aumento;

    printf(" Digite o valor do ordenado: ");
    scanf("%lf",&ordenado);

    aumento = ordenado > 1000 ? ordenado *0.05 : ordenado *0.07;

    printf(" Valor do aumento: %.2lf \n", aumento);

    return 0;
}
