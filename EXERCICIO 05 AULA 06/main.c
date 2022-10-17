#include <stdio.h>
#define TAM 5

int main()
{
    /*5. Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor,
    calcule e imprima a média geral. */

    double notas[TAM]= {0};
    int i;
    double media = 0, soma = 0;

    //Atribuindo valores ao vetor NOTAS
    printf(" Digite a nota de %d alunos: \n\n", TAM);
        for(i=0; i<TAM; ++i)
        {
            printf(" Aluno %d: ",i+1);
            scanf("%lf",&notas[i]);
            soma = soma + notas[i];
        }
    printf("\n");

    printf(" Soma: %.2lf \n",soma);
    media = soma / TAM;
    printf(" Media: %.2lf \n",media);

    return 0;
}
