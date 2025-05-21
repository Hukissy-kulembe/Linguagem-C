/********************************************
 * PROG0412:    Laços                       *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        20/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    unsigned short int i = 1;
    unsigned short int j;

    while (i <= 10)
    {
        for (j = 1; j <= i; j++)
            printf("%hu ", j);
        putchar('\n');
        i++;
    }
}