#include <stdio.h>

float Pot(float x, int n);

int main()
{
    float base;
    short int expoente;
    float resultado;

    printf("Introd. a base: ");
    scanf("%f", &base);
    getchar();
    printf("Introd. o expoente: ");
    scanf("%hd", &expoente);

    resultado = Pot(base, expoente);

    printf("%.2f^(%hd) = %.2f\n", base, expoente, resultado);
}

float Pot(float x, int n)
{
    if (n == 0)
        return 1.0;

    if (n < 0)
    {
        x = 1 / x;
        n = -n;
    }
    
    float val = x;
    while (--n)
        x *= val;
    
    return x;
}