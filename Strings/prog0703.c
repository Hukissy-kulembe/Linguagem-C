#include <stdio.h>

int main()
{
    char Nome[50];
    printf("Introduza o Nome Completo: ");
    fgets(Nome, sizeof(Nome), stdin);
    Nome[strcspn(Nome, "\n")] = 0; // Remove newline character if present
    printf("Nome Completo: %s\n", Nome);
}
