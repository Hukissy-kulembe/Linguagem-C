/********************************************
 * PROG0303:    Testes e Condições          *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        18/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    char Est_Civil;
    puts("Qual o Estado Civil:");
    Est_Civil = getchar();
    if (Est_Civil == 'S' || Est_Civil == 's')
        printf("Solteiro");
    else
        if (Est_Civil == 'C' || Est_Civil == 's')
            printf("Casado");
        else
            if (Est_Civil == 'D' || Est_Civil == 'd')
                printf("Divorciado");
            else
                if (Est_Civil == 'V' || Est_Civil == 'v')
                    printf("Viúvo");
                else
                    printf("Estado Civil Inválido");
    printf("\n");
}