#include <stdio.h>
#include <time.h>

int main(void)
{

    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario teste[5];
    teste[0].horas = 10;
    teste[0].minutos = 11;
    teste[0].segundos = 12;

    struct horario teste2[3]= {{10,20,30},{11,40,60},{13,33,44}};


    printf("%i:%i:%i\n", teste[0].horas, teste[0].minutos, teste[0].segundos);

    for (int i = 0; i < 3; i++)
    {
    printf("%i:%i:%i\n", teste2[i].horas, teste2[i].minutos, teste2[i].segundos);
        /* code */
    }
    



    return 0;
}
