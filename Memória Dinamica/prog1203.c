#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
   char *str;

   /* Cria String str */
   str = (char *) malloc(10);

   /* Coloca "Maria" na string str */
   strcpy(str, "Maria");

   printf("String: %s\nEndereço: %p\n", str, str);
   str = (char *) realloc(str, 100);
   printf("String: %s\nEndereço: %p\n", str, str);

   /* Liberar a memória */
   free(str);

   return 0;
}
