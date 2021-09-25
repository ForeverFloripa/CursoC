#include<stdio.h>


int main(void)
{
    
    FILE *file;
    file = fopen("C:\\IMP\\teste.txt", "w" );
    fprintf(file,"Ola Mundo uhuullll!");
    fflush(file);
    fclose(file);


    return 0;
}
