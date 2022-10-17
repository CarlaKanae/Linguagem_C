#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area;
    float perimetro;
    float PI = 3.14;
    float raio;

    printf(" Digite o Raio da Circunferencia em centimetros: ");
    scanf("%f", &raio);
    printf("\n");

    area = PI * (raio * raio);
    perimetro = 2 * PI * raio;

    printf(" A area da circunferencia eh %.2f centimetros quadrados.\n\n", area);
    printf(" O perimetro da circunferencia eh %.2f centimetros. \n\n", perimetro);

    return 0;
}
