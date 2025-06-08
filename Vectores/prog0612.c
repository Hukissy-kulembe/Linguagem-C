#include <stdio.h>

#define QUANT 3
#define ZERO 0
#define UM 1

int memcmp_ft(char *s1, char *s2, int n)
{
    short int i;
    i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
            return (ZERO);
        i++;
    }
    return (UM);
}

int main()
{
    char s1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    char s2[] = {'a', 'b', 'c', 'd'};

    (memcmp_ft(s1, s2, QUANT) == 1) ? printf("true\n") : printf("false\n");
}
