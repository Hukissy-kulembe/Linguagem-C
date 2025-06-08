#include <stdio.h>

long int n_minutos(int n_horas);
long int n_segundos(int n_horas);
long int num(int n_horas, char tipo);

int main()
{

    char tipo;
    int n_horas;
    printf("O que pretendes calcular?\n");
    printf("1 - Horas(h)\n");
    printf("2 - Minutos(m)\n");
    printf("3 - Segundos(s)\n");
    printf("Escolha: ");
    tipo = getchar();
    getchar();
    printf("Valor: ");
    scanf("%d", &n_horas);
    getchar();

    printf("%d %c = %ld\n", n_horas, tipo, num(n_horas, tipo));
}

long int n_minutos(int n_horas)
{
    return n_horas * 60;
}

long int n_segundos(int n_horas)
{
    long int n_minuts = n_minutos(n_horas);
    return n_minuts * 60;
}

long int num(int n_horas, char tipo)
{
    long int resultado;

    switch (tipo)
    {
    case 'h':
        resultado = n_horas;
        break;
    case 'm':
        resultado = n_minutos(n_horas);
        break;
    case 's':
        resultado = n_segundos(n_horas);
        break;
    }
    return resultado;
}