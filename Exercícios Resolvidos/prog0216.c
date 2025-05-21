/********************************************
 * PROG0218:    Tipos de dados básicos      *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        18/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    long int segundo;

    printf("Quantos Segundos: ");
    scanf("%ld", &segundo);

    printf("Horas: %d\n", (int) segundo/3600);
    printf("Minutos: %d\n", (int) segundo%3600/60);
    printf("Segundo: %d\n", (int) segundo % 60);
}