/********************************************
 * PROG0211:    Tipos de dados básicos      *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        17/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    char ch1, ch2;

    printf ("Introduza um Caractere: ");
    scanf("%c", &ch1);
    printf ("Introduza outro Caractere: ");
    scanf(" %c", &ch2);
    printf ("Os caracteres introduzidos foram '%c' e '%c'\n", ch1, ch2);    
}