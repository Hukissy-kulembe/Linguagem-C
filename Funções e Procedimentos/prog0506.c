#include <stdio.h>

void linha(int num, char signal)
{
   int i;
   i = 1;
   while (i <= num)
   {
      putchar(signal);
      i++;
   }
   putchar('\n');
}

int main()
{
    linha(3, '+');
    linha(5, '+');
    linha(7, '+');
    linha(5, '+');
    linha(3, '+');
}