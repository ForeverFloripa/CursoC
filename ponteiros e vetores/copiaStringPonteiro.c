#include <stdio.h>


void copiarStrings(char *copiarDaqui, char *colarAqui){

    while (*copiarDaqui !='\0')
    {
        *colarAqui= *copiarDaqui;
        ++copiarDaqui;
        ++colarAqui;
    }
    *colarAqui='\0';
}

int main(void){
void copiarStrings(char *copiarDaqui, char *colarAqui);
char string1[]="Pao com Mortadela";
char string2[20];
copiarStrings(string1,string2);
printf("String2: %s\n",string2);
    return 0;
}