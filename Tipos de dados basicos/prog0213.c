/********************************************
 * PROG0213:    Tipos de dados básicos      *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        17/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    char ch;

    printf ("Introduza um Caractere: ");
    scanf ("%c", &ch);
    printf ("O caractere '%c' tem o ASCII n° %d\n", ch, ch);
}

/************************************************
 *  Saída:                                      *
 *         Introduza um Caractere: a            *
 *         O caractere 'a' tem o ASCII n° 97    *
 ************************************************/