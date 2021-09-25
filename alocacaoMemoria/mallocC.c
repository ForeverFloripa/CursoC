#include <stdio.h>
#include <stdlib.h>

void main(void)
{

    int *p = malloc((int *)sizeof(int));


    *p= 1000;

    if(p==NULL){
        printf("malloc nao funcionou");
    }
    printf("%i\n",*p);

    free(p);

    printf("%i\n",*p);

    getchar();
    return 0;
}