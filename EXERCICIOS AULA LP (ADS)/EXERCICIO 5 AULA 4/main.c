#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, num4, num5;
    int maiorValor;
    int menorValor;
    float media;

    printf(" Digite 5 valores: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    maiorValor = num1;
    {
        if(maiorValor < num2)
            maiorValor = num2;
            if(maiorValor < num3)
                maiorValor = num3;
                if(maiorValor < num4)
                    maiorValor = num4;
                    if(maiorValor < num5)
                        maiorValor = num5;
    }

    menorValor = num1;
    {
        if(menorValor > num2)
            menorValor = num2;
            if(menorValor > num3)
                menorValor = num3;
                if(menorValor > num4)
                    menorValor = num4;
                    if(menorValor > num5)
                        menorValor = num5;
    }
    printf("Maior Valor: %d \n", maiorValor);
    printf("Menor Valor: %d \n", menorValor);
    printf("Media: %d \n", (num1 + num2 + num3 + num4 + num5)/ 5);

    return 0;
}
