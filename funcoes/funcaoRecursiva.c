#include <stdio.h>

int main(int argc, char const *argv[])
{
    int fatorial(int x);
    int numero,resultado;

    printf("Digite um numero inteiro: ");
    scanf("%i",&numero);

    resultado = fatorial(numero);

    printf("O fatorial e' %i",resultado);

    return 0;

}

    int fatorial(int x){
        int resultado;

        if(x==0){
            resultado=1;
        }else{
            resultado = x*fatorial(x-1);
        }

        return resultado;

    }
 