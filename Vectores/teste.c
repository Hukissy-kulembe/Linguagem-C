#include <stdio.h>

#define DIM 3

int main()
{
    char vetor[DIM][DIM];
    int i, j;

    for (i = 0; i < DIM; i++)
        for (j = 0; j < j; j++)    
            vetor[i][j] = ' ';

    vetor[0][0] = 'X';
    vetor[0][2] = 'O';
    vetor[1][1] = 'X';
    vetor[2][2] = 'O';

    for (i = 0; i < DIM; i++)
    {
        printf("|");
        for ( j = 0; j < DIM; j++)
            printf ("%c\t|", vetor[i][j]);  

        printf("\n");
        if (DIM-1 != i)
            printf("-------------------------\n");
    }
}