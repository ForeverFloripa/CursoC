#include <stdio.h>
#include <stdbool.h>

int main(void)
{

/*     char nome[20];
    char sobrenome[20];

    printf("insira seu nome e sobrenome: ");
    scanf("%s%s", nome, sobrenome);
    printf("%s %s\n", nome, sobrenome);
    printf("%s\n", nome);
    printf("%s\n", sobrenome);
 */
    char linha[100] = {0};
    char caractere;
    int i = 0;

    do
    {
        caractere = getchar();
        linha[i] = caractere;
        ++i;
    } while (caractere != '\n');

    linha[i - 1] = '\0';

    printf("%s\n", linha);

    return 0;
}