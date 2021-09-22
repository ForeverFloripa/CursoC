#include <stdio.h>
//#include <string.h>

int main(void)
{
    /* conceito */
    char teste[] = {'a', 'n', 'd', 'r', 'e'};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%c", teste[i]);
        printf("\n");
    }

    void concatenarStrings(char string1[], int t1, char string2[], int t2,char string3[]);

    char palavra1[] = {'f', 'o', 'r', 'e', 'v', 'e', 'r', ' '};
    char palavra2[] = {'f', 'l', 'o', 'r', 'i', 'p', 'a'};
    char novaPalavra[15];

    
    concatenarStrings(palavra1,8,palavra2,7,novaPalavra);

    int i;

    for (i = 0; i < 15; i++)
    {
        printf("%c", novaPalavra[i]);
    }
    printf("\n");

    return 0;
}

void concatenarStrings(char string1[], int t1, char string2[], int t2,char string3[])
{
        int i,j;
    for ( i = 0; i < t1; i++)
    {
        string3[i]=string1[i];
    }
    for ( j = 0; j < t2; j++)
    {
        string3[j+t1]=string2[j];
    }
    


}
