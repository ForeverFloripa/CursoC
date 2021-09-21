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
    };

    struct horario agora;


    agora.horas = 10;
    agora.minutos = 30;
    agora.segundos = 53;

    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);
    
    struct horario depois;
    depois.horas=agora.horas+10;
    depois.minutos=agora.minutos+4;
    depois.segundos=agora.segundos+2;
    depois.teste = 123.4 / 33;
    depois.letra='a';
    

    printf("%i:%i:%i %f %c\n", depois.horas, depois.minutos, depois.segundos,depois.teste,depois.letra);


    return 0;
}
