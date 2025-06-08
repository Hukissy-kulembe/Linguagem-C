#include <stdio.h>

int main()
{
    linha();
    printf("Hello, World\n");
    linha();
    return 0;
}

void linha()
{
    int i;
    for (i = 1; i<=20; i++)
        putchar('*');
    putchar('\n');    
}
