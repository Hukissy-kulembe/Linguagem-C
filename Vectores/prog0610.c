#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIV 100

void inic_random(float v[], int n);
float max(float v[], int n);

int main()
{
    srand48(time(NULL));
    srand(time(NULL));

    int n = (rand() % DIV) + 1;
    float v[n], val;

    inic_random(v, n);

    for (int i = 0; i < n; i++)
        printf("v[%d] = %.2f\n", i, v[i]);
        
    val = max(v, n);

    printf("Entre os números armazenados no vetor, o maior valor é %.2f\n", val);
    return 0;
}

void inic_random(float v[], int n)
{
    for (int i = 0; i < n; i++)
        v[i] = drand48() * DIV;
}

float max(float v[], int n)
{
    int posx = 0;
    for (int i = 0; i < n; i++)
        if (v[posx] < v[i + 1])
            posx = i+1;
    return v[posx];
}
