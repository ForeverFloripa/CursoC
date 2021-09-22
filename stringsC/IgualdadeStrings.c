#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool stringsIguais(char s1[], char s2[]);

    if (stringsIguais("casa", "casa"))
    {
        printf("sao iguais\n");
    }
    else
    {

        printf("sao diferentes\n");
    }
    return 0;
}

bool stringsIguais(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        ++i;
    }
    if (s1[i] == '\0' && s2[i] == '\0'){
        return 1;
    }else{
        return 0;
    }
}