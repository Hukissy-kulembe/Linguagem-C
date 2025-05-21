#include <stdio.h>

int main()
{
    unsigned short int init;
    unsigned short int end;
    unsigned short int tmp;

    printf("Introd. dois N°: ");
    scanf("%hd %hd", &init, &end);
    fflush(stdin);

    if (init > end)
    {
        tmp = init;
        init = end;
        end = tmp;
    }

    while (init <= end)
    {
        printf("%hd\t=\t%c\n", init, (char) init);
        init++;
    }

    printf("\n");
}