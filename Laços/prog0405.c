/********************************************
 * PROG0405:    Laços                       *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        19/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    int n, num;

    num = 1;
    while (num <= 5)
    {
        n = 1;
        while (n <= 10)
        {
            printf("%2d * %2d = %2d\n", num, n, num * n);
            n = n+1;
        }
        /* Passar à próxima tabuada */
        num = num + 1;
    }
}


/* My solution 

#include <stdio.h>

int main()
{
    unsigned short first = 1;
    unsigned short second = first;

    while (first <= 5)
    {
        printf("Tabuada do %hu\n", first);
        while (second <= 10)
        {
            printf("%hu * %hu = %hu\n", first, second, (first * second));
            second++;
        }
        first++;
        second = 1; // Reset second for the next iteration
        printf("\n");
    }
}
*/