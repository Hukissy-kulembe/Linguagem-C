/********************************************
 * PROG0302:    Testes e Condições          *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        18/05/2025                  *
 ********************************************/


#include <stdio.h>

int main()
{
    int x;

    printf("Introduza um N° ");
    scanf("%d", &x);

    if (x >= 0)
        printf ("Número Positivo\n");
    else
        printf("Número Negativo\n");    
}
