#include <stdio.h>

int main()
{
    int x =5;
    int *ptr_x;
    int **ptr_ptr_x;

    /* Carga inicial dos ponteiros */

    ptr_x = &x;                
    ptr_ptr_x = &ptr_x;

    printf("x = %d - $x = %p\n", x, &x);
    printf("x = %d - &x = %p\n", *ptr_x, ptr_x);
    printf("x = %d - &x = %p\n", *(*ptr_ptr_x), *ptr_ptr_x);

}