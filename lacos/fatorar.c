#include <stdio.h>

int main(){


int valor;
scanf("%i",&valor);
int contador=valor;
int resultado=1;




for (int i = contador; i > 0; i--)
{
    resultado =  resultado * contador;
    contador--;
}
    printf("result: %i\n",resultado);


}