/********************************************
 * PROG0408:    Laços                       *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        19/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    int i, j;

    for (i = i = 0; i <= 5; i++)
    {
        for (j = 1; j <= 10; j=j+1)
        printf("%2d * %2d = %2d\n", i, j, i*j);

        if (i != 5)
        {
            printf("Pressione <ENTER> para continuar...");
            getchar();
        }
    }
}