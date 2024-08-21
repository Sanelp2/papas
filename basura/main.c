#include <stdio.h>
#include <stdlib.h>
#define x 10

int main()
{
    int i, j;
    char cuadrado[x][x];

    for(i=0; i<x; i++)
    {
        for(j=0; j<x; j++)
        {
            if(i == 0 || i == (x-1))
            {
                cuadrado[i][j] = 196;
            }
            else
            {
                if(j == 0 || j == (x-1))
                {
                    cuadrado[i][j] = 213;
                }
                else
                    cuadrado[i][j] = ' ';
            }
        }
    }

    for(i = 0; i < x; i++)
    {
        for(j = 0; j < x; j++)
        {
            printf("%c", cuadrado[i][j]);
        }
        printf("\n");
    }
}
