#include <stdio.h>
#include <time.h>

struct horario
{
    int horas;
    int minutos;
    int segundos;
};

int main(void)
{
    struct horario teste(struct horario x);

    struct horario agora;
    agora.horas = 10;
    agora.minutos = 30;
    agora.segundos = 53;

    struct horario retorno;
    retorno = teste(agora);
    printf("%i:%i:%i\n", retorno.horas, retorno.minutos, retorno.segundos);

    return 0;
}

struct horario teste(struct horario x)
{
    x.horas = 11;
    x.minutos = 12;
    x.segundos = 13;
    return x;
}