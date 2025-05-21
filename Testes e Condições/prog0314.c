/********************************************
 * PROG0303:    Testes e Condições          *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        19/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    float salario, imposto = 0.0;
    char sexo;

    printf("Introduza o Salário: ");
    scanf("%f", &salario); getchar(); // Limpa o buffer do teclado
    printf("Qual é o Sexo (M,m/F,f): ");
    sexo = getchar();
    switch (sexo)
    {
        case 'f':
        case 'F': imposto = 0.10;
            break;
        case 'm':
        case 'M': imposto = 0.15;
            break;
    }
    printf("Imposto: %.2f\n", salario * imposto);
}