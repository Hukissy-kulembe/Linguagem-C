/********************************************
 * PROG0303:    Testes e Condições          *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        18/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    float salario;

    /*
    printf("Qual o salário: "); scanf("%f", &salario);
    if (salario > 1000)
        salario = salario * 1.05;
    else
        salario = salario * 1.07;
    printf("Novo Salário: %.2f\n", salario);
    */

    printf("Qual o salário: "); scanf("%f", &salario);
    salario = salario > 1000 ? salario * 1.05 : salario * 1.07;
    printf("Novo Salário: %.2f\n", salario);
}