#include <stdio.h>

int main()
{

    int i;

    printf("Insira um numero de 1 a 5\n");
    scanf("%i",&i);

    switch (i)
    {
    case 1:
        printf("Boa escolha 1\n");
        break;
    case 2:
        printf("escolheu o 2\n");
        break;
    case 3:
        printf("escolheu o 3\n");
        break;
    case 4:
        printf("escolheu o 4]n");
        break;
    case 5:
        printf("escolheu o 5\n");
        break;
    default:
        printf("ERROU.....");
        break;

    }
}