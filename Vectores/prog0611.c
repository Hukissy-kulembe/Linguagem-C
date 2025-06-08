#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generator_char(char *orig, int n)
{
    int i = 0;
    int min = 65, max = 90;

    while(i < n)
    {
        orig[i] = (char) (min + (rand() % (max - min + 1))) + 32;
        i++;
    }
}

char *memcpy_ft(char *dest, char *orig, int n)
{
    int i = 0;
    while (i < n)
    {
        dest[i] = orig[i];
        i++;
    }
    return dest;
}

int main()
{
    srand(time(NULL));
    int n = rand() % 10;

    char orig[n];
    char dest[n];

    generator_char(orig, n);
    memcpy_ft(dest, orig, n);

    for (int i = 0; i < n; i++)
        printf("%c%c", dest[i], (i == n - 1) ? '\n' : ' ');
}
