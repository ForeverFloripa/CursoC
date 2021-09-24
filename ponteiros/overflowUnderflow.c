#include<stdio.h>

int main(void)
{
    
    short x = 2147483647;
    short y = -2147483648;
    // limites da int:
    int z = 2147483647;
    int h = -2147483648;
    // estourou a int:
    int s = -214748364099;


    printf("%i\n",x);
    printf("%i\n",y);
    printf("%i\n",z);
    printf("%i\n",h);
    printf("%i\n",s);

    return 0;
}
