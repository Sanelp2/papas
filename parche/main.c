#include <stdio.h>
#include <stdlib.h>
#define x 64//altura
#define y 127//base

void tablero(char campo[x][y]);
void imprimir(char campo[x][y]);

int main()
{
    char campo[x][y];
    tablero(campo);
    imprimir(campo);
}

void tablero(char campo[x][y])
{
    int i, j;

    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            if(0 == (i%21))
            {
                campo[i][j] = '-' ;
            }
            else
            {
                if(0==(j%42))
                {
                    campo[i][j] = '|';
                }
                else
                {
                    campo[i][j] = ' ';
                }
            }
        }
    }

    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            if((i==0) && (0 == (j%42)) && (j>0) && (j<120))
            {
                campo[i][j] = 194;
            }
            else
            {
                if(((i == 21) || (i == 42)) && (j>0) && (0 == (j%42)) && (j<120))
                {
                    campo[i][j] = 197;
                }
                else
                {
                    if((i == (x-1)) && (j>0) && (0 == (j%42)) && (j<120))
                    {
                        campo[i][j] = 193;
                    }
                    else
                    {
                        //if(i)
                    }
                }
            }
        }
    }
}

void imprimir(char campo[x][y])
{
    int i, j;

    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("%c", campo[i][j]);
        }
        printf("\n");
    }
}
