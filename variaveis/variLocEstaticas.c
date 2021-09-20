#include <stdio.h>

int main(void)
{
    void teste(void);
    teste();
    teste();
    teste();

    return 0;
}

void teste(void){

static int variavelLocalEstatica = 2;
variavelLocalEstatica *=2;

int variavelLocalAutomatica = 2;
variavelLocalAutomatica *=2;


printf("%i\n",variavelLocalEstatica);
printf("%i\n",variavelLocalAutomatica);
}
