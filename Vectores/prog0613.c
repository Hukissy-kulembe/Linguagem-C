#include <stdio.h>

#define QUANT 3
#define UM 1
#define ZERO 0

int memicmp_ft(char *s1, char *s2, int n)
{
    short int i;
    i = 0;
    while(i < n)
    {
        char val1 = (s1[i] >= 65 && s1[i] <= 90) ? s1[i] + 32 : s1[i];
        char val2 = (s2[i] >= 65 && s2[i] <= 90) ? s2[i] + 32 : s2[i];

        if (val1 != val2) return (ZERO);
        i++;
    }
    return (UM);
}

int main()
{
    char s1[] = {'s', 'a', 'b', 'B', 'c', 'C'};
    char s2[] = {'S', 'A', 'b', 'b'};

    (memicmp_ft(s1,s2,QUANT)) ? printf("true\n") : printf("false\n");
    return 0;
}
