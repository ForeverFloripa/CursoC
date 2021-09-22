#include <stdio.h>

/* caracter nulo par astring: \0 */

int main()
{
    char palavra[6]={'b','r','a','s','i','l\0'}; // /0 indica nulo - fim da string
    //char palavra[16] = {"forever floripa"}; 
  //  char palavra[] = {"forever floripa"};
    char palavra[] = "forever floripa"; //compilador enxerga o caracter nulo tendo assim 16 caracteres

    printf("%s",palavra);
    return 0;
}
