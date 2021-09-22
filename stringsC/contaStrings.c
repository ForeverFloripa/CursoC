#include <stdio.h>

/* caracter nulo par astring: \0 */

int main()
{

  int tamanhoString(char string[]);
  char stringUsuario[20];

  printf("Digite uma palavra(string)\n");
  scanf("%s", stringUsuario);

  int size = tamanhoString(stringUsuario);
  printf("A palavra contem %i caracteres", size);

  return 0;
}

int tamanhoString(char string[])
{
  int numCaracteres = 0;

  while (string[numCaracteres] != '\0')
  {
    numCaracteres++;
  };
    numCaracteres++;

  return numCaracteres;
}
