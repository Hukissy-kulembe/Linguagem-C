#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[200], *ptr;

    printf("Qual a sua String: ");
    fgets(s, sizeof(s), stdin);

    ptr = (char *) calloc((strlen(s) + 1), sizeof(char));
    if (ptr == NULL)
        puts("Problemas na Alocação da mémoria");
    else
    {
        strcpy(ptr, s);
        printf("String Original: %s\nCópia: %s\n", s, ptr);

        free(ptr);
    }
}