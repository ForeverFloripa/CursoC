#include <stdio.h>

int main(void)
{
    int x = 10;
    int *pX = &x;

    int vetor[3] = {1, 2, 3};

    int *ponteiro = vetor;
    /* ou */
    //int *ponteiro = &vetor[0];

    printf("vetor: %i\n", vetor);

    printf("*ponteiro: %i\n", *ponteiro);
    printf("ponteiro: %p\n", ponteiro);




    ponteiro = &vetor[1];
    printf("ponteiro[1]: %p\n", ponteiro);

    ponteiro = &vetor[2];
    printf("ponteiro[2]: %p\n", ponteiro);

    ponteiro = &vetor[3];
    printf("ponteiro[3]: %p\n", ponteiro);

     int *enderecoMem = &vetor[0];
    ++enderecoMem;
    printf("va mostrar o proximo[1]: %p\n", *enderecoMem);
    ++enderecoMem;
    printf("va mostrar o proximo[2]: %p\n", *enderecoMem);

    /* valor do endereco sendo alterado */
    *(enderecoMem + 1 )=10;
    printf("%i",vetor[3]);



    return 0;
}