/********************************************
 * PROG0303:    Testes e Condições          *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        18/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    float salario;
    printf("Qual o salário ");
    scanf("%f", &salario);
    if (salario < 100000)
        salario = salario + 1000;
    printf("Salário Final: %.2f\n", salario);
    
}