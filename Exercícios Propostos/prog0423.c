#include <stdio.h>

int main()
{

    unsigned long int x;
    //short int i;
    //i = 0;
    x = 0/*++i*/;
    //printf("%hd\n", x);

    do
    {
        printf("%d\n", x);
        x = x+1;
    } while (x != 0);
    
}