#include <stdio.h>
#define DEZ 10

int main()
{
    int array[DEZ];
    int i;

    for (i = 0; i < 10; i++)
        array[i] = i * (DEZ - 1);

    for (i = 0; i < DEZ; i++)
        printf("%d\n", array[i]);
}