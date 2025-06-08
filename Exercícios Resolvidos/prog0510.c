#include <stdio.h>

char x_toupeer(char x)
{
    if (x >= 'a' && x <= 'z')
        return x - 32;
    else
        return x;
}

int main()
{
    char character;
    printf("Introd. um caracter: ");
    character = getchar();

    printf("%c\n", x_toupeer(character));
}