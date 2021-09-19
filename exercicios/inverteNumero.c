#include <stdio.h>

int main()
{

    /* inverter o numero atraves do resto da divisao por 10 */

    int n, res;

    printf("Insira um numero para inverter: ");
    scanf("%i", &n);
    printf("\nOk, voce escolheu o numero %i\n", n);

    if (n >= 0)
    {
        do
        {
            res = n % 10;
            printf("%i", res);
            n /= 10;
        } while (n != 0);
        printf("\n");
    }
    else if (n < 1)
    {
        n = n * -1;
        printf("-");
        do
        {
            res = n % 10;
            printf("%i", res);
            n /= 10;
        } while (n != 0);
        printf("\n");
    }
return 0;
}


