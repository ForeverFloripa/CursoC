#include <stdio.h>

int main(void)
{
    char x[] = "coxinha aaa";

    FILE *file = fopen("c:\\imp\\arq1.txt", "a");

    putc('a', stdout); 
    //putc('a', file);

    int i = 0;
    while (x[i] != '\0')
    {
        putc(x[i], file);
        ++i;
    }

    return 0;
}
