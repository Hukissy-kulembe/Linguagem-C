/********************************************
 * PROG0217:    Tipos de dados básicos      *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        17/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    float x;

    printf("Introduza um N° real: ");
    scanf("%f", &x);
    printf("Parte Inteira: %d\n", (int)x);
    printf("Parte Fracionaria: %f\n", x - (int)x);
}