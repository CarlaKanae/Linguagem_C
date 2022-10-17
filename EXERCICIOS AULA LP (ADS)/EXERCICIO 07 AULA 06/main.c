#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor[5] = {0};
    int i, maior = 0, menor = 0, soma = 0;
    double media = 0.0;

    //Atribuindo valores ao vetor, somando e condicionando
    for(i=0; i<5; i++)
    {
        printf(" Digite o valor %d: ", i+1);
        scanf("%d", &valor[i]);

        soma = soma + valor[i];

        if(i==0)
        {
            maior = valor[i];
            menor = valor[i];
        }
        else
        {
            if (menor > valor[i])
            {
                menor = valor[i];
            }
            if(maior < valor[i])
            {
                maior = valor[i];
            }
        }
    }
    printf("\n");

    //Imprimindo o Vetor e achando a media
    for(i=0; i<5; i++)
    {
        printf("[%d]", valor[i]);
    }
    printf("\n\n");

    media = soma / 5;

    printf(" O maior valor eh: %d \n", maior);
    printf(" O menor valor eh: %d \n", menor);
    printf(" A soma dos valores eh: %d \n", soma);
    printf(" A media dos valores eh: %.2lf \n", media);

    return 0;
}
