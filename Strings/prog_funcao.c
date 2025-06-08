#include <stdio.h>

#define NEGATIVE -1
#define ZERO 0
#define UM 1

int strlen_ft(char *s);
int isnull_ft(char *s);
int strcountd_ft(char *s);
int strpal_ft(char *s);
int indchr_ft(char *s, char ch);
int strcountc_ft(char *s, char ch);
int strcmp_ft(char *s1, char *s2);
char *strrev_ft(char *s);
char *strpad_ft(char *s);
char *strupr_ft(char *s);
char *strset_ft(char *s, char ch);
char *strcpy_ft(char *dest, char *orig);
char *strcat_ft(char *dest, char *orig);
void remove_ft(char *s, char rm);

int main()
{
    char s3[50] = "va mo so";
    strupr_ft(s3);
    printf("String Upper: %s\n", s3);
    strset_ft(s3, '#');
    printf("String s3: %s\n", s3);
    return 0;
}

/* Busca o tamanho da String */
int strlen_ft(char *s)
{
    int i=0;
    while (s[i] != '\0')
        i++;
    return i;
}

/* Verifica se uma string é null */
int isnull_ft(char *s)
{
    return (strlen_ft(s) != 0);
}

/* Copia uma string para outra */
char *strcpy_ft(char *dest, char *orig)
{
    int i = 0;
    while (orig[i])
    {
        dest[i] = orig[i];
        i++;
    }
    dest[i]='\0';
    return dest;
}

/* Concatena duas strings */
char *strcat_ft(char *dest, char *orig)
{
    int i = 0;
    int len = strlen_ft(dest);
    while (orig[i])
    {
        dest[len + i] = orig[i];
        i++;
    }
    dest[len + i] = '\0';
    return dest;
}

/* Conta o total de ocorrencias de um determinado caracter dentro de uma string */
int strcountc_ft(char *s, char ch)
{
    int i=0;
    int total = 0;
    while (s[i] != '\0')
    {
        if ((s[i] == ch))
            total++;
        i++;
    }
    return total;
}

/* Devolve o número de ocorrências do caractere ch na strig s */
int strcountd_ft(char *s)
{
    int i, total;
    i = total = 0;
    while (s[i])
    {
        if (s[i] >= 47 && s[i] <= 57)
            total++;
        i++;
    }
    return total;
}


/* Devolve o índice da primeira ocorrência do caractere ch na string s*/
int indchr_ft(char *s, char ch)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] == ch)
            return i;
         i++;
    }
    return NEGATIVE;
}

/* Verifica se a string é um palindromo */
int strpal_ft(char *s)
{
    int i, len;
    for (i = 0, len = strlen_ft(s)-UM; i <= strlen_ft(s)-UM; i++, len--)
        if (s[i] != s[len])
            return ZERO;
    return UM;    
}

/* Inverte a string e devolve-a invertida */
char *strrev_ft(char *s)
{
    int i;
    int len = strlen_ft(s)-UM;
    int result = (strlen_ft(s)/2);
    char aux;

    for (i = 0; i < result; i++, len--)
    {
        aux = s[i];
        s[i] = s[len];
        s[len] = aux;
    }
    return s;
}

/* Compara as strings s1 e s2 alfabeticamente */
int strcmp_ft(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
        i++;
    return s1[i] - s2[i];
}

/* Coloca uma espaço em branco após cada um dos caracteres da string s */
char *strpad_ft(char *s)
{
    int i = 0, j = 0;
    int len =  strlen_ft(s);
    char dest[len];
    strcpy_ft(dest, s);
    while (dest[j])
    {
        if (j == len - 1)
        {
            s[i] = dest[j];
            break;
        }
        else if (dest[j] == ' ')
            j++;
        else
        {
            s[i] = dest[j];
            s[i + 1] = ' ';
            i+=2;
            j++;
        }
    }
    return s;
}

void remove_ft(char *s, char rm)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] == rm)
        {
            s[i] = s[i + 1];
            s[i + 1] = ' ';
        }
        i++;
    }
    return ;
}

/* Coloca em todas as posições da string s o caractere ch, devolvendo s */
char *strset_ft(char *s, char ch)
{
    int i, len;
    const len = strlen_ft(s);
    while (i < len)
    {
        s[i] = ch;
        i++;
    }
    s[i] = '\0';
    return s;
}

/* Coloca todos os caracteres da string s em maiúsculas */
char *strupr_ft(char *s)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
        i++;
    }
    return s;
}

