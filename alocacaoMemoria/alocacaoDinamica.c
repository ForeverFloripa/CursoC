#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;
    double y;


/*     printf("%li\n",sizeof(x));
    printf("%li\n",sizeof(y));
    printf("%li\n",sizeof(short));
    printf("%li\n",sizeof(char));

    int vetor[10];
    printf("%li\n",sizeof(vetor));
    double vetor1[10];
    printf("%li\n",sizeof(vetor1));
 */
    struct x{
       int a;
       int b;
       int c;
    };
    struct x estrutura;
    printf("%li\n",sizeof(estrutura));
    return 0;
    
}