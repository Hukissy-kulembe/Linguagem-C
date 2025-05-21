/********************************************
 * PROG0217:    Tipos de dados básicos      *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        17/05/2025                  *
 ********************************************/

 #include <stdio.h>

 int main()
 {
    int val1, val2;

    printf("Dígite dois valores: ");
    scanf("%d%d", &val1, &val2);

    printf("\n");
    printf("%d + %d = %d\n", val1, val2, (val1 + val2));
    printf("%d - %d = %d\n", val1, val2, (val1 - val2));
    printf("%d *  %d = %d\n", val1, val2, (val1 * val2));
    printf("%d / %d = %d\n", val1, val2, (val1 / val2));
    printf("%d %% %d = %d\n", val1, val2, (val1 % val2));
 }