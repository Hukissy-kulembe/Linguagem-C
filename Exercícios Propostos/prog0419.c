#include <stdio.h>

int main()
{
    unsigned short int total;
    unsigned short int j = 1;
    char character;

    printf("Digite o total de niveis: ");
    scanf("%hu", &total);       getchar();
    printf("Digite o Char: ");
    character = getchar();

    while (j <= total) {
        for (int i = 1; i <= j; i++)
        {
            putchar(character);
            putchar(' ');
        }
        j++;
        putchar('\n');
    }
}