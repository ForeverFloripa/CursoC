#include <stdio.h>

int main(void)
{
    //bloco 1
    /*     int x;
    int *ponteiroX =&x;
    int y = ponteiroX;
    printf("%i\n",ponteiroX);
    printf("%i\n",y);
    int *ponteiroZ = &y;
    printf("%i\n",ponteiroZ);

 */
    //bloco 2

    void testeVariavel(int x);
    void testeponteiro(int *pX);
    int teste = 1;
    int *pTeste = &teste;

    testeVariavel(teste);
   // testeponteiro(pTeste);

    printf("%i\n", teste);

    return 0;
}

void testeVariavel(int x)
{
    ++x;
    printf("%i",x);
}

void testeponteiro(int *pX)
{
    ++*pX;
}
