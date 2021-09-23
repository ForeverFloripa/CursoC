#include <stdio.h>

int main(void)
{
    int x;
    int *ponteiroX =&x;
    int y = ponteiroX;
    printf("%i\n",ponteiroX);
    printf("%i\n",y);
    int *ponteiroZ = &y;
    
    printf("%i\n",ponteiroZ);
    return 0;
}
