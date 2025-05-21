/********************************************
 * PROG0403:    Laços                       *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        19/05/2025                  *
 ********************************************/

#include <stdio.h>


#include <stdio.h>

int main()
{
    int n, num;

    printf ("Introd. um N°: "); scanf("%d", &num);
    n = 1;
    while (n<=10>)
    {
        printf("%2d * %2d = %2d\n", num, n, num * n);
        n = n+1;
    }
}

/*  Minha implementação

int main()
{
    unsigned short int i;
    i = 1;
    while (i <= 10)
    {
        printf("5 * %hu = %hu\n", i, (i * 5));
        i = i + 1;
    }
}
*/