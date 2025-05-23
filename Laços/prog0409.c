/********************************************
 * PROG0409:    Laços                       *
 * AUTOR:       Cláudio Kulembe             *
 * DATA:        20/05/2025                  *
 ********************************************/

#include <stdio.h>

int main()
{
    char opcao;
    do
    {
        printf("\tM E N U   P R I N C I P A L\n");
        printf("\n\n\t\tClientes");
        printf("\n\n\t\tFornecedores");
        printf("\n\n\t\tEncomendas");
        printf("\n\n\t\tSair");
        printf("\n\n\t\tOpção: ");
        scanf("%c", &opcao);
        fflush(stdin);
        switch (opcao)
        {
            case 'c':
            case 'C': puts("Opção CLIENTES"); break;
            case 'f':
            case 'F': puts("Opção FORNECEDORES"); break;
            case 'e':
            case 'E': puts("Opção ENCOMENDAS"); break;
            case 's':
            case 'S': break; /* Não faz nada */
            default: puts("Opção INVÁLIDA!!!");
        }
        getchar(); /* Parar a tela */
    } while (opcao != 's' && opcao != 'S');
}