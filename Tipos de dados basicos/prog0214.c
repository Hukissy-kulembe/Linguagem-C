/********************************************
 * PROG0214:    Tipos de dados básicos      *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        17/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    int num;

    printf("Introduza um Inteiro: ");
    scanf("%d", &num);
    printf("Foi introduzido %d cujo caractere = '%c'\n", num, (char) num);
    printf("O caractere seguinte = '%c' tem o ASCII n° %d\n", (char) (num+1), num+1);
}

/************************************************************
 *  Saída:                                                  *
 *      Introduza um Inteiro: 67                            *
 *      O caractere seguinte = 'D' tem o ASCII n° 68        *
 ************************************************************/
