#include <stdio.h>

float Max(float x,float y, float w);

int main()
{
    printf("%.2f\n", Max(-5.3, -5.2, 0.8));
}

float Max(float x, float y, float w)
{
    if ((x > y) && (x > w))
        return x;
    return (y > w) ? y : w;
}