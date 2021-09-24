#include <stdio.h>

#define SIM 100
#define NAO -100

int main(void)
{

    int x;
    printf("digite int: \n");
    scanf("%i", &x);

    if (x <= 10)
    {
        printf("%i", NAO);
    }
    else
    {
        printf("%i", SIM);
    }
    return 0;
}