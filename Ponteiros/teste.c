#include <stdio.h>
#include <string.h>

int main()
{
    int a = 24;
    int *ptr = &a;      /** Declaração de um ponteiro é feita da seguinte forma 'tipo * nome_da_variavel' */
                        /** O ponteiro também é um tipo primitivo da linguagem de programação C */
                        /**
                         * Ponteiro =:> é uma variável que armazana o endereço de uma outra 
                         * variável(esse endereço é o endereço fisico da variável na memória RAM).
                         */

    printf("\n%d %d\n", a, *ptr);

    *ptr = 23;          /**
                        *
                        *  */

    printf("\n%d %d\n", a, *ptr);

    printf("\n\n");

    char v[] = {'a', 'b', 'c', 'd'};
    int i, len = strlen(v) - 1;
    i = 0;

    while (i < len)
    {
        printf("Endereço da %d° posição: %p\tvalor: %c\n", i, &v[i], v[i]);
        i++;
    }

    /**
     * O nome de um vetro corresponde ao endereço do seu primeiro elemento,
     * isto é, se v for um vetor v == &v[0].
     * O que se afirma ali é que o nome de um vetor não é mais do que um endereço do primeiro
     * elemento desse vetor.
     * 
     * Se o nome de um vetor é um endereço, então é um número, isto é, o nome de um vetor
     * é um ponteiro para o primeiro elemento desse vetor. No entanto, é um ponteiro constante.
     */
    printf("%d\n", v==&v[0]);

    char *ptrr = NULL;
    ptrr = v;
    for (int i = 0; i < strlen(v); i++)
        printf("%c%c", *ptrr++, (i == strlen(v) - 1) ? '\n' : ' ');

    printf("\n\n");
    char s[] = "OlaOleOli";
    char *pttrr = s;

    printf("%c\n", s[2]);
    printf("%c\n", *(pttrr+2));
    printf("%c\n", *(s+2));
    printf("%c\n", *(pttrr+2));
}