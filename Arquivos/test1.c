#include <stdio.h>

FILE *file;
int main() {
    // Open the file in read mode
    file = fopen("/home/kulembe/Documentos/Linguagem C/Arquivos/ARQUIVOS.md", "r");
    if (file == NULL) {
        perror("Error opening file");
        return -1;
    }

    // Read and print the contents of the file
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);
    return 0;
}