#include <stdio.h>

int main(void)
{
    void gravaArquivo(void);
    void gravaVetor(void);
    int i, c;
    i = 0;
    c = 4;

    for (i = 0; i < c; i++)
    {
       // gravaArquivo();

    }
        gravaVetor();
}

void gravaArquivo(void)
{
    FILE *file;
    file = fopen("C:\\IMP\\teste.txt", "a");
    fprintf(file, "\nGravando mais uma nova linha uhuullll!");
    fclose(file);
}

void gravaVetor(void)
{
    FILE *file;
    file = fopen("C:\\IMP\\teste.txt", "a");
    char frase[] = "Segunda Linha\n";
    fputs(frase, file);
    char caractere = '3';
    fputc(caractere,file);

    fclose(file);
}
