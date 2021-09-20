#include <stdio.h>

int main(void)
{
    int intVar = 9999999;
    int intVar2 = 10;
    double doubleVar =100.123123123;

    //Formatacao variaveis inteiras
    
    printf("Variavel inteira (%%d) = %15d\n",intVar);
    printf("Variavel inteira (%%i) = %15i\n",intVar);
    printf("Variavel inteira (%%x) = %-15x\n",intVar);
    printf("Variavel inteira (%%o) = %15o\n",intVar);
    printf("\n");

    //Formatacao variaveis float e double
    
    printf("Variavel double (%%f) = %.2f\n",doubleVar);
    printf("Variavel double (%%f) = %.4f\n",doubleVar);
    printf("Variavel double (%%e) = %e\n",doubleVar);
    printf("Variavel double (%%g) = %g\n",doubleVar);
    printf("Variavel double (%%a) = %a\n",doubleVar);
    printf("\n");

    //system("pause");



    return 0;
}
