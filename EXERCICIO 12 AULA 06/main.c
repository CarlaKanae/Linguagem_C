#include <stdio.h>
#include <stdlib.h>
#define L 5
#define C 10

int main()
{
    char matriz[L][C] = {{0}};
    char gabarito[C] = {'a','b','c','d','a','b','c','d','a','b'};
    int pontuacao[C] = {0};
    int i, j;
    int total = 0;

    //Atribuindo as respostas de cada aluno
    for(i=0; i<L; i++)
     {
        printf("Resposta do aluno %d: \n", i+1);

        for(j=0; j<C; j++)
         {
            fflush(stdin);
            printf("Digite a letra (a, b, c ou d) na questao %d: \n",j+1);
            matriz[i][j] = getchar();
         }
     }
    printf("\n\n");

    //Verificando as respostas com o gabarito e pontuando o aluno
    for(i=0; i<L; i++)
    {
        printf("Acertos do aluno %d: \n", i+1);
        total = 0;
        for(j=0; j<C; j++)
        {
            if(matriz[i][j] == gabarito[j])
                total++;
        }
        pontuacao[i] = total;
        printf("Total: %d \n", pontuacao[i]);
    }
    printf("\n\n");

    return 0;
}
