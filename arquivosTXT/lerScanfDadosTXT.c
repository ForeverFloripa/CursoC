#include <stdio.h>

int main(void)
{
/* scanf necessita de arquivo formatado */
    FILE *file;
    file = fopen("C:\\IMP\\numero1.txt", "r");
    if(file != '\0'){
    int x, y, z;
    fscanf(file, "%i %i %i", &x, &y, &z);
    printf("%i\n",x);
    printf("%i\n",y);
    printf("%i\n",z);
    fclose(file);
    }else{
    printf("Erro ao ler arquivo  (Errroooouuu)");
    return 0;
    }

    return 0;
}
