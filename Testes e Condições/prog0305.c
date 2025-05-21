/********************************************
 * PROG0303:    Testes e Condições          *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        18/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    int x, y, temp;
    printf("Introd. dois N°s: ");
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    printf("Ordem crescente dos valores inseridos: %d %d\n", x, y);
    
}