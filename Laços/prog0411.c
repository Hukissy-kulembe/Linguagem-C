/********************************************
 * PROG0411:    Laços                       *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        20/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i <= 100; i = i + 1)
        if (i == 30)
            break;
        else
            printf("%2d\n", 2*i);
    printf("FIM DO LAÇO \n");
    
}