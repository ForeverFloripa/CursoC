#include <stdio.h>

int main(void)
{

    int somarVetor(int vetor[], const int n);
    int vetor[10] = {5, 5, 5, 5, 5, 5, 5, 5, 10, 10};

    printf("A soma dos membros do vetor e'= %i : ", somarVetor(vetor, 10));

    return 0;
}
int somarVetor(int vetor[], const int n)
{
    int *ponteiro;
    int soma=0;
    int const finalVetor =vetor + n;

for (ponteiro=vetor; ponteiro < finalVetor; ++ponteiro)
{
    soma += *ponteiro;
}

    
    return soma;
    
}