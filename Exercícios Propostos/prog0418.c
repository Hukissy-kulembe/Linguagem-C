#include <stdio.h>

int main()
{
    unsigned short int val;

    printf("Introd. um N°: ");
    scanf("%hd", &val);

    while (val)
    {
        if (val % 3 == 0)
        {
            val++;
            continue;
        } else
            if (val % 10 == 0)
                break;
            else
                printf("%hd\n", val);

        val++;
    }
}