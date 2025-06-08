#include <stdio.h>

int main()
{
    int i;

    /* Escrita do Cabeçalho */

    for (i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');

    puts("Números entre 1 e 5");

    for (i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');

    /* Escrita dos N°s */

    for (i = 1; i <= 5; i++)
        printf("%d\n", i);
        
    for (i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');

}