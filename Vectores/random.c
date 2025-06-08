#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIV 49

int main()
{
    srand48(time(NULL));
    printf("%d\n\n", RAND_MAX);

    double numero = drand48() * 100;
    printf("drand48(): %.2f\n", numero);
    
    double min = -1.5, max = 3.5;
    double custom = min + (max - min) * drand48();
    printf("Entre %.2f e %.2f: %.4f\n", min, max, custom);
    return 0;
}
