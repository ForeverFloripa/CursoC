#include <stdio.h>

int main(void)
{
    int i;
    int vetor[10] = {6, 4, 1, 9, 8, 0, 5, 7, 3, 2};
    void ordemCrescente(int vetor[], int n);
    ordemCrescente(vetor, 10);

    for (int i = 0; i < 10; ++i)
    {
    printf('%i',vetor[i]);
    }
    return 0;
}

void ordemCrescente(int vetor[], int n){
   int i, j, temporaria;

    for (int i = 0; i < n; i++)
    {
        for (int j = (i) ; j < n; ++j )
        {
            if(vetor[i] >vetor[j]){
                printf("I: %i\n",vetor[i]);
                printf("J: %i\n",vetor[j]);

                temporaria = vetor[i];
                printf("J: %i\n",temporaria);
                vetor[i] = vetor[j];
                vetor[j] = temporaria;
                printf("I: %i\n",vetor[i]);
                printf("I: %i\n",vetor[j]);
                printf("\n");
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
    printf("%i",vetor[i]);
    }

}