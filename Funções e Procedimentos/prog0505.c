#include <stdio.h>

void linha(int num)
{
    int i;
    for (i=1; i<=num; i++)
        putchar('*');
    putchar('\n');
}

int main()
{
    linha(3);
    linha(5);
    linha(7);
    linha(5);
    linha(3);
}