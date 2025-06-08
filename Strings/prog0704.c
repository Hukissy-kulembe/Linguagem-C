#include <stdio.h>
#include <string.h>

int main()
{
    char Nome[100];
    while (1)
    {
        puts("Nome: ");
        fgets(Nome, sizeof(Nome), stdin);
        if (Nome[0] == '\n')
            break;
        Nome[strcspn(Nome, "\n")] = 0;
        printf("Nome Introduzido: %s\n", Nome);
    }
    return 0;
}