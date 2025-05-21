/********************************************
 * PROG0303:    Testes e Condições          *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        18/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    float salario;
    printf("Qual o salário: ");
    /*
    scanf("%f", &salario);
    if (salario <= 0)
        printf("Salário: Valor Inválido\n");
    if (salario > 1000)
        printf("Imposto = %.2f\n", salario * 0.10);
    else
        printf("Imposto = %.2f\n", salario * 0.05);
    */

    if (salario <= 0)
        printf("Salário: Valor Inválido\n");
    else
        if (salario > 1000)
            printf("Imposto = %.2f\n", salario * 0.10);
        else
            printf("Imposto = %.2f\n", salario * 0.05);
    
}