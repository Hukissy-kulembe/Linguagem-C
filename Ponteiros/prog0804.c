#include <stdio.h>


int strlen(char *s)
{
    char *ptr = s;          // Guardar o endereço inicial
    while (*s != '\0')      // Enquanto não for o fim da string
        s++;                // Avançar para o próximo caractere
    
    return (int) (s - ptr); // Retornar a diferença entre o endereço final e o inicial
}

int main()
{
    char Nome[100];

    printf("Introduza o seu nome: ");  fgets(Nome, sizeof(Nome), stdin);

    printf("%d\n", strlen(Nome));
}