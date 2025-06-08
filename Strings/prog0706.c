#include <stdio.h>

int strcmp_ft(char *s1, char *s2);

int main()
{
    int i = 0;
    char nome[50];
    do
    {
        printf("Nome: ");
        fgets(nome, sizeof(nome), stdin);
        puts(nome);
    } while (strcmp_ft(nome, "sair\n") != 0);
    return 0;
}

int strcmp_ft(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
        i++;
    return s1[i] - s2[i];
}