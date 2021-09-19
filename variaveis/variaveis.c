#include <stdio.h>

int main()
{
    printf("Ola mundo das variaveis\n");

    int minhaIdade;
    minhaIdade = 40;
    printf("Minha idade e = %i.\n ", minhaIdade);
    int maeIdade = 60;
    int paiIdade = 65;
    int idadeTotal = minhaIdade + maeIdade + paiIdade;
    printf("A idade de minha mae e %10i,\n e de meu pai e %10i \n E a minha e %10i\n",
           maeIdade, paiIdade, minhaIdade);
    printf("%i no total",idadeTotal);
    return 0;
}
