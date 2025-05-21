/********************************************
 * PROG0303:    Testes e Condições          *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        18/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    float salario;
    char est_civil;

    printf("Qual o salario: "); 
    scanf("%f", &salario); getchar(); // Limpa o buffer do teclado
    printf("Qual o Est.Civil: "); 
    est_civil = getchar();

    if (est_civil == 'c' || est_civil == 'C')
        printf("Imposto: %.2f\n", salario * 0.09);
    else
        if (est_civil == 'S' || est_civil == 's')
            printf("Imposto: %.2f\n", salario * 0.10);
        else
            printf("Estado Civil Incorreto!!!\n");
}