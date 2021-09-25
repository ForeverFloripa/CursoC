#include <stdio.h>

void main(void)
{
    char x[100];

    FILE *file=fopen("C:\\IMP\\digitado.txt", "r");
    fgets(x,100, file);

    printf("%s\n",x);

    freopen("C:\\IMP\\arqDest.txt", "r", file);

    fgets(x,100, file);
    printf("%s\n",x);
    


    return 0;
}
