#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[200], outra[200];
    
    printf("Qual a sua String? ");
    fgets(s, sizeof(s), stdin);

    strcpy(outra, s);

    printf("String Original: %s\nCópia: %s\n", s, outra);
    
    return 0;
}