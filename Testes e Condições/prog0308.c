/********************************************
 * PROG0303:    Testes e Condições          *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        18/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Introduza dois n°s: ");
    scanf("%d%d", &a, &b);
    if (a >= 0)
        if (b > 10)
            printf("B é muito grande\n");
    else
        printf("A tem um valor negativo\n");
}