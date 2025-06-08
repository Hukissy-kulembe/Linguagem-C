#include <stdio.h>

float Pot(float x, int n);
float VAL(float x, int n, float t);

int main()
{
    float result = VAL(1, 3, 2);
    printf("%.6f\n", result);
}

float VAL(float x, int n, float t)
{
    float val;

    while (n)
    {
        val += (x/Pot(1+t, n));
        n--;
    }
    return (val);
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