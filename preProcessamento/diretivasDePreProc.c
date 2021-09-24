#include <stdio.h>

#define NUMERO_MAXIMO_ALUNOS 2000

void umaFuncao(void){
    printf("%i\n",NUMERO_MAXIMO_ALUNOS);
}
void umaOutraFuncao(void){
    printf("%i\n",NUMERO_MAXIMO_ALUNOS);
}


int main(void){
    void umaFuncao(void);
    void umaOutraFuncao(void);

    printf("%i\n",NUMERO_MAXIMO_ALUNOS);
    umaFuncao();
    umaOutraFuncao();


    return 0; 
}