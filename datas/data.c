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

    struct horario agora;
    agora.horas=10;
    agora.minutos=30;
    agora.segundos=53;


printf("%i:%i:%i\n",agora.horas,agora.minutos,agora.segundos);

time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  printf ( "Current local time and date: %s", asctime (timeinfo) );

  time_t mytime = time(NULL);
    char * time_str = ctime(&mytime);
    time_str[strlen(time_str)-1] = '\0';
    printf("Current Time : %s\n", time_str);

    return 0;
}
