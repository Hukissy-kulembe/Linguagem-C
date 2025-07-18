#include <stdio.h>
#include <stdlib.h>

int main() {
   int *ptr;
   int in[100] = {1, 2, 3, 4, 5};
   
  ptr = (int *) calloc(sizeof(int), 5);

  if (ptr == NULL)
  {
     printf("Falha na alocação de memória!");
  } else {
     for (int i = 0; i < 5; i++)
     {
        *(ptr + i) = *(in + i);
     }
     for (int i = 0; i < 5; i++)
     {
        printf("%d%c", *(ptr + i), (i < 4) ? ' ' : '\n');
     }
     
     free(ptr);
  }
}
