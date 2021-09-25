#include <stdio.h>

void main(void)
{

void pegaCaracterPosicaoIni();
void pegaSequencia(void);
void pegaSequenciaTexto(void);

//pegaCaracterPosicaoIni();
//pegaSequencia();
pegaSequenciaTexto();


return 0;
}

void pegaCaracterPosicaoIni(){
char x[100];
x[0]=fgetc(stdin);
printf("%c",x[0]);
}

void pegaSequencia(void){
    char x[100];
    int i=0;
    while ((x[i]=fgetc(stdin))!= '\n')
    {
       ++i;
    }
    x[i]='\0';
    printf("%s",x);


}void pegaSequenciaTexto(void){
    char x[100];

    FILE *file= fopen("c:\\imp\\arq1.txt","r");

    int i=0;
    while ((x[i]=fgetc(file))!= EOF)
    {
       ++i;
    }
    x[i]='\0';
    printf("%s",x);
}






