#include <stdio.h>

void inic(int s[], int n)
{
    int i;
    for (i=0; i<n; i++)
        s[i]=1;
}

int main()
{
    int v[10];
    int x[20];

    inic(v, 10);
    inic(x, 20);

    for (int i=0; i<10; i++)
        printf("%d ", v[i]);

    printf("\n");
}