#include <stdio.h>

int main(void)
{

    int i;

    for ( i = 1; i <=20; i++)
    {
        if (i%3==0 && i%9==0)
        {
            printf("%i  divisivel por 3 e 9\n",i);
            break;
        }else{
            printf("%i Proximo Numero: \n",i);

        }
    }
    
   // getchar(); //faz o papel do pause sem problema de compatibilidade 
    system("pause"); //windows usando dev c++
    return 0;
}
