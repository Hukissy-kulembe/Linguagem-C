#include <stdio.h>

int main()
{
    unsigned short int val;
    unsigned short int i = 1;

    printf("Introd. um N°: ");
    scanf("%hd", &val);

    fflush(stdin);
    while (val != 0)
    {
        printf("%hd\t%hd\n",val, i);
        val--;
        i++;
    }
}