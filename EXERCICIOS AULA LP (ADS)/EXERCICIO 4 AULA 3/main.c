#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    double imposto, salarioBruto;

    printf(" Digite [m] masculino, [f] feminino. \n ");
    sexo = getchar();
    printf(" Digite o salario bruto: ");
    scanf("%lf",&salarioBruto);

    switch(sexo)
    {
        case 'f':
        case 'F':
            printf(" Sexo feminino! \n");
            imposto = salarioBruto * 0.10;
        break;

        case 'm':
        case 'M':
            printf(" Sexo Masculino! \n");
            imposto = salarioBruto * 0.15;
        break;
    }
    printf(" Imposto a pagar: %.2lf", imposto);

    return 0;
}
