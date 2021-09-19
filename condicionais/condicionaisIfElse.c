#include <stdio.h>

int main()
{

    int idade;

    printf("Verifique  se voce pode dirigir, qual sua idade?\n");
    scanf("%i", &idade);
    
    if(idade>=18){
        printf("voce tem %i anos, portanto ja pode dirigir\n",idade);
    }
    else if(idade<=10){
        printf("voce tem %i anos, vai brincar de carrinho\n",idade);
    }
    else if(idade<18 && idade >10){
        printf("voce tem %i anos, vai andar de bicicleta\n",idade);
    }
    return 0;