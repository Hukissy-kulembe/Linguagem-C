#include <stdio.h>

char *ft_strchr(char *s, char ch)
{
    int i;
    i = 0;
    while (*(s+i))
    {
        if (*(s+i) == ch)
            return (s+i);
        i++;
    }
    return NULL;
}

int main()
{
    char s[] = "tudo e para todos";
    printf("Value = %c - Address = %p\n",s[16], &s[16]);
    printf("Value = %c - Address = %p\n", *ft_strchr(s, 's'), ft_strchr(s, 's'));
}