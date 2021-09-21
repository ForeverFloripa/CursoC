#include <stdio.h>
#include <time.h>

int main(void)
{

    struct horario
    {
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    } agora = {10, 20, 30};

    struct horario teste = {10, 20, 30};
    struct horario zerados = {};
    struct horario zerados1 = {0};
    struct horario xx = {.horas = 10, .minutos = 20, .segundos = 30};

    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

    return 0;
}
