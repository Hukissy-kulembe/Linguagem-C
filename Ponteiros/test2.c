#include <stdio.h>

char * strcpy(char *dest, char *orig)
{
    char *tmp = dest;
    while (*dest++ = *orig++)
        ;
    return tmp;   
}

int main()
{
    char s[] = "Hello World";
    char d[100];
    char *ptr = strcpy(d, s);
    printf("Posição Atual de d: %c\n", d);
    printf("Posição da copia tmp: %c\n", *ptr);
}