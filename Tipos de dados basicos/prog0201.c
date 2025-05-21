
/***/

#include <stdio.h>

int main()
{
   int num;
   num = -17;

   printf("%d\n", num);
   
   int val = num;
   printf("%d\n", val);
   printf("%d\n", num);
   printf("\n");

   int e = 5;
   int a, b, c, d;
   /* Também é possível atribuir o mesmo valor a várias variaveis */
   a = b = c = d = e;
   printf("a\t=\t%d\n", a);
   printf("b\t=\t%d\n", b);
   printf("c\t=\t%d\n", c);
   printf("d\t=\t%d\n", d);
}
