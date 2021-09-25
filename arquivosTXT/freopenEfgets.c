#include <stdio.h>

void main(void)
{
    char x[100];

    fgets(x,100, stdin);

    printf("%s",x);

    freopen("C:\\IMP\\digitado.txt", "r", stdin);
    fgets(x,100, stdin);
    printf("%s",x);
    


    return 0;
}