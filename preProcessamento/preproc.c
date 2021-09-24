#include <stdio.h>

#define PI 3.14159
#define NULO 0

double areaCirculo(double raio){
return  PI * raio * raio;
}

int main(void)
{
double areaCirculo(double raio);
double raio;
int i=3;

while (i!=NULO)
{
printf("digite o raio: \n");
scanf("%lf",&raio);
double area = areaCirculo(raio);
printf("a area do Circulo e': %lf \n",area);
--i;

}
    return 0;
}