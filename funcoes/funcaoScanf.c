#include <stdio.h>

int main()
{

    int calculaArea(void);
    int ar = calculaArea();
    printf("a area e'%i: ", ar);
    return 0;
}

int calculaArea(void)
{
    int base;
    int altura;
    int area;

    printf("Digite o valor da base:");
    scanf("%i", &base);
    printf("Digite o valor da altura:");
    scanf("%i", &altura);

    area = base * altura;

    //printf("a area e' = %i", area);
    return area;
}
