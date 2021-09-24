#include <stdio.h>

#define PI 3.14159
#define DOIS_PI 2 * PI
#define AREA_CIRCULO(raio) raio * raio * PI

int main(void)
{   
    float x;
                printf("digite int: \n");
                scanf("%f", &x);


        printf("%f\n",PI);
        printf("%f\n",DOIS_PI);
        printf("%f\n",AREA_CIRCULO(x));

    scanf("%i", &x);


     return 0;
}