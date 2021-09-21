#include <stdio.h>

struct horario
{
    int horas;
    int minutos;
    int segundos;
};

int main(void)
{
    void receberHorarios(struct horario lista[5]);
    void printfHorarios(struct horario lista[5]);

    struct horario listaHorarios[5];

    receberHorarios(listaHorarios);
    printfHorarios(listaHorarios);

    return 0;
}
void receberHorarios(struct horario lista[5])
{
    int i;
    for (i = 0; i < 5; ++i)
    {
        printf("informe o %i horario (hh:mm:ss): \n", i + 1);
        scanf("%i:%i:%i", &lista[i].horas, &lista[i].minutos, &lista[i].segundos);
    }
}

void printfHorarios(struct horario lista[5])
{
    int i;
        printf("Lista de horarios digitados:\n");
    for (i = 0; i < 5; ++i)
    {
        printf("Horario %i:  %i:%i:%i: \n",i+1, lista[i].horas,lista[i].minutos,lista[i].segundos); 
    }
}