/***/

#include <stdio.h>

int main(void)
{
   //int num;

   /*
    * Assim como o printf, o scanf também é  uma função da biblioteca stdio.h,
    * porém, ela tem a função de entrada de parametros, e no nosso exercício ele está
    * sendo usado para receber um valor inteiro a partir do teclado quando o programa estiver a rodar.
    * */

   /*
   printf("Introduza um N° : ");
   scanf("%d", &num);
   printf("O N° introduzido foi %d\n", num);
   */

   int n1, n2;
   printf("Introduza dois Números: ");
   scanf("%d%d", &n1, &n2);
      printf("O resultado de %i + %i = %d\n", n1, n2, (n1+n2));
}
