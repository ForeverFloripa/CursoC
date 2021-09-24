#include <stdio.h>

int main(void)
{

    int x = 1;
    int y = 0;

    printf("x = %i\n", x);
    printf("y = %i\n", y);

    printf("x = %i\n", ++x);
    printf("y = %i\n", y++);
    printf("y = %i\n", y);

    int z = 10;

    int k = z++;
    printf("k = %i\n", k);
    
    k = z;
    z = z++;

    return 0;
}