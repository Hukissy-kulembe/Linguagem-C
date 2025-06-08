#include <stdio.h>
#include <string.h>
#include <strings.h>

/**
 * Implemente em C as seguintes funções:
*/

int strcounta(char *s);
int ult_ind_chr(char *s, char c);
char * strlwr(char *str);
char * strset(char *s, char ch, int n);
int stricmp(char *s1, char *s2);
char *init_str(char *s);

int main()
{
    
    char s[] = "\0AYA APRESENTA, COM TODOS OS MOLHOS";
    char ss[] = "";
    /*
    char ss[strlen(s)];
    char sss[] = "Tonalidade de YAYA";
    strcpy(ss, s);
    printf("%d\n", stricmp(ss, s));
    */
    init_str(s);
    printf("%s\n", ss);
}

/**
 * Devolve o n° de caracteres alfabéticos em s.
 * strcounta("15 abacates")                 =:> 8
 * strcounta("quinze (15) abacates")        =:> 14
 */

int strcounta(char *s)
{
    int i, length;
    i = length = 0;
    while(s[i])
    {
        if (((s[i] >= 65) && (s[i] <= 90)) || ((s[i] >= 97) && (s[i] <= 122)))
            length++;

        i++;
    }
    return (length);
}

/**
 * Torna a string vazia.
 */
char *init_str(char *s)
{
    int len = strlen(s);
    while (0 < len)
    {
        s[len] = '\0';
        len--;
    }
    return s;
}

/**
 * Devolve o último índice em que encontrou o caractere c em s.
 * Caso não exista, devolve -1.
*/

int ult_ind_chr(char *s, char c)
{
    int len = strlen(s);
    while (len >= 0)
    {
        if (c == s[len])
            return len;
        len--;
    }
    return (-1);
}

/* Coloca todos os caracteres de str em minusculas */
char * strlwr(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 65 && 90 >= str[i])
            str[i] += 32;
        i++;
    }
    return str;
}

/**
 * Coloca o caractere ch apenas nas primeiras n posições da string s.
 * Se n > strlen(s) então n toma o valor de strlen(s).
 */

char * strset(char *s, char ch, int n)
{
    int i, len = strlen(s);
    if (n > len)
        n = len;
    
    i = 0;
    while (i < n)
    {
        if ((s[i] >= 65 && 90 > s[i]) || (s[i] >= 97 && 122 > s[i]))
            s[i] = ch;
        i++;
    }
    return s;
}

/**
 * Faz o mesmo que a função strcmp, mas realiza a comparação
 * ignorando se os caracteres estão em maiusculas ou minusculas
 * (ignore case)
 */

int stricmp(char *s1, char *s2)
{
    int i;

    char s11[strlen(s1)];
    char s22[strlen(s2)];
    // Funções retirada da string.h
    strcpy(s11, s1);
    strcpy(s22, s2);
    // Função criadas por mim
    strlwr(s11);
    strlwr(s22);

    i = 0;
    while (s11[i] && s22[i])
    {
        if (s11[i] != s22[i])
            return 0;
        i++;
    }
    return 1;
}