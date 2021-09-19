#include<stdio.h>

int main(){

    int num1,num2;

    printf("digite 2 numeros inteiros:");

    scanf("%i %i", &num1, &num2);
    
    if(num2==0){
        printf("Divisao por zero nao permitida");
    }
    else{
        if(num1 % num2 ==0){
            printf(" O numero %i e' divisivel por %i",num1,num2);
        }else{
            printf(" O numero %i NAO E'  divisivel por %i\n",num1,num2);
            printf("sobra %i",(num1 % num2));
        }

    }

}