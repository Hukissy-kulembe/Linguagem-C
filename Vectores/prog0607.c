#include <stdio.h>

#define DIM 3
#define ESPACO 'E'
#define DOIS 2

void inic(char array[][DIM])
{
    short int i, j;

    i = 0;
    while (i < DIM)
    {
        j = 0;
        while (j < DIM)
        {
            array[i][j] = ESPACO;
            j++;
        }
        i++;
    }
}

void mostra(char array[DIM][DIM])
{
    short int i, j;
    i = 0;
    while (i < DIM)
    {
        j = 0;
        while (j < DIM)
        {
            printf("%c%c", array[i][j], ((j == DIM-1) ? '\n' : '\t'));
            j++;
        }
        i++;
    }
}

int main()
{
    char array[DIM][DIM];
    short int i, j;
    short int posx, posy;
    short int n_jogadas = 1;

    inic(array);
    while (1)
    {
        printf("Sendo que temos uma matriz, selecione a área para poder jogar: ");
        scanf("%hd%hd", &posx, &posy);
        getchar();

        if (array[posx][posy] != ESPACO)
        {
            printf("Posição já ocupada, tente novamente.\n");
            continue;
        }
        
        array[posx][posy] = ((n_jogadas % DOIS) == 0 ? 'O' : 'X');

        mostra(array);
        if (n_jogadas == (DIM*DIM))
            break;
        n_jogadas++;
    }
}