#include <stdio.h>

#define PI 3.14159
#define DOIS_PI 2 * PI
#define AREA_CIRCULO(raio) raio *raio *PI
#define MAIOR(x, y) x > y ? x : y
#define E_MINUSCULO(char) char >= 'a' && char <= 'z'

int main(void)
{
    float x;
    printf("digite int: \n");
    scanf("%f", &x);

    printf("%f\n", PI);
    printf("%f\n", DOIS_PI);
    printf("%f\n", AREA_CIRCULO(x));

   // scanf("%i", &x);
    //t2
    char c = 'A';
    if (E_MINUSCULO(c))
    {
        printf("E'uma letra minuscula\n");
    }
    else
    {
        printf("Nao e'uma letra minuscula\n");
    }

    printf("%i\n", MAIOR(100, 50));

    return 0;
}