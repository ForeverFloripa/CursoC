#include <stdio.h>

int main(void)
{
/* scanf necessita de arquivo formatado */
    FILE *file;
    file = fopen("C:\\IMP\\leitura.txt", "r");

    if(file == '\0'){
    printf("Erro ao ler arquivo  (Errroooouuu)");
    exit(0);
    }

    char frase[100];

    while (fgets(frase,100,file)!=NULL)
    {
        printf("%s",frase);
    }

    return 0;
}