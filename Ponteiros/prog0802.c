#include <stdio.h>

int main()
{
    char s[100];
    char *ptr = s; /* Aponta para o primeiro caracter de s */

    printf("Introduza uma String: "); fgets(s, sizeof(s), stdin);

    if (*ptr == '\0') return 0;  /* ou return 0 se der erro de compil.*/
        /* String Vazia */

    /* Imprimir a string Normalmente */

    while (*ptr != '\0')
        putchar(*ptr++);
    
    /* Imprimir a string ao contrário */

    ptr--; /* Por causa do '\0' */

    while (ptr>=s)  /* Enquanto ptr for >= que &s[0] */
        putchar(*ptr--);
    
}

/*
char s[] = "Todo mundo odeia o Chris";
    char *ss = s;
    char *sss = &s[strlen(s) - 1];
    int len = strlen(s);

    while (*ss)
    {
        printf("%c", *ss);
        ss++;
    }
    printf("\n");

    while (0 <= len)
    {
        printf("%c", *ss);
        ss--;
        len--;
    }
    printf("\n");
*/