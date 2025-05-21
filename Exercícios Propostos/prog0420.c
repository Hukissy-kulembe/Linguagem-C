#include <stdio.h>

int main()
{
    unsigned short int qnt;
    unsigned short int init;
    unsigned short int i = 1;
    char character;

    printf("Dígite o quantidade: ");
    scanf("%hd", &qnt);
    getchar();
    printf("Qual é letra: ");
    character = getchar();

    while (i <= qnt)
    {
        init = 1;
        while (init <= i)
        {
            printf("%c ", character);
            init++;
        }
        putchar('\n');
        character++;
        i++;
    }
}