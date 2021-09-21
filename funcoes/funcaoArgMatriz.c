#include <stdio.h>

int main(void)
{
    void funcaoPrint(int matriz[3][3]);
    int matriz[3][3] = {6, 4, 1, 9, 8, 5, 7, 3, 2};
    funcaoPrint(matriz);
    return 0;
}

void funcaoPrint(int matriz[3][3])
{
    int i, j;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf("%i", matriz[i][j]);
        }
        printf("\n");
    }
}
