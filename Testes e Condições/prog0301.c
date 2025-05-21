/********************************************
 * PROG0301:    Testes e Condições          *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        18/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    int x, y;

    printf("Introduza 2 inteiros: ");
    scanf("%d%d", &x, &y);

    printf("O resultado de %d == %d     : %d\n", x, y, x == y);
    printf("O resultado de %d > %d      : %d\n", x, y, x > y);
    printf("O resultado de %d >= %d     : %d\n", x, y, x >= y);
    printf("O resultado de %d < %d      : %d\n", x, y, x < y);
    printf("O resultado de %d <= %d     : %d\n", x, y, x <= y);
    printf("O resultado de %d != %d     : %d\n", x, y, x != y);
    
}

/********************************************************************
 *  Saída:                                                          *
 *  Introduza 2 inteiros: 7 5                                       *
 *  O resultado de 7 == 5   : 0                                     *
 *  O resultado de 7 > 5    : 1                                     *
 *  O resultado de 7 >= 5   : 1                                     *
 *  O resultado de 7 < 5    : 0                                     *
 *  O resultado de 7 <= 5   : 0                                     *
 *  O resultado de 7 != 5   : 1                                     *
 ********************************************************************/