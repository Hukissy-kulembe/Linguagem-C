#include <stdio.h>

int Abs(int x);

int main()
{
    int val;

    printf("Qual é o valor absoluto de: ");
    scanf("%d", &val);
    getchar();

    printf("Valor absoluto: %d\n", Abs(val));
}

int Abs(int x)
{
    return (x < 0) ? (-x) : (x);
}