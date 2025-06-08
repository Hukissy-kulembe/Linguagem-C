#include <stdio.h>
#include <string.h>

char *strrchr_ft(char *s, char ch);
char *strstr_ft(char *str1, char *str2);

int main()
{
    char character = 'a';
    char string[] = "Ananas";
    //char *ptr = &strrchr_ft(string, 'a');

    printf("The last %c address: %p\n", character, strrchr_ft(string, 'a'));

    char str1[] = "stringstrd";
    char str2[] = "std";

    printf("\n\n%p\n", &str1[6]);
    printf("The first occurrence of '%s' in '%s' is at address: %p\n", str2, str1, strstr_ft(str1, str2));
    printf("\n%p\n", strstr_ft(str1, str2));
}

/*
    char *strrchr(char *s, char ch)
    que retoma o endereço da última ocorrência de ch em s; caso não exista, retoma NULL. (Note que é
    o endereço, e não o índice.)
    
    Escreva ainda um programa que solicite um nome completo e escreva na tela apenas o sobrenome.
*/

char *strrchr_ft(char *s, char ch)
{
    int i = 0;
    int tmp = -1;
    while (*(s + i))
    {
        if (*(s + i) == ch)
            tmp = i;
        i++;
    }

    if (tmp == -1)
        return NULL;

    return (s + tmp);
}

/*
    char *strstr_ft(char *str1, char *str2)

    Retoma o endereço de str1 em que ocorre pela primeira vez a substring str2. Caso não exista, retoma
    NULL.
*/

char *strstr_ft(char *str1, char *str2)
{
    int i = 0, tmp, k, j;
    int len = strlen(str2);

    while (str1[i])
    {
        j = 0;
        k = i;
        while (str2[j] == str1[k])
        {
            if(j == len - 1)
                return (str1 + i); 
            k++;
            j++;
        }
        i++;
    }
    return NULL;
}

/*
    Melhoria feita pelo Copilot:

    char *strstr_ft(char *str1, char *str2)
    {
        int i = 0, j;
        int len = strlen(str2); // Calcula o comprimento de str2 uma vez

        if (len == 0) // Caso especial: str2 é uma string vazia
            return str1;

        while (str1[i]) // Percorre str1
        {
            j = 0;
            while (str1[i + j] == str2[j]) // Compara os caracteres de str1 e str2
            {
                if (j == len - 1) // Se todos os caracteres de str2 forem encontrados
                    return (str1 + i); // Retorna o endereço da primeira ocorrência
                j++;
            }
            i++;
        }
        return NULL; // Retorna NULL se str2 não for encontrada
    }
*/