#include <stdio.h>
#define SIZE 20
#define SEPARETOR ", "

int strlen_ft(char *s);
char *strcat_ft(char *dest, char *orig);

int main()
{
    char nome[SIZE];
    char sobrenome[SIZE];

    printf("Nome: ");
    scanf("%s", nome);
    printf("Sobrenome: ");
    scanf("%s", sobrenome);

    puts(strcat_ft(strcat_ft(sobrenome, SEPARETOR), nome));
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