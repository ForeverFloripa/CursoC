#include <stdio.h>

int main(void){

float nota[5];
nota[0]= 10;
nota[1]= 9;
nota[2]= 8;
nota[3]= 7;
nota[4]= 6;
printf("%.2f\n",nota[2]);

for (int i = 0; i < 5; i++)
{
    printf("%.1f\n",nota[i]);
}

int vetor[3]={1,2,3};

/* garante os campos zerados na memoria */
int vetorzerado= {0};

/* 
* exercicio 
*/
 float notasAluno[5]={0};
float total=0;
float media=0;

for (int i = 0; i <5 ; i++)
{
    printf("Insira %i a nota\n",i);
    scanf("%f",&notasAluno[i]);
}

for (int i = 0; i < 5 ; i++){
    total +=notasAluno[i];
}

printf("total: %f\n",total);

media = total / 5;

printf("media: %f\n",media);

return 0;
}