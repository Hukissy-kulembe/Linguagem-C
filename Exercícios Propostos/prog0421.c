#include <stdio.h>

int main()
{
    unsigned short int qnt  = 1;
    unsigned short int all_letter = 0;
    char cont;

    while (all_letter <= 255)
    {
        if (qnt == 20)
        {
            printf("\n");
            printf("Dígite 'C' + <ENTER> para continuar: ");
            cont = getchar();
            getchar();
            qnt = 1;
            all_letter++;
            continue;
        } else {
            printf("%hu\t=\t%c\n", all_letter, (char) all_letter);
        }
        qnt++;
        all_letter++;
    }
}