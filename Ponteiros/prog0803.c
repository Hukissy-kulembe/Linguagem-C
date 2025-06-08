#include <stdio.h>
int strlen(char *s);    /* Protṕtipo da função */

int main()
{
    char s[100];
    char *ptr = s; /* Aponta para o primeiro caractere de s */

    printf("Introduza uma String: ");   fgets(s, sizeof(s), stdin);

    printf("%d\n", strlen(s));
}

int strlen(char *s)
{
    char *ptr = s;          /* Guardar o endereço inicial */
    while (*s != '\0')      /* Enquanto não for o fim da string */
        s++;                /* Avançar para o próximo caractere */
    
    return (int) (s-ptr); /* Retornar a diferença entre o endereço final e o inicial */
}