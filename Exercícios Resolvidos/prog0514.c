#include <stdio.h>

long int n_segundos(int n_horas);

int main()
{
    int n_horas;

    printf("Quantas segundos tem ... horas?\nHora: ");
    scanf("%d", &n_horas);
    getchar();
    printf("%d horas tem %ld segundos\n", n_horas, n_segundos(n_horas));
}

long int n_segundos(int n_horas)
{
    long int n_minutos = n_horas * 60;
    long int n_segundos = n_minutos * 60;
}