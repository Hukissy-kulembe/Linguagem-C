#include <stdio.h>

void linha()
{
    int i;
    for (i=1; i<=20; i++)
        putchar('*');
    putchar('\n');
    return ;
}

int main()
{
    int i;

    linha ();   /* Escreve uma linha de asteriscos */
    puts("Números entre 1 e 5");
    linha ();    /* Escreve a última linha de asteriscos */

    for (i=1; i<=5; i++)
        printf("%d\n", i);

    linha();    /* Escreve a última linha de asteriscos */
}