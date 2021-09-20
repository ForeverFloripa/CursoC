#include <stdio.h>

int main(void)
{
    float notasAluno[5][4] = {0};
    float total = 0;
    float media = 0;

    for (int i = 0; i < 5; i++)
    {
            printf("Aluno %i:\n", i);


        for (int j = 0; j < 4; j++)
        {

            printf("Insira a %i nota do aluno %i\n", j,i);
            scanf("%f", &notasAluno[i][j]);
        }

    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.1f ",notasAluno[i][j]);
        }
        printf("\n");

    }

    return 0;
}
