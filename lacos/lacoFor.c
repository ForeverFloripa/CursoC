#include <stdio.h>


int main(){

    int contador = 10;
    int numero=10;

    for (int i = 0; i < contador; i++)
    {
        numero++;
        printf("%i\n",numero);
    }
    while(numero<25){
        numero++;
        printf("%i\n",numero);
    }

    int w=1;

    do
    {
        printf("%i\n",w);
        w++;
        /* code */
    } while (w<10);
    
    
return 0;

}
