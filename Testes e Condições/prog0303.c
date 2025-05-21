/********************************************
 * PROG0303:    Testes e Condições          *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        18/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    int x;

    printf("Introduza um N° ");
    scanf("%d", &x);
    /*
    if (x != 0)
        printf("%d não é zero!!!\n", x);
    else
        printf("%d é igual a zero!!!\n", x);
    */
    if (x) /* em vez de if (x!=0) */
        printf("%d não é zero!!!\n", x);
    else
        printf("%d é igual a zero!!!\n", x);
}