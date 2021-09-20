#include <stdio.h>


int gVariavelGlobal = 2;

 

int main(void)
{
printf("Global: %i\n",gVariavelGlobal);

    void teste(void);
    teste();
    teste();

    return 0;
}

void teste(void){

int variavelLocalAutomatica = 2;
variavelLocalAutomatica *=2;
gVariavelGlobal *=2;

printf("%i\n",variavelLocalAutomatica);
printf("Global: %i\n",gVariavelGlobal);
}
