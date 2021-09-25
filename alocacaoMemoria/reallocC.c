#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    /* calloc inicializa com 0 */
    int *p;
    p = calloc(10, sizeof(int));

    if (p == NULL)
    {
        printf("calloc nao funcionou");
    }
    printf("%i\n", *p);
    *p = 10;
    *(p + 1) = 20;
    printf("%i\n", p[0]);
    printf("%i\n", p[1]);
    

    p = (int *)realloc(p, 20 * sizeof(int));

    int i = 0;
    for (i = 0; i < 20; i++)
    {
        printf("Endereco de p%i = %p | Valor de p%i = %i \n", i, (p + i), i, *(p + i));
        /* code */
    }

    getchar();
    return 0;
}