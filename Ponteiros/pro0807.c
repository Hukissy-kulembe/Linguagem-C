// Declare e Inicie um vetor de strings e mostre-as, uma a uma, recorrendo simplesmente a ponteiros:

#include <stdio.h>
#define LENGTH 5

int main()
{
    char string[][100] = {
        "Hello, World!",
        "C, the mother lenguage",
        "The one for all",
        "Don't say goodbye",
        "Void repeat"
    };
    char (*strings) [100] = string;

    int i = 0;
    while (i < LENGTH) {
        printf("%s\n", *(strings+i));
        i++;
    }
}
