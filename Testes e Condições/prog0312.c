/********************************************
 * PROG0303:    Testes e Condições          *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        19/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    char Est_Civil;
    printf("Qual o estado Civil: ");
    scanf("%c", &Est_Civil);    /* ou Est_Civil = getchar(); */
    switch (Est_Civil)
    {
        case 'C': printf("Casado\n"); break;
        case 'S': printf("Solteiro\n"); break;
        case 'D': printf("Divorciado\n"); break;
        case 'V': printf("Viúvo\n"); break;
        default : printf("Estado Civil Incorreto\n");
    }
}