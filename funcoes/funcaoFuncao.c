#include <stdio.h>

int main(int argc, char const *argv[])
{
    float somaDoisDigitos(float num1,float num2);
    float a, b, soma;

    printf("Digite dois numeros: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    soma = somaDoisDigitos(a,b);

    printf("%f",soma);

    return 0;

}

float somaDoisDigitos(float num1,float num2){
    float numeroAbsoluto(float x);

    if (num1<0){
     num1=numeroAbsoluto(num1);
    }
    if (num2<0){
     num2=numeroAbsoluto(num2);
    }
    return num1 + num2;


}

float numeroAbsoluto(float x){
    return  x * -1;
}