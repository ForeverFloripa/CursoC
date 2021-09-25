#include <stdio.h>

int main(void)
{
    char x[10];
    char y[10];

    gets(x); // perigo: nao limita o numero de caracteres podendo sobrescrever dados
    printf("%s",x);

    return 0;
}

