#include <stdio.h>
#include <stdbool.h>
int main()
{
    void alfabetico(char variavel);

    char nome[20];
    printf("digite uma palavra: ");
    scanf("%s", nome);


    int i =0;

while (nome[i]!='\0')
{
    alfabetico(nome[i]);
    ++i;
}
        return 0;
}

void alfabetico(char variavel)
{
    if((variavel>='a') && (variavel<='z')||
        (variavel>='A') && (variavel<='Z')){
    printf("%c e'uma letra: \n",variavel);
        
    }else{
    printf("%c nao e' uma letra \n",variavel);

    }


}